/**
 * decamp dumper generated SDK
 * Package: /Script/DelMarUI
 */
#pragma once
#include "Basic.h"

// /Script/DelMarUI.DelMarKeyPair
// Kind: ScriptStruct; super: none
struct FDelMarKeyPair
{
public:
    std::uint8_t KBMKey[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t GamepadKey[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDelMarKeyPair, KBMKey) == 0, "Offset mismatch for FDelMarKeyPair::KBMKey");
static_assert(offsetof(FDelMarKeyPair, GamepadKey) == 24, "Offset mismatch for FDelMarKeyPair::GamepadKey");

// /Script/DelMarUI.DelMarPlayerIndicatorData
// Kind: ScriptStruct; super: none
struct FDelMarPlayerIndicatorData
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float LateralRatio; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t ScreenPosition[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float SquareDistance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t VerticalHint; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRearIndicator; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShow; // 0x0026 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarPlayerIndicatorData, PlayerState) == 0, "Offset mismatch for FDelMarPlayerIndicatorData::PlayerState");
static_assert(offsetof(FDelMarPlayerIndicatorData, LateralRatio) == 8, "Offset mismatch for FDelMarPlayerIndicatorData::LateralRatio");
static_assert(offsetof(FDelMarPlayerIndicatorData, ScreenPosition) == 16, "Offset mismatch for FDelMarPlayerIndicatorData::ScreenPosition");
static_assert(offsetof(FDelMarPlayerIndicatorData, SquareDistance) == 32, "Offset mismatch for FDelMarPlayerIndicatorData::SquareDistance");
static_assert(offsetof(FDelMarPlayerIndicatorData, VerticalHint) == 36, "Offset mismatch for FDelMarPlayerIndicatorData::VerticalHint");
static_assert(offsetof(FDelMarPlayerIndicatorData, bRearIndicator) == 37, "Offset mismatch for FDelMarPlayerIndicatorData::bRearIndicator");
static_assert(offsetof(FDelMarPlayerIndicatorData, bShow) == 38, "Offset mismatch for FDelMarPlayerIndicatorData::bShow");

// /Script/DelMarUI.DelMarReactiveWidgetAnimation
// Kind: ScriptStruct; super: none
struct FDelMarReactiveWidgetAnimation
{
public:
    std::uint8_t Intro[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName Outro; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDelMarReactiveWidgetAnimation, Intro) == 0, "Offset mismatch for FDelMarReactiveWidgetAnimation::Intro");
static_assert(offsetof(FDelMarReactiveWidgetAnimation, Outro) == 4, "Offset mismatch for FDelMarReactiveWidgetAnimation::Outro");

// /Script/DelMarUI.DelMarSectionData
// Kind: ScriptStruct; super: none
struct FDelMarSectionData
{
public:
    std::int32_t SectionIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double LapDurationAtSection; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double DeltaTime; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDelMarSectionData, SectionIndex) == 0, "Offset mismatch for FDelMarSectionData::SectionIndex");
static_assert(offsetof(FDelMarSectionData, LapDurationAtSection) == 8, "Offset mismatch for FDelMarSectionData::LapDurationAtSection");
static_assert(offsetof(FDelMarSectionData, DeltaTime) == 16, "Offset mismatch for FDelMarSectionData::DeltaTime");

// /Script/DelMarUI.DelMarTouchActionButtonStateData
// Kind: ScriptStruct; super: none
struct FDelMarTouchActionButtonStateData
{
public:
    std::uint8_t IconBrush[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x00B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ButtonVisibility; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCancelInputOnEnter; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelInputOnLeave; // 0x0162 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarTouchActionButtonStateData, IconBrush) == 0, "Offset mismatch for FDelMarTouchActionButtonStateData::IconBrush");
static_assert(offsetof(FDelMarTouchActionButtonStateData, BackgroundBrush) == 176, "Offset mismatch for FDelMarTouchActionButtonStateData::BackgroundBrush");
static_assert(offsetof(FDelMarTouchActionButtonStateData, ButtonVisibility) == 352, "Offset mismatch for FDelMarTouchActionButtonStateData::ButtonVisibility");
static_assert(offsetof(FDelMarTouchActionButtonStateData, bCancelInputOnEnter) == 353, "Offset mismatch for FDelMarTouchActionButtonStateData::bCancelInputOnEnter");
static_assert(offsetof(FDelMarTouchActionButtonStateData, bCancelInputOnLeave) == 354, "Offset mismatch for FDelMarTouchActionButtonStateData::bCancelInputOnLeave");

// /Script/DelMarUI.DelMarTouchInputDefinition
// Kind: ScriptStruct; super: none
struct FDelMarTouchInputDefinition
{
public:
    void* InputAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Modifiers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Triggers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseYAxis; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDelMarTouchInputDefinition, InputAction) == 0, "Offset mismatch for FDelMarTouchInputDefinition::InputAction");
static_assert(offsetof(FDelMarTouchInputDefinition, Modifiers) == 8, "Offset mismatch for FDelMarTouchInputDefinition::Modifiers");
static_assert(offsetof(FDelMarTouchInputDefinition, Triggers) == 24, "Offset mismatch for FDelMarTouchInputDefinition::Triggers");
static_assert(offsetof(FDelMarTouchInputDefinition, bUseYAxis) == 40, "Offset mismatch for FDelMarTouchInputDefinition::bUseYAxis");

// /Script/DelMarUI.DelMarActionWidget
// Kind: Class; super: Widget
class UDelMarActionWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    FMulticastInlineDelegate OnInputMethodChanged; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0178
    std::uint8_t ProgressMaterialBrush[0xB0]; // 0x0180 (Size: 0xB0, Type: StructProperty)
    FName ProgressMaterialParam; // 0x0230 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0238
    std::uint8_t IconRimBrush[0xB0]; // 0x0240 (Size: 0xB0, Type: StructProperty)
    TArray<void*> InputActions; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    void* EnhancedInputAction; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0308
    void* ProgressDynamicMaterial; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarActionWidget, OnInputMethodChanged) == 360, "Offset mismatch for UDelMarActionWidget::OnInputMethodChanged");
static_assert(offsetof(UDelMarActionWidget, ProgressMaterialBrush) == 384, "Offset mismatch for UDelMarActionWidget::ProgressMaterialBrush");
static_assert(offsetof(UDelMarActionWidget, ProgressMaterialParam) == 560, "Offset mismatch for UDelMarActionWidget::ProgressMaterialParam");
static_assert(offsetof(UDelMarActionWidget, IconRimBrush) == 576, "Offset mismatch for UDelMarActionWidget::IconRimBrush");
static_assert(offsetof(UDelMarActionWidget, InputActions) == 752, "Offset mismatch for UDelMarActionWidget::InputActions");
static_assert(offsetof(UDelMarActionWidget, EnhancedInputAction) == 768, "Offset mismatch for UDelMarActionWidget::EnhancedInputAction");
static_assert(offsetof(UDelMarActionWidget, ProgressDynamicMaterial) == 784, "Offset mismatch for UDelMarActionWidget::ProgressDynamicMaterial");

// /Script/DelMarUI.DelMarAttachedWidgetActor
// Kind: Class; super: Actor
class UDelMarAttachedWidgetActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float DriftFollowDampening; // 0x0270 (Size: 0x4, Type: FloatProperty)
    float WallFollowDampening; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float RotateDampeningRate; // 0x0278 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> ViewPlayerState; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AttachedTarget; // 0x0284 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AttachedVehicle; // 0x028C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CameraManager; // 0x0294 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x029C
    void* AttachmentBaseComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* SpeedometerWidget; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* DriftBoostWidget; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* UnderthrustWidget; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarAttachedWidgetActor, DriftFollowDampening) == 624, "Offset mismatch for UDelMarAttachedWidgetActor::DriftFollowDampening");
static_assert(offsetof(UDelMarAttachedWidgetActor, WallFollowDampening) == 628, "Offset mismatch for UDelMarAttachedWidgetActor::WallFollowDampening");
static_assert(offsetof(UDelMarAttachedWidgetActor, RotateDampeningRate) == 632, "Offset mismatch for UDelMarAttachedWidgetActor::RotateDampeningRate");
static_assert(offsetof(UDelMarAttachedWidgetActor, ViewPlayerState) == 636, "Offset mismatch for UDelMarAttachedWidgetActor::ViewPlayerState");
static_assert(offsetof(UDelMarAttachedWidgetActor, AttachedTarget) == 644, "Offset mismatch for UDelMarAttachedWidgetActor::AttachedTarget");
static_assert(offsetof(UDelMarAttachedWidgetActor, AttachedVehicle) == 652, "Offset mismatch for UDelMarAttachedWidgetActor::AttachedVehicle");
static_assert(offsetof(UDelMarAttachedWidgetActor, CameraManager) == 660, "Offset mismatch for UDelMarAttachedWidgetActor::CameraManager");
static_assert(offsetof(UDelMarAttachedWidgetActor, AttachmentBaseComponent) == 672, "Offset mismatch for UDelMarAttachedWidgetActor::AttachmentBaseComponent");
static_assert(offsetof(UDelMarAttachedWidgetActor, SpeedometerWidget) == 680, "Offset mismatch for UDelMarAttachedWidgetActor::SpeedometerWidget");
static_assert(offsetof(UDelMarAttachedWidgetActor, DriftBoostWidget) == 688, "Offset mismatch for UDelMarAttachedWidgetActor::DriftBoostWidget");
static_assert(offsetof(UDelMarAttachedWidgetActor, UnderthrustWidget) == 696, "Offset mismatch for UDelMarAttachedWidgetActor::UnderthrustWidget");

// /Script/DelMarUI.DelMarAttachedWidgetComponent
// Kind: Class; super: ControllerComponent
class UDelMarAttachedWidgetComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AttachedWidgetActorsClass; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttachedWidgetActors; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarAttachedWidgetComponent, AttachedWidgetActorsClass) == 192, "Offset mismatch for UDelMarAttachedWidgetComponent::AttachedWidgetActorsClass");
static_assert(offsetof(UDelMarAttachedWidgetComponent, AttachedWidgetActors) == 208, "Offset mismatch for UDelMarAttachedWidgetComponent::AttachedWidgetActors");

// /Script/DelMarUI.DelMarBladeMenuContainer
// Kind: Class; super: DelMarScreenBase
class UDelMarBladeMenuContainer
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    void* DualBladeMenu; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseBladeMenuTriggerTag[0x1]; // 0x0528 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarBladeMenuContainer, DualBladeMenu) == 1312, "Offset mismatch for UDelMarBladeMenuContainer::DualBladeMenu");
static_assert(offsetof(UDelMarBladeMenuContainer, CloseBladeMenuTriggerTag) == 1320, "Offset mismatch for UDelMarBladeMenuContainer::CloseBladeMenuTriggerTag");

// /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent
// Kind: Class; super: UIStateComponent
class UDelMarBladeMenuTriggerUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* HUDContext; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarBladeMenuTriggerUIStateComponent, Configuration) == 72, "Offset mismatch for UDelMarBladeMenuTriggerUIStateComponent::Configuration");
static_assert(offsetof(UDelMarBladeMenuTriggerUIStateComponent, HUDContext) == 80, "Offset mismatch for UDelMarBladeMenuTriggerUIStateComponent::HUDContext");

// /Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UDelMarBladeMenuTriggerUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BladeMenuTriggerTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarBladeMenuTriggerUIStateComponentConfiguration, BladeMenuTriggerTag) == 40, "Offset mismatch for UDelMarBladeMenuTriggerUIStateComponentConfiguration::BladeMenuTriggerTag");

// /Script/DelMarUI.DelMarBoundActionBar
// Kind: Class; super: CommonBoundActionBar
class UDelMarBoundActionBar
{
public:
    std::uint8_t Pad_0000[0x208]; // 0x0000
    void* ActionButtonClass; // 0x0208 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDisplayOwningPlayerActionsOnly; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreDuplicateActions; // 0x0211 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0212
    FMulticastInlineDelegate OnActionBarUpdated; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarBoundActionBar, ActionButtonClass) == 520, "Offset mismatch for UDelMarBoundActionBar::ActionButtonClass");
static_assert(offsetof(UDelMarBoundActionBar, bDisplayOwningPlayerActionsOnly) == 528, "Offset mismatch for UDelMarBoundActionBar::bDisplayOwningPlayerActionsOnly");
static_assert(offsetof(UDelMarBoundActionBar, bIgnoreDuplicateActions) == 529, "Offset mismatch for UDelMarBoundActionBar::bIgnoreDuplicateActions");
static_assert(offsetof(UDelMarBoundActionBar, OnActionBarUpdated) == 536, "Offset mismatch for UDelMarBoundActionBar::OnActionBarUpdated");

// /Script/DelMarUI.DelMarBoundActionButton
// Kind: Class; super: CommonButtonBase
class UDelMarBoundActionButton
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    FText Text; // 0x15A8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UDelMarBoundActionButton, Text) == 5544, "Offset mismatch for UDelMarBoundActionButton::Text");

// /Script/DelMarUI.DelMarCheckpointTimer
// Kind: Class; super: DelMarScreenBase
class UDelMarCheckpointTimer
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    void* Text_LapCount; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Text_CheckpointIndex; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Text_Timestamp; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Text_LapTimestamp; // 0x0538 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCheckpointTimer, Text_LapCount) == 1312, "Offset mismatch for UDelMarCheckpointTimer::Text_LapCount");
static_assert(offsetof(UDelMarCheckpointTimer, Text_CheckpointIndex) == 1320, "Offset mismatch for UDelMarCheckpointTimer::Text_CheckpointIndex");
static_assert(offsetof(UDelMarCheckpointTimer, Text_Timestamp) == 1328, "Offset mismatch for UDelMarCheckpointTimer::Text_Timestamp");
static_assert(offsetof(UDelMarCheckpointTimer, Text_LapTimestamp) == 1336, "Offset mismatch for UDelMarCheckpointTimer::Text_LapTimestamp");

// /Script/DelMarUI.DelMarCheckpointTrackerEntryWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarCheckpointTrackerEntryWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* AnimTransitionIn; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarCheckpointTrackerEntryWidget, AnimTransitionIn) == 936, "Offset mismatch for UDelMarCheckpointTrackerEntryWidget::AnimTransitionIn");

// /Script/DelMarUI.DelMarCheckpointTrackerWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarCheckpointTrackerWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* CheckpointTrackerEntryClass; // 0x03A8 (Size: 0x8, Type: ClassProperty)
    std::int32_t NumDesignerPreviewEntries; // 0x03B0 (Size: 0x4, Type: IntProperty)
    float EntrySpacing; // 0x03B4 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxEntriesToDisplay; // 0x03B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03BC
    void* CheckpointEntryOverlay; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* EdgeFadeRetainerBox; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* TrackerSizeBox; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DisplayedCheckpointTrackerEntries; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarCheckpointTrackerWidget, CheckpointTrackerEntryClass) == 936, "Offset mismatch for UDelMarCheckpointTrackerWidget::CheckpointTrackerEntryClass");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, NumDesignerPreviewEntries) == 944, "Offset mismatch for UDelMarCheckpointTrackerWidget::NumDesignerPreviewEntries");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, EntrySpacing) == 948, "Offset mismatch for UDelMarCheckpointTrackerWidget::EntrySpacing");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, MaxEntriesToDisplay) == 952, "Offset mismatch for UDelMarCheckpointTrackerWidget::MaxEntriesToDisplay");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, CheckpointEntryOverlay) == 960, "Offset mismatch for UDelMarCheckpointTrackerWidget::CheckpointEntryOverlay");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, EdgeFadeRetainerBox) == 968, "Offset mismatch for UDelMarCheckpointTrackerWidget::EdgeFadeRetainerBox");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, TrackerSizeBox) == 976, "Offset mismatch for UDelMarCheckpointTrackerWidget::TrackerSizeBox");
static_assert(offsetof(UDelMarCheckpointTrackerWidget, DisplayedCheckpointTrackerEntries) == 984, "Offset mismatch for UDelMarCheckpointTrackerWidget::DisplayedCheckpointTrackerEntries");

// /Script/DelMarUI.DelMarCountdownTimerWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarCountdownTimerWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* TextBlock_RemainingTime; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    double InitialCoundownTime; // 0x03B0 (Size: 0x8, Type: DoubleProperty)
    FMulticastInlineDelegate OnCountdownTimeChanged; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCountdownTimeSet; // 0x03C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCountdownTimeEnded; // 0x03D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarCountdownTimerWidget, TextBlock_RemainingTime) == 936, "Offset mismatch for UDelMarCountdownTimerWidget::TextBlock_RemainingTime");
static_assert(offsetof(UDelMarCountdownTimerWidget, InitialCoundownTime) == 944, "Offset mismatch for UDelMarCountdownTimerWidget::InitialCoundownTime");
static_assert(offsetof(UDelMarCountdownTimerWidget, OnCountdownTimeChanged) == 952, "Offset mismatch for UDelMarCountdownTimerWidget::OnCountdownTimeChanged");
static_assert(offsetof(UDelMarCountdownTimerWidget, OnCountdownTimeSet) == 968, "Offset mismatch for UDelMarCountdownTimerWidget::OnCountdownTimeSet");
static_assert(offsetof(UDelMarCountdownTimerWidget, OnCountdownTimeEnded) == 984, "Offset mismatch for UDelMarCountdownTimerWidget::OnCountdownTimeEnded");

// /Script/DelMarUI.DelMarCreativeUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UDelMarCreativeUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* CachedDelMarVehicle; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* CreativeDelMarUI; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VehicleInAirTag[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarCreativeUIDirector, CachedDelMarVehicle) == 672, "Offset mismatch for UDelMarCreativeUIDirector::CachedDelMarVehicle");
static_assert(offsetof(UDelMarCreativeUIDirector, CreativeDelMarUI) == 680, "Offset mismatch for UDelMarCreativeUIDirector::CreativeDelMarUI");
static_assert(offsetof(UDelMarCreativeUIDirector, VehicleInAirTag) == 688, "Offset mismatch for UDelMarCreativeUIDirector::VehicleInAirTag");

// /Script/DelMarUI.DelMarDebugCountdown
// Kind: Class; super: DelMarScreenBase
class UDelMarDebugCountdown
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    void* CountdownText; // 0x0520 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDebugCountdown, CountdownText) == 1312, "Offset mismatch for UDelMarDebugCountdown::CountdownText");

// /Script/DelMarUI.DelMarDebugGameplayTrackEntry
// Kind: Class; super: DelMarDebugTrackEntry
class UDelMarDebugGameplayTrackEntry
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    void* GameplayTrackListScene; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarDebugGameplayTrackEntry, GameplayTrackListScene) == 800, "Offset mismatch for UDelMarDebugGameplayTrackEntry::GameplayTrackListScene");

// /Script/DelMarUI.DelMarDebugPointWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarDebugPointWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    FString PlayerPointsString; // 0x03A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarDebugPointWidget, PlayerPointsString) == 936, "Offset mismatch for UDelMarDebugPointWidget::PlayerPointsString");

// /Script/DelMarUI.DelMarDebugRubberbandingWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarDebugRubberbandingWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t bRubberbandingEnabled; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03A9
    float PackDistance; // 0x03AC (Size: 0x4, Type: FloatProperty)
    float MinPackDistance; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    float MaxPackDistance; // 0x03B4 (Size: 0x4, Type: FloatProperty)
    float DistanceToPack; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromPack; // 0x03BC (Size: 0x4, Type: FloatProperty)
    float MaxDistanceFromPack; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x03C4 (Size: 0x4, Type: FloatProperty)
    float StableSpeed; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    float AppliedBonusSpeed; // 0x03CC (Size: 0x4, Type: FloatProperty)
    float DistanceToPackRatio; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    float MaxBonusSpeedAtPosition; // 0x03D4 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedAtPosition; // 0x03D8 (Size: 0x4, Type: FloatProperty)
    float MaxAllowedBonusSpeed; // 0x03DC (Size: 0x4, Type: FloatProperty)
    float BonusSpeedGainedPerSecond; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    float BonusSpeedLostPerSecond; // 0x03E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t MMRUsed; // 0x03E8 (Size: 0x4, Type: IntProperty)
    float MaxBonusSpeedScalar; // 0x03EC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDebugRubberbandingWidget, bRubberbandingEnabled) == 936, "Offset mismatch for UDelMarDebugRubberbandingWidget::bRubberbandingEnabled");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, PackDistance) == 940, "Offset mismatch for UDelMarDebugRubberbandingWidget::PackDistance");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MinPackDistance) == 944, "Offset mismatch for UDelMarDebugRubberbandingWidget::MinPackDistance");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxPackDistance) == 948, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxPackDistance");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, DistanceToPack) == 952, "Offset mismatch for UDelMarDebugRubberbandingWidget::DistanceToPack");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MinDistanceFromPack) == 956, "Offset mismatch for UDelMarDebugRubberbandingWidget::MinDistanceFromPack");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxDistanceFromPack) == 960, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxDistanceFromPack");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MinSpeed) == 964, "Offset mismatch for UDelMarDebugRubberbandingWidget::MinSpeed");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, StableSpeed) == 968, "Offset mismatch for UDelMarDebugRubberbandingWidget::StableSpeed");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, AppliedBonusSpeed) == 972, "Offset mismatch for UDelMarDebugRubberbandingWidget::AppliedBonusSpeed");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, DistanceToPackRatio) == 976, "Offset mismatch for UDelMarDebugRubberbandingWidget::DistanceToPackRatio");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxBonusSpeedAtPosition) == 980, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxBonusSpeedAtPosition");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxSpeedAtPosition) == 984, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxSpeedAtPosition");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxAllowedBonusSpeed) == 988, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxAllowedBonusSpeed");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, BonusSpeedGainedPerSecond) == 992, "Offset mismatch for UDelMarDebugRubberbandingWidget::BonusSpeedGainedPerSecond");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, BonusSpeedLostPerSecond) == 996, "Offset mismatch for UDelMarDebugRubberbandingWidget::BonusSpeedLostPerSecond");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MMRUsed) == 1000, "Offset mismatch for UDelMarDebugRubberbandingWidget::MMRUsed");
static_assert(offsetof(UDelMarDebugRubberbandingWidget, MaxBonusSpeedScalar) == 1004, "Offset mismatch for UDelMarDebugRubberbandingWidget::MaxBonusSpeedScalar");

// /Script/DelMarUI.DelMarDebugTrackEntry
// Kind: Class; super: UserWidget
class UDelMarDebugTrackEntry
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* TrackNameText; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LevelDataAsset; // 0x0318 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarDebugTrackEntry, TrackNameText) == 784, "Offset mismatch for UDelMarDebugTrackEntry::TrackNameText");
static_assert(offsetof(UDelMarDebugTrackEntry, LevelDataAsset) == 792, "Offset mismatch for UDelMarDebugTrackEntry::LevelDataAsset");

// /Script/DelMarUI.DelMarDebugTrackList
// Kind: Class; super: DelMarScreenBase
class UDelMarDebugTrackList
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    void* TrackView; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOnlyReturnAllowedLevels; // 0x0528 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarDebugTrackList, TrackView) == 1312, "Offset mismatch for UDelMarDebugTrackList::TrackView");
static_assert(offsetof(UDelMarDebugTrackList, bOnlyReturnAllowedLevels) == 1320, "Offset mismatch for UDelMarDebugTrackList::bOnlyReturnAllowedLevels");

// /Script/DelMarUI.DelMarDebugVehicleHealthWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarDebugVehicleHealthWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    float CurrentHealth; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    float MaxHealth; // 0x03AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDebugVehicleHealthWidget, CurrentHealth) == 936, "Offset mismatch for UDelMarDebugVehicleHealthWidget::CurrentHealth");
static_assert(offsetof(UDelMarDebugVehicleHealthWidget, MaxHealth) == 940, "Offset mismatch for UDelMarDebugVehicleHealthWidget::MaxHealth");

// /Script/DelMarUI.DelMarDebugVehicleWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarDebugVehicleWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    float BaseTargetSpeed; // 0x03A8 (Size: 0x4, Type: FloatProperty)
    float FinalTargetSpeed; // 0x03AC (Size: 0x4, Type: FloatProperty)
    float OversteerPercentage; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasValidDraftingTarget; // 0x03B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DraftingState; // 0x03B5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x03B6
    float DraftingBonusSpeed; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float DraftingTargetDegrees; // 0x03BC (Size: 0x4, Type: FloatProperty)
    float DraftingCurrentBonusSpeedPercentage; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    float DraftingMaxBonusSpeedPercentage; // 0x03C4 (Size: 0x4, Type: FloatProperty)
    float SecondsInDrift; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    float AccumulatedWaitingPeriodSeconds; // 0x03CC (Size: 0x4, Type: FloatProperty)
    float DriftBoostBonusSpeed; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    float DriftBoostDuration; // 0x03D4 (Size: 0x4, Type: FloatProperty)
    float DriftBoostDurationSecondsLeft; // 0x03D8 (Size: 0x4, Type: FloatProperty)
    float PotentialDriftBoostBonusSpeed; // 0x03DC (Size: 0x4, Type: FloatProperty)
    float PotentialDriftBoostDuration; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    float QueuedDriftBoostBonusSpeed; // 0x03E4 (Size: 0x4, Type: FloatProperty)
    float StartlineBonusSpeed; // 0x03E8 (Size: 0x4, Type: FloatProperty)
    float TurboBonusSpeed; // 0x03EC (Size: 0x4, Type: FloatProperty)
    float TurboZoneBonusSpeed; // 0x03F0 (Size: 0x4, Type: FloatProperty)
    float TurboSecondsRemaining; // 0x03F4 (Size: 0x4, Type: FloatProperty)
    float TurboCharges; // 0x03F8 (Size: 0x4, Type: FloatProperty)
    float WorldBonusSpeed; // 0x03FC (Size: 0x4, Type: FloatProperty)
    float TotalBonusSpeed; // 0x0400 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TerrainData[0x18]; // 0x0404 (Size: 0x18, Type: StructProperty)
    std::int32_t NumWheelWorldContacts; // 0x041C (Size: 0x4, Type: IntProperty)
    std::uint8_t AverageWheelWorldContactNormal[0x18]; // 0x0420 (Size: 0x18, Type: StructProperty)
    float MinimumLandingSpeed; // 0x0438 (Size: 0x4, Type: FloatProperty)
    float BaseForwardSpeed; // 0x043C (Size: 0x4, Type: FloatProperty)
    float StableSpeed; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float UpwardSpeed; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float VehicleSpeed; // 0x0448 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInvertedSteeringActive; // 0x044C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x044D
    float MaxForwardSpeed; // 0x0450 (Size: 0x4, Type: FloatProperty)
    float SecondsSinceTerrainPenalty; // 0x0454 (Size: 0x4, Type: FloatProperty)
    std::int32_t KickflipActivationCharges; // 0x0458 (Size: 0x4, Type: IntProperty)
    std::uint8_t bStrafeDisabled; // 0x045C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanActivateStrafe; // 0x045D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x045E
    float StrafeCooldownSeconds; // 0x0460 (Size: 0x4, Type: FloatProperty)
    float StrafeCooldownPercentage; // 0x0464 (Size: 0x4, Type: FloatProperty)
    float VehicleMass; // 0x0468 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarDebugVehicleWidget, BaseTargetSpeed) == 936, "Offset mismatch for UDelMarDebugVehicleWidget::BaseTargetSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, FinalTargetSpeed) == 940, "Offset mismatch for UDelMarDebugVehicleWidget::FinalTargetSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, OversteerPercentage) == 944, "Offset mismatch for UDelMarDebugVehicleWidget::OversteerPercentage");
static_assert(offsetof(UDelMarDebugVehicleWidget, bHasValidDraftingTarget) == 948, "Offset mismatch for UDelMarDebugVehicleWidget::bHasValidDraftingTarget");
static_assert(offsetof(UDelMarDebugVehicleWidget, DraftingState) == 949, "Offset mismatch for UDelMarDebugVehicleWidget::DraftingState");
static_assert(offsetof(UDelMarDebugVehicleWidget, DraftingBonusSpeed) == 952, "Offset mismatch for UDelMarDebugVehicleWidget::DraftingBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, DraftingTargetDegrees) == 956, "Offset mismatch for UDelMarDebugVehicleWidget::DraftingTargetDegrees");
static_assert(offsetof(UDelMarDebugVehicleWidget, DraftingCurrentBonusSpeedPercentage) == 960, "Offset mismatch for UDelMarDebugVehicleWidget::DraftingCurrentBonusSpeedPercentage");
static_assert(offsetof(UDelMarDebugVehicleWidget, DraftingMaxBonusSpeedPercentage) == 964, "Offset mismatch for UDelMarDebugVehicleWidget::DraftingMaxBonusSpeedPercentage");
static_assert(offsetof(UDelMarDebugVehicleWidget, SecondsInDrift) == 968, "Offset mismatch for UDelMarDebugVehicleWidget::SecondsInDrift");
static_assert(offsetof(UDelMarDebugVehicleWidget, AccumulatedWaitingPeriodSeconds) == 972, "Offset mismatch for UDelMarDebugVehicleWidget::AccumulatedWaitingPeriodSeconds");
static_assert(offsetof(UDelMarDebugVehicleWidget, DriftBoostBonusSpeed) == 976, "Offset mismatch for UDelMarDebugVehicleWidget::DriftBoostBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, DriftBoostDuration) == 980, "Offset mismatch for UDelMarDebugVehicleWidget::DriftBoostDuration");
static_assert(offsetof(UDelMarDebugVehicleWidget, DriftBoostDurationSecondsLeft) == 984, "Offset mismatch for UDelMarDebugVehicleWidget::DriftBoostDurationSecondsLeft");
static_assert(offsetof(UDelMarDebugVehicleWidget, PotentialDriftBoostBonusSpeed) == 988, "Offset mismatch for UDelMarDebugVehicleWidget::PotentialDriftBoostBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, PotentialDriftBoostDuration) == 992, "Offset mismatch for UDelMarDebugVehicleWidget::PotentialDriftBoostDuration");
static_assert(offsetof(UDelMarDebugVehicleWidget, QueuedDriftBoostBonusSpeed) == 996, "Offset mismatch for UDelMarDebugVehicleWidget::QueuedDriftBoostBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, StartlineBonusSpeed) == 1000, "Offset mismatch for UDelMarDebugVehicleWidget::StartlineBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, TurboBonusSpeed) == 1004, "Offset mismatch for UDelMarDebugVehicleWidget::TurboBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, TurboZoneBonusSpeed) == 1008, "Offset mismatch for UDelMarDebugVehicleWidget::TurboZoneBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, TurboSecondsRemaining) == 1012, "Offset mismatch for UDelMarDebugVehicleWidget::TurboSecondsRemaining");
static_assert(offsetof(UDelMarDebugVehicleWidget, TurboCharges) == 1016, "Offset mismatch for UDelMarDebugVehicleWidget::TurboCharges");
static_assert(offsetof(UDelMarDebugVehicleWidget, WorldBonusSpeed) == 1020, "Offset mismatch for UDelMarDebugVehicleWidget::WorldBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, TotalBonusSpeed) == 1024, "Offset mismatch for UDelMarDebugVehicleWidget::TotalBonusSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, TerrainData) == 1028, "Offset mismatch for UDelMarDebugVehicleWidget::TerrainData");
static_assert(offsetof(UDelMarDebugVehicleWidget, NumWheelWorldContacts) == 1052, "Offset mismatch for UDelMarDebugVehicleWidget::NumWheelWorldContacts");
static_assert(offsetof(UDelMarDebugVehicleWidget, AverageWheelWorldContactNormal) == 1056, "Offset mismatch for UDelMarDebugVehicleWidget::AverageWheelWorldContactNormal");
static_assert(offsetof(UDelMarDebugVehicleWidget, MinimumLandingSpeed) == 1080, "Offset mismatch for UDelMarDebugVehicleWidget::MinimumLandingSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, BaseForwardSpeed) == 1084, "Offset mismatch for UDelMarDebugVehicleWidget::BaseForwardSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, StableSpeed) == 1088, "Offset mismatch for UDelMarDebugVehicleWidget::StableSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, UpwardSpeed) == 1092, "Offset mismatch for UDelMarDebugVehicleWidget::UpwardSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, VehicleSpeed) == 1096, "Offset mismatch for UDelMarDebugVehicleWidget::VehicleSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, bInvertedSteeringActive) == 1100, "Offset mismatch for UDelMarDebugVehicleWidget::bInvertedSteeringActive");
static_assert(offsetof(UDelMarDebugVehicleWidget, MaxForwardSpeed) == 1104, "Offset mismatch for UDelMarDebugVehicleWidget::MaxForwardSpeed");
static_assert(offsetof(UDelMarDebugVehicleWidget, SecondsSinceTerrainPenalty) == 1108, "Offset mismatch for UDelMarDebugVehicleWidget::SecondsSinceTerrainPenalty");
static_assert(offsetof(UDelMarDebugVehicleWidget, KickflipActivationCharges) == 1112, "Offset mismatch for UDelMarDebugVehicleWidget::KickflipActivationCharges");
static_assert(offsetof(UDelMarDebugVehicleWidget, bStrafeDisabled) == 1116, "Offset mismatch for UDelMarDebugVehicleWidget::bStrafeDisabled");
static_assert(offsetof(UDelMarDebugVehicleWidget, bCanActivateStrafe) == 1117, "Offset mismatch for UDelMarDebugVehicleWidget::bCanActivateStrafe");
static_assert(offsetof(UDelMarDebugVehicleWidget, StrafeCooldownSeconds) == 1120, "Offset mismatch for UDelMarDebugVehicleWidget::StrafeCooldownSeconds");
static_assert(offsetof(UDelMarDebugVehicleWidget, StrafeCooldownPercentage) == 1124, "Offset mismatch for UDelMarDebugVehicleWidget::StrafeCooldownPercentage");
static_assert(offsetof(UDelMarDebugVehicleWidget, VehicleMass) == 1128, "Offset mismatch for UDelMarDebugVehicleWidget::VehicleMass");

// /Script/DelMarUI.DelMarDialogBase
// Kind: Class; super: CommonActivatableWidget
class UDelMarDialogBase
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

static_assert(offsetof(UDelMarDialogBase, bIsBackHandler) == 816, "Offset mismatch for UDelMarDialogBase::bIsBackHandler");
static_assert(offsetof(UDelMarDialogBase, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UDelMarDialogBase::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UDelMarDialogBase, OverrideBackActionDisplayName) == 824, "Offset mismatch for UDelMarDialogBase::OverrideBackActionDisplayName");
static_assert(offsetof(UDelMarDialogBase, bAutoActivate) == 840, "Offset mismatch for UDelMarDialogBase::bAutoActivate");
static_assert(offsetof(UDelMarDialogBase, bSupportsActivationFocus) == 841, "Offset mismatch for UDelMarDialogBase::bSupportsActivationFocus");
static_assert(offsetof(UDelMarDialogBase, bIsModal) == 842, "Offset mismatch for UDelMarDialogBase::bIsModal");
static_assert(offsetof(UDelMarDialogBase, bAutoRestoreFocus) == 843, "Offset mismatch for UDelMarDialogBase::bAutoRestoreFocus");
static_assert(offsetof(UDelMarDialogBase, bOverrideActionDomain) == 844, "Offset mismatch for UDelMarDialogBase::bOverrideActionDomain");
static_assert(offsetof(UDelMarDialogBase, InputMapping) == 848, "Offset mismatch for UDelMarDialogBase::InputMapping");
static_assert(offsetof(UDelMarDialogBase, InputMappingPriority) == 856, "Offset mismatch for UDelMarDialogBase::InputMappingPriority");
static_assert(offsetof(UDelMarDialogBase, InputModeTagsToAdd) == 864, "Offset mismatch for UDelMarDialogBase::InputModeTagsToAdd");
static_assert(offsetof(UDelMarDialogBase, InputModeTagsToRemove) == 896, "Offset mismatch for UDelMarDialogBase::InputModeTagsToRemove");
static_assert(offsetof(UDelMarDialogBase, ActionDomainOverride) == 928, "Offset mismatch for UDelMarDialogBase::ActionDomainOverride");
static_assert(offsetof(UDelMarDialogBase, BP_OnWidgetActivated) == 960, "Offset mismatch for UDelMarDialogBase::BP_OnWidgetActivated");
static_assert(offsetof(UDelMarDialogBase, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UDelMarDialogBase::BP_OnWidgetDeactivated");
static_assert(offsetof(UDelMarDialogBase, bIsActive) == 992, "Offset mismatch for UDelMarDialogBase::bIsActive");
static_assert(offsetof(UDelMarDialogBase, VisibilityBoundWidgets) == 1000, "Offset mismatch for UDelMarDialogBase::VisibilityBoundWidgets");
static_assert(offsetof(UDelMarDialogBase, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UDelMarDialogBase::bSetVisibilityOnActivated");
static_assert(offsetof(UDelMarDialogBase, ActivatedVisibility) == 1177, "Offset mismatch for UDelMarDialogBase::ActivatedVisibility");
static_assert(offsetof(UDelMarDialogBase, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UDelMarDialogBase::bSetVisibilityOnDeactivated");
static_assert(offsetof(UDelMarDialogBase, DeactivatedVisibility) == 1179, "Offset mismatch for UDelMarDialogBase::DeactivatedVisibility");

// /Script/DelMarUI.DelMarDialogHelper
// Kind: Class; super: Object
class UDelMarDialogHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DialogMapping; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDelMarDialogHelper, DialogMapping) == 40, "Offset mismatch for UDelMarDialogHelper::DialogMapping");

// /Script/DelMarUI.DelMarDriverCameraWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarDriverCameraWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* DefaultIntercomAnimation; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* ReactiveDriverCamera_Persistent; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    float ReactiveWidgetOutroDelay; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float ReactiveWidgetMaxActiveTime; // 0x03BC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> MainChannelAnimationTagTable; // 0x03C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ReactiveAnimationTable; // 0x03D0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AnimationNameTable; // 0x03E0 (Size: 0x10, Type: MapProperty)
    std::uint8_t IntercomSequenceHandle[0x10]; // 0x03F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReactiveSequenceHandle[0x1]; // 0x0400 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarDriverCameraWidget, DefaultIntercomAnimation) == 936, "Offset mismatch for UDelMarDriverCameraWidget::DefaultIntercomAnimation");
static_assert(offsetof(UDelMarDriverCameraWidget, ReactiveDriverCamera_Persistent) == 944, "Offset mismatch for UDelMarDriverCameraWidget::ReactiveDriverCamera_Persistent");
static_assert(offsetof(UDelMarDriverCameraWidget, ReactiveWidgetOutroDelay) == 952, "Offset mismatch for UDelMarDriverCameraWidget::ReactiveWidgetOutroDelay");
static_assert(offsetof(UDelMarDriverCameraWidget, ReactiveWidgetMaxActiveTime) == 956, "Offset mismatch for UDelMarDriverCameraWidget::ReactiveWidgetMaxActiveTime");
static_assert(offsetof(UDelMarDriverCameraWidget, MainChannelAnimationTagTable) == 960, "Offset mismatch for UDelMarDriverCameraWidget::MainChannelAnimationTagTable");
static_assert(offsetof(UDelMarDriverCameraWidget, ReactiveAnimationTable) == 976, "Offset mismatch for UDelMarDriverCameraWidget::ReactiveAnimationTable");
static_assert(offsetof(UDelMarDriverCameraWidget, AnimationNameTable) == 992, "Offset mismatch for UDelMarDriverCameraWidget::AnimationNameTable");
static_assert(offsetof(UDelMarDriverCameraWidget, IntercomSequenceHandle) == 1008, "Offset mismatch for UDelMarDriverCameraWidget::IntercomSequenceHandle");
static_assert(offsetof(UDelMarDriverCameraWidget, ReactiveSequenceHandle) == 1024, "Offset mismatch for UDelMarDriverCameraWidget::ReactiveSequenceHandle");

// /Script/DelMarUI.DelMarEmotePickerContainer
// Kind: Class; super: DelMarScreenBase
class UDelMarEmotePickerContainer
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    std::uint8_t CloseEmotePickerTriggerTag[0x1]; // 0x0520 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarEmotePickerContainer, CloseEmotePickerTriggerTag) == 1312, "Offset mismatch for UDelMarEmotePickerContainer::CloseEmotePickerTriggerTag");

// /Script/DelMarUI.DelMarEmotePickerTriggerUIStateComponent
// Kind: Class; super: UIStateComponent
class UDelMarEmotePickerTriggerUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarEmotePickerTriggerUIStateComponent, Configuration) == 72, "Offset mismatch for UDelMarEmotePickerTriggerUIStateComponent::Configuration");

// /Script/DelMarUI.DelMarEmotePickerTriggerUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UDelMarEmotePickerTriggerUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EmotePickerOpenTriggerTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* PickerData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarEmotePickerTriggerUIStateComponentConfiguration, EmotePickerOpenTriggerTag) == 40, "Offset mismatch for UDelMarEmotePickerTriggerUIStateComponentConfiguration::EmotePickerOpenTriggerTag");
static_assert(offsetof(UDelMarEmotePickerTriggerUIStateComponentConfiguration, PickerData) == 48, "Offset mismatch for UDelMarEmotePickerTriggerUIStateComponentConfiguration::PickerData");

// /Script/DelMarUI.DelMarExpandableHudWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarExpandableHudWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* NavigateEntriesBindingImage; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x03B0
    void* ExpandableHudWidgetEntryClass; // 0x03C8 (Size: 0x8, Type: ClassProperty)
    std::int32_t NumDesignerPreviewEntries; // 0x03D0 (Size: 0x4, Type: IntProperty)
    float EntrySpacing; // 0x03D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExpanded; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNavigationEnabled; // 0x03D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x03DA
    void* NavigateEntriesGamepadTexture; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* NavigateEntriesPCTexture; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPreferences; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* EntryOverlay; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* EdgeFadeRetainerBox; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* ContentSizeBox; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnExpandToggled; // 0x0410 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x0420 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExpandableChanged; // 0x0430 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> DisplayedHudWidgetEntries; // 0x0440 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarExpandableHudWidget, NavigateEntriesBindingImage) == 936, "Offset mismatch for UDelMarExpandableHudWidget::NavigateEntriesBindingImage");
static_assert(offsetof(UDelMarExpandableHudWidget, ExpandableHudWidgetEntryClass) == 968, "Offset mismatch for UDelMarExpandableHudWidget::ExpandableHudWidgetEntryClass");
static_assert(offsetof(UDelMarExpandableHudWidget, NumDesignerPreviewEntries) == 976, "Offset mismatch for UDelMarExpandableHudWidget::NumDesignerPreviewEntries");
static_assert(offsetof(UDelMarExpandableHudWidget, EntrySpacing) == 980, "Offset mismatch for UDelMarExpandableHudWidget::EntrySpacing");
static_assert(offsetof(UDelMarExpandableHudWidget, bExpanded) == 984, "Offset mismatch for UDelMarExpandableHudWidget::bExpanded");
static_assert(offsetof(UDelMarExpandableHudWidget, bNavigationEnabled) == 985, "Offset mismatch for UDelMarExpandableHudWidget::bNavigationEnabled");
static_assert(offsetof(UDelMarExpandableHudWidget, NavigateEntriesGamepadTexture) == 992, "Offset mismatch for UDelMarExpandableHudWidget::NavigateEntriesGamepadTexture");
static_assert(offsetof(UDelMarExpandableHudWidget, NavigateEntriesPCTexture) == 1000, "Offset mismatch for UDelMarExpandableHudWidget::NavigateEntriesPCTexture");
static_assert(offsetof(UDelMarExpandableHudWidget, PlayerPreferences) == 1008, "Offset mismatch for UDelMarExpandableHudWidget::PlayerPreferences");
static_assert(offsetof(UDelMarExpandableHudWidget, EntryOverlay) == 1016, "Offset mismatch for UDelMarExpandableHudWidget::EntryOverlay");
static_assert(offsetof(UDelMarExpandableHudWidget, EdgeFadeRetainerBox) == 1024, "Offset mismatch for UDelMarExpandableHudWidget::EdgeFadeRetainerBox");
static_assert(offsetof(UDelMarExpandableHudWidget, ContentSizeBox) == 1032, "Offset mismatch for UDelMarExpandableHudWidget::ContentSizeBox");
static_assert(offsetof(UDelMarExpandableHudWidget, OnExpandToggled) == 1040, "Offset mismatch for UDelMarExpandableHudWidget::OnExpandToggled");
static_assert(offsetof(UDelMarExpandableHudWidget, OnNavigationEnabledChanged) == 1056, "Offset mismatch for UDelMarExpandableHudWidget::OnNavigationEnabledChanged");
static_assert(offsetof(UDelMarExpandableHudWidget, OnExpandableChanged) == 1072, "Offset mismatch for UDelMarExpandableHudWidget::OnExpandableChanged");
static_assert(offsetof(UDelMarExpandableHudWidget, DisplayedHudWidgetEntries) == 1088, "Offset mismatch for UDelMarExpandableHudWidget::DisplayedHudWidgetEntries");

// /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent
// Kind: Class; super: UIStateComponent
class UDelMarGameplayContextUpdaterUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TMap<void*, void*> GameStateToUITagMap; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t CurrentRacerState[0x4]; // 0x0058 (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentGameState[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrentRaceMode[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OwnerPlayerState; // 0x0064 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SpectatedPlayerState; // 0x006C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerPlayerController; // 0x0074 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedPreferences; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LevelManager; // 0x0084 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedVehicle; // 0x008C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ChatManager; // 0x0094 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, GameStateToUITagMap) == 72, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::GameStateToUITagMap");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, CurrentRacerState) == 88, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::CurrentRacerState");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, CurrentGameState) == 92, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::CurrentGameState");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, CurrentRaceMode) == 96, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::CurrentRaceMode");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, OwnerPlayerState) == 100, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::OwnerPlayerState");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, SpectatedPlayerState) == 108, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::SpectatedPlayerState");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, OwnerPlayerController) == 116, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::OwnerPlayerController");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, CachedPreferences) == 124, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::CachedPreferences");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, LevelManager) == 132, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::LevelManager");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, CachedVehicle) == 140, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::CachedVehicle");
static_assert(offsetof(UDelMarGameplayContextUpdaterUIStateComponent, ChatManager) == 148, "Offset mismatch for UDelMarGameplayContextUpdaterUIStateComponent::ChatManager");

// /Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UDelMarGameplayContextUpdaterUIStateComponentConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarUI.DelMarGlobalLeaderboardEntryViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarGlobalLeaderboardEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString PlayerAccountId; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString PlayerName; // 0x0088 (Size: 0x10, Type: StrProperty)
    double RunDuration; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    std::int64_t Rank; // 0x00A0 (Size: 0x8, Type: Int64Property)
    std::uint8_t bIsLocalPlayer; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t GlobalLeaderboardEntry[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, PlayerAccountId) == 120, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::PlayerAccountId");
static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, PlayerName) == 136, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::PlayerName");
static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, RunDuration) == 152, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::RunDuration");
static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, Rank) == 160, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::Rank");
static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, bIsLocalPlayer) == 168, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::bIsLocalPlayer");
static_assert(offsetof(UDelMarGlobalLeaderboardEntryViewModel, GlobalLeaderboardEntry) == 176, "Offset mismatch for UDelMarGlobalLeaderboardEntryViewModel::GlobalLeaderboardEntry");

// /Script/DelMarUI.DelMarIdleMonitorUIStateComponent
// Kind: Class; super: UIStateComponent
class UDelMarIdleMonitorUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* CachedRequestComponent; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarIdleMonitorUIStateComponent, Configuration) == 72, "Offset mismatch for UDelMarIdleMonitorUIStateComponent::Configuration");
static_assert(offsetof(UDelMarIdleMonitorUIStateComponent, CachedRequestComponent) == 80, "Offset mismatch for UDelMarIdleMonitorUIStateComponent::CachedRequestComponent");

// /Script/DelMarUI.DelMarIdleMonitorUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UDelMarIdleMonitorUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActivityCheckPeriod; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarIdleMonitorUIStateComponentConfiguration, ActivityCheckPeriod) == 40, "Offset mismatch for UDelMarIdleMonitorUIStateComponentConfiguration::ActivityCheckPeriod");

// /Script/DelMarUI.DelMarInputActionRichTextBlockDecorator
// Kind: Class; super: RichTextBlockDecorator
class UDelMarInputActionRichTextBlockDecorator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InputAction; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Key[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t Icon[0xB0]; // 0x0060 (Size: 0xB0, Type: StructProperty)
    void* OwnerWidget; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CommonInputSubsystem; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> EnhancedInputSubsystem; // 0x0128 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, InputAction) == 40, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::InputAction");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, DisplayName) == 48, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::DisplayName");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, Key) == 64, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::Key");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, Icon) == 96, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::Icon");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, OwnerWidget) == 272, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::OwnerWidget");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, OwningLocalPlayer) == 280, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::OwningLocalPlayer");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, CommonInputSubsystem) == 288, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::CommonInputSubsystem");
static_assert(offsetof(UDelMarInputActionRichTextBlockDecorator, EnhancedInputSubsystem) == 296, "Offset mismatch for UDelMarInputActionRichTextBlockDecorator::EnhancedInputSubsystem");

// /Script/DelMarUI.DelMarInputConfigWidgetBase
// Kind: Class; super: CommonActivatableWidget
class UDelMarInputConfigWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t DesiredInputConfig[0x6]; // 0x04A0 (Size: 0x6, Type: StructProperty)
    std::uint8_t bFlushPlayerInputWhenActivating; // 0x04A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPlayerInputWhenDeactivating; // 0x04A7 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarInputConfigWidgetBase, DesiredInputConfig) == 1184, "Offset mismatch for UDelMarInputConfigWidgetBase::DesiredInputConfig");
static_assert(offsetof(UDelMarInputConfigWidgetBase, bFlushPlayerInputWhenActivating) == 1190, "Offset mismatch for UDelMarInputConfigWidgetBase::bFlushPlayerInputWhenActivating");
static_assert(offsetof(UDelMarInputConfigWidgetBase, bFlushPlayerInputWhenDeactivating) == 1191, "Offset mismatch for UDelMarInputConfigWidgetBase::bFlushPlayerInputWhenDeactivating");

// /Script/DelMarUI.DelMarInteractionIndicatorContainer
// Kind: Class; super: FortHUDElementWidget
class UDelMarInteractionIndicatorContainer
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* VehicleIndicators; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarInteractionIndicatorContainer, VehicleIndicators) == 880, "Offset mismatch for UDelMarInteractionIndicatorContainer::VehicleIndicators");

// /Script/DelMarUI.DelMarListView
// Kind: Class; super: CommonListView
class UDelMarListView
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    std::uint8_t bTreatNavigationAsScrolling; // 0x0FF0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarListView, bTreatNavigationAsScrolling) == 4080, "Offset mismatch for UDelMarListView::bTreatNavigationAsScrolling");

// /Script/DelMarUI.DelMarListViewModel
// Kind: Class; super: MVVMViewModelBase
class UDelMarListViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> Elements; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarListViewModel, Elements) == 104, "Offset mismatch for UDelMarListViewModel::Elements");

// /Script/DelMarUI.DelMarLoadingScreenHelper
// Kind: Class; super: Object
class UDelMarLoadingScreenHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BackgroundDesiredSize[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomLoadingWidget[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ZoneConfig[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarLoadingScreenHelper, BackgroundDesiredSize) == 40, "Offset mismatch for UDelMarLoadingScreenHelper::BackgroundDesiredSize");
static_assert(offsetof(UDelMarLoadingScreenHelper, CustomLoadingWidget) == 56, "Offset mismatch for UDelMarLoadingScreenHelper::CustomLoadingWidget");
static_assert(offsetof(UDelMarLoadingScreenHelper, ZoneConfig) == 88, "Offset mismatch for UDelMarLoadingScreenHelper::ZoneConfig");

// /Script/DelMarUI.DelMarLoadingScreenViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarLoadingScreenViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHasValidTrackData; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t MapName[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t MapCreator[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t MapDescription[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RaceMode[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> LoadingBackgroundImage; // 0x00B8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UDelMarLoadingScreenViewModel, bHasValidTrackData) == 120, "Offset mismatch for UDelMarLoadingScreenViewModel::bHasValidTrackData");
static_assert(offsetof(UDelMarLoadingScreenViewModel, MapName) == 128, "Offset mismatch for UDelMarLoadingScreenViewModel::MapName");
static_assert(offsetof(UDelMarLoadingScreenViewModel, MapCreator) == 144, "Offset mismatch for UDelMarLoadingScreenViewModel::MapCreator");
static_assert(offsetof(UDelMarLoadingScreenViewModel, MapDescription) == 160, "Offset mismatch for UDelMarLoadingScreenViewModel::MapDescription");
static_assert(offsetof(UDelMarLoadingScreenViewModel, RaceMode) == 176, "Offset mismatch for UDelMarLoadingScreenViewModel::RaceMode");
static_assert(offsetof(UDelMarLoadingScreenViewModel, LoadingBackgroundImage) == 184, "Offset mismatch for UDelMarLoadingScreenViewModel::LoadingBackgroundImage");

// /Script/DelMarUI.DelMarLoadingScreenWidget
// Kind: Class; super: CommonUserWidget
class UDelMarLoadingScreenWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    TArray<void*> LoadingScreenTips; // 0x0338 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarLoadingScreenWidget, LoadingScreenTips) == 824, "Offset mismatch for UDelMarLoadingScreenWidget::LoadingScreenTips");

// /Script/DelMarUI.DelMarLocalPlayerSettingsViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarLocalPlayerSettingsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bUseIconOnlyPlayerNameplates; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    TWeakObjectPtr<void> CachedPreferences; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarLocalPlayerSettingsViewModel, bUseIconOnlyPlayerNameplates) == 120, "Offset mismatch for UDelMarLocalPlayerSettingsViewModel::bUseIconOnlyPlayerNameplates");
static_assert(offsetof(UDelMarLocalPlayerSettingsViewModel, CachedPreferences) == 124, "Offset mismatch for UDelMarLocalPlayerSettingsViewModel::CachedPreferences");

// /Script/DelMarUI.DelMarMatchEventViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarMatchEventViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnMatchEventOccured; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDelMarMatchEventViewModel, OnMatchEventOccured) == 120, "Offset mismatch for UDelMarMatchEventViewModel::OnMatchEventOccured");

// /Script/DelMarUI.DelMarPlayerIndicatorWidget
// Kind: Class; super: UserWidget
class UDelMarPlayerIndicatorWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* AvatarSizeBox; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* AvatarLazyImage; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* PlayerNameSizeBox; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* UpArrowImage; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* DownArrowImage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* BackgroundOverlay; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0340
    float BehindAvatarSizeBoxWidth; // 0x0344 (Size: 0x4, Type: FloatProperty)
    float AheadAvatarSizeBoxWidth; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBehindAvatarImageIsExpanded; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAheadAvatarImageIsExpanded; // 0x034D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x034E
    float BehindPlayerNameSizeBoxMaxWidth; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float AheadPlayerNameSizeBoxMaxWidth; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float BehindBackgroundOverlaySlotPadding; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float AheadBackgroundOverlaySlotPadding; // 0x035C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDelMarPlayerIndicatorWidget, AvatarSizeBox) == 784, "Offset mismatch for UDelMarPlayerIndicatorWidget::AvatarSizeBox");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, AvatarLazyImage) == 792, "Offset mismatch for UDelMarPlayerIndicatorWidget::AvatarLazyImage");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, PlayerNameSizeBox) == 800, "Offset mismatch for UDelMarPlayerIndicatorWidget::PlayerNameSizeBox");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, UpArrowImage) == 808, "Offset mismatch for UDelMarPlayerIndicatorWidget::UpArrowImage");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, DownArrowImage) == 816, "Offset mismatch for UDelMarPlayerIndicatorWidget::DownArrowImage");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, BackgroundOverlay) == 824, "Offset mismatch for UDelMarPlayerIndicatorWidget::BackgroundOverlay");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, BehindAvatarSizeBoxWidth) == 836, "Offset mismatch for UDelMarPlayerIndicatorWidget::BehindAvatarSizeBoxWidth");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, AheadAvatarSizeBoxWidth) == 840, "Offset mismatch for UDelMarPlayerIndicatorWidget::AheadAvatarSizeBoxWidth");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, bBehindAvatarImageIsExpanded) == 844, "Offset mismatch for UDelMarPlayerIndicatorWidget::bBehindAvatarImageIsExpanded");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, bAheadAvatarImageIsExpanded) == 845, "Offset mismatch for UDelMarPlayerIndicatorWidget::bAheadAvatarImageIsExpanded");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, BehindPlayerNameSizeBoxMaxWidth) == 848, "Offset mismatch for UDelMarPlayerIndicatorWidget::BehindPlayerNameSizeBoxMaxWidth");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, AheadPlayerNameSizeBoxMaxWidth) == 852, "Offset mismatch for UDelMarPlayerIndicatorWidget::AheadPlayerNameSizeBoxMaxWidth");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, BehindBackgroundOverlaySlotPadding) == 856, "Offset mismatch for UDelMarPlayerIndicatorWidget::BehindBackgroundOverlaySlotPadding");
static_assert(offsetof(UDelMarPlayerIndicatorWidget, AheadBackgroundOverlaySlotPadding) == 860, "Offset mismatch for UDelMarPlayerIndicatorWidget::AheadBackgroundOverlaySlotPadding");

// /Script/DelMarUI.DelMarPlayerIndicatorsContainer
// Kind: Class; super: DelMarUserWidget
class UDelMarPlayerIndicatorsContainer
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* IndicatorCanvas; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* IndicatorWidgetClass; // 0x03B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IndicatorOffset[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    float RearVerticalHintThreshold; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    float RearIndicatorMaxDistance; // 0x03D4 (Size: 0x4, Type: FloatProperty)
    float RearIndicatorMinDistance; // 0x03D8 (Size: 0x4, Type: FloatProperty)
    float RearIndicatorRangeWidth; // 0x03DC (Size: 0x4, Type: FloatProperty)
    float RearIndicatorRangeDegree; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    float ForwardIndicatorMaxDistance; // 0x03E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IndicatorAnchors[0x20]; // 0x03E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t IndicatorAlignment[0x10]; // 0x0408 (Size: 0x10, Type: StructProperty)
    std::uint8_t RearIndicatorSize[0x10]; // 0x0418 (Size: 0x10, Type: StructProperty)
    void* RearDistanceScaleCurve; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    void* RearDistanceOpacityCurve; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    void* ForwardDistanceScaleCurve; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    void* ForwardDistanceOpacityCurve; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxRearIndicators; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxForwardIndicators; // 0x044C (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> VehicleManager; // 0x0450 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ViewingVehicle; // 0x0458 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ViewingPlayerState; // 0x0460 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> IndicatorsData; // 0x0468 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> IndicatorWidgets; // 0x0478 (Size: 0x10, Type: MapProperty)
    TArray<void*> IndicatorPool; // 0x0488 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> PositionalTrackerComponent; // 0x0498 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorCanvas) == 936, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorCanvas");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorWidgetClass) == 944, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorWidgetClass");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorOffset) == 952, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorOffset");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearVerticalHintThreshold) == 976, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearVerticalHintThreshold");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearIndicatorMaxDistance) == 980, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearIndicatorMaxDistance");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearIndicatorMinDistance) == 984, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearIndicatorMinDistance");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearIndicatorRangeWidth) == 988, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearIndicatorRangeWidth");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearIndicatorRangeDegree) == 992, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearIndicatorRangeDegree");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, ForwardIndicatorMaxDistance) == 996, "Offset mismatch for UDelMarPlayerIndicatorsContainer::ForwardIndicatorMaxDistance");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorAnchors) == 1000, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorAnchors");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorAlignment) == 1032, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorAlignment");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearIndicatorSize) == 1048, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearIndicatorSize");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearDistanceScaleCurve) == 1064, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearDistanceScaleCurve");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, RearDistanceOpacityCurve) == 1072, "Offset mismatch for UDelMarPlayerIndicatorsContainer::RearDistanceOpacityCurve");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, ForwardDistanceScaleCurve) == 1080, "Offset mismatch for UDelMarPlayerIndicatorsContainer::ForwardDistanceScaleCurve");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, ForwardDistanceOpacityCurve) == 1088, "Offset mismatch for UDelMarPlayerIndicatorsContainer::ForwardDistanceOpacityCurve");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, MaxRearIndicators) == 1096, "Offset mismatch for UDelMarPlayerIndicatorsContainer::MaxRearIndicators");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, MaxForwardIndicators) == 1100, "Offset mismatch for UDelMarPlayerIndicatorsContainer::MaxForwardIndicators");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, VehicleManager) == 1104, "Offset mismatch for UDelMarPlayerIndicatorsContainer::VehicleManager");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, ViewingVehicle) == 1112, "Offset mismatch for UDelMarPlayerIndicatorsContainer::ViewingVehicle");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, ViewingPlayerState) == 1120, "Offset mismatch for UDelMarPlayerIndicatorsContainer::ViewingPlayerState");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorsData) == 1128, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorsData");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorWidgets) == 1144, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorWidgets");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, IndicatorPool) == 1160, "Offset mismatch for UDelMarPlayerIndicatorsContainer::IndicatorPool");
static_assert(offsetof(UDelMarPlayerIndicatorsContainer, PositionalTrackerComponent) == 1176, "Offset mismatch for UDelMarPlayerIndicatorsContainer::PositionalTrackerComponent");

// /Script/DelMarUI.DelMarPlayerRaceStateViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarPlayerRaceStateViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHasValidData; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t CurrentLap; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasCompletedRace; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t RaceCompletionTime[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::int32_t SpectatorCount; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPlacement; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPlacementByBestRun; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x009C
    double CurrentRunStartTimestamp; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LastCompletedSectionIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsNewBestRun; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRunActive; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSubsequentRun; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpectator; // 0x00AF (Size: 0x1, Type: BoolProperty)
    void* CurrentRunRecord; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* BestRunRecord; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* PreviousBestRunRecord; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MatchRunRecords; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* PersonalBestLeaderboardEntry; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* NewPersonalBestLeaderboardEntry; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Vehicle; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousRacerState[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RacerState[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> RaceManager; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PositionalTrackerComponent; // 0x0108 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bHasValidData) == 120, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bHasValidData");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, CurrentLap) == 124, "Offset mismatch for UDelMarPlayerRaceStateViewModel::CurrentLap");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bHasCompletedRace) == 128, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bHasCompletedRace");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, RaceCompletionTime) == 136, "Offset mismatch for UDelMarPlayerRaceStateViewModel::RaceCompletionTime");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, SpectatorCount) == 144, "Offset mismatch for UDelMarPlayerRaceStateViewModel::SpectatorCount");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, CurrentPlacement) == 148, "Offset mismatch for UDelMarPlayerRaceStateViewModel::CurrentPlacement");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, CurrentPlacementByBestRun) == 152, "Offset mismatch for UDelMarPlayerRaceStateViewModel::CurrentPlacementByBestRun");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, CurrentRunStartTimestamp) == 160, "Offset mismatch for UDelMarPlayerRaceStateViewModel::CurrentRunStartTimestamp");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, LastCompletedSectionIndex) == 168, "Offset mismatch for UDelMarPlayerRaceStateViewModel::LastCompletedSectionIndex");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bIsNewBestRun) == 172, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bIsNewBestRun");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bRunActive) == 173, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bRunActive");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bIsSubsequentRun) == 174, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bIsSubsequentRun");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, bIsSpectator) == 175, "Offset mismatch for UDelMarPlayerRaceStateViewModel::bIsSpectator");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, CurrentRunRecord) == 176, "Offset mismatch for UDelMarPlayerRaceStateViewModel::CurrentRunRecord");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, BestRunRecord) == 184, "Offset mismatch for UDelMarPlayerRaceStateViewModel::BestRunRecord");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, PreviousBestRunRecord) == 192, "Offset mismatch for UDelMarPlayerRaceStateViewModel::PreviousBestRunRecord");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, MatchRunRecords) == 200, "Offset mismatch for UDelMarPlayerRaceStateViewModel::MatchRunRecords");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, PersonalBestLeaderboardEntry) == 216, "Offset mismatch for UDelMarPlayerRaceStateViewModel::PersonalBestLeaderboardEntry");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, NewPersonalBestLeaderboardEntry) == 224, "Offset mismatch for UDelMarPlayerRaceStateViewModel::NewPersonalBestLeaderboardEntry");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, Vehicle) == 232, "Offset mismatch for UDelMarPlayerRaceStateViewModel::Vehicle");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, PreviousRacerState) == 240, "Offset mismatch for UDelMarPlayerRaceStateViewModel::PreviousRacerState");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, RacerState) == 244, "Offset mismatch for UDelMarPlayerRaceStateViewModel::RacerState");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, RaceManager) == 248, "Offset mismatch for UDelMarPlayerRaceStateViewModel::RaceManager");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, PlayerState) == 256, "Offset mismatch for UDelMarPlayerRaceStateViewModel::PlayerState");
static_assert(offsetof(UDelMarPlayerRaceStateViewModel, PositionalTrackerComponent) == 264, "Offset mismatch for UDelMarPlayerRaceStateViewModel::PositionalTrackerComponent");

// /Script/DelMarUI.DelMarPlayerViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarPlayerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t AvatarLargeImage[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AvatarSmallImage[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AvatarBackgroundColor[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AvatarHighlightColor[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    void* DriverCameraRT; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* PlayerRaceState; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PlayerState; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RaceManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPlayerViewModel, DisplayName) == 120, "Offset mismatch for UDelMarPlayerViewModel::DisplayName");
static_assert(offsetof(UDelMarPlayerViewModel, AvatarLargeImage) == 136, "Offset mismatch for UDelMarPlayerViewModel::AvatarLargeImage");
static_assert(offsetof(UDelMarPlayerViewModel, AvatarSmallImage) == 168, "Offset mismatch for UDelMarPlayerViewModel::AvatarSmallImage");
static_assert(offsetof(UDelMarPlayerViewModel, AvatarBackgroundColor) == 200, "Offset mismatch for UDelMarPlayerViewModel::AvatarBackgroundColor");
static_assert(offsetof(UDelMarPlayerViewModel, AvatarHighlightColor) == 204, "Offset mismatch for UDelMarPlayerViewModel::AvatarHighlightColor");
static_assert(offsetof(UDelMarPlayerViewModel, DriverCameraRT) == 208, "Offset mismatch for UDelMarPlayerViewModel::DriverCameraRT");
static_assert(offsetof(UDelMarPlayerViewModel, PlayerRaceState) == 216, "Offset mismatch for UDelMarPlayerViewModel::PlayerRaceState");
static_assert(offsetof(UDelMarPlayerViewModel, PlayerState) == 224, "Offset mismatch for UDelMarPlayerViewModel::PlayerState");
static_assert(offsetof(UDelMarPlayerViewModel, RaceManager) == 232, "Offset mismatch for UDelMarPlayerViewModel::RaceManager");

// /Script/DelMarUI.DelMarPositionalTrackerEntryWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarPositionalTrackerEntryWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    FMulticastInlineDelegate OnDisplayedPlayerSet; // 0x03A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* AnimIsTargetPlayer; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTargetPlayer; // 0x03D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarPositionalTrackerEntryWidget, OnDisplayedPlayerSet) == 936, "Offset mismatch for UDelMarPositionalTrackerEntryWidget::OnDisplayedPlayerSet");
static_assert(offsetof(UDelMarPositionalTrackerEntryWidget, OnNavigationEnabledChanged) == 952, "Offset mismatch for UDelMarPositionalTrackerEntryWidget::OnNavigationEnabledChanged");
static_assert(offsetof(UDelMarPositionalTrackerEntryWidget, AnimIsTargetPlayer) == 968, "Offset mismatch for UDelMarPositionalTrackerEntryWidget::AnimIsTargetPlayer");
static_assert(offsetof(UDelMarPositionalTrackerEntryWidget, bTargetPlayer) == 976, "Offset mismatch for UDelMarPositionalTrackerEntryWidget::bTargetPlayer");

// /Script/DelMarUI.DelMarPositionalTrackerWidget
// Kind: Class; super: DelMarExpandableHudWidget
class UDelMarPositionalTrackerWidget
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    std::int32_t MinPlayersToStart; // 0x0460 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0464
    TArray<void*> DisplayedPlayers; // 0x0468 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarPositionalTrackerWidget, MinPlayersToStart) == 1120, "Offset mismatch for UDelMarPositionalTrackerWidget::MinPlayersToStart");
static_assert(offsetof(UDelMarPositionalTrackerWidget, DisplayedPlayers) == 1128, "Offset mismatch for UDelMarPositionalTrackerWidget::DisplayedPlayers");

// /Script/DelMarUI.DelMarPostRaceLeaderboard
// Kind: Class; super: DelMarScreenBase
class UDelMarPostRaceLeaderboard
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    std::uint8_t FilterDataTableRow[0x1]; // 0x0520 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarPostRaceLeaderboard, FilterDataTableRow) == 1312, "Offset mismatch for UDelMarPostRaceLeaderboard::FilterDataTableRow");

// /Script/DelMarUI.DelMarPostRaceRankedRecap
// Kind: Class; super: CommonActivatableWidget
class UDelMarPostRaceRankedRecap
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

static_assert(offsetof(UDelMarPostRaceRankedRecap, bIsBackHandler) == 816, "Offset mismatch for UDelMarPostRaceRankedRecap::bIsBackHandler");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UDelMarPostRaceRankedRecap::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UDelMarPostRaceRankedRecap, OverrideBackActionDisplayName) == 824, "Offset mismatch for UDelMarPostRaceRankedRecap::OverrideBackActionDisplayName");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bAutoActivate) == 840, "Offset mismatch for UDelMarPostRaceRankedRecap::bAutoActivate");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bSupportsActivationFocus) == 841, "Offset mismatch for UDelMarPostRaceRankedRecap::bSupportsActivationFocus");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bIsModal) == 842, "Offset mismatch for UDelMarPostRaceRankedRecap::bIsModal");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bAutoRestoreFocus) == 843, "Offset mismatch for UDelMarPostRaceRankedRecap::bAutoRestoreFocus");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bOverrideActionDomain) == 844, "Offset mismatch for UDelMarPostRaceRankedRecap::bOverrideActionDomain");
static_assert(offsetof(UDelMarPostRaceRankedRecap, InputMapping) == 848, "Offset mismatch for UDelMarPostRaceRankedRecap::InputMapping");
static_assert(offsetof(UDelMarPostRaceRankedRecap, InputMappingPriority) == 856, "Offset mismatch for UDelMarPostRaceRankedRecap::InputMappingPriority");
static_assert(offsetof(UDelMarPostRaceRankedRecap, InputModeTagsToAdd) == 864, "Offset mismatch for UDelMarPostRaceRankedRecap::InputModeTagsToAdd");
static_assert(offsetof(UDelMarPostRaceRankedRecap, InputModeTagsToRemove) == 896, "Offset mismatch for UDelMarPostRaceRankedRecap::InputModeTagsToRemove");
static_assert(offsetof(UDelMarPostRaceRankedRecap, ActionDomainOverride) == 928, "Offset mismatch for UDelMarPostRaceRankedRecap::ActionDomainOverride");
static_assert(offsetof(UDelMarPostRaceRankedRecap, BP_OnWidgetActivated) == 960, "Offset mismatch for UDelMarPostRaceRankedRecap::BP_OnWidgetActivated");
static_assert(offsetof(UDelMarPostRaceRankedRecap, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UDelMarPostRaceRankedRecap::BP_OnWidgetDeactivated");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bIsActive) == 992, "Offset mismatch for UDelMarPostRaceRankedRecap::bIsActive");
static_assert(offsetof(UDelMarPostRaceRankedRecap, VisibilityBoundWidgets) == 1000, "Offset mismatch for UDelMarPostRaceRankedRecap::VisibilityBoundWidgets");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UDelMarPostRaceRankedRecap::bSetVisibilityOnActivated");
static_assert(offsetof(UDelMarPostRaceRankedRecap, ActivatedVisibility) == 1177, "Offset mismatch for UDelMarPostRaceRankedRecap::ActivatedVisibility");
static_assert(offsetof(UDelMarPostRaceRankedRecap, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UDelMarPostRaceRankedRecap::bSetVisibilityOnDeactivated");
static_assert(offsetof(UDelMarPostRaceRankedRecap, DeactivatedVisibility) == 1179, "Offset mismatch for UDelMarPostRaceRankedRecap::DeactivatedVisibility");

// /Script/DelMarUI.DelMarPostRaceScreen
// Kind: Class; super: DelMarScreenBase
class UDelMarPostRaceScreen
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    std::uint8_t TabNavLeftDataTableRow[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t TabNavRightDataTableRow[0x10]; // 0x0530 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReadyUpDataTableRow[0x10]; // 0x0540 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpectateDataTableRow[0x10]; // 0x0550 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResetRunDataTableRow[0x10]; // 0x0560 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReturnToLobbyDataTableRow[0x10]; // 0x0570 (Size: 0x10, Type: StructProperty)
    std::uint8_t OpenQuestBrowserDataTableRow[0x10]; // 0x0580 (Size: 0x10, Type: StructProperty)
    void* ToggleQuestBrowserInputAction; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QuestBrowserAllowedRaceModes; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    void* ButtonGroup_PostMatchNavigation; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedRaceManager; // 0x05B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarPostRaceScreen, TabNavLeftDataTableRow) == 1312, "Offset mismatch for UDelMarPostRaceScreen::TabNavLeftDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, TabNavRightDataTableRow) == 1328, "Offset mismatch for UDelMarPostRaceScreen::TabNavRightDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, ReadyUpDataTableRow) == 1344, "Offset mismatch for UDelMarPostRaceScreen::ReadyUpDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, SpectateDataTableRow) == 1360, "Offset mismatch for UDelMarPostRaceScreen::SpectateDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, ResetRunDataTableRow) == 1376, "Offset mismatch for UDelMarPostRaceScreen::ResetRunDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, ReturnToLobbyDataTableRow) == 1392, "Offset mismatch for UDelMarPostRaceScreen::ReturnToLobbyDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, OpenQuestBrowserDataTableRow) == 1408, "Offset mismatch for UDelMarPostRaceScreen::OpenQuestBrowserDataTableRow");
static_assert(offsetof(UDelMarPostRaceScreen, ToggleQuestBrowserInputAction) == 1424, "Offset mismatch for UDelMarPostRaceScreen::ToggleQuestBrowserInputAction");
static_assert(offsetof(UDelMarPostRaceScreen, QuestBrowserAllowedRaceModes) == 1432, "Offset mismatch for UDelMarPostRaceScreen::QuestBrowserAllowedRaceModes");
static_assert(offsetof(UDelMarPostRaceScreen, ButtonGroup_PostMatchNavigation) == 1448, "Offset mismatch for UDelMarPostRaceScreen::ButtonGroup_PostMatchNavigation");
static_assert(offsetof(UDelMarPostRaceScreen, CachedRaceManager) == 1456, "Offset mismatch for UDelMarPostRaceScreen::CachedRaceManager");

// /Script/DelMarUI.DelMarPostRaceVoteWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarPostRaceVoteWidget
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x0388 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenVisibility; // 0x0389 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysReverseInterruptedAnimations; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x038B
    void* WidgetTransitioner; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionIn; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionOut; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarPostRaceVoteWidget, InitialTransitionStatus) == 904, "Offset mismatch for UDelMarPostRaceVoteWidget::InitialTransitionStatus");
static_assert(offsetof(UDelMarPostRaceVoteWidget, HiddenVisibility) == 905, "Offset mismatch for UDelMarPostRaceVoteWidget::HiddenVisibility");
static_assert(offsetof(UDelMarPostRaceVoteWidget, bAlwaysReverseInterruptedAnimations) == 906, "Offset mismatch for UDelMarPostRaceVoteWidget::bAlwaysReverseInterruptedAnimations");
static_assert(offsetof(UDelMarPostRaceVoteWidget, WidgetTransitioner) == 912, "Offset mismatch for UDelMarPostRaceVoteWidget::WidgetTransitioner");
static_assert(offsetof(UDelMarPostRaceVoteWidget, NormalTransitionIn) == 920, "Offset mismatch for UDelMarPostRaceVoteWidget::NormalTransitionIn");
static_assert(offsetof(UDelMarPostRaceVoteWidget, NormalTransitionOut) == 928, "Offset mismatch for UDelMarPostRaceVoteWidget::NormalTransitionOut");

// /Script/DelMarUI.DelMarQuestScreenContainer
// Kind: Class; super: DelMarUserWidget
class UDelMarQuestScreenContainer
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t AllowedRaceGameplayStates[0x20]; // 0x03A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t AllowedRacerStates[0x20]; // 0x03C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t AllowedRaceModes[0x20]; // 0x03E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PreRaceInputRaceStates[0x20]; // 0x0408 (Size: 0x20, Type: StructProperty)
    std::uint8_t RaceGameplayState[0x4]; // 0x0428 (Size: 0x4, Type: StructProperty)
    std::uint8_t RaceMode[0x4]; // 0x042C (Size: 0x4, Type: StructProperty)
    std::uint8_t RacerState[0x8]; // 0x0430 (Size: 0x8, Type: StructProperty)
    void* AthenaScreenContainer; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnQuestListActivate; // 0x0440 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnQuestListDeactivate; // 0x0450 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAthenaScreenContainerVisible; // 0x0460 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0461
    double LastOnVisibleTimeSeconds; // 0x0468 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LastOnVisibleRaceState[0x1]; // 0x0470 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarQuestScreenContainer, AllowedRaceGameplayStates) == 936, "Offset mismatch for UDelMarQuestScreenContainer::AllowedRaceGameplayStates");
static_assert(offsetof(UDelMarQuestScreenContainer, AllowedRacerStates) == 968, "Offset mismatch for UDelMarQuestScreenContainer::AllowedRacerStates");
static_assert(offsetof(UDelMarQuestScreenContainer, AllowedRaceModes) == 1000, "Offset mismatch for UDelMarQuestScreenContainer::AllowedRaceModes");
static_assert(offsetof(UDelMarQuestScreenContainer, PreRaceInputRaceStates) == 1032, "Offset mismatch for UDelMarQuestScreenContainer::PreRaceInputRaceStates");
static_assert(offsetof(UDelMarQuestScreenContainer, RaceGameplayState) == 1064, "Offset mismatch for UDelMarQuestScreenContainer::RaceGameplayState");
static_assert(offsetof(UDelMarQuestScreenContainer, RaceMode) == 1068, "Offset mismatch for UDelMarQuestScreenContainer::RaceMode");
static_assert(offsetof(UDelMarQuestScreenContainer, RacerState) == 1072, "Offset mismatch for UDelMarQuestScreenContainer::RacerState");
static_assert(offsetof(UDelMarQuestScreenContainer, AthenaScreenContainer) == 1080, "Offset mismatch for UDelMarQuestScreenContainer::AthenaScreenContainer");
static_assert(offsetof(UDelMarQuestScreenContainer, OnQuestListActivate) == 1088, "Offset mismatch for UDelMarQuestScreenContainer::OnQuestListActivate");
static_assert(offsetof(UDelMarQuestScreenContainer, OnQuestListDeactivate) == 1104, "Offset mismatch for UDelMarQuestScreenContainer::OnQuestListDeactivate");
static_assert(offsetof(UDelMarQuestScreenContainer, bAthenaScreenContainerVisible) == 1120, "Offset mismatch for UDelMarQuestScreenContainer::bAthenaScreenContainerVisible");
static_assert(offsetof(UDelMarQuestScreenContainer, LastOnVisibleTimeSeconds) == 1128, "Offset mismatch for UDelMarQuestScreenContainer::LastOnVisibleTimeSeconds");
static_assert(offsetof(UDelMarQuestScreenContainer, LastOnVisibleRaceState) == 1136, "Offset mismatch for UDelMarQuestScreenContainer::LastOnVisibleRaceState");

// /Script/DelMarUI.DelMarRaceViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarRaceViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t TotalLaps; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlayers; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalReadyPlayers; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalLoadedPlayers; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalJoiningPlayers; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlacements; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t MapName[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t MapCreator[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t MapDescription[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RaceMode[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DelMarGameplayState[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t LoadingBackgroundImage[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    double TimeUntilRaceStart; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    double RaceEndTimestamp; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t MatchTimeLimitSeconds; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsOvertime; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    double TimeUntilTrackChange; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    double FirstPlayerFinishedServerTimestamp; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    double FirstPlayerFinishedRaceEndServerTimestamp; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CurrentMatchmakingState; // 0x0118 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsRaceFinished; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRaceStarted; // 0x011A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x011B
    void* MatchEventViewModel; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* TrackInfoViewModel; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayer; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* TargetPlayer; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* LastTargetPlayer; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PositionPlayers; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FinalPlacements; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RacePlayers; // 0x0168 (Size: 0x10, Type: MapProperty)
    TArray<void*> TopLeaderboardEntries; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FocusedLeaderboardEntries; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FriendLeaderboardEntries; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    FString GameSessionId; // 0x01A8 (Size: 0x10, Type: StrProperty)
    FString IslandCode; // 0x01B8 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> RaceManager; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LocalPlayerController; // 0x01D0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ViewTargetPlayerState; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PositionalTrackerComponent; // 0x01E0 (Size: 0x8, Type: WeakObjectProperty)
    void* EmptyPlayerViewModel; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarRaceViewModel, TotalLaps) == 120, "Offset mismatch for UDelMarRaceViewModel::TotalLaps");
static_assert(offsetof(UDelMarRaceViewModel, TotalPlayers) == 124, "Offset mismatch for UDelMarRaceViewModel::TotalPlayers");
static_assert(offsetof(UDelMarRaceViewModel, TotalReadyPlayers) == 128, "Offset mismatch for UDelMarRaceViewModel::TotalReadyPlayers");
static_assert(offsetof(UDelMarRaceViewModel, TotalLoadedPlayers) == 132, "Offset mismatch for UDelMarRaceViewModel::TotalLoadedPlayers");
static_assert(offsetof(UDelMarRaceViewModel, TotalJoiningPlayers) == 136, "Offset mismatch for UDelMarRaceViewModel::TotalJoiningPlayers");
static_assert(offsetof(UDelMarRaceViewModel, TotalPlacements) == 140, "Offset mismatch for UDelMarRaceViewModel::TotalPlacements");
static_assert(offsetof(UDelMarRaceViewModel, MapName) == 144, "Offset mismatch for UDelMarRaceViewModel::MapName");
static_assert(offsetof(UDelMarRaceViewModel, MapCreator) == 160, "Offset mismatch for UDelMarRaceViewModel::MapCreator");
static_assert(offsetof(UDelMarRaceViewModel, MapDescription) == 176, "Offset mismatch for UDelMarRaceViewModel::MapDescription");
static_assert(offsetof(UDelMarRaceViewModel, RaceMode) == 192, "Offset mismatch for UDelMarRaceViewModel::RaceMode");
static_assert(offsetof(UDelMarRaceViewModel, DelMarGameplayState) == 196, "Offset mismatch for UDelMarRaceViewModel::DelMarGameplayState");
static_assert(offsetof(UDelMarRaceViewModel, LoadingBackgroundImage) == 200, "Offset mismatch for UDelMarRaceViewModel::LoadingBackgroundImage");
static_assert(offsetof(UDelMarRaceViewModel, TimeUntilRaceStart) == 232, "Offset mismatch for UDelMarRaceViewModel::TimeUntilRaceStart");
static_assert(offsetof(UDelMarRaceViewModel, RaceEndTimestamp) == 240, "Offset mismatch for UDelMarRaceViewModel::RaceEndTimestamp");
static_assert(offsetof(UDelMarRaceViewModel, MatchTimeLimitSeconds) == 248, "Offset mismatch for UDelMarRaceViewModel::MatchTimeLimitSeconds");
static_assert(offsetof(UDelMarRaceViewModel, bIsOvertime) == 252, "Offset mismatch for UDelMarRaceViewModel::bIsOvertime");
static_assert(offsetof(UDelMarRaceViewModel, TimeUntilTrackChange) == 256, "Offset mismatch for UDelMarRaceViewModel::TimeUntilTrackChange");
static_assert(offsetof(UDelMarRaceViewModel, FirstPlayerFinishedServerTimestamp) == 264, "Offset mismatch for UDelMarRaceViewModel::FirstPlayerFinishedServerTimestamp");
static_assert(offsetof(UDelMarRaceViewModel, FirstPlayerFinishedRaceEndServerTimestamp) == 272, "Offset mismatch for UDelMarRaceViewModel::FirstPlayerFinishedRaceEndServerTimestamp");
static_assert(offsetof(UDelMarRaceViewModel, CurrentMatchmakingState) == 280, "Offset mismatch for UDelMarRaceViewModel::CurrentMatchmakingState");
static_assert(offsetof(UDelMarRaceViewModel, bIsRaceFinished) == 281, "Offset mismatch for UDelMarRaceViewModel::bIsRaceFinished");
static_assert(offsetof(UDelMarRaceViewModel, bIsRaceStarted) == 282, "Offset mismatch for UDelMarRaceViewModel::bIsRaceStarted");
static_assert(offsetof(UDelMarRaceViewModel, MatchEventViewModel) == 288, "Offset mismatch for UDelMarRaceViewModel::MatchEventViewModel");
static_assert(offsetof(UDelMarRaceViewModel, TrackInfoViewModel) == 296, "Offset mismatch for UDelMarRaceViewModel::TrackInfoViewModel");
static_assert(offsetof(UDelMarRaceViewModel, LocalPlayer) == 304, "Offset mismatch for UDelMarRaceViewModel::LocalPlayer");
static_assert(offsetof(UDelMarRaceViewModel, TargetPlayer) == 312, "Offset mismatch for UDelMarRaceViewModel::TargetPlayer");
static_assert(offsetof(UDelMarRaceViewModel, LastTargetPlayer) == 320, "Offset mismatch for UDelMarRaceViewModel::LastTargetPlayer");
static_assert(offsetof(UDelMarRaceViewModel, PositionPlayers) == 328, "Offset mismatch for UDelMarRaceViewModel::PositionPlayers");
static_assert(offsetof(UDelMarRaceViewModel, FinalPlacements) == 344, "Offset mismatch for UDelMarRaceViewModel::FinalPlacements");
static_assert(offsetof(UDelMarRaceViewModel, RacePlayers) == 360, "Offset mismatch for UDelMarRaceViewModel::RacePlayers");
static_assert(offsetof(UDelMarRaceViewModel, TopLeaderboardEntries) == 376, "Offset mismatch for UDelMarRaceViewModel::TopLeaderboardEntries");
static_assert(offsetof(UDelMarRaceViewModel, FocusedLeaderboardEntries) == 392, "Offset mismatch for UDelMarRaceViewModel::FocusedLeaderboardEntries");
static_assert(offsetof(UDelMarRaceViewModel, FriendLeaderboardEntries) == 408, "Offset mismatch for UDelMarRaceViewModel::FriendLeaderboardEntries");
static_assert(offsetof(UDelMarRaceViewModel, GameSessionId) == 424, "Offset mismatch for UDelMarRaceViewModel::GameSessionId");
static_assert(offsetof(UDelMarRaceViewModel, IslandCode) == 440, "Offset mismatch for UDelMarRaceViewModel::IslandCode");
static_assert(offsetof(UDelMarRaceViewModel, RaceManager) == 456, "Offset mismatch for UDelMarRaceViewModel::RaceManager");
static_assert(offsetof(UDelMarRaceViewModel, LocalPlayerController) == 464, "Offset mismatch for UDelMarRaceViewModel::LocalPlayerController");
static_assert(offsetof(UDelMarRaceViewModel, ViewTargetPlayerState) == 472, "Offset mismatch for UDelMarRaceViewModel::ViewTargetPlayerState");
static_assert(offsetof(UDelMarRaceViewModel, PositionalTrackerComponent) == 480, "Offset mismatch for UDelMarRaceViewModel::PositionalTrackerComponent");
static_assert(offsetof(UDelMarRaceViewModel, EmptyPlayerViewModel) == 488, "Offset mismatch for UDelMarRaceViewModel::EmptyPlayerViewModel");

// /Script/DelMarUI.DelMarRankedPlacementChangeVM
// Kind: Class; super: MVVMViewModelBase
class UDelMarRankedPlacementChangeVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* InitialPlacement; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* CurrentPlacement; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PositionDelta; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsDataValid; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarRankedPlacementChangeVM, InitialPlacement) == 104, "Offset mismatch for UDelMarRankedPlacementChangeVM::InitialPlacement");
static_assert(offsetof(UDelMarRankedPlacementChangeVM, CurrentPlacement) == 112, "Offset mismatch for UDelMarRankedPlacementChangeVM::CurrentPlacement");
static_assert(offsetof(UDelMarRankedPlacementChangeVM, PositionDelta) == 120, "Offset mismatch for UDelMarRankedPlacementChangeVM::PositionDelta");
static_assert(offsetof(UDelMarRankedPlacementChangeVM, bIsDataValid) == 124, "Offset mismatch for UDelMarRankedPlacementChangeVM::bIsDataValid");

// /Script/DelMarUI.DelMarRankedPlacementVM
// Kind: Class; super: MVVMViewModelBase
class UDelMarRankedPlacementVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsUnranked; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t TierIndex; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerPosition; // 0x0070 (Size: 0x4, Type: IntProperty)
    float ProgressTowardNextTier; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDataValid; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    TArray<void*> TierList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* RankedDisplayData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarRankedPlacementVM, bIsUnranked) == 104, "Offset mismatch for UDelMarRankedPlacementVM::bIsUnranked");
static_assert(offsetof(UDelMarRankedPlacementVM, TierIndex) == 108, "Offset mismatch for UDelMarRankedPlacementVM::TierIndex");
static_assert(offsetof(UDelMarRankedPlacementVM, PlayerPosition) == 112, "Offset mismatch for UDelMarRankedPlacementVM::PlayerPosition");
static_assert(offsetof(UDelMarRankedPlacementVM, ProgressTowardNextTier) == 116, "Offset mismatch for UDelMarRankedPlacementVM::ProgressTowardNextTier");
static_assert(offsetof(UDelMarRankedPlacementVM, bIsDataValid) == 120, "Offset mismatch for UDelMarRankedPlacementVM::bIsDataValid");
static_assert(offsetof(UDelMarRankedPlacementVM, TierList) == 128, "Offset mismatch for UDelMarRankedPlacementVM::TierList");
static_assert(offsetof(UDelMarRankedPlacementVM, RankedDisplayData) == 144, "Offset mismatch for UDelMarRankedPlacementVM::RankedDisplayData");

// /Script/DelMarUI.DelMarRankedRecapVM
// Kind: Class; super: MVVMViewModelBase
class UDelMarRankedRecapVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* PlacementChange; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ErrorState; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    FString OptionalErrorText; // 0x0078 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwningPlayerController; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    void* RankedDisplayData; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarRankedRecapVM, PlacementChange) == 104, "Offset mismatch for UDelMarRankedRecapVM::PlacementChange");
static_assert(offsetof(UDelMarRankedRecapVM, ErrorState) == 112, "Offset mismatch for UDelMarRankedRecapVM::ErrorState");
static_assert(offsetof(UDelMarRankedRecapVM, OptionalErrorText) == 120, "Offset mismatch for UDelMarRankedRecapVM::OptionalErrorText");
static_assert(offsetof(UDelMarRankedRecapVM, OwningLocalPlayer) == 136, "Offset mismatch for UDelMarRankedRecapVM::OwningLocalPlayer");
static_assert(offsetof(UDelMarRankedRecapVM, OwningPlayerController) == 144, "Offset mismatch for UDelMarRankedRecapVM::OwningPlayerController");
static_assert(offsetof(UDelMarRankedRecapVM, RankedDisplayData) == 152, "Offset mismatch for UDelMarRankedRecapVM::RankedDisplayData");

// /Script/DelMarUI.DelMarRankedVMContextResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UDelMarRankedVMContextResolver
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RankedDisplayData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString DevelopmentRankedKey; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDelMarRankedVMContextResolver, RankedDisplayData) == 40, "Offset mismatch for UDelMarRankedVMContextResolver::RankedDisplayData");
static_assert(offsetof(UDelMarRankedVMContextResolver, DevelopmentRankedKey) == 48, "Offset mismatch for UDelMarRankedVMContextResolver::DevelopmentRankedKey");

// /Script/DelMarUI.DelMarReadyUpWidget
// Kind: Class; super: UserWidget
class UDelMarReadyUpWidget
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

static_assert(offsetof(UDelMarReadyUpWidget, ColorAndOpacity) == 416, "Offset mismatch for UDelMarReadyUpWidget::ColorAndOpacity");
static_assert(offsetof(UDelMarReadyUpWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UDelMarReadyUpWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UDelMarReadyUpWidget, ForegroundColor) == 444, "Offset mismatch for UDelMarReadyUpWidget::ForegroundColor");
static_assert(offsetof(UDelMarReadyUpWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UDelMarReadyUpWidget::ForegroundColorDelegate");
static_assert(offsetof(UDelMarReadyUpWidget, OnVisibilityChanged) == 480, "Offset mismatch for UDelMarReadyUpWidget::OnVisibilityChanged");
static_assert(offsetof(UDelMarReadyUpWidget, Padding) == 544, "Offset mismatch for UDelMarReadyUpWidget::Padding");
static_assert(offsetof(UDelMarReadyUpWidget, Priority) == 560, "Offset mismatch for UDelMarReadyUpWidget::Priority");
static_assert(offsetof(UDelMarReadyUpWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UDelMarReadyUpWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UDelMarReadyUpWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UDelMarReadyUpWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UDelMarReadyUpWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UDelMarReadyUpWidget::ActiveSequencePlayers");
static_assert(offsetof(UDelMarReadyUpWidget, AnimationTickManager) == 600, "Offset mismatch for UDelMarReadyUpWidget::AnimationTickManager");
static_assert(offsetof(UDelMarReadyUpWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UDelMarReadyUpWidget::StoppedSequencePlayers");
static_assert(offsetof(UDelMarReadyUpWidget, NamedSlotBindings) == 648, "Offset mismatch for UDelMarReadyUpWidget::NamedSlotBindings");
static_assert(offsetof(UDelMarReadyUpWidget, Extensions) == 664, "Offset mismatch for UDelMarReadyUpWidget::Extensions");
static_assert(offsetof(UDelMarReadyUpWidget, WidgetTree) == 680, "Offset mismatch for UDelMarReadyUpWidget::WidgetTree");
static_assert(offsetof(UDelMarReadyUpWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UDelMarReadyUpWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UDelMarReadyUpWidget, TickFrequency) == 712, "Offset mismatch for UDelMarReadyUpWidget::TickFrequency");
static_assert(offsetof(UDelMarReadyUpWidget, DesiredFocusWidget) == 716, "Offset mismatch for UDelMarReadyUpWidget::DesiredFocusWidget");
static_assert(offsetof(UDelMarReadyUpWidget, InputComponent) == 728, "Offset mismatch for UDelMarReadyUpWidget::InputComponent");
static_assert(offsetof(UDelMarReadyUpWidget, AnimationCallbacks) == 736, "Offset mismatch for UDelMarReadyUpWidget::AnimationCallbacks");

// /Script/DelMarUI.DelMarRichTextInputSwitcher
// Kind: Class; super: UserWidget
class UDelMarRichTextInputSwitcher
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bUseFormattedText; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0309
    std::uint8_t TextFormat[0x10]; // 0x0310 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> Args; // 0x0320 (Size: 0x10, Type: MapProperty)
    std::uint8_t TextKBM[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextGamepad[0x10]; // 0x0340 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextTouch[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    void* Widget_RichText; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarRichTextInputSwitcher, bUseFormattedText) == 776, "Offset mismatch for UDelMarRichTextInputSwitcher::bUseFormattedText");
static_assert(offsetof(UDelMarRichTextInputSwitcher, TextFormat) == 784, "Offset mismatch for UDelMarRichTextInputSwitcher::TextFormat");
static_assert(offsetof(UDelMarRichTextInputSwitcher, Args) == 800, "Offset mismatch for UDelMarRichTextInputSwitcher::Args");
static_assert(offsetof(UDelMarRichTextInputSwitcher, TextKBM) == 816, "Offset mismatch for UDelMarRichTextInputSwitcher::TextKBM");
static_assert(offsetof(UDelMarRichTextInputSwitcher, TextGamepad) == 832, "Offset mismatch for UDelMarRichTextInputSwitcher::TextGamepad");
static_assert(offsetof(UDelMarRichTextInputSwitcher, TextTouch) == 848, "Offset mismatch for UDelMarRichTextInputSwitcher::TextTouch");
static_assert(offsetof(UDelMarRichTextInputSwitcher, Widget_RichText) == 864, "Offset mismatch for UDelMarRichTextInputSwitcher::Widget_RichText");

// /Script/DelMarUI.DelMarRunRecordViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarRunRecordViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Record[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    TArray<void*> RunRecordSectionData; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasValidData; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarRunRecordViewModel, Record) == 120, "Offset mismatch for UDelMarRunRecordViewModel::Record");
static_assert(offsetof(UDelMarRunRecordViewModel, RunRecordSectionData) == 152, "Offset mismatch for UDelMarRunRecordViewModel::RunRecordSectionData");
static_assert(offsetof(UDelMarRunRecordViewModel, bHasValidData) == 168, "Offset mismatch for UDelMarRunRecordViewModel::bHasValidData");

// /Script/DelMarUI.DelMarScreenBase
// Kind: Class; super: CommonActivatableWidget
class UDelMarScreenBase
{
public:
    std::uint8_t Pad_0000[0x4F8]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x04F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04F9
    void* WidgetTransitioner; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bActivateOnShow; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0509
    void* NormalTransitionIn; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionOut; // 0x0518 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarScreenBase, InitialTransitionStatus) == 1272, "Offset mismatch for UDelMarScreenBase::InitialTransitionStatus");
static_assert(offsetof(UDelMarScreenBase, WidgetTransitioner) == 1280, "Offset mismatch for UDelMarScreenBase::WidgetTransitioner");
static_assert(offsetof(UDelMarScreenBase, bActivateOnShow) == 1288, "Offset mismatch for UDelMarScreenBase::bActivateOnShow");
static_assert(offsetof(UDelMarScreenBase, NormalTransitionIn) == 1296, "Offset mismatch for UDelMarScreenBase::NormalTransitionIn");
static_assert(offsetof(UDelMarScreenBase, NormalTransitionOut) == 1304, "Offset mismatch for UDelMarScreenBase::NormalTransitionOut");

// /Script/DelMarUI.DelMarSelectionListViewModel
// Kind: Class; super: DelMarListViewModel
class UDelMarSelectionListViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t SelectedIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDelMarSelectionListViewModel, SelectedIndex) == 120, "Offset mismatch for UDelMarSelectionListViewModel::SelectedIndex");

// /Script/DelMarUI.DelMarStartlineCountdownWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarStartlineCountdownWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x03A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentViewTarget; // 0x03B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarStartlineCountdownWidget, CachedDelMarVehicle) == 936, "Offset mismatch for UDelMarStartlineCountdownWidget::CachedDelMarVehicle");
static_assert(offsetof(UDelMarStartlineCountdownWidget, CurrentViewTarget) == 944, "Offset mismatch for UDelMarStartlineCountdownWidget::CurrentViewTarget");

// /Script/DelMarUI.DelMarTouchActionButton
// Kind: Class; super: DelMarTouchWidgetBase
class UDelMarTouchActionButton
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    std::uint8_t State; // 0x03D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03D1
    TMap<void*, void*> ButtonStateData; // 0x03D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHighlightActive; // 0x03E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x03E9
    FMulticastInlineDelegate OnHighlightChanged; // 0x03F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStateChanged; // 0x0400 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsUpdatingState; // 0x0410 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarTouchActionButton, State) == 976, "Offset mismatch for UDelMarTouchActionButton::State");
static_assert(offsetof(UDelMarTouchActionButton, ButtonStateData) == 984, "Offset mismatch for UDelMarTouchActionButton::ButtonStateData");
static_assert(offsetof(UDelMarTouchActionButton, bHighlightActive) == 1000, "Offset mismatch for UDelMarTouchActionButton::bHighlightActive");
static_assert(offsetof(UDelMarTouchActionButton, OnHighlightChanged) == 1008, "Offset mismatch for UDelMarTouchActionButton::OnHighlightChanged");
static_assert(offsetof(UDelMarTouchActionButton, OnStateChanged) == 1024, "Offset mismatch for UDelMarTouchActionButton::OnStateChanged");
static_assert(offsetof(UDelMarTouchActionButton, bIsUpdatingState) == 1040, "Offset mismatch for UDelMarTouchActionButton::bIsUpdatingState");

// /Script/DelMarUI.DelMarTouchRegion
// Kind: Class; super: DelMarTouchWidgetBase
class UDelMarTouchRegion
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    TArray<void*> TouchActionButtons; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDelMarTouchRegion, TouchActionButtons) == 976, "Offset mismatch for UDelMarTouchRegion::TouchActionButtons");

// /Script/DelMarUI.DelMarTouchWidgetBase
// Kind: Class; super: DelMarUserWidget
class UDelMarTouchWidgetBase
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    TArray<void*> InputActionsData; // 0x03A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bTrackInputPastBounds; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackInputFromEnter; // 0x03B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInjectingInput; // 0x03BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentInputTrackingState; // 0x03BB (Size: 0x1, Type: EnumProperty)
    std::uint8_t RequiredInputMode; // 0x03BC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDelMarTouchWidgetBase, InputActionsData) == 936, "Offset mismatch for UDelMarTouchWidgetBase::InputActionsData");
static_assert(offsetof(UDelMarTouchWidgetBase, bTrackInputPastBounds) == 952, "Offset mismatch for UDelMarTouchWidgetBase::bTrackInputPastBounds");
static_assert(offsetof(UDelMarTouchWidgetBase, bTrackInputFromEnter) == 953, "Offset mismatch for UDelMarTouchWidgetBase::bTrackInputFromEnter");
static_assert(offsetof(UDelMarTouchWidgetBase, bIsInjectingInput) == 954, "Offset mismatch for UDelMarTouchWidgetBase::bIsInjectingInput");
static_assert(offsetof(UDelMarTouchWidgetBase, CurrentInputTrackingState) == 955, "Offset mismatch for UDelMarTouchWidgetBase::CurrentInputTrackingState");
static_assert(offsetof(UDelMarTouchWidgetBase, RequiredInputMode) == 956, "Offset mismatch for UDelMarTouchWidgetBase::RequiredInputMode");

// /Script/DelMarUI.DelMarTrackInfoViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarTrackInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bHasValidTrackData; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t TrackName[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t TrackDescription[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoadingBackgroundImage[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CreatorName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsEpicCreated; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasValidCreatorData; // 0x00D1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarTrackInfoViewModel, bHasValidTrackData) == 120, "Offset mismatch for UDelMarTrackInfoViewModel::bHasValidTrackData");
static_assert(offsetof(UDelMarTrackInfoViewModel, TrackName) == 128, "Offset mismatch for UDelMarTrackInfoViewModel::TrackName");
static_assert(offsetof(UDelMarTrackInfoViewModel, TrackDescription) == 144, "Offset mismatch for UDelMarTrackInfoViewModel::TrackDescription");
static_assert(offsetof(UDelMarTrackInfoViewModel, LoadingBackgroundImage) == 160, "Offset mismatch for UDelMarTrackInfoViewModel::LoadingBackgroundImage");
static_assert(offsetof(UDelMarTrackInfoViewModel, CreatorName) == 192, "Offset mismatch for UDelMarTrackInfoViewModel::CreatorName");
static_assert(offsetof(UDelMarTrackInfoViewModel, bIsEpicCreated) == 208, "Offset mismatch for UDelMarTrackInfoViewModel::bIsEpicCreated");
static_assert(offsetof(UDelMarTrackInfoViewModel, bHasValidCreatorData) == 209, "Offset mismatch for UDelMarTrackInfoViewModel::bHasValidCreatorData");

// /Script/DelMarUI.DelMarTurboBonusZoneWidget
// Kind: Class; super: DelMarUserWidget
class UDelMarTurboBonusZoneWidget
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    TWeakObjectPtr<void> CachedDelMarVehicle; // 0x03A8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDelMarTurboBonusZoneWidget, CachedDelMarVehicle) == 936, "Offset mismatch for UDelMarTurboBonusZoneWidget::CachedDelMarVehicle");

// /Script/DelMarUI.DelMarTutorialViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarTutorialViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t SectionTitle[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::int32_t CurrentSection; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalSections; // 0x008C (Size: 0x4, Type: IntProperty)
    TArray<void*> CurrentTutorialAnnouncementInputActions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentTutorialHintInputActions; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FinishTargetTime[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarTutorialViewModel, SectionTitle) == 120, "Offset mismatch for UDelMarTutorialViewModel::SectionTitle");
static_assert(offsetof(UDelMarTutorialViewModel, CurrentSection) == 136, "Offset mismatch for UDelMarTutorialViewModel::CurrentSection");
static_assert(offsetof(UDelMarTutorialViewModel, TotalSections) == 140, "Offset mismatch for UDelMarTutorialViewModel::TotalSections");
static_assert(offsetof(UDelMarTutorialViewModel, CurrentTutorialAnnouncementInputActions) == 144, "Offset mismatch for UDelMarTutorialViewModel::CurrentTutorialAnnouncementInputActions");
static_assert(offsetof(UDelMarTutorialViewModel, CurrentTutorialHintInputActions) == 160, "Offset mismatch for UDelMarTutorialViewModel::CurrentTutorialHintInputActions");
static_assert(offsetof(UDelMarTutorialViewModel, FinishTargetTime) == 176, "Offset mismatch for UDelMarTutorialViewModel::FinishTargetTime");

// /Script/DelMarUI.DelMarUICheatManager
// Kind: Class; super: ChildCheatManager
class UDelMarUICheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DriverCameraHiddenScene; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerIndicatorHiddenScene; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* PointsDebugWidgetVisibleScene; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* RubberbandingWidgetVisibleScene; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* StaticVehicleMeterHiddenScene; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* VehicleDebugVisibleScene; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* VehicleHealthDebugVisibleScene; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* CheckpointDebugWidgetScene; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* MapNameDebugWidgetScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* GameplayTrackList; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAttachedWidgetEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDelMarUICheatManager, DriverCameraHiddenScene) == 40, "Offset mismatch for UDelMarUICheatManager::DriverCameraHiddenScene");
static_assert(offsetof(UDelMarUICheatManager, PlayerIndicatorHiddenScene) == 48, "Offset mismatch for UDelMarUICheatManager::PlayerIndicatorHiddenScene");
static_assert(offsetof(UDelMarUICheatManager, PointsDebugWidgetVisibleScene) == 56, "Offset mismatch for UDelMarUICheatManager::PointsDebugWidgetVisibleScene");
static_assert(offsetof(UDelMarUICheatManager, RubberbandingWidgetVisibleScene) == 64, "Offset mismatch for UDelMarUICheatManager::RubberbandingWidgetVisibleScene");
static_assert(offsetof(UDelMarUICheatManager, StaticVehicleMeterHiddenScene) == 72, "Offset mismatch for UDelMarUICheatManager::StaticVehicleMeterHiddenScene");
static_assert(offsetof(UDelMarUICheatManager, VehicleDebugVisibleScene) == 80, "Offset mismatch for UDelMarUICheatManager::VehicleDebugVisibleScene");
static_assert(offsetof(UDelMarUICheatManager, VehicleHealthDebugVisibleScene) == 88, "Offset mismatch for UDelMarUICheatManager::VehicleHealthDebugVisibleScene");
static_assert(offsetof(UDelMarUICheatManager, CheckpointDebugWidgetScene) == 96, "Offset mismatch for UDelMarUICheatManager::CheckpointDebugWidgetScene");
static_assert(offsetof(UDelMarUICheatManager, MapNameDebugWidgetScene) == 104, "Offset mismatch for UDelMarUICheatManager::MapNameDebugWidgetScene");
static_assert(offsetof(UDelMarUICheatManager, GameplayTrackList) == 112, "Offset mismatch for UDelMarUICheatManager::GameplayTrackList");
static_assert(offsetof(UDelMarUICheatManager, bAttachedWidgetEnabled) == 120, "Offset mismatch for UDelMarUICheatManager::bAttachedWidgetEnabled");

// /Script/DelMarUI.DelMarUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UDelMarUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* DialogHelperClass; // 0x02A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02A8
    void* DialogHelper; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarUIDirector, DialogHelperClass) == 672, "Offset mismatch for UDelMarUIDirector::DialogHelperClass");
static_assert(offsetof(UDelMarUIDirector, DialogHelper) == 688, "Offset mismatch for UDelMarUIDirector::DialogHelper");

// /Script/DelMarUI.DelMarUIGlobals
// Kind: Class; super: Object
class UDelMarUIGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarUI.DelMarUserWidget
// Kind: Class; super: CommonUserWidget
class UDelMarUserWidget
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x0388 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenVisibility; // 0x0389 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysReverseInterruptedAnimations; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x038B
    void* WidgetTransitioner; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionIn; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* NormalTransitionOut; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDelMarUserWidget, InitialTransitionStatus) == 904, "Offset mismatch for UDelMarUserWidget::InitialTransitionStatus");
static_assert(offsetof(UDelMarUserWidget, HiddenVisibility) == 905, "Offset mismatch for UDelMarUserWidget::HiddenVisibility");
static_assert(offsetof(UDelMarUserWidget, bAlwaysReverseInterruptedAnimations) == 906, "Offset mismatch for UDelMarUserWidget::bAlwaysReverseInterruptedAnimations");
static_assert(offsetof(UDelMarUserWidget, WidgetTransitioner) == 912, "Offset mismatch for UDelMarUserWidget::WidgetTransitioner");
static_assert(offsetof(UDelMarUserWidget, NormalTransitionIn) == 920, "Offset mismatch for UDelMarUserWidget::NormalTransitionIn");
static_assert(offsetof(UDelMarUserWidget, NormalTransitionOut) == 928, "Offset mismatch for UDelMarUserWidget::NormalTransitionOut");

// /Script/DelMarUI.DelMarVehicleViewModel
// Kind: Class; super: DelMarViewModelBase
class UDelMarVehicleViewModel
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

static_assert(offsetof(UDelMarVehicleViewModel, bHasValidData) == 120, "Offset mismatch for UDelMarVehicleViewModel::bHasValidData");
static_assert(offsetof(UDelMarVehicleViewModel, bIsTurboEnabled) == 121, "Offset mismatch for UDelMarVehicleViewModel::bIsTurboEnabled");
static_assert(offsetof(UDelMarVehicleViewModel, bIsDrifting) == 124, "Offset mismatch for UDelMarVehicleViewModel::bIsDrifting");
static_assert(offsetof(UDelMarVehicleViewModel, bIsDriftingRight) == 125, "Offset mismatch for UDelMarVehicleViewModel::bIsDriftingRight");
static_assert(offsetof(UDelMarVehicleViewModel, bWheelsOnGround) == 126, "Offset mismatch for UDelMarVehicleViewModel::bWheelsOnGround");
static_assert(offsetof(UDelMarVehicleViewModel, bAnyWheelsOnGround) == 127, "Offset mismatch for UDelMarVehicleViewModel::bAnyWheelsOnGround");
static_assert(offsetof(UDelMarVehicleViewModel, DriftRanges) == 128, "Offset mismatch for UDelMarVehicleViewModel::DriftRanges");
static_assert(offsetof(UDelMarVehicleViewModel, DriftSlipAngleRatio) == 144, "Offset mismatch for UDelMarVehicleViewModel::DriftSlipAngleRatio");
static_assert(offsetof(UDelMarVehicleViewModel, DriftSteerState) == 148, "Offset mismatch for UDelMarVehicleViewModel::DriftSteerState");
static_assert(offsetof(UDelMarVehicleViewModel, PotentialDriftBoostPercent) == 152, "Offset mismatch for UDelMarVehicleViewModel::PotentialDriftBoostPercent");
static_assert(offsetof(UDelMarVehicleViewModel, StartlineBoostBonus) == 156, "Offset mismatch for UDelMarVehicleViewModel::StartlineBoostBonus");
static_assert(offsetof(UDelMarVehicleViewModel, SpeedometerState) == 160, "Offset mismatch for UDelMarVehicleViewModel::SpeedometerState");
static_assert(offsetof(UDelMarVehicleViewModel, CurrentSpeed) == 164, "Offset mismatch for UDelMarVehicleViewModel::CurrentSpeed");
static_assert(offsetof(UDelMarVehicleViewModel, NumTurboMaxCharges) == 168, "Offset mismatch for UDelMarVehicleViewModel::NumTurboMaxCharges");
static_assert(offsetof(UDelMarVehicleViewModel, NumTurboCurrentCharges) == 172, "Offset mismatch for UDelMarVehicleViewModel::NumTurboCurrentCharges");
static_assert(offsetof(UDelMarVehicleViewModel, TurboBonusZoneState) == 176, "Offset mismatch for UDelMarVehicleViewModel::TurboBonusZoneState");
static_assert(offsetof(UDelMarVehicleViewModel, UnderthrustPercent) == 180, "Offset mismatch for UDelMarVehicleViewModel::UnderthrustPercent");
static_assert(offsetof(UDelMarVehicleViewModel, MissedCheckpointDemoTimestamp) == 184, "Offset mismatch for UDelMarVehicleViewModel::MissedCheckpointDemoTimestamp");
static_assert(offsetof(UDelMarVehicleViewModel, ReturnToTrackDemoTimestamp) == 192, "Offset mismatch for UDelMarVehicleViewModel::ReturnToTrackDemoTimestamp");
static_assert(offsetof(UDelMarVehicleViewModel, bIsHeadingWrongWay) == 200, "Offset mismatch for UDelMarVehicleViewModel::bIsHeadingWrongWay");
static_assert(offsetof(UDelMarVehicleViewModel, bToggleThrottle) == 201, "Offset mismatch for UDelMarVehicleViewModel::bToggleThrottle");
static_assert(offsetof(UDelMarVehicleViewModel, ThrottleInputValue) == 204, "Offset mismatch for UDelMarVehicleViewModel::ThrottleInputValue");
static_assert(offsetof(UDelMarVehicleViewModel, bDemolished) == 208, "Offset mismatch for UDelMarVehicleViewModel::bDemolished");
static_assert(offsetof(UDelMarVehicleViewModel, DemolishActionPressedPercent) == 212, "Offset mismatch for UDelMarVehicleViewModel::DemolishActionPressedPercent");
static_assert(offsetof(UDelMarVehicleViewModel, bDemolishActionEnabled) == 216, "Offset mismatch for UDelMarVehicleViewModel::bDemolishActionEnabled");
static_assert(offsetof(UDelMarVehicleViewModel, PlayerState) == 220, "Offset mismatch for UDelMarVehicleViewModel::PlayerState");
static_assert(offsetof(UDelMarVehicleViewModel, CurrentVehicle) == 228, "Offset mismatch for UDelMarVehicleViewModel::CurrentVehicle");
static_assert(offsetof(UDelMarVehicleViewModel, GlobalInputDisabler) == 236, "Offset mismatch for UDelMarVehicleViewModel::GlobalInputDisabler");

// /Script/DelMarUI.DelMarViewModelBase
// Kind: Class; super: FortPerUserViewModel
class UDelMarViewModelBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DelMarUI.DelMarWidgetComponent
// Kind: Class; super: WidgetComponent
class UDelMarWidgetComponent
{
public:
    std::uint8_t Pad_0000[0x770]; // 0x0000
    std::uint8_t LeftTopPadding[0x10]; // 0x0770 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightBottomPadding[0x1]; // 0x0780 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDelMarWidgetComponent, LeftTopPadding) == 1904, "Offset mismatch for UDelMarWidgetComponent::LeftTopPadding");
static_assert(offsetof(UDelMarWidgetComponent, RightBottomPadding) == 1920, "Offset mismatch for UDelMarWidgetComponent::RightBottomPadding");
