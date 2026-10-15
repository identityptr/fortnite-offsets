/**
 * decamp dumper generated SDK
 * Package: /Script/VoiceRep
 */
#pragma once
#include "Basic.h"

// /Script/VoiceRep.FortTextReportingUpdateModal
// Kind: Class; super: CommonActivatableWidget
class UFortTextReportingUpdateModal
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

static_assert(offsetof(UFortTextReportingUpdateModal, bIsBackHandler) == 816, "Offset mismatch for UFortTextReportingUpdateModal::bIsBackHandler");
static_assert(offsetof(UFortTextReportingUpdateModal, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortTextReportingUpdateModal::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortTextReportingUpdateModal, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortTextReportingUpdateModal::OverrideBackActionDisplayName");
static_assert(offsetof(UFortTextReportingUpdateModal, bAutoActivate) == 840, "Offset mismatch for UFortTextReportingUpdateModal::bAutoActivate");
static_assert(offsetof(UFortTextReportingUpdateModal, bSupportsActivationFocus) == 841, "Offset mismatch for UFortTextReportingUpdateModal::bSupportsActivationFocus");
static_assert(offsetof(UFortTextReportingUpdateModal, bIsModal) == 842, "Offset mismatch for UFortTextReportingUpdateModal::bIsModal");
static_assert(offsetof(UFortTextReportingUpdateModal, bAutoRestoreFocus) == 843, "Offset mismatch for UFortTextReportingUpdateModal::bAutoRestoreFocus");
static_assert(offsetof(UFortTextReportingUpdateModal, bOverrideActionDomain) == 844, "Offset mismatch for UFortTextReportingUpdateModal::bOverrideActionDomain");
static_assert(offsetof(UFortTextReportingUpdateModal, InputMapping) == 848, "Offset mismatch for UFortTextReportingUpdateModal::InputMapping");
static_assert(offsetof(UFortTextReportingUpdateModal, InputMappingPriority) == 856, "Offset mismatch for UFortTextReportingUpdateModal::InputMappingPriority");
static_assert(offsetof(UFortTextReportingUpdateModal, InputModeTagsToAdd) == 864, "Offset mismatch for UFortTextReportingUpdateModal::InputModeTagsToAdd");
static_assert(offsetof(UFortTextReportingUpdateModal, InputModeTagsToRemove) == 896, "Offset mismatch for UFortTextReportingUpdateModal::InputModeTagsToRemove");
static_assert(offsetof(UFortTextReportingUpdateModal, ActionDomainOverride) == 928, "Offset mismatch for UFortTextReportingUpdateModal::ActionDomainOverride");
static_assert(offsetof(UFortTextReportingUpdateModal, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortTextReportingUpdateModal::BP_OnWidgetActivated");
static_assert(offsetof(UFortTextReportingUpdateModal, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortTextReportingUpdateModal::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortTextReportingUpdateModal, bIsActive) == 992, "Offset mismatch for UFortTextReportingUpdateModal::bIsActive");
static_assert(offsetof(UFortTextReportingUpdateModal, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortTextReportingUpdateModal::VisibilityBoundWidgets");
static_assert(offsetof(UFortTextReportingUpdateModal, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortTextReportingUpdateModal::bSetVisibilityOnActivated");
static_assert(offsetof(UFortTextReportingUpdateModal, ActivatedVisibility) == 1177, "Offset mismatch for UFortTextReportingUpdateModal::ActivatedVisibility");
static_assert(offsetof(UFortTextReportingUpdateModal, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortTextReportingUpdateModal::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortTextReportingUpdateModal, DeactivatedVisibility) == 1179, "Offset mismatch for UFortTextReportingUpdateModal::DeactivatedVisibility");

// /Script/VoiceRep.FortVoiceReportIntroModal
// Kind: Class; super: CommonActivatableWidget
class UFortVoiceReportIntroModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Text_VoiceReportingTitle; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVoiceReportIntroModal, Text_VoiceReportingTitle) == 1184, "Offset mismatch for UFortVoiceReportIntroModal::Text_VoiceReportingTitle");

// /Script/VoiceRep.VoiceRepDataAsset
// Kind: Class; super: DataAsset
class UVoiceRepDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* VoiceChatTooltipWidgetClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* FirstOnboardingWidgetClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* SecondOnboardingWidgetClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* ReportVoiceWidgetClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* TextReportingUpdateWidgetClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UVoiceRepDataAsset, VoiceChatTooltipWidgetClass) == 40, "Offset mismatch for UVoiceRepDataAsset::VoiceChatTooltipWidgetClass");
static_assert(offsetof(UVoiceRepDataAsset, FirstOnboardingWidgetClass) == 48, "Offset mismatch for UVoiceRepDataAsset::FirstOnboardingWidgetClass");
static_assert(offsetof(UVoiceRepDataAsset, SecondOnboardingWidgetClass) == 56, "Offset mismatch for UVoiceRepDataAsset::SecondOnboardingWidgetClass");
static_assert(offsetof(UVoiceRepDataAsset, ReportVoiceWidgetClass) == 64, "Offset mismatch for UVoiceRepDataAsset::ReportVoiceWidgetClass");
static_assert(offsetof(UVoiceRepDataAsset, TextReportingUpdateWidgetClass) == 72, "Offset mismatch for UVoiceRepDataAsset::TextReportingUpdateWidgetClass");

// /Script/VoiceRep.VoiceRepTooltipBase
// Kind: Class; super: FortSidebarOnboardTooltipWidget
class UVoiceRepTooltipBase
{
public:
    std::uint8_t Pad_0000[0x510]; // 0x0000
    std::int32_t AutoDismissTimerInterval; // 0x0510 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UVoiceRepTooltipBase, AutoDismissTimerInterval) == 1296, "Offset mismatch for UVoiceRepTooltipBase::AutoDismissTimerInterval");
