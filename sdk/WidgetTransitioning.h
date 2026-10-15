/**
 * decamp dumper generated SDK
 * Package: /Script/WidgetTransitioning
 */
#pragma once
#include "Basic.h"

// /Script/WidgetTransitioning.TransitionableCommonActivatableWidget
// Kind: Class; super: CommonActivatableWidget
class UTransitionableCommonActivatableWidget
{
public:
    std::uint8_t Pad_0000[0x4F8]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x04F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenVisibility; // 0x04F9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x04FA
    void* WidgetTransitioner; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bActivateOnShow; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0509
    void* DefaultTransitionIn; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* DefaultTransitionOut; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnimationHintContainer[0x1]; // 0x0520 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransitionableCommonActivatableWidget, InitialTransitionStatus) == 1272, "Offset mismatch for UTransitionableCommonActivatableWidget::InitialTransitionStatus");
static_assert(offsetof(UTransitionableCommonActivatableWidget, HiddenVisibility) == 1273, "Offset mismatch for UTransitionableCommonActivatableWidget::HiddenVisibility");
static_assert(offsetof(UTransitionableCommonActivatableWidget, WidgetTransitioner) == 1280, "Offset mismatch for UTransitionableCommonActivatableWidget::WidgetTransitioner");
static_assert(offsetof(UTransitionableCommonActivatableWidget, bActivateOnShow) == 1288, "Offset mismatch for UTransitionableCommonActivatableWidget::bActivateOnShow");
static_assert(offsetof(UTransitionableCommonActivatableWidget, DefaultTransitionIn) == 1296, "Offset mismatch for UTransitionableCommonActivatableWidget::DefaultTransitionIn");
static_assert(offsetof(UTransitionableCommonActivatableWidget, DefaultTransitionOut) == 1304, "Offset mismatch for UTransitionableCommonActivatableWidget::DefaultTransitionOut");
static_assert(offsetof(UTransitionableCommonActivatableWidget, AnimationHintContainer) == 1312, "Offset mismatch for UTransitionableCommonActivatableWidget::AnimationHintContainer");

// /Script/WidgetTransitioning.TransitionableUserWidget
// Kind: Class; super: CommonUserWidget
class UTransitionableUserWidget
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    std::uint8_t InitialTransitionStatus; // 0x0388 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenVisibility; // 0x0389 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysReverseInterruptedAnimations; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x038B
    void* WidgetTransitioner; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* DefaultTransitionIn; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* DefaultTransitionOut; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnimationHintContainer[0x1]; // 0x03A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransitionableUserWidget, InitialTransitionStatus) == 904, "Offset mismatch for UTransitionableUserWidget::InitialTransitionStatus");
static_assert(offsetof(UTransitionableUserWidget, HiddenVisibility) == 905, "Offset mismatch for UTransitionableUserWidget::HiddenVisibility");
static_assert(offsetof(UTransitionableUserWidget, bAlwaysReverseInterruptedAnimations) == 906, "Offset mismatch for UTransitionableUserWidget::bAlwaysReverseInterruptedAnimations");
static_assert(offsetof(UTransitionableUserWidget, WidgetTransitioner) == 912, "Offset mismatch for UTransitionableUserWidget::WidgetTransitioner");
static_assert(offsetof(UTransitionableUserWidget, DefaultTransitionIn) == 920, "Offset mismatch for UTransitionableUserWidget::DefaultTransitionIn");
static_assert(offsetof(UTransitionableUserWidget, DefaultTransitionOut) == 928, "Offset mismatch for UTransitionableUserWidget::DefaultTransitionOut");
static_assert(offsetof(UTransitionableUserWidget, AnimationHintContainer) == 936, "Offset mismatch for UTransitionableUserWidget::AnimationHintContainer");

// /Script/WidgetTransitioning.UIAnimationController
// Kind: Class; super: Object
class UUIAnimationController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WidgetTransitioning.UIAnimationControllerEntry
// Kind: Class; super: Object
class UUIAnimationControllerEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AnimationController; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInverted; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUIAnimationControllerEntry, AnimationController) == 40, "Offset mismatch for UUIAnimationControllerEntry::AnimationController");
static_assert(offsetof(UUIAnimationControllerEntry, bIsInverted) == 48, "Offset mismatch for UUIAnimationControllerEntry::bIsInverted");

// /Script/WidgetTransitioning.UITimelineAnimationController
// Kind: Class; super: UIAnimationController
class UUITimelineAnimationController
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* WidgetTarget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Animation; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveAnimationHandle[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUITimelineAnimationController, WidgetTarget) == 56, "Offset mismatch for UUITimelineAnimationController::WidgetTarget");
static_assert(offsetof(UUITimelineAnimationController, Animation) == 64, "Offset mismatch for UUITimelineAnimationController::Animation");
static_assert(offsetof(UUITimelineAnimationController, ActiveAnimationHandle) == 72, "Offset mismatch for UUITimelineAnimationController::ActiveAnimationHandle");

// /Script/WidgetTransitioning.WidgetTransitioner
// Kind: Class; super: Object
class UWidgetTransitioner
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnTransitionerStatusChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TargetWidget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HiddenVisibility; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShownVisibility; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransitionerStatus; // 0x0042 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0043
    void* DefaultTransitionIn; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* DefaultTransitionOut; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HintedTransitionsIn; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> HintedTransitionsOut; // 0x0068 (Size: 0x10, Type: MapProperty)
    void* ActiveEntry; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInitialized; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysReverseInterruptedAnimations; // 0x0081 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWidgetTransitioner, OnTransitionerStatusChanged) == 40, "Offset mismatch for UWidgetTransitioner::OnTransitionerStatusChanged");
static_assert(offsetof(UWidgetTransitioner, TargetWidget) == 56, "Offset mismatch for UWidgetTransitioner::TargetWidget");
static_assert(offsetof(UWidgetTransitioner, HiddenVisibility) == 64, "Offset mismatch for UWidgetTransitioner::HiddenVisibility");
static_assert(offsetof(UWidgetTransitioner, ShownVisibility) == 65, "Offset mismatch for UWidgetTransitioner::ShownVisibility");
static_assert(offsetof(UWidgetTransitioner, TransitionerStatus) == 66, "Offset mismatch for UWidgetTransitioner::TransitionerStatus");
static_assert(offsetof(UWidgetTransitioner, DefaultTransitionIn) == 72, "Offset mismatch for UWidgetTransitioner::DefaultTransitionIn");
static_assert(offsetof(UWidgetTransitioner, DefaultTransitionOut) == 80, "Offset mismatch for UWidgetTransitioner::DefaultTransitionOut");
static_assert(offsetof(UWidgetTransitioner, HintedTransitionsIn) == 88, "Offset mismatch for UWidgetTransitioner::HintedTransitionsIn");
static_assert(offsetof(UWidgetTransitioner, HintedTransitionsOut) == 104, "Offset mismatch for UWidgetTransitioner::HintedTransitionsOut");
static_assert(offsetof(UWidgetTransitioner, ActiveEntry) == 120, "Offset mismatch for UWidgetTransitioner::ActiveEntry");
static_assert(offsetof(UWidgetTransitioner, bIsInitialized) == 128, "Offset mismatch for UWidgetTransitioner::bIsInitialized");
static_assert(offsetof(UWidgetTransitioner, bAlwaysReverseInterruptedAnimations) == 129, "Offset mismatch for UWidgetTransitioner::bAlwaysReverseInterruptedAnimations");
