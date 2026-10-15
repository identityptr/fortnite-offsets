/**
 * decamp dumper generated SDK
 * Package: /Script/ScoutDroneUI
 */
#pragma once
#include "Basic.h"

// /Script/ScoutDroneUI.ScoutDroneWidgetIdentifier
// Kind: ScriptStruct; super: none
struct FScoutDroneWidgetIdentifier
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> WeakWdiget; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FScoutDroneWidgetIdentifier, Tags) == 0, "Offset mismatch for FScoutDroneWidgetIdentifier::Tags");
static_assert(offsetof(FScoutDroneWidgetIdentifier, WeakWdiget) == 32, "Offset mismatch for FScoutDroneWidgetIdentifier::WeakWdiget");

// /Script/ScoutDroneUI.DronePickUpIndicatorComponent
// Kind: Class; super: GameFrameworkComponent
class UDronePickUpIndicatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ItemIndicatorType; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* DbnoIndicatorType; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IndicatorPool[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDronePickUpIndicatorComponent, ItemIndicatorType) == 192, "Offset mismatch for UDronePickUpIndicatorComponent::ItemIndicatorType");
static_assert(offsetof(UDronePickUpIndicatorComponent, DbnoIndicatorType) == 200, "Offset mismatch for UDronePickUpIndicatorComponent::DbnoIndicatorType");
static_assert(offsetof(UDronePickUpIndicatorComponent, IndicatorPool) == 208, "Offset mismatch for UDronePickUpIndicatorComponent::IndicatorPool");

// /Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t ContextTagToCheck[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_ScoutDroneUse, ContextTagToCheck) == 144, "Offset mismatch for UFortMobileActionButtonBehaviorExtension_ScoutDroneUse::ContextTagToCheck");

// /Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
// Kind: Class; super: FortMobileButtonBehaviorComponent_Visibility
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t HoldingItemsTags[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> InteractionComponent; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems, HoldingItemsTags) == 88, "Offset mismatch for UFortMobileButtonBehaviorComponent_ScoutDronePickupItems::HoldingItemsTags");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_ScoutDronePickupItems, InteractionComponent) == 120, "Offset mismatch for UFortMobileButtonBehaviorComponent_ScoutDronePickupItems::InteractionComponent");

// /Script/ScoutDroneUI.ScoutDroneHUD
// Kind: Class; super: UserWidget
class UScoutDroneHUD
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    float TimeToConfirmTargetCache; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float InitialHealth; // 0x030C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WarningRange[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t SignalLossRange[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateSignalInterval[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t MarkAbilityTag[0x4]; // 0x0388 (Size: 0x4, Type: StructProperty)
    std::uint8_t DismissAbilityTag[0x4]; // 0x038C (Size: 0x4, Type: StructProperty)
    std::uint8_t InteractAbilityTag[0x4]; // 0x0390 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickUpAbilityTag[0x4]; // 0x0394 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickUpTargetsChangedTag[0x4]; // 0x0398 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpeedBoostAbilityTag[0x4]; // 0x039C (Size: 0x4, Type: StructProperty)
    void* Overlay_Health; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EnergyLevel; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Reticle; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_TetheringIndicator; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    float MaxHealthCache; // 0x03C0 (Size: 0x4, Type: FloatProperty)
    float MaxEnergyCache; // 0x03C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x48]; // 0x03C8
    std::uint8_t SignalDataTimerHandle[0x8]; // 0x0410 (Size: 0x8, Type: StructProperty)
    TArray<void*> HUDIdentifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UScoutDroneHUD, TimeToConfirmTargetCache) == 776, "Offset mismatch for UScoutDroneHUD::TimeToConfirmTargetCache");
static_assert(offsetof(UScoutDroneHUD, InitialHealth) == 780, "Offset mismatch for UScoutDroneHUD::InitialHealth");
static_assert(offsetof(UScoutDroneHUD, WarningRange) == 784, "Offset mismatch for UScoutDroneHUD::WarningRange");
static_assert(offsetof(UScoutDroneHUD, SignalLossRange) == 824, "Offset mismatch for UScoutDroneHUD::SignalLossRange");
static_assert(offsetof(UScoutDroneHUD, UpdateSignalInterval) == 864, "Offset mismatch for UScoutDroneHUD::UpdateSignalInterval");
static_assert(offsetof(UScoutDroneHUD, MarkAbilityTag) == 904, "Offset mismatch for UScoutDroneHUD::MarkAbilityTag");
static_assert(offsetof(UScoutDroneHUD, DismissAbilityTag) == 908, "Offset mismatch for UScoutDroneHUD::DismissAbilityTag");
static_assert(offsetof(UScoutDroneHUD, InteractAbilityTag) == 912, "Offset mismatch for UScoutDroneHUD::InteractAbilityTag");
static_assert(offsetof(UScoutDroneHUD, PickUpAbilityTag) == 916, "Offset mismatch for UScoutDroneHUD::PickUpAbilityTag");
static_assert(offsetof(UScoutDroneHUD, PickUpTargetsChangedTag) == 920, "Offset mismatch for UScoutDroneHUD::PickUpTargetsChangedTag");
static_assert(offsetof(UScoutDroneHUD, SpeedBoostAbilityTag) == 924, "Offset mismatch for UScoutDroneHUD::SpeedBoostAbilityTag");
static_assert(offsetof(UScoutDroneHUD, Overlay_Health) == 928, "Offset mismatch for UScoutDroneHUD::Overlay_Health");
static_assert(offsetof(UScoutDroneHUD, Overlay_EnergyLevel) == 936, "Offset mismatch for UScoutDroneHUD::Overlay_EnergyLevel");
static_assert(offsetof(UScoutDroneHUD, Overlay_Reticle) == 944, "Offset mismatch for UScoutDroneHUD::Overlay_Reticle");
static_assert(offsetof(UScoutDroneHUD, Overlay_TetheringIndicator) == 952, "Offset mismatch for UScoutDroneHUD::Overlay_TetheringIndicator");
static_assert(offsetof(UScoutDroneHUD, MaxHealthCache) == 960, "Offset mismatch for UScoutDroneHUD::MaxHealthCache");
static_assert(offsetof(UScoutDroneHUD, MaxEnergyCache) == 964, "Offset mismatch for UScoutDroneHUD::MaxEnergyCache");
static_assert(offsetof(UScoutDroneHUD, SignalDataTimerHandle) == 1040, "Offset mismatch for UScoutDroneHUD::SignalDataTimerHandle");
static_assert(offsetof(UScoutDroneHUD, HUDIdentifiers) == 1048, "Offset mismatch for UScoutDroneHUD::HUDIdentifiers");

// /Script/ScoutDroneUI.ScoutDroneTetherIndicator
// Kind: Class; super: UserWidget
class UScoutDroneTetherIndicator
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

static_assert(offsetof(UScoutDroneTetherIndicator, ColorAndOpacity) == 416, "Offset mismatch for UScoutDroneTetherIndicator::ColorAndOpacity");
static_assert(offsetof(UScoutDroneTetherIndicator, ColorAndOpacityDelegate) == 432, "Offset mismatch for UScoutDroneTetherIndicator::ColorAndOpacityDelegate");
static_assert(offsetof(UScoutDroneTetherIndicator, ForegroundColor) == 444, "Offset mismatch for UScoutDroneTetherIndicator::ForegroundColor");
static_assert(offsetof(UScoutDroneTetherIndicator, ForegroundColorDelegate) == 464, "Offset mismatch for UScoutDroneTetherIndicator::ForegroundColorDelegate");
static_assert(offsetof(UScoutDroneTetherIndicator, OnVisibilityChanged) == 480, "Offset mismatch for UScoutDroneTetherIndicator::OnVisibilityChanged");
static_assert(offsetof(UScoutDroneTetherIndicator, Padding) == 544, "Offset mismatch for UScoutDroneTetherIndicator::Padding");
static_assert(offsetof(UScoutDroneTetherIndicator, Priority) == 560, "Offset mismatch for UScoutDroneTetherIndicator::Priority");
static_assert(offsetof(UScoutDroneTetherIndicator, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UScoutDroneTetherIndicator::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UScoutDroneTetherIndicator, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UScoutDroneTetherIndicator::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UScoutDroneTetherIndicator, ActiveSequencePlayers) == 584, "Offset mismatch for UScoutDroneTetherIndicator::ActiveSequencePlayers");
static_assert(offsetof(UScoutDroneTetherIndicator, AnimationTickManager) == 600, "Offset mismatch for UScoutDroneTetherIndicator::AnimationTickManager");
static_assert(offsetof(UScoutDroneTetherIndicator, StoppedSequencePlayers) == 608, "Offset mismatch for UScoutDroneTetherIndicator::StoppedSequencePlayers");
static_assert(offsetof(UScoutDroneTetherIndicator, NamedSlotBindings) == 648, "Offset mismatch for UScoutDroneTetherIndicator::NamedSlotBindings");
static_assert(offsetof(UScoutDroneTetherIndicator, Extensions) == 664, "Offset mismatch for UScoutDroneTetherIndicator::Extensions");
static_assert(offsetof(UScoutDroneTetherIndicator, WidgetTree) == 680, "Offset mismatch for UScoutDroneTetherIndicator::WidgetTree");
static_assert(offsetof(UScoutDroneTetherIndicator, bHasScriptImplementedPaint) == 688, "Offset mismatch for UScoutDroneTetherIndicator::bHasScriptImplementedPaint");
static_assert(offsetof(UScoutDroneTetherIndicator, TickFrequency) == 712, "Offset mismatch for UScoutDroneTetherIndicator::TickFrequency");
static_assert(offsetof(UScoutDroneTetherIndicator, DesiredFocusWidget) == 716, "Offset mismatch for UScoutDroneTetherIndicator::DesiredFocusWidget");
static_assert(offsetof(UScoutDroneTetherIndicator, InputComponent) == 728, "Offset mismatch for UScoutDroneTetherIndicator::InputComponent");
static_assert(offsetof(UScoutDroneTetherIndicator, AnimationCallbacks) == 736, "Offset mismatch for UScoutDroneTetherIndicator::AnimationCallbacks");

// /Script/ScoutDroneUI.ScoutDroneUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UScoutDroneUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t HUDTagsToHide[0x1]; // 0x02A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScoutDroneUIDirector, HUDTagsToHide) == 672, "Offset mismatch for UScoutDroneUIDirector::HUDTagsToHide");
