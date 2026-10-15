/**
 * decamp dumper generated SDK
 * Package: /Script/JunoBattleBusUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoBattleBusUI.JunoEvent_RequestBattleBusCustomization
// Kind: ScriptStruct; super: none
struct FJunoEvent_RequestBattleBusCustomization
{
public:
    void* InitData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_RequestBattleBusCustomization, InitData) == 0, "Offset mismatch for FJunoEvent_RequestBattleBusCustomization::InitData");

// /Script/JunoBattleBusUI.JunoBattleBusCustomizationInitData
// Kind: Class; super: Object
class UJunoBattleBusCustomizationInitData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t JunoDiscoveredBusStop[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBattleBusCustomizationInitData, JunoDiscoveredBusStop) == 40, "Offset mismatch for UJunoBattleBusCustomizationInitData::JunoDiscoveredBusStop");

// /Script/JunoBattleBusUI.JunoBattleBusCustomizationScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoBattleBusCustomizationScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    FMulticastInlineDelegate OnChangeCommitted; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Button_Confirm; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close_Touch; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NameScreenTabName[0x4]; // 0x04D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t IconScreenTabName[0x4]; // 0x04DC (Size: 0x4, Type: NameProperty)
    void* NameTab; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* UserGeneratedText_ParentalControls; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DataTableRowHandle[0x10]; // 0x04F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasConstructed; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowUserInput; // 0x0509 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInCabinMode; // 0x050A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBattleBusCustomizationScreen, OnChangeCommitted) == 1192, "Offset mismatch for UJunoBattleBusCustomizationScreen::OnChangeCommitted");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, Button_Confirm) == 1208, "Offset mismatch for UJunoBattleBusCustomizationScreen::Button_Confirm");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, Button_Close) == 1216, "Offset mismatch for UJunoBattleBusCustomizationScreen::Button_Close");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, Button_Close_Touch) == 1224, "Offset mismatch for UJunoBattleBusCustomizationScreen::Button_Close_Touch");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, InitData) == 1232, "Offset mismatch for UJunoBattleBusCustomizationScreen::InitData");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, NameScreenTabName) == 1240, "Offset mismatch for UJunoBattleBusCustomizationScreen::NameScreenTabName");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, IconScreenTabName) == 1244, "Offset mismatch for UJunoBattleBusCustomizationScreen::IconScreenTabName");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, NameTab) == 1248, "Offset mismatch for UJunoBattleBusCustomizationScreen::NameTab");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, Text_Title) == 1256, "Offset mismatch for UJunoBattleBusCustomizationScreen::Text_Title");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, UserGeneratedText_ParentalControls) == 1264, "Offset mismatch for UJunoBattleBusCustomizationScreen::UserGeneratedText_ParentalControls");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, DataTableRowHandle) == 1272, "Offset mismatch for UJunoBattleBusCustomizationScreen::DataTableRowHandle");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, bHasConstructed) == 1288, "Offset mismatch for UJunoBattleBusCustomizationScreen::bHasConstructed");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, bAllowUserInput) == 1289, "Offset mismatch for UJunoBattleBusCustomizationScreen::bAllowUserInput");
static_assert(offsetof(UJunoBattleBusCustomizationScreen, bIsInCabinMode) == 1290, "Offset mismatch for UJunoBattleBusCustomizationScreen::bIsInCabinMode");

// /Script/JunoBattleBusUI.JunoBattleBusCustomizationWidget
// Kind: Class; super: CommonActivatableWidget
class UJunoBattleBusCustomizationWidget
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* RandomizeButton; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* UGCViewModel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultName[0x10]; // 0x04D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DefaultHintText[0x10]; // 0x04E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAllowUserInput; // 0x04F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasConstructed; // 0x04F1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBattleBusCustomizationWidget, RandomizeButton) == 1208, "Offset mismatch for UJunoBattleBusCustomizationWidget::RandomizeButton");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, InitData) == 1216, "Offset mismatch for UJunoBattleBusCustomizationWidget::InitData");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, UGCViewModel) == 1224, "Offset mismatch for UJunoBattleBusCustomizationWidget::UGCViewModel");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, DefaultName) == 1232, "Offset mismatch for UJunoBattleBusCustomizationWidget::DefaultName");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, DefaultHintText) == 1248, "Offset mismatch for UJunoBattleBusCustomizationWidget::DefaultHintText");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, bAllowUserInput) == 1264, "Offset mismatch for UJunoBattleBusCustomizationWidget::bAllowUserInput");
static_assert(offsetof(UJunoBattleBusCustomizationWidget, bHasConstructed) == 1265, "Offset mismatch for UJunoBattleBusCustomizationWidget::bHasConstructed");

// /Script/JunoBattleBusUI.JunoBattleBusDestinationEntry
// Kind: Class; super: CommonButtonLegacy
class UJunoBattleBusDestinationEntry
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    FMulticastInlineDelegate OnSelectedChanged; // 0x15A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonClicked; // 0x15B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonDoubleClicked; // 0x15C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonHovered; // 0x15D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonUnhovered; // 0x15E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoBattleBusDestinationEntry, OnSelectedChanged) == 5536, "Offset mismatch for UJunoBattleBusDestinationEntry::OnSelectedChanged");
static_assert(offsetof(UJunoBattleBusDestinationEntry, OnButtonClicked) == 5552, "Offset mismatch for UJunoBattleBusDestinationEntry::OnButtonClicked");
static_assert(offsetof(UJunoBattleBusDestinationEntry, OnButtonDoubleClicked) == 5568, "Offset mismatch for UJunoBattleBusDestinationEntry::OnButtonDoubleClicked");
static_assert(offsetof(UJunoBattleBusDestinationEntry, OnButtonHovered) == 5584, "Offset mismatch for UJunoBattleBusDestinationEntry::OnButtonHovered");
static_assert(offsetof(UJunoBattleBusDestinationEntry, OnButtonUnhovered) == 5600, "Offset mismatch for UJunoBattleBusDestinationEntry::OnButtonUnhovered");

// /Script/JunoBattleBusUI.JunoBattleBusDestinationHeaderObject
// Kind: Class; super: Object
class UJunoBattleBusDestinationHeaderObject
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FText DisplayName; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UJunoBattleBusDestinationHeaderObject, DisplayName) == 48, "Offset mismatch for UJunoBattleBusDestinationHeaderObject::DisplayName");

// /Script/JunoBattleBusUI.JunoBattleBusDestinationList
// Kind: Class; super: UserWidget
class UJunoBattleBusDestinationList
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    void* ListView_Destinations; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StopTypeSortOrder; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> StopTypeHeaderNames; // 0x0330 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0340
    TArray<void*> ListItems_All; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ListItems_Destinations; // 0x0370 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoBattleBusDestinationList, ListView_Destinations) == 792, "Offset mismatch for UJunoBattleBusDestinationList::ListView_Destinations");
static_assert(offsetof(UJunoBattleBusDestinationList, StopTypeSortOrder) == 800, "Offset mismatch for UJunoBattleBusDestinationList::StopTypeSortOrder");
static_assert(offsetof(UJunoBattleBusDestinationList, StopTypeHeaderNames) == 816, "Offset mismatch for UJunoBattleBusDestinationList::StopTypeHeaderNames");
static_assert(offsetof(UJunoBattleBusDestinationList, ListItems_All) == 864, "Offset mismatch for UJunoBattleBusDestinationList::ListItems_All");
static_assert(offsetof(UJunoBattleBusDestinationList, ListItems_Destinations) == 880, "Offset mismatch for UJunoBattleBusDestinationList::ListItems_Destinations");

// /Script/JunoBattleBusUI.JunoBattleBusDestinationListObject
// Kind: Class; super: Object
class UJunoBattleBusDestinationListObject
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t AssociatedBusStop[0x80]; // 0x0040 (Size: 0x80, Type: StructProperty)
    std::uint8_t bIsOriginBusStation; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBattleBusDestinationListObject, AssociatedBusStop) == 64, "Offset mismatch for UJunoBattleBusDestinationListObject::AssociatedBusStop");
static_assert(offsetof(UJunoBattleBusDestinationListObject, bIsOriginBusStation) == 192, "Offset mismatch for UJunoBattleBusDestinationListObject::bIsOriginBusStation");

// /Script/JunoBattleBusUI.JunoBattleBusLoadingScreen
// Kind: Class; super: JunoBattleBusMapWidget
class UJunoBattleBusLoadingScreen
{
public:
    std::uint8_t Pad_0000[0xC00]; // 0x0000
    std::uint8_t bZoomToFit; // 0x0C00 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBattleBusLoadingScreen, bZoomToFit) == 3072, "Offset mismatch for UJunoBattleBusLoadingScreen::bZoomToFit");

// /Script/JunoBattleBusUI.JunoBattleBusMapWidget
// Kind: Class; super: JunoFullScreenMap
class UJunoBattleBusMapWidget
{
public:
    std::uint8_t Pad_0000[0x868]; // 0x0000
    std::uint8_t CurrentMapState; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0869
    void* BattleBusDestinationList; // 0x0870 (Size: 0x8, Type: ObjectProperty)
    void* QueuedPlayersWidget; // 0x0878 (Size: 0x8, Type: ObjectProperty)
    void* Button_Confirm; // 0x0880 (Size: 0x8, Type: ObjectProperty)
    void* Button_Edit; // 0x0888 (Size: 0x8, Type: ObjectProperty)
    void* CustomizeModalScene; // 0x0890 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModalConfirmAction[0x10]; // 0x0898 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModalCancelAction[0x10]; // 0x08A8 (Size: 0x10, Type: StructProperty)
    void* ModalScene; // 0x08B8 (Size: 0x8, Type: ObjectProperty)
    void* BasicModalScene; // 0x08C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RequestDestinationModalTitle[0x10]; // 0x08C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequestDestinationModalDescription[0x10]; // 0x08D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequestDestinationModalConfirmText[0x10]; // 0x08E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequestDestinationModalCancelText[0x10]; // 0x08F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t BoardBusModalTitle[0x10]; // 0x0908 (Size: 0x10, Type: TextProperty)
    std::uint8_t BoardBusModalDescription[0x10]; // 0x0918 (Size: 0x10, Type: TextProperty)
    std::uint8_t BoardBusModalConfirmText[0x10]; // 0x0928 (Size: 0x10, Type: TextProperty)
    std::uint8_t BoardBusModalCancelText[0x10]; // 0x0938 (Size: 0x10, Type: TextProperty)
    std::uint8_t LeaveBusModalTitle[0x10]; // 0x0948 (Size: 0x10, Type: TextProperty)
    std::uint8_t LeaveBusModalDescription[0x10]; // 0x0958 (Size: 0x10, Type: TextProperty)
    std::uint8_t LeaveBusModalConfirmText[0x10]; // 0x0968 (Size: 0x10, Type: TextProperty)
    FText LeaveBusModalCancelText; // 0x0978 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UJunoBattleBusMapWidget, CurrentMapState) == 2152, "Offset mismatch for UJunoBattleBusMapWidget::CurrentMapState");
static_assert(offsetof(UJunoBattleBusMapWidget, BattleBusDestinationList) == 2160, "Offset mismatch for UJunoBattleBusMapWidget::BattleBusDestinationList");
static_assert(offsetof(UJunoBattleBusMapWidget, QueuedPlayersWidget) == 2168, "Offset mismatch for UJunoBattleBusMapWidget::QueuedPlayersWidget");
static_assert(offsetof(UJunoBattleBusMapWidget, Button_Confirm) == 2176, "Offset mismatch for UJunoBattleBusMapWidget::Button_Confirm");
static_assert(offsetof(UJunoBattleBusMapWidget, Button_Edit) == 2184, "Offset mismatch for UJunoBattleBusMapWidget::Button_Edit");
static_assert(offsetof(UJunoBattleBusMapWidget, CustomizeModalScene) == 2192, "Offset mismatch for UJunoBattleBusMapWidget::CustomizeModalScene");
static_assert(offsetof(UJunoBattleBusMapWidget, ModalConfirmAction) == 2200, "Offset mismatch for UJunoBattleBusMapWidget::ModalConfirmAction");
static_assert(offsetof(UJunoBattleBusMapWidget, ModalCancelAction) == 2216, "Offset mismatch for UJunoBattleBusMapWidget::ModalCancelAction");
static_assert(offsetof(UJunoBattleBusMapWidget, ModalScene) == 2232, "Offset mismatch for UJunoBattleBusMapWidget::ModalScene");
static_assert(offsetof(UJunoBattleBusMapWidget, BasicModalScene) == 2240, "Offset mismatch for UJunoBattleBusMapWidget::BasicModalScene");
static_assert(offsetof(UJunoBattleBusMapWidget, RequestDestinationModalTitle) == 2248, "Offset mismatch for UJunoBattleBusMapWidget::RequestDestinationModalTitle");
static_assert(offsetof(UJunoBattleBusMapWidget, RequestDestinationModalDescription) == 2264, "Offset mismatch for UJunoBattleBusMapWidget::RequestDestinationModalDescription");
static_assert(offsetof(UJunoBattleBusMapWidget, RequestDestinationModalConfirmText) == 2280, "Offset mismatch for UJunoBattleBusMapWidget::RequestDestinationModalConfirmText");
static_assert(offsetof(UJunoBattleBusMapWidget, RequestDestinationModalCancelText) == 2296, "Offset mismatch for UJunoBattleBusMapWidget::RequestDestinationModalCancelText");
static_assert(offsetof(UJunoBattleBusMapWidget, BoardBusModalTitle) == 2312, "Offset mismatch for UJunoBattleBusMapWidget::BoardBusModalTitle");
static_assert(offsetof(UJunoBattleBusMapWidget, BoardBusModalDescription) == 2328, "Offset mismatch for UJunoBattleBusMapWidget::BoardBusModalDescription");
static_assert(offsetof(UJunoBattleBusMapWidget, BoardBusModalConfirmText) == 2344, "Offset mismatch for UJunoBattleBusMapWidget::BoardBusModalConfirmText");
static_assert(offsetof(UJunoBattleBusMapWidget, BoardBusModalCancelText) == 2360, "Offset mismatch for UJunoBattleBusMapWidget::BoardBusModalCancelText");
static_assert(offsetof(UJunoBattleBusMapWidget, LeaveBusModalTitle) == 2376, "Offset mismatch for UJunoBattleBusMapWidget::LeaveBusModalTitle");
static_assert(offsetof(UJunoBattleBusMapWidget, LeaveBusModalDescription) == 2392, "Offset mismatch for UJunoBattleBusMapWidget::LeaveBusModalDescription");
static_assert(offsetof(UJunoBattleBusMapWidget, LeaveBusModalConfirmText) == 2408, "Offset mismatch for UJunoBattleBusMapWidget::LeaveBusModalConfirmText");
static_assert(offsetof(UJunoBattleBusMapWidget, LeaveBusModalCancelText) == 2424, "Offset mismatch for UJunoBattleBusMapWidget::LeaveBusModalCancelText");

// /Script/JunoBattleBusUI.JunoBattleBusQueuedPlayersWidget
// Kind: Class; super: UserWidget
class UJunoBattleBusQueuedPlayersWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t PrioritizationData[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBattleBusQueuedPlayersWidget, PrioritizationData) == 840, "Offset mismatch for UJunoBattleBusQueuedPlayersWidget::PrioritizationData");

// /Script/JunoBattleBusUI.JunoMapElementProvider_BusRoute
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_BusRoute
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FString BusRouteLayerName; // 0x00B0 (Size: 0x10, Type: StrProperty)
    void* OriginBusStopMaterial; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    float OriginBusStopDrawSize; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* DestinationBusStopMaterial; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    float DestinationBusStopDrawSize; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00DC
    void* BusPathMaterial; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    float BusPathWidth; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoMapElementProvider_BusRoute, BusRouteLayerName) == 176, "Offset mismatch for UJunoMapElementProvider_BusRoute::BusRouteLayerName");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, OriginBusStopMaterial) == 192, "Offset mismatch for UJunoMapElementProvider_BusRoute::OriginBusStopMaterial");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, OriginBusStopDrawSize) == 200, "Offset mismatch for UJunoMapElementProvider_BusRoute::OriginBusStopDrawSize");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, DestinationBusStopMaterial) == 208, "Offset mismatch for UJunoMapElementProvider_BusRoute::DestinationBusStopMaterial");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, DestinationBusStopDrawSize) == 216, "Offset mismatch for UJunoMapElementProvider_BusRoute::DestinationBusStopDrawSize");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, BusPathMaterial) == 224, "Offset mismatch for UJunoMapElementProvider_BusRoute::BusPathMaterial");
static_assert(offsetof(UJunoMapElementProvider_BusRoute, BusPathWidth) == 232, "Offset mismatch for UJunoMapElementProvider_BusRoute::BusPathWidth");
