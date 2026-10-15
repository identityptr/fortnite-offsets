/**
 * decamp dumper generated SDK
 * Package: /Script/JunoFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoFrontendUI.JunoFrontendExperienceFlow
// Kind: Class; super: Object
class UJunoFrontendExperienceFlow
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t VideoPlayerClass[0x20]; // 0x0060 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> FlowStepArray; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableTrailer; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    FString CinematicTrailerVUID; // 0x0098 (Size: 0x10, Type: StrProperty)
    FName CinematicTrailerString; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CinematicTrailerRating; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoFrontendExperienceFlow, VideoPlayerClass) == 96, "Offset mismatch for UJunoFrontendExperienceFlow::VideoPlayerClass");
static_assert(offsetof(UJunoFrontendExperienceFlow, FlowStepArray) == 128, "Offset mismatch for UJunoFrontendExperienceFlow::FlowStepArray");
static_assert(offsetof(UJunoFrontendExperienceFlow, bEnableTrailer) == 144, "Offset mismatch for UJunoFrontendExperienceFlow::bEnableTrailer");
static_assert(offsetof(UJunoFrontendExperienceFlow, CinematicTrailerVUID) == 152, "Offset mismatch for UJunoFrontendExperienceFlow::CinematicTrailerVUID");
static_assert(offsetof(UJunoFrontendExperienceFlow, CinematicTrailerString) == 168, "Offset mismatch for UJunoFrontendExperienceFlow::CinematicTrailerString");
static_assert(offsetof(UJunoFrontendExperienceFlow, CinematicTrailerRating) == 176, "Offset mismatch for UJunoFrontendExperienceFlow::CinematicTrailerRating");

// /Script/JunoFrontendUI.JunoSelectWorldScreen
// Kind: Class; super: FortActivityModeSetSelectionModalBase
class UJunoSelectWorldScreen
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSelectWorldScreen, bIsBackHandler) == 816, "Offset mismatch for UJunoSelectWorldScreen::bIsBackHandler");
static_assert(offsetof(UJunoSelectWorldScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJunoSelectWorldScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJunoSelectWorldScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJunoSelectWorldScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UJunoSelectWorldScreen, bAutoActivate) == 840, "Offset mismatch for UJunoSelectWorldScreen::bAutoActivate");
static_assert(offsetof(UJunoSelectWorldScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UJunoSelectWorldScreen::bSupportsActivationFocus");
static_assert(offsetof(UJunoSelectWorldScreen, bIsModal) == 842, "Offset mismatch for UJunoSelectWorldScreen::bIsModal");
static_assert(offsetof(UJunoSelectWorldScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UJunoSelectWorldScreen::bAutoRestoreFocus");
static_assert(offsetof(UJunoSelectWorldScreen, bOverrideActionDomain) == 844, "Offset mismatch for UJunoSelectWorldScreen::bOverrideActionDomain");
static_assert(offsetof(UJunoSelectWorldScreen, InputMapping) == 848, "Offset mismatch for UJunoSelectWorldScreen::InputMapping");
static_assert(offsetof(UJunoSelectWorldScreen, InputMappingPriority) == 856, "Offset mismatch for UJunoSelectWorldScreen::InputMappingPriority");
static_assert(offsetof(UJunoSelectWorldScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UJunoSelectWorldScreen::InputModeTagsToAdd");
static_assert(offsetof(UJunoSelectWorldScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UJunoSelectWorldScreen::InputModeTagsToRemove");
static_assert(offsetof(UJunoSelectWorldScreen, ActionDomainOverride) == 928, "Offset mismatch for UJunoSelectWorldScreen::ActionDomainOverride");
static_assert(offsetof(UJunoSelectWorldScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UJunoSelectWorldScreen::BP_OnWidgetActivated");
static_assert(offsetof(UJunoSelectWorldScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJunoSelectWorldScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UJunoSelectWorldScreen, bIsActive) == 992, "Offset mismatch for UJunoSelectWorldScreen::bIsActive");
static_assert(offsetof(UJunoSelectWorldScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJunoSelectWorldScreen::VisibilityBoundWidgets");
static_assert(offsetof(UJunoSelectWorldScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJunoSelectWorldScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UJunoSelectWorldScreen, ActivatedVisibility) == 1177, "Offset mismatch for UJunoSelectWorldScreen::ActivatedVisibility");
static_assert(offsetof(UJunoSelectWorldScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJunoSelectWorldScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJunoSelectWorldScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UJunoSelectWorldScreen::DeactivatedVisibility");

// /Script/JunoFrontendUI.JunoTabGroupButtonViewModel
// Kind: Class; super: UIKitTabGroupButtonViewModel
class UJunoTabGroupButtonViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bEnableTabID; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    std::uint8_t TabID[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableSubGroupID; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    FName SubGroupID; // 0x008C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoTabGroupButtonViewModel, bEnableTabID) == 128, "Offset mismatch for UJunoTabGroupButtonViewModel::bEnableTabID");
static_assert(offsetof(UJunoTabGroupButtonViewModel, TabID) == 132, "Offset mismatch for UJunoTabGroupButtonViewModel::TabID");
static_assert(offsetof(UJunoTabGroupButtonViewModel, bEnableSubGroupID) == 136, "Offset mismatch for UJunoTabGroupButtonViewModel::bEnableSubGroupID");
static_assert(offsetof(UJunoTabGroupButtonViewModel, SubGroupID) == 140, "Offset mismatch for UJunoTabGroupButtonViewModel::SubGroupID");

// /Script/JunoFrontendUI.JunoWorldManagementViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoWorldManagementViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bAllowWorldCreation; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t MaxWorldSlots; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowWorldUGCCreation; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceShowDefaultWorldName; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModeratorModeEnabled; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldLoadingSuccess; // 0x0073 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInCabinMode; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    TArray<void*> OwnerWorlds; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedWorlds; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldSlots; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    void* SelectedWorld; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* EmptyWorld; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x18]; // 0x00B8
    float DataRefreshFrequency; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x14]; // 0x00D4
    void* SettingDataTable; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WorldImageList; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    void* InitWorldManagementVM; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoWorldManagementViewModel, bAllowWorldCreation) == 104, "Offset mismatch for UJunoWorldManagementViewModel::bAllowWorldCreation");
static_assert(offsetof(UJunoWorldManagementViewModel, MaxWorldSlots) == 108, "Offset mismatch for UJunoWorldManagementViewModel::MaxWorldSlots");
static_assert(offsetof(UJunoWorldManagementViewModel, bAllowWorldUGCCreation) == 112, "Offset mismatch for UJunoWorldManagementViewModel::bAllowWorldUGCCreation");
static_assert(offsetof(UJunoWorldManagementViewModel, bForceShowDefaultWorldName) == 113, "Offset mismatch for UJunoWorldManagementViewModel::bForceShowDefaultWorldName");
static_assert(offsetof(UJunoWorldManagementViewModel, bIsModeratorModeEnabled) == 114, "Offset mismatch for UJunoWorldManagementViewModel::bIsModeratorModeEnabled");
static_assert(offsetof(UJunoWorldManagementViewModel, bWorldLoadingSuccess) == 115, "Offset mismatch for UJunoWorldManagementViewModel::bWorldLoadingSuccess");
static_assert(offsetof(UJunoWorldManagementViewModel, bIsInCabinMode) == 116, "Offset mismatch for UJunoWorldManagementViewModel::bIsInCabinMode");
static_assert(offsetof(UJunoWorldManagementViewModel, OwnerWorlds) == 120, "Offset mismatch for UJunoWorldManagementViewModel::OwnerWorlds");
static_assert(offsetof(UJunoWorldManagementViewModel, SharedWorlds) == 136, "Offset mismatch for UJunoWorldManagementViewModel::SharedWorlds");
static_assert(offsetof(UJunoWorldManagementViewModel, WorldSlots) == 152, "Offset mismatch for UJunoWorldManagementViewModel::WorldSlots");
static_assert(offsetof(UJunoWorldManagementViewModel, SelectedWorld) == 168, "Offset mismatch for UJunoWorldManagementViewModel::SelectedWorld");
static_assert(offsetof(UJunoWorldManagementViewModel, EmptyWorld) == 176, "Offset mismatch for UJunoWorldManagementViewModel::EmptyWorld");
static_assert(offsetof(UJunoWorldManagementViewModel, DataRefreshFrequency) == 208, "Offset mismatch for UJunoWorldManagementViewModel::DataRefreshFrequency");
static_assert(offsetof(UJunoWorldManagementViewModel, SettingDataTable) == 232, "Offset mismatch for UJunoWorldManagementViewModel::SettingDataTable");
static_assert(offsetof(UJunoWorldManagementViewModel, WorldImageList) == 240, "Offset mismatch for UJunoWorldManagementViewModel::WorldImageList");
static_assert(offsetof(UJunoWorldManagementViewModel, InitWorldManagementVM) == 256, "Offset mismatch for UJunoWorldManagementViewModel::InitWorldManagementVM");
