/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarUI
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarUI.FortDelMarCreativeUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UFortDelMarCreativeUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* CachedFortDelMarVehicle; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* CreativeFortDelMarUI; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VehicleInAirTag[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarCreativeUIDirector, CachedFortDelMarVehicle) == 672, "Offset mismatch for UFortDelMarCreativeUIDirector::CachedFortDelMarVehicle");
static_assert(offsetof(UFortDelMarCreativeUIDirector, CreativeFortDelMarUI) == 680, "Offset mismatch for UFortDelMarCreativeUIDirector::CreativeFortDelMarUI");
static_assert(offsetof(UFortDelMarCreativeUIDirector, VehicleInAirTag) == 688, "Offset mismatch for UFortDelMarCreativeUIDirector::VehicleInAirTag");

// /Script/FortDelMarUI.FortDelMarDialogBase
// Kind: Class; super: CommonActivatableWidget
class UFortDelMarDialogBase
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

static_assert(offsetof(UFortDelMarDialogBase, bIsBackHandler) == 816, "Offset mismatch for UFortDelMarDialogBase::bIsBackHandler");
static_assert(offsetof(UFortDelMarDialogBase, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortDelMarDialogBase::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortDelMarDialogBase, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortDelMarDialogBase::OverrideBackActionDisplayName");
static_assert(offsetof(UFortDelMarDialogBase, bAutoActivate) == 840, "Offset mismatch for UFortDelMarDialogBase::bAutoActivate");
static_assert(offsetof(UFortDelMarDialogBase, bSupportsActivationFocus) == 841, "Offset mismatch for UFortDelMarDialogBase::bSupportsActivationFocus");
static_assert(offsetof(UFortDelMarDialogBase, bIsModal) == 842, "Offset mismatch for UFortDelMarDialogBase::bIsModal");
static_assert(offsetof(UFortDelMarDialogBase, bAutoRestoreFocus) == 843, "Offset mismatch for UFortDelMarDialogBase::bAutoRestoreFocus");
static_assert(offsetof(UFortDelMarDialogBase, bOverrideActionDomain) == 844, "Offset mismatch for UFortDelMarDialogBase::bOverrideActionDomain");
static_assert(offsetof(UFortDelMarDialogBase, InputMapping) == 848, "Offset mismatch for UFortDelMarDialogBase::InputMapping");
static_assert(offsetof(UFortDelMarDialogBase, InputMappingPriority) == 856, "Offset mismatch for UFortDelMarDialogBase::InputMappingPriority");
static_assert(offsetof(UFortDelMarDialogBase, InputModeTagsToAdd) == 864, "Offset mismatch for UFortDelMarDialogBase::InputModeTagsToAdd");
static_assert(offsetof(UFortDelMarDialogBase, InputModeTagsToRemove) == 896, "Offset mismatch for UFortDelMarDialogBase::InputModeTagsToRemove");
static_assert(offsetof(UFortDelMarDialogBase, ActionDomainOverride) == 928, "Offset mismatch for UFortDelMarDialogBase::ActionDomainOverride");
static_assert(offsetof(UFortDelMarDialogBase, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortDelMarDialogBase::BP_OnWidgetActivated");
static_assert(offsetof(UFortDelMarDialogBase, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortDelMarDialogBase::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortDelMarDialogBase, bIsActive) == 992, "Offset mismatch for UFortDelMarDialogBase::bIsActive");
static_assert(offsetof(UFortDelMarDialogBase, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortDelMarDialogBase::VisibilityBoundWidgets");
static_assert(offsetof(UFortDelMarDialogBase, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortDelMarDialogBase::bSetVisibilityOnActivated");
static_assert(offsetof(UFortDelMarDialogBase, ActivatedVisibility) == 1177, "Offset mismatch for UFortDelMarDialogBase::ActivatedVisibility");
static_assert(offsetof(UFortDelMarDialogBase, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortDelMarDialogBase::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortDelMarDialogBase, DeactivatedVisibility) == 1179, "Offset mismatch for UFortDelMarDialogBase::DeactivatedVisibility");

// /Script/FortDelMarUI.FortDelMarDialogHelper
// Kind: Class; super: Object
class UFortDelMarDialogHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DialogMapping; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarDialogHelper, DialogMapping) == 40, "Offset mismatch for UFortDelMarDialogHelper::DialogMapping");

// /Script/FortDelMarUI.FortDelMarUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UFortDelMarUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* DialogHelperClass; // 0x02A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02A8
    void* DialogHelper; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarUIDirector, DialogHelperClass) == 672, "Offset mismatch for UFortDelMarUIDirector::DialogHelperClass");
static_assert(offsetof(UFortDelMarUIDirector, DialogHelper) == 688, "Offset mismatch for UFortDelMarUIDirector::DialogHelper");

// /Script/FortDelMarUI.FortDelMarUserWidget
// Kind: Class; super: FortHUDElementWidget
class UFortDelMarUserWidget
{
public:
    std::uint8_t Pad_0000[0x3C8]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x03C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransitionerHiddenVisibility; // 0x03C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysReverseInterruptedAnimations; // 0x03CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x03CB
    void* WidgetTransitioner; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionIn; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionOut; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarUserWidget, InitialTransitionStatus) == 968, "Offset mismatch for UFortDelMarUserWidget::InitialTransitionStatus");
static_assert(offsetof(UFortDelMarUserWidget, TransitionerHiddenVisibility) == 969, "Offset mismatch for UFortDelMarUserWidget::TransitionerHiddenVisibility");
static_assert(offsetof(UFortDelMarUserWidget, bAlwaysReverseInterruptedAnimations) == 970, "Offset mismatch for UFortDelMarUserWidget::bAlwaysReverseInterruptedAnimations");
static_assert(offsetof(UFortDelMarUserWidget, WidgetTransitioner) == 976, "Offset mismatch for UFortDelMarUserWidget::WidgetTransitioner");
static_assert(offsetof(UFortDelMarUserWidget, NormalTransitionIn) == 984, "Offset mismatch for UFortDelMarUserWidget::NormalTransitionIn");
static_assert(offsetof(UFortDelMarUserWidget, NormalTransitionOut) == 992, "Offset mismatch for UFortDelMarUserWidget::NormalTransitionOut");

// /Script/FortDelMarUI.FortDelMarVehicleViewModel
// Kind: Class; super: FortDelMarViewModelBase
class UFortDelMarVehicleViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHasValidData; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurboEnabled; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007A
    std::uint8_t bIsDrifting; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDriftingRight; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWheelsOnGround; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x007F (Size: 0x1, Type: BoolProperty)
    TArray<void*> DriftRanges; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    float DriftSlipAngleRatio; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriftSteerState; // 0x0094 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0095
    float PotentialDriftBoostPercent; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float StartlineBoostBonus; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedometerState; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A1
    float CurrentSpeed; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float NumTurboMaxCharges; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float NumTurboCurrentCharges; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t TurboBonusZoneState; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00B1
    float UnderthrustPercent; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    double MissedCheckpointDemoTimestamp; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    double ReturnToTrackDemoTimestamp; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsHeadingWrongWay; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToggleThrottle; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x00CA
    float ThrottleInputValue; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDemolished; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00D1
    float DemolishActionPressedPercent; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDemolishActionEnabled; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x00D9
    TWeakObjectPtr<void> PlayerState; // 0x00DC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentVehicle; // 0x00E4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> GlobalInputDisabler; // 0x00EC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarVehicleViewModel, bHasValidData) == 120, "Offset mismatch for UFortDelMarVehicleViewModel::bHasValidData");
static_assert(offsetof(UFortDelMarVehicleViewModel, bIsTurboEnabled) == 121, "Offset mismatch for UFortDelMarVehicleViewModel::bIsTurboEnabled");
static_assert(offsetof(UFortDelMarVehicleViewModel, bIsDrifting) == 124, "Offset mismatch for UFortDelMarVehicleViewModel::bIsDrifting");
static_assert(offsetof(UFortDelMarVehicleViewModel, bIsDriftingRight) == 125, "Offset mismatch for UFortDelMarVehicleViewModel::bIsDriftingRight");
static_assert(offsetof(UFortDelMarVehicleViewModel, bWheelsOnGround) == 126, "Offset mismatch for UFortDelMarVehicleViewModel::bWheelsOnGround");
static_assert(offsetof(UFortDelMarVehicleViewModel, bAnyWheelsOnGround) == 127, "Offset mismatch for UFortDelMarVehicleViewModel::bAnyWheelsOnGround");
static_assert(offsetof(UFortDelMarVehicleViewModel, DriftRanges) == 128, "Offset mismatch for UFortDelMarVehicleViewModel::DriftRanges");
static_assert(offsetof(UFortDelMarVehicleViewModel, DriftSlipAngleRatio) == 144, "Offset mismatch for UFortDelMarVehicleViewModel::DriftSlipAngleRatio");
static_assert(offsetof(UFortDelMarVehicleViewModel, DriftSteerState) == 148, "Offset mismatch for UFortDelMarVehicleViewModel::DriftSteerState");
static_assert(offsetof(UFortDelMarVehicleViewModel, PotentialDriftBoostPercent) == 152, "Offset mismatch for UFortDelMarVehicleViewModel::PotentialDriftBoostPercent");
static_assert(offsetof(UFortDelMarVehicleViewModel, StartlineBoostBonus) == 156, "Offset mismatch for UFortDelMarVehicleViewModel::StartlineBoostBonus");
static_assert(offsetof(UFortDelMarVehicleViewModel, SpeedometerState) == 160, "Offset mismatch for UFortDelMarVehicleViewModel::SpeedometerState");
static_assert(offsetof(UFortDelMarVehicleViewModel, CurrentSpeed) == 164, "Offset mismatch for UFortDelMarVehicleViewModel::CurrentSpeed");
static_assert(offsetof(UFortDelMarVehicleViewModel, NumTurboMaxCharges) == 168, "Offset mismatch for UFortDelMarVehicleViewModel::NumTurboMaxCharges");
static_assert(offsetof(UFortDelMarVehicleViewModel, NumTurboCurrentCharges) == 172, "Offset mismatch for UFortDelMarVehicleViewModel::NumTurboCurrentCharges");
static_assert(offsetof(UFortDelMarVehicleViewModel, TurboBonusZoneState) == 176, "Offset mismatch for UFortDelMarVehicleViewModel::TurboBonusZoneState");
static_assert(offsetof(UFortDelMarVehicleViewModel, UnderthrustPercent) == 180, "Offset mismatch for UFortDelMarVehicleViewModel::UnderthrustPercent");
static_assert(offsetof(UFortDelMarVehicleViewModel, MissedCheckpointDemoTimestamp) == 184, "Offset mismatch for UFortDelMarVehicleViewModel::MissedCheckpointDemoTimestamp");
static_assert(offsetof(UFortDelMarVehicleViewModel, ReturnToTrackDemoTimestamp) == 192, "Offset mismatch for UFortDelMarVehicleViewModel::ReturnToTrackDemoTimestamp");
static_assert(offsetof(UFortDelMarVehicleViewModel, bIsHeadingWrongWay) == 200, "Offset mismatch for UFortDelMarVehicleViewModel::bIsHeadingWrongWay");
static_assert(offsetof(UFortDelMarVehicleViewModel, bToggleThrottle) == 201, "Offset mismatch for UFortDelMarVehicleViewModel::bToggleThrottle");
static_assert(offsetof(UFortDelMarVehicleViewModel, ThrottleInputValue) == 204, "Offset mismatch for UFortDelMarVehicleViewModel::ThrottleInputValue");
static_assert(offsetof(UFortDelMarVehicleViewModel, bDemolished) == 208, "Offset mismatch for UFortDelMarVehicleViewModel::bDemolished");
static_assert(offsetof(UFortDelMarVehicleViewModel, DemolishActionPressedPercent) == 212, "Offset mismatch for UFortDelMarVehicleViewModel::DemolishActionPressedPercent");
static_assert(offsetof(UFortDelMarVehicleViewModel, bDemolishActionEnabled) == 216, "Offset mismatch for UFortDelMarVehicleViewModel::bDemolishActionEnabled");
static_assert(offsetof(UFortDelMarVehicleViewModel, PlayerState) == 220, "Offset mismatch for UFortDelMarVehicleViewModel::PlayerState");
static_assert(offsetof(UFortDelMarVehicleViewModel, CurrentVehicle) == 228, "Offset mismatch for UFortDelMarVehicleViewModel::CurrentVehicle");
static_assert(offsetof(UFortDelMarVehicleViewModel, GlobalInputDisabler) == 236, "Offset mismatch for UFortDelMarVehicleViewModel::GlobalInputDisabler");

// /Script/FortDelMarUI.FortDelMarViewModelBase
// Kind: Class; super: FortPerUserViewModel
class UFortDelMarViewModelBase
{
public:
    std::uint8_t Opaque[1];
};
