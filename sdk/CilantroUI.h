/**
 * decamp dumper generated SDK
 * Package: /Script/CilantroUI
 */
#pragma once
#include "Basic.h"

// /Script/CilantroUI.PlaytimeScheduleEntryData
// Kind: ScriptStruct; super: none
struct FPlaytimeScheduleEntryData
{
public:
    std::uint8_t DayText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t AllowedTimeText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TArray<void*> TimeWindowTexts; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPlaytimeScheduleEntryData, DayText) == 0, "Offset mismatch for FPlaytimeScheduleEntryData::DayText");
static_assert(offsetof(FPlaytimeScheduleEntryData, AllowedTimeText) == 16, "Offset mismatch for FPlaytimeScheduleEntryData::AllowedTimeText");
static_assert(offsetof(FPlaytimeScheduleEntryData, TimeWindowTexts) == 32, "Offset mismatch for FPlaytimeScheduleEntryData::TimeWindowTexts");

// /Script/CilantroUI.FortPlaytimeBlock
// Kind: Class; super: CommonActivatableWidget
class UFortPlaytimeBlock
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* WidgetStack_Takeover; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FortLegalInfoClass[0x20]; // 0x04A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ParentalControlsClass[0x20]; // 0x04C8 (Size: 0x20, Type: SoftClassProperty)
    void* PlaytimeViewModel; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaytimeBlock, WidgetStack_Takeover) == 1184, "Offset mismatch for UFortPlaytimeBlock::WidgetStack_Takeover");
static_assert(offsetof(UFortPlaytimeBlock, FortLegalInfoClass) == 1192, "Offset mismatch for UFortPlaytimeBlock::FortLegalInfoClass");
static_assert(offsetof(UFortPlaytimeBlock, ParentalControlsClass) == 1224, "Offset mismatch for UFortPlaytimeBlock::ParentalControlsClass");
static_assert(offsetof(UFortPlaytimeBlock, PlaytimeViewModel) == 1256, "Offset mismatch for UFortPlaytimeBlock::PlaytimeViewModel");

// /Script/CilantroUI.FortPlaytimeManagementScreen
// Kind: Class; super: FortPinScreen
class UFortPlaytimeManagementScreen
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* Switcher_SubViews; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Panel_PlaytimeSettings; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Panel_PlaytimeScheduleSettings; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* Details_Settings; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* PlaytimeScheduleWidget; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* AdditionalScheduleWidget; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AllowCreativeModalClass[0x20]; // 0x05A0 (Size: 0x20, Type: SoftClassProperty)
    void* PlaytimeSettingRegistry; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* PlaytimeSettingScheduleRegistry; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* ActivityPlaySettingScheduleRegistry; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* ActivityCreateSettingScheduleRegistry; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaytimeManagementScreen, Switcher_SubViews) == 1392, "Offset mismatch for UFortPlaytimeManagementScreen::Switcher_SubViews");
static_assert(offsetof(UFortPlaytimeManagementScreen, Panel_PlaytimeSettings) == 1400, "Offset mismatch for UFortPlaytimeManagementScreen::Panel_PlaytimeSettings");
static_assert(offsetof(UFortPlaytimeManagementScreen, Panel_PlaytimeScheduleSettings) == 1408, "Offset mismatch for UFortPlaytimeManagementScreen::Panel_PlaytimeScheduleSettings");
static_assert(offsetof(UFortPlaytimeManagementScreen, Details_Settings) == 1416, "Offset mismatch for UFortPlaytimeManagementScreen::Details_Settings");
static_assert(offsetof(UFortPlaytimeManagementScreen, PlaytimeScheduleWidget) == 1424, "Offset mismatch for UFortPlaytimeManagementScreen::PlaytimeScheduleWidget");
static_assert(offsetof(UFortPlaytimeManagementScreen, AdditionalScheduleWidget) == 1432, "Offset mismatch for UFortPlaytimeManagementScreen::AdditionalScheduleWidget");
static_assert(offsetof(UFortPlaytimeManagementScreen, AllowCreativeModalClass) == 1440, "Offset mismatch for UFortPlaytimeManagementScreen::AllowCreativeModalClass");
static_assert(offsetof(UFortPlaytimeManagementScreen, PlaytimeSettingRegistry) == 1472, "Offset mismatch for UFortPlaytimeManagementScreen::PlaytimeSettingRegistry");
static_assert(offsetof(UFortPlaytimeManagementScreen, PlaytimeSettingScheduleRegistry) == 1480, "Offset mismatch for UFortPlaytimeManagementScreen::PlaytimeSettingScheduleRegistry");
static_assert(offsetof(UFortPlaytimeManagementScreen, ActivityPlaySettingScheduleRegistry) == 1488, "Offset mismatch for UFortPlaytimeManagementScreen::ActivityPlaySettingScheduleRegistry");
static_assert(offsetof(UFortPlaytimeManagementScreen, ActivityCreateSettingScheduleRegistry) == 1496, "Offset mismatch for UFortPlaytimeManagementScreen::ActivityCreateSettingScheduleRegistry");

// /Script/CilantroUI.FortPlaytimePinActivatableWidget
// Kind: Class; super: CommonActivatableWidget
class UFortPlaytimePinActivatableWidget
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

static_assert(offsetof(UFortPlaytimePinActivatableWidget, bIsBackHandler) == 816, "Offset mismatch for UFortPlaytimePinActivatableWidget::bIsBackHandler");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortPlaytimePinActivatableWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortPlaytimePinActivatableWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bAutoActivate) == 840, "Offset mismatch for UFortPlaytimePinActivatableWidget::bAutoActivate");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UFortPlaytimePinActivatableWidget::bSupportsActivationFocus");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bIsModal) == 842, "Offset mismatch for UFortPlaytimePinActivatableWidget::bIsModal");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UFortPlaytimePinActivatableWidget::bAutoRestoreFocus");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bOverrideActionDomain) == 844, "Offset mismatch for UFortPlaytimePinActivatableWidget::bOverrideActionDomain");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, InputMapping) == 848, "Offset mismatch for UFortPlaytimePinActivatableWidget::InputMapping");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, InputMappingPriority) == 856, "Offset mismatch for UFortPlaytimePinActivatableWidget::InputMappingPriority");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UFortPlaytimePinActivatableWidget::InputModeTagsToAdd");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UFortPlaytimePinActivatableWidget::InputModeTagsToRemove");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, ActionDomainOverride) == 928, "Offset mismatch for UFortPlaytimePinActivatableWidget::ActionDomainOverride");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortPlaytimePinActivatableWidget::BP_OnWidgetActivated");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortPlaytimePinActivatableWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bIsActive) == 992, "Offset mismatch for UFortPlaytimePinActivatableWidget::bIsActive");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortPlaytimePinActivatableWidget::VisibilityBoundWidgets");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortPlaytimePinActivatableWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, ActivatedVisibility) == 1177, "Offset mismatch for UFortPlaytimePinActivatableWidget::ActivatedVisibility");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortPlaytimePinActivatableWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortPlaytimePinActivatableWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UFortPlaytimePinActivatableWidget::DeactivatedVisibility");

// /Script/CilantroUI.FortPlaytimeReportSettingRegistry
// Kind: Class; super: FortSettingRegistry
class UFortPlaytimeReportSettingRegistry
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    void* PlaytimeReportSettings; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaytimeReportSettingRegistry, PlaytimeReportSettings) == 400, "Offset mismatch for UFortPlaytimeReportSettingRegistry::PlaytimeReportSettings");

// /Script/CilantroUI.FortPlaytimeScheduleSettingRegistry
// Kind: Class; super: FortSettingRegistry
class UFortPlaytimeScheduleSettingRegistry
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    void* PlaytimeScheduleSettings; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaytimeScheduleSettingRegistry, PlaytimeScheduleSettings) == 400, "Offset mismatch for UFortPlaytimeScheduleSettingRegistry::PlaytimeScheduleSettings");

// /Script/CilantroUI.FortPlaytimeScheduleWidget
// Kind: Class; super: UserWidget
class UFortPlaytimeScheduleWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlaytimeScheduleWidget, ColorAndOpacity) == 416, "Offset mismatch for UFortPlaytimeScheduleWidget::ColorAndOpacity");
static_assert(offsetof(UFortPlaytimeScheduleWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UFortPlaytimeScheduleWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UFortPlaytimeScheduleWidget, ForegroundColor) == 444, "Offset mismatch for UFortPlaytimeScheduleWidget::ForegroundColor");
static_assert(offsetof(UFortPlaytimeScheduleWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UFortPlaytimeScheduleWidget::ForegroundColorDelegate");
static_assert(offsetof(UFortPlaytimeScheduleWidget, OnVisibilityChanged) == 480, "Offset mismatch for UFortPlaytimeScheduleWidget::OnVisibilityChanged");
static_assert(offsetof(UFortPlaytimeScheduleWidget, Padding) == 544, "Offset mismatch for UFortPlaytimeScheduleWidget::Padding");
static_assert(offsetof(UFortPlaytimeScheduleWidget, Priority) == 560, "Offset mismatch for UFortPlaytimeScheduleWidget::Priority");
static_assert(offsetof(UFortPlaytimeScheduleWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UFortPlaytimeScheduleWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UFortPlaytimeScheduleWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UFortPlaytimeScheduleWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UFortPlaytimeScheduleWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UFortPlaytimeScheduleWidget::ActiveSequencePlayers");
static_assert(offsetof(UFortPlaytimeScheduleWidget, AnimationTickManager) == 600, "Offset mismatch for UFortPlaytimeScheduleWidget::AnimationTickManager");
static_assert(offsetof(UFortPlaytimeScheduleWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UFortPlaytimeScheduleWidget::StoppedSequencePlayers");
static_assert(offsetof(UFortPlaytimeScheduleWidget, NamedSlotBindings) == 648, "Offset mismatch for UFortPlaytimeScheduleWidget::NamedSlotBindings");
static_assert(offsetof(UFortPlaytimeScheduleWidget, Extensions) == 664, "Offset mismatch for UFortPlaytimeScheduleWidget::Extensions");
static_assert(offsetof(UFortPlaytimeScheduleWidget, WidgetTree) == 680, "Offset mismatch for UFortPlaytimeScheduleWidget::WidgetTree");
static_assert(offsetof(UFortPlaytimeScheduleWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UFortPlaytimeScheduleWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UFortPlaytimeScheduleWidget, TickFrequency) == 712, "Offset mismatch for UFortPlaytimeScheduleWidget::TickFrequency");
static_assert(offsetof(UFortPlaytimeScheduleWidget, DesiredFocusWidget) == 716, "Offset mismatch for UFortPlaytimeScheduleWidget::DesiredFocusWidget");
static_assert(offsetof(UFortPlaytimeScheduleWidget, InputComponent) == 728, "Offset mismatch for UFortPlaytimeScheduleWidget::InputComponent");
static_assert(offsetof(UFortPlaytimeScheduleWidget, AnimationCallbacks) == 736, "Offset mismatch for UFortPlaytimeScheduleWidget::AnimationCallbacks");

// /Script/CilantroUI.FortPlaytimeSettingRegistry
// Kind: Class; super: FortSettingRegistry
class UFortPlaytimeSettingRegistry
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    void* PlaytimeSettings; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaytimeSettingRegistry, PlaytimeSettings) == 400, "Offset mismatch for UFortPlaytimeSettingRegistry::PlaytimeSettings");

// /Script/CilantroUI.FortSettingValueDiscreteSupervisedScheduleToggle
// Kind: Class; super: FortSettingValueDiscrete
class UFortSettingValueDiscreteSupervisedScheduleToggle
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TWeakObjectPtr<void> SettingParent; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwningRegistry; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0098
    std::uint8_t DisplayName[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t DescriptionRichText[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CustomExtensions[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    TArray<void*> EditConditions; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x0140
    TWeakObjectPtr<void> LocalPlayer; // 0x015C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0164
    TArray<void*> Components; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, SettingParent) == 136, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::SettingParent");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, OwningRegistry) == 144, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::OwningRegistry");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, DisplayName) == 176, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::DisplayName");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, DescriptionRichText) == 192, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::DescriptionRichText");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, CustomExtensions) == 248, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::CustomExtensions");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, EditConditions) == 304, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::EditConditions");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, LocalPlayer) == 348, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::LocalPlayer");
static_assert(offsetof(UFortSettingValueDiscreteSupervisedScheduleToggle, Components) == 360, "Offset mismatch for UFortSettingValueDiscreteSupervisedScheduleToggle::Components");

// /Script/CilantroUI.FortSettingValueDiscreteThymeToggle
// Kind: Class; super: FortSettingValueDiscrete
class UFortSettingValueDiscreteThymeToggle
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TWeakObjectPtr<void> SettingParent; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwningRegistry; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0098
    std::uint8_t DisplayName[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t DescriptionRichText[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CustomExtensions[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    TArray<void*> EditConditions; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x0140
    TWeakObjectPtr<void> LocalPlayer; // 0x015C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0164
    TArray<void*> Components; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, SettingParent) == 136, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::SettingParent");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, OwningRegistry) == 144, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::OwningRegistry");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, DisplayName) == 176, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::DisplayName");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, DescriptionRichText) == 192, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::DescriptionRichText");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, CustomExtensions) == 248, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::CustomExtensions");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, EditConditions) == 304, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::EditConditions");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, LocalPlayer) == 348, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::LocalPlayer");
static_assert(offsetof(UFortSettingValueDiscreteThymeToggle, Components) == 360, "Offset mismatch for UFortSettingValueDiscreteThymeToggle::Components");

// /Script/CilantroUI.FortTimeLimitPanelStw
// Kind: Class; super: CommonActivatableWidget
class UFortTimeLimitPanelStw
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ViewTimeLimitPanel; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTimeLimitPanelStw, ViewTimeLimitPanel) == 1184, "Offset mismatch for UFortTimeLimitPanelStw::ViewTimeLimitPanel");

// /Script/CilantroUI.FortViewTimeLimitPanel
// Kind: Class; super: CommonActivatableWidget
class UFortViewTimeLimitPanel
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

static_assert(offsetof(UFortViewTimeLimitPanel, bIsBackHandler) == 816, "Offset mismatch for UFortViewTimeLimitPanel::bIsBackHandler");
static_assert(offsetof(UFortViewTimeLimitPanel, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortViewTimeLimitPanel::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortViewTimeLimitPanel, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortViewTimeLimitPanel::OverrideBackActionDisplayName");
static_assert(offsetof(UFortViewTimeLimitPanel, bAutoActivate) == 840, "Offset mismatch for UFortViewTimeLimitPanel::bAutoActivate");
static_assert(offsetof(UFortViewTimeLimitPanel, bSupportsActivationFocus) == 841, "Offset mismatch for UFortViewTimeLimitPanel::bSupportsActivationFocus");
static_assert(offsetof(UFortViewTimeLimitPanel, bIsModal) == 842, "Offset mismatch for UFortViewTimeLimitPanel::bIsModal");
static_assert(offsetof(UFortViewTimeLimitPanel, bAutoRestoreFocus) == 843, "Offset mismatch for UFortViewTimeLimitPanel::bAutoRestoreFocus");
static_assert(offsetof(UFortViewTimeLimitPanel, bOverrideActionDomain) == 844, "Offset mismatch for UFortViewTimeLimitPanel::bOverrideActionDomain");
static_assert(offsetof(UFortViewTimeLimitPanel, InputMapping) == 848, "Offset mismatch for UFortViewTimeLimitPanel::InputMapping");
static_assert(offsetof(UFortViewTimeLimitPanel, InputMappingPriority) == 856, "Offset mismatch for UFortViewTimeLimitPanel::InputMappingPriority");
static_assert(offsetof(UFortViewTimeLimitPanel, InputModeTagsToAdd) == 864, "Offset mismatch for UFortViewTimeLimitPanel::InputModeTagsToAdd");
static_assert(offsetof(UFortViewTimeLimitPanel, InputModeTagsToRemove) == 896, "Offset mismatch for UFortViewTimeLimitPanel::InputModeTagsToRemove");
static_assert(offsetof(UFortViewTimeLimitPanel, ActionDomainOverride) == 928, "Offset mismatch for UFortViewTimeLimitPanel::ActionDomainOverride");
static_assert(offsetof(UFortViewTimeLimitPanel, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortViewTimeLimitPanel::BP_OnWidgetActivated");
static_assert(offsetof(UFortViewTimeLimitPanel, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortViewTimeLimitPanel::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortViewTimeLimitPanel, bIsActive) == 992, "Offset mismatch for UFortViewTimeLimitPanel::bIsActive");
static_assert(offsetof(UFortViewTimeLimitPanel, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortViewTimeLimitPanel::VisibilityBoundWidgets");
static_assert(offsetof(UFortViewTimeLimitPanel, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortViewTimeLimitPanel::bSetVisibilityOnActivated");
static_assert(offsetof(UFortViewTimeLimitPanel, ActivatedVisibility) == 1177, "Offset mismatch for UFortViewTimeLimitPanel::ActivatedVisibility");
static_assert(offsetof(UFortViewTimeLimitPanel, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortViewTimeLimitPanel::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortViewTimeLimitPanel, DeactivatedVisibility) == 1179, "Offset mismatch for UFortViewTimeLimitPanel::DeactivatedVisibility");

// /Script/CilantroUI.PlayerPlaytimeVM
// Kind: Class; super: FortPerUserViewModel
class UPlayerPlaytimeVM
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    float ElapsedSleepTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlayState; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t PreviousPlayState; // 0x00DD (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00DE
    double RequestMoreTimeThresholdMinutes; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    FMulticastInlineDelegate BP_OnGrantPlaytimeRequestStatusUpdate; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnRequestAdditionalPlaytimeStatusUpdate; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPlayerPlaytimeVM, ElapsedSleepTime) == 216, "Offset mismatch for UPlayerPlaytimeVM::ElapsedSleepTime");
static_assert(offsetof(UPlayerPlaytimeVM, PlayState) == 220, "Offset mismatch for UPlayerPlaytimeVM::PlayState");
static_assert(offsetof(UPlayerPlaytimeVM, PreviousPlayState) == 221, "Offset mismatch for UPlayerPlaytimeVM::PreviousPlayState");
static_assert(offsetof(UPlayerPlaytimeVM, RequestMoreTimeThresholdMinutes) == 224, "Offset mismatch for UPlayerPlaytimeVM::RequestMoreTimeThresholdMinutes");
static_assert(offsetof(UPlayerPlaytimeVM, BP_OnGrantPlaytimeRequestStatusUpdate) == 232, "Offset mismatch for UPlayerPlaytimeVM::BP_OnGrantPlaytimeRequestStatusUpdate");
static_assert(offsetof(UPlayerPlaytimeVM, BP_OnRequestAdditionalPlaytimeStatusUpdate) == 248, "Offset mismatch for UPlayerPlaytimeVM::BP_OnRequestAdditionalPlaytimeStatusUpdate");

// /Script/CilantroUI.TimeReportsManagementScreen
// Kind: Class; super: FortPinScreen
class UTimeReportsManagementScreen
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* Panel_TimeReportSettings; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Details_Settings; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* PlaytimeReportSettingRegistry; // 0x0580 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTimeReportsManagementScreen, Panel_TimeReportSettings) == 1392, "Offset mismatch for UTimeReportsManagementScreen::Panel_TimeReportSettings");
static_assert(offsetof(UTimeReportsManagementScreen, Details_Settings) == 1400, "Offset mismatch for UTimeReportsManagementScreen::Details_Settings");
static_assert(offsetof(UTimeReportsManagementScreen, PlaytimeReportSettingRegistry) == 1408, "Offset mismatch for UTimeReportsManagementScreen::PlaytimeReportSettingRegistry");
