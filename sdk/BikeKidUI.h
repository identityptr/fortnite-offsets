/**
 * decamp dumper generated SDK
 * Package: /Script/BikeKidUI
 */
#pragma once
#include "Basic.h"

// /Script/BikeKidUI.BikeKidWidgetIdentifier
// Kind: ScriptStruct; super: none
struct FBikeKidWidgetIdentifier
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> WeakWdiget; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FBikeKidWidgetIdentifier, Tags) == 0, "Offset mismatch for FBikeKidWidgetIdentifier::Tags");
static_assert(offsetof(FBikeKidWidgetIdentifier, WeakWdiget) == 32, "Offset mismatch for FBikeKidWidgetIdentifier::WeakWdiget");

// /Script/BikeKidUI.BikeKidHUD
// Kind: Class; super: UserWidget
class UBikeKidHUD
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
    std::uint8_t SpeedBoostAbilityTag[0x8]; // 0x0390 (Size: 0x8, Type: StructProperty)
    void* Overlay_Health; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EnergyLevel; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Reticle; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_TetheringIndicator; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    float MaxHealthCache; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    float MaxEnergyCache; // 0x03BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x28]; // 0x03C0
    std::uint8_t SignalDataTimerHandle[0x8]; // 0x03E8 (Size: 0x8, Type: StructProperty)
    TArray<void*> HUDIdentifiers; // 0x03F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBikeKidHUD, TimeToConfirmTargetCache) == 776, "Offset mismatch for UBikeKidHUD::TimeToConfirmTargetCache");
static_assert(offsetof(UBikeKidHUD, InitialHealth) == 780, "Offset mismatch for UBikeKidHUD::InitialHealth");
static_assert(offsetof(UBikeKidHUD, WarningRange) == 784, "Offset mismatch for UBikeKidHUD::WarningRange");
static_assert(offsetof(UBikeKidHUD, SignalLossRange) == 824, "Offset mismatch for UBikeKidHUD::SignalLossRange");
static_assert(offsetof(UBikeKidHUD, UpdateSignalInterval) == 864, "Offset mismatch for UBikeKidHUD::UpdateSignalInterval");
static_assert(offsetof(UBikeKidHUD, MarkAbilityTag) == 904, "Offset mismatch for UBikeKidHUD::MarkAbilityTag");
static_assert(offsetof(UBikeKidHUD, DismissAbilityTag) == 908, "Offset mismatch for UBikeKidHUD::DismissAbilityTag");
static_assert(offsetof(UBikeKidHUD, SpeedBoostAbilityTag) == 912, "Offset mismatch for UBikeKidHUD::SpeedBoostAbilityTag");
static_assert(offsetof(UBikeKidHUD, Overlay_Health) == 920, "Offset mismatch for UBikeKidHUD::Overlay_Health");
static_assert(offsetof(UBikeKidHUD, Overlay_EnergyLevel) == 928, "Offset mismatch for UBikeKidHUD::Overlay_EnergyLevel");
static_assert(offsetof(UBikeKidHUD, Overlay_Reticle) == 936, "Offset mismatch for UBikeKidHUD::Overlay_Reticle");
static_assert(offsetof(UBikeKidHUD, Overlay_TetheringIndicator) == 944, "Offset mismatch for UBikeKidHUD::Overlay_TetheringIndicator");
static_assert(offsetof(UBikeKidHUD, MaxHealthCache) == 952, "Offset mismatch for UBikeKidHUD::MaxHealthCache");
static_assert(offsetof(UBikeKidHUD, MaxEnergyCache) == 956, "Offset mismatch for UBikeKidHUD::MaxEnergyCache");
static_assert(offsetof(UBikeKidHUD, SignalDataTimerHandle) == 1000, "Offset mismatch for UBikeKidHUD::SignalDataTimerHandle");
static_assert(offsetof(UBikeKidHUD, HUDIdentifiers) == 1008, "Offset mismatch for UBikeKidHUD::HUDIdentifiers");

// /Script/BikeKidUI.BikeKidTetherIndicator
// Kind: Class; super: UserWidget
class UBikeKidTetherIndicator
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

static_assert(offsetof(UBikeKidTetherIndicator, ColorAndOpacity) == 416, "Offset mismatch for UBikeKidTetherIndicator::ColorAndOpacity");
static_assert(offsetof(UBikeKidTetherIndicator, ColorAndOpacityDelegate) == 432, "Offset mismatch for UBikeKidTetherIndicator::ColorAndOpacityDelegate");
static_assert(offsetof(UBikeKidTetherIndicator, ForegroundColor) == 444, "Offset mismatch for UBikeKidTetherIndicator::ForegroundColor");
static_assert(offsetof(UBikeKidTetherIndicator, ForegroundColorDelegate) == 464, "Offset mismatch for UBikeKidTetherIndicator::ForegroundColorDelegate");
static_assert(offsetof(UBikeKidTetherIndicator, OnVisibilityChanged) == 480, "Offset mismatch for UBikeKidTetherIndicator::OnVisibilityChanged");
static_assert(offsetof(UBikeKidTetherIndicator, Padding) == 544, "Offset mismatch for UBikeKidTetherIndicator::Padding");
static_assert(offsetof(UBikeKidTetherIndicator, Priority) == 560, "Offset mismatch for UBikeKidTetherIndicator::Priority");
static_assert(offsetof(UBikeKidTetherIndicator, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UBikeKidTetherIndicator::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UBikeKidTetherIndicator, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UBikeKidTetherIndicator::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UBikeKidTetherIndicator, ActiveSequencePlayers) == 584, "Offset mismatch for UBikeKidTetherIndicator::ActiveSequencePlayers");
static_assert(offsetof(UBikeKidTetherIndicator, AnimationTickManager) == 600, "Offset mismatch for UBikeKidTetherIndicator::AnimationTickManager");
static_assert(offsetof(UBikeKidTetherIndicator, StoppedSequencePlayers) == 608, "Offset mismatch for UBikeKidTetherIndicator::StoppedSequencePlayers");
static_assert(offsetof(UBikeKidTetherIndicator, NamedSlotBindings) == 648, "Offset mismatch for UBikeKidTetherIndicator::NamedSlotBindings");
static_assert(offsetof(UBikeKidTetherIndicator, Extensions) == 664, "Offset mismatch for UBikeKidTetherIndicator::Extensions");
static_assert(offsetof(UBikeKidTetherIndicator, WidgetTree) == 680, "Offset mismatch for UBikeKidTetherIndicator::WidgetTree");
static_assert(offsetof(UBikeKidTetherIndicator, bHasScriptImplementedPaint) == 688, "Offset mismatch for UBikeKidTetherIndicator::bHasScriptImplementedPaint");
static_assert(offsetof(UBikeKidTetherIndicator, TickFrequency) == 712, "Offset mismatch for UBikeKidTetherIndicator::TickFrequency");
static_assert(offsetof(UBikeKidTetherIndicator, DesiredFocusWidget) == 716, "Offset mismatch for UBikeKidTetherIndicator::DesiredFocusWidget");
static_assert(offsetof(UBikeKidTetherIndicator, InputComponent) == 728, "Offset mismatch for UBikeKidTetherIndicator::InputComponent");
static_assert(offsetof(UBikeKidTetherIndicator, AnimationCallbacks) == 736, "Offset mismatch for UBikeKidTetherIndicator::AnimationCallbacks");

// /Script/BikeKidUI.BikeKidUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UBikeKidUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t HUDTagsToHide[0x1]; // 0x02A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBikeKidUIDirector, HUDTagsToHide) == 672, "Offset mismatch for UBikeKidUIDirector::HUDTagsToHide");

// /Script/BikeKidUI.FortMobileActionButtonBehaviorExtension_BikeKidUse
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UFortMobileActionButtonBehaviorExtension_BikeKidUse
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t ContextTagToCheck[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_BikeKidUse, ContextTagToCheck) == 144, "Offset mismatch for UFortMobileActionButtonBehaviorExtension_BikeKidUse::ContextTagToCheck");
