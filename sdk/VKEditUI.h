/**
 * decamp dumper generated SDK
 * Package: /Script/VKEditUI
 */
#pragma once
#include "Basic.h"

// /Script/VKEditUI.VKConnectionIndicator
// Kind: Class; super: CommonActivatableWidget
class UVKConnectionIndicator
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    FText EditStatusLocalizedText; // 0x04A0 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x88]; // 0x04B8
    void* StatusIcon_NotConnected; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_Connected; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_RefreshRequired; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_Preparing; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_Downloading; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_UpToDate; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_StartingGame; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_GameInProgress; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_GameInProgressWarning; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_Error; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* StatusIcon_PerformanceWarning; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Image_StatusIcon; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* Text_StatusMessage; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_AdditionalInfo; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Panel_DownloadInfiniteContainer; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* Panel_DownloadContainer; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* ProgressBar_Download; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* Text_DownloadProgress; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* Panel_OpenLogContainer; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* Panel_SubMessageContainer; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* Image_SubMessage; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Text_SubMessage; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_EditMode; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* Panel_SquadListContainer; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* AthenaSquadList; // 0x0600 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVKConnectionIndicator, EditStatusLocalizedText) == 1184, "Offset mismatch for UVKConnectionIndicator::EditStatusLocalizedText");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_NotConnected) == 1344, "Offset mismatch for UVKConnectionIndicator::StatusIcon_NotConnected");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Connected) == 1352, "Offset mismatch for UVKConnectionIndicator::StatusIcon_Connected");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_RefreshRequired) == 1360, "Offset mismatch for UVKConnectionIndicator::StatusIcon_RefreshRequired");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Preparing) == 1368, "Offset mismatch for UVKConnectionIndicator::StatusIcon_Preparing");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Downloading) == 1376, "Offset mismatch for UVKConnectionIndicator::StatusIcon_Downloading");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_UpToDate) == 1384, "Offset mismatch for UVKConnectionIndicator::StatusIcon_UpToDate");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_StartingGame) == 1392, "Offset mismatch for UVKConnectionIndicator::StatusIcon_StartingGame");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_GameInProgress) == 1400, "Offset mismatch for UVKConnectionIndicator::StatusIcon_GameInProgress");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_GameInProgressWarning) == 1408, "Offset mismatch for UVKConnectionIndicator::StatusIcon_GameInProgressWarning");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_Error) == 1416, "Offset mismatch for UVKConnectionIndicator::StatusIcon_Error");
static_assert(offsetof(UVKConnectionIndicator, StatusIcon_PerformanceWarning) == 1424, "Offset mismatch for UVKConnectionIndicator::StatusIcon_PerformanceWarning");
static_assert(offsetof(UVKConnectionIndicator, Image_StatusIcon) == 1432, "Offset mismatch for UVKConnectionIndicator::Image_StatusIcon");
static_assert(offsetof(UVKConnectionIndicator, Text_StatusMessage) == 1440, "Offset mismatch for UVKConnectionIndicator::Text_StatusMessage");
static_assert(offsetof(UVKConnectionIndicator, Switcher_AdditionalInfo) == 1448, "Offset mismatch for UVKConnectionIndicator::Switcher_AdditionalInfo");
static_assert(offsetof(UVKConnectionIndicator, Panel_DownloadInfiniteContainer) == 1456, "Offset mismatch for UVKConnectionIndicator::Panel_DownloadInfiniteContainer");
static_assert(offsetof(UVKConnectionIndicator, Panel_DownloadContainer) == 1464, "Offset mismatch for UVKConnectionIndicator::Panel_DownloadContainer");
static_assert(offsetof(UVKConnectionIndicator, ProgressBar_Download) == 1472, "Offset mismatch for UVKConnectionIndicator::ProgressBar_Download");
static_assert(offsetof(UVKConnectionIndicator, Text_DownloadProgress) == 1480, "Offset mismatch for UVKConnectionIndicator::Text_DownloadProgress");
static_assert(offsetof(UVKConnectionIndicator, Panel_OpenLogContainer) == 1488, "Offset mismatch for UVKConnectionIndicator::Panel_OpenLogContainer");
static_assert(offsetof(UVKConnectionIndicator, Panel_SubMessageContainer) == 1496, "Offset mismatch for UVKConnectionIndicator::Panel_SubMessageContainer");
static_assert(offsetof(UVKConnectionIndicator, Image_SubMessage) == 1504, "Offset mismatch for UVKConnectionIndicator::Image_SubMessage");
static_assert(offsetof(UVKConnectionIndicator, Text_SubMessage) == 1512, "Offset mismatch for UVKConnectionIndicator::Text_SubMessage");
static_assert(offsetof(UVKConnectionIndicator, Text_EditMode) == 1520, "Offset mismatch for UVKConnectionIndicator::Text_EditMode");
static_assert(offsetof(UVKConnectionIndicator, Panel_SquadListContainer) == 1528, "Offset mismatch for UVKConnectionIndicator::Panel_SquadListContainer");
static_assert(offsetof(UVKConnectionIndicator, AthenaSquadList) == 1536, "Offset mismatch for UVKConnectionIndicator::AthenaSquadList");

// /Script/VKEditUI.VKDebugMessagesBase
// Kind: Class; super: FortHUDElementWidget
class UVKDebugMessagesBase
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVKDebugMessagesBase, HLTDependentWidgetTag) == 824, "Offset mismatch for UVKDebugMessagesBase::HLTDependentWidgetTag");
static_assert(offsetof(UVKDebugMessagesBase, ElementTag) == 828, "Offset mismatch for UVKDebugMessagesBase::ElementTag");
static_assert(offsetof(UVKDebugMessagesBase, HUDElementTag) == 832, "Offset mismatch for UVKDebugMessagesBase::HUDElementTag");
static_assert(offsetof(UVKDebugMessagesBase, HiddenVisibility) == 864, "Offset mismatch for UVKDebugMessagesBase::HiddenVisibility");
static_assert(offsetof(UVKDebugMessagesBase, TutorialHighlight) == 872, "Offset mismatch for UVKDebugMessagesBase::TutorialHighlight");

// /Script/VKEditUI.ValkyriePerformanceHUDBase
// Kind: Class; super: FortHUDElementWidget
class UValkyriePerformanceHUDBase
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t ThermometerMemoryThreshold[0x158]; // 0x0370 (Size: 0x158, Type: StructProperty)
    void* ViewModel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* MemoryThermometerViewModel; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* PackageSizeThermometerViewModel; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UValkyriePerformanceHUDBase, ThermometerMemoryThreshold) == 880, "Offset mismatch for UValkyriePerformanceHUDBase::ThermometerMemoryThreshold");
static_assert(offsetof(UValkyriePerformanceHUDBase, ViewModel) == 1224, "Offset mismatch for UValkyriePerformanceHUDBase::ViewModel");
static_assert(offsetof(UValkyriePerformanceHUDBase, MemoryThermometerViewModel) == 1232, "Offset mismatch for UValkyriePerformanceHUDBase::MemoryThermometerViewModel");
static_assert(offsetof(UValkyriePerformanceHUDBase, PackageSizeThermometerViewModel) == 1240, "Offset mismatch for UValkyriePerformanceHUDBase::PackageSizeThermometerViewModel");

// /Script/VKEditUI.VkEditDynamicUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UVkEditDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* MemorySamplingScene; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVkEditDynamicUIDirector, MemorySamplingScene) == 672, "Offset mismatch for UVkEditDynamicUIDirector::MemorySamplingScene");

// /Script/VKEditUI.VkEditLogTab
// Kind: Class; super: CommonActivatableWidget
class UVkEditLogTab
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x04D0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t MapTabInfo[0x1]; // 0x05C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVkEditLogTab, TabButtonLabelInfo) == 1232, "Offset mismatch for UVkEditLogTab::TabButtonLabelInfo");
static_assert(offsetof(UVkEditLogTab, MapTabInfo) == 1472, "Offset mismatch for UVkEditLogTab::MapTabInfo");

// /Script/VKEditUI.VkPerformanceThermometerListViewModel
// Kind: Class; super: MVVMViewModelBase
class UVkPerformanceThermometerListViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> ThermometerViewModels; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVkPerformanceThermometerListViewModel, ThermometerViewModels) == 104, "Offset mismatch for UVkPerformanceThermometerListViewModel::ThermometerViewModels");

// /Script/VKEditUI.VkPerformanceThermometerViewModel
// Kind: Class; super: MVVMViewModelBase
class UVkPerformanceThermometerViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Value; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxValue; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalValue; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCookRequired; // 0x0084 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVkPerformanceThermometerViewModel, Title) == 104, "Offset mismatch for UVkPerformanceThermometerViewModel::Title");
static_assert(offsetof(UVkPerformanceThermometerViewModel, Value) == 120, "Offset mismatch for UVkPerformanceThermometerViewModel::Value");
static_assert(offsetof(UVkPerformanceThermometerViewModel, MaxValue) == 124, "Offset mismatch for UVkPerformanceThermometerViewModel::MaxValue");
static_assert(offsetof(UVkPerformanceThermometerViewModel, GlobalValue) == 128, "Offset mismatch for UVkPerformanceThermometerViewModel::GlobalValue");
static_assert(offsetof(UVkPerformanceThermometerViewModel, bCookRequired) == 132, "Offset mismatch for UVkPerformanceThermometerViewModel::bCookRequired");

// /Script/VKEditUI.VkPerformanceViewModel
// Kind: Class; super: MVVMViewModelBase
class UVkPerformanceViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ThermometerListViewModel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVkPerformanceViewModel, ThermometerListViewModel) == 104, "Offset mismatch for UVkPerformanceViewModel::ThermometerListViewModel");
