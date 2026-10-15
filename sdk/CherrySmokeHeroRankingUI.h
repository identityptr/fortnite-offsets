/**
 * decamp dumper generated SDK
 * Package: /Script/CherrySmokeHeroRankingUI
 */
#pragma once
#include "Basic.h"

// /Script/CherrySmokeHeroRankingUI.CherrySmokeHeroPointsEarnedData
// Kind: ScriptStruct; super: none
struct FCherrySmokeHeroPointsEarnedData
{
public:
    float PointsEarned; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PointsSource; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PointsSourceAsInt; // 0x0005 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t Context[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCherrySmokeHeroPointsEarnedData, PointsEarned) == 0, "Offset mismatch for FCherrySmokeHeroPointsEarnedData::PointsEarned");
static_assert(offsetof(FCherrySmokeHeroPointsEarnedData, PointsSource) == 4, "Offset mismatch for FCherrySmokeHeroPointsEarnedData::PointsSource");
static_assert(offsetof(FCherrySmokeHeroPointsEarnedData, PointsSourceAsInt) == 5, "Offset mismatch for FCherrySmokeHeroPointsEarnedData::PointsSourceAsInt");
static_assert(offsetof(FCherrySmokeHeroPointsEarnedData, Context) == 8, "Offset mismatch for FCherrySmokeHeroPointsEarnedData::Context");

// /Script/CherrySmokeHeroRankingUI.CherrySmokeHeroRankingPlayerInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UCherrySmokeHeroRankingPlayerInfoWidget
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

static_assert(offsetof(UCherrySmokeHeroRankingPlayerInfoWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UCherrySmokeHeroRankingPlayerInfoWidget::HLTDependentWidgetTag");
static_assert(offsetof(UCherrySmokeHeroRankingPlayerInfoWidget, ElementTag) == 828, "Offset mismatch for UCherrySmokeHeroRankingPlayerInfoWidget::ElementTag");
static_assert(offsetof(UCherrySmokeHeroRankingPlayerInfoWidget, HUDElementTag) == 832, "Offset mismatch for UCherrySmokeHeroRankingPlayerInfoWidget::HUDElementTag");
static_assert(offsetof(UCherrySmokeHeroRankingPlayerInfoWidget, HiddenVisibility) == 864, "Offset mismatch for UCherrySmokeHeroRankingPlayerInfoWidget::HiddenVisibility");
static_assert(offsetof(UCherrySmokeHeroRankingPlayerInfoWidget, TutorialHighlight) == 872, "Offset mismatch for UCherrySmokeHeroRankingPlayerInfoWidget::TutorialHighlight");

// /Script/CherrySmokeHeroRankingUI.CherrySmokeHeroRankingVM
// Kind: Class; super: FortPerUserViewModel
class UCherrySmokeHeroRankingVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bIsNewPlayerState; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsValidPlayerState; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0082
    std::uint8_t CurrentRankTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    float CurrentTotalHeroPoints; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CurrentHeroPointsMax; // 0x008C (Size: 0x4, Type: FloatProperty)
    float CurrentRankPercentage; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RecentPointsEarnedData[0xC]; // 0x0094 (Size: 0xC, Type: StructProperty)
    std::uint8_t CurrentMultiplierData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCherrySmokeHeroRankingVM, bIsNewPlayerState) == 128, "Offset mismatch for UCherrySmokeHeroRankingVM::bIsNewPlayerState");
static_assert(offsetof(UCherrySmokeHeroRankingVM, bIsValidPlayerState) == 129, "Offset mismatch for UCherrySmokeHeroRankingVM::bIsValidPlayerState");
static_assert(offsetof(UCherrySmokeHeroRankingVM, CurrentRankTag) == 132, "Offset mismatch for UCherrySmokeHeroRankingVM::CurrentRankTag");
static_assert(offsetof(UCherrySmokeHeroRankingVM, CurrentTotalHeroPoints) == 136, "Offset mismatch for UCherrySmokeHeroRankingVM::CurrentTotalHeroPoints");
static_assert(offsetof(UCherrySmokeHeroRankingVM, CurrentHeroPointsMax) == 140, "Offset mismatch for UCherrySmokeHeroRankingVM::CurrentHeroPointsMax");
static_assert(offsetof(UCherrySmokeHeroRankingVM, CurrentRankPercentage) == 144, "Offset mismatch for UCherrySmokeHeroRankingVM::CurrentRankPercentage");
static_assert(offsetof(UCherrySmokeHeroRankingVM, RecentPointsEarnedData) == 148, "Offset mismatch for UCherrySmokeHeroRankingVM::RecentPointsEarnedData");
static_assert(offsetof(UCherrySmokeHeroRankingVM, CurrentMultiplierData) == 160, "Offset mismatch for UCherrySmokeHeroRankingVM::CurrentMultiplierData");

// /Script/CherrySmokeHeroRankingUI.CherrySmokeLastKillerHeroRankingInfo
// Kind: Class; super: UserWidget
class UCherrySmokeLastKillerHeroRankingInfo
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

static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, ColorAndOpacity) == 416, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::ColorAndOpacity");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, ColorAndOpacityDelegate) == 432, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::ColorAndOpacityDelegate");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, ForegroundColor) == 444, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::ForegroundColor");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, ForegroundColorDelegate) == 464, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::ForegroundColorDelegate");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, OnVisibilityChanged) == 480, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::OnVisibilityChanged");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, Padding) == 544, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::Padding");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, Priority) == 560, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::Priority");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, ActiveSequencePlayers) == 584, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::ActiveSequencePlayers");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, AnimationTickManager) == 600, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::AnimationTickManager");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, StoppedSequencePlayers) == 608, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::StoppedSequencePlayers");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, NamedSlotBindings) == 648, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::NamedSlotBindings");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, Extensions) == 664, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::Extensions");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, WidgetTree) == 680, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::WidgetTree");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, bHasScriptImplementedPaint) == 688, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::bHasScriptImplementedPaint");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, TickFrequency) == 712, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::TickFrequency");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, DesiredFocusWidget) == 716, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::DesiredFocusWidget");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, InputComponent) == 728, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::InputComponent");
static_assert(offsetof(UCherrySmokeLastKillerHeroRankingInfo, AnimationCallbacks) == 736, "Offset mismatch for UCherrySmokeLastKillerHeroRankingInfo::AnimationCallbacks");

// /Script/CherrySmokeHeroRankingUI.CherrySmokeViewerHeroRankingVM
// Kind: Class; super: CherrySmokeHeroRankingVM
class UCherrySmokeViewerHeroRankingVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bIsNewPlayerState; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsValidPlayerState; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0082
    std::uint8_t CurrentRankTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    float CurrentTotalHeroPoints; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CurrentHeroPointsMax; // 0x008C (Size: 0x4, Type: FloatProperty)
    float CurrentRankPercentage; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RecentPointsEarnedData[0xC]; // 0x0094 (Size: 0xC, Type: StructProperty)
    std::uint8_t CurrentMultiplierData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, bIsNewPlayerState) == 128, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::bIsNewPlayerState");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, bIsValidPlayerState) == 129, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::bIsValidPlayerState");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, CurrentRankTag) == 132, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::CurrentRankTag");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, CurrentTotalHeroPoints) == 136, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::CurrentTotalHeroPoints");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, CurrentHeroPointsMax) == 140, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::CurrentHeroPointsMax");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, CurrentRankPercentage) == 144, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::CurrentRankPercentage");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, RecentPointsEarnedData) == 148, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::RecentPointsEarnedData");
static_assert(offsetof(UCherrySmokeViewerHeroRankingVM, CurrentMultiplierData) == 160, "Offset mismatch for UCherrySmokeViewerHeroRankingVM::CurrentMultiplierData");
