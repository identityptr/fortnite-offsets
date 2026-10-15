/**
 * decamp dumper generated SDK
 * Package: /Compete/TournamentDetails/ItemPreview/WBP_RewardInfo_Unlocked
 */
#pragma once
#include "Basic.h"

// /Compete/TournamentDetails/ItemPreview/WBP_RewardInfo_Unlocked.WBP_RewardInfo_Unlocked_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_RewardInfo_Unlocked_C
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

static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, ColorAndOpacity) == 416, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::ColorAndOpacity");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, ColorAndOpacityDelegate) == 432, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::ColorAndOpacityDelegate");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, ForegroundColor) == 444, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::ForegroundColor");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, ForegroundColorDelegate) == 464, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::ForegroundColorDelegate");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, OnVisibilityChanged) == 480, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::OnVisibilityChanged");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, Padding) == 544, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::Padding");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, Priority) == 560, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::Priority");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, ActiveSequencePlayers) == 584, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::ActiveSequencePlayers");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, AnimationTickManager) == 600, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::AnimationTickManager");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, StoppedSequencePlayers) == 608, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::StoppedSequencePlayers");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, NamedSlotBindings) == 648, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::NamedSlotBindings");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, Extensions) == 664, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::Extensions");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, WidgetTree) == 680, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::WidgetTree");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, bHasScriptImplementedPaint) == 688, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::bHasScriptImplementedPaint");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, TickFrequency) == 712, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::TickFrequency");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, DesiredFocusWidget) == 716, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::DesiredFocusWidget");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, InputComponent) == 728, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::InputComponent");
static_assert(offsetof(UWBP_RewardInfo_Unlocked_C, AnimationCallbacks) == 736, "Offset mismatch for UWBP_RewardInfo_Unlocked_C::AnimationCallbacks");
