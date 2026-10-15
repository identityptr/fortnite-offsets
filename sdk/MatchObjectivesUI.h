/**
 * decamp dumper generated SDK
 * Package: /Script/MatchObjectivesUI
 */
#pragma once
#include "Basic.h"

// /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileButtonBehaviorComponent_MatchObjectivePicker
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    void* SkydiveFeedbackComp; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_MatchObjectivePicker, SkydiveFeedbackComp) == 664, "Offset mismatch for UFortMobileButtonBehaviorComponent_MatchObjectivePicker::SkydiveFeedbackComp");

// /Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper
// Kind: Class; super: FortMobileHUDElement
class UFortMobileHUDElement_ObjectiveSelectorWrapper
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    void* Overlay_WrapperContents; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileHUDElement_ObjectiveSelectorWrapper, Overlay_WrapperContents) == 992, "Offset mismatch for UFortMobileHUDElement_ObjectiveSelectorWrapper::Overlay_WrapperContents");

// /Script/MatchObjectivesUI.MatchObjectivesBonusEntryWidget
// Kind: Class; super: UserWidget
class UMatchObjectivesBonusEntryWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* Text_Reward; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMatchObjectivesBonusEntryWidget, Text_Reward) == 784, "Offset mismatch for UMatchObjectivesBonusEntryWidget::Text_Reward");

// /Script/MatchObjectivesUI.MatchObjectivesBonusPunchWidget
// Kind: Class; super: UserWidget
class UMatchObjectivesBonusPunchWidget
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    FText TextExpiredQuest; // 0x0320 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0338
    std::uint8_t InclusiveFilterTags[0x20]; // 0x0348 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExclusiveFilterTags[0x20]; // 0x0368 (Size: 0x20, Type: StructProperty)
    void* Text_ResetTimer; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* DynamicEntryBox_DailyBonusPips; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WidgetsPips; // 0x0398 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMatchObjectivesBonusPunchWidget, TextExpiredQuest) == 800, "Offset mismatch for UMatchObjectivesBonusPunchWidget::TextExpiredQuest");
static_assert(offsetof(UMatchObjectivesBonusPunchWidget, InclusiveFilterTags) == 840, "Offset mismatch for UMatchObjectivesBonusPunchWidget::InclusiveFilterTags");
static_assert(offsetof(UMatchObjectivesBonusPunchWidget, ExclusiveFilterTags) == 872, "Offset mismatch for UMatchObjectivesBonusPunchWidget::ExclusiveFilterTags");
static_assert(offsetof(UMatchObjectivesBonusPunchWidget, Text_ResetTimer) == 904, "Offset mismatch for UMatchObjectivesBonusPunchWidget::Text_ResetTimer");
static_assert(offsetof(UMatchObjectivesBonusPunchWidget, DynamicEntryBox_DailyBonusPips) == 912, "Offset mismatch for UMatchObjectivesBonusPunchWidget::DynamicEntryBox_DailyBonusPips");
static_assert(offsetof(UMatchObjectivesBonusPunchWidget, WidgetsPips) == 920, "Offset mismatch for UMatchObjectivesBonusPunchWidget::WidgetsPips");

// /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget
// Kind: Class; super: UserWidget
class UMatchObjectivesOptionEntryWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bIsOptionSelected; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOptionFocused; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1E]; // 0x030A
    void* Button_TapSelect; // 0x0328 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMatchObjectivesOptionEntryWidget, bIsOptionSelected) == 776, "Offset mismatch for UMatchObjectivesOptionEntryWidget::bIsOptionSelected");
static_assert(offsetof(UMatchObjectivesOptionEntryWidget, bIsOptionFocused) == 777, "Offset mismatch for UMatchObjectivesOptionEntryWidget::bIsOptionFocused");
static_assert(offsetof(UMatchObjectivesOptionEntryWidget, Button_TapSelect) == 808, "Offset mismatch for UMatchObjectivesOptionEntryWidget::Button_TapSelect");

// /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget
// Kind: Class; super: FortHUDElementWidget
class UMatchObjectivesSelectorWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* Quests_BonusPunchcard; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* DynamicEntryBox_OptionEntries; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GroupMatches; // 0x0380 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WidgetSelectorState; // 0x0390 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0391
    void* MatchObjectivesInputComponent; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Button_MobileToggle_Header; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_MobileToggle_List; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMatchObjectivesSelectorWidget, Quests_BonusPunchcard) == 880, "Offset mismatch for UMatchObjectivesSelectorWidget::Quests_BonusPunchcard");
static_assert(offsetof(UMatchObjectivesSelectorWidget, DynamicEntryBox_OptionEntries) == 888, "Offset mismatch for UMatchObjectivesSelectorWidget::DynamicEntryBox_OptionEntries");
static_assert(offsetof(UMatchObjectivesSelectorWidget, GroupMatches) == 896, "Offset mismatch for UMatchObjectivesSelectorWidget::GroupMatches");
static_assert(offsetof(UMatchObjectivesSelectorWidget, WidgetSelectorState) == 912, "Offset mismatch for UMatchObjectivesSelectorWidget::WidgetSelectorState");
static_assert(offsetof(UMatchObjectivesSelectorWidget, MatchObjectivesInputComponent) == 920, "Offset mismatch for UMatchObjectivesSelectorWidget::MatchObjectivesInputComponent");
static_assert(offsetof(UMatchObjectivesSelectorWidget, Button_MobileToggle_Header) == 928, "Offset mismatch for UMatchObjectivesSelectorWidget::Button_MobileToggle_Header");
static_assert(offsetof(UMatchObjectivesSelectorWidget, Button_MobileToggle_List) == 936, "Offset mismatch for UMatchObjectivesSelectorWidget::Button_MobileToggle_List");

// /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar
// Kind: Class; super: UserWidget
class UMatchObjectivesSocialAvatar
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Icon_SocialAvatar; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMatchObjectivesSocialAvatar, Icon_SocialAvatar) == 776, "Offset mismatch for UMatchObjectivesSocialAvatar::Icon_SocialAvatar");

// /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase
// Kind: Class; super: DynamicUIDirectorBase
class UMatchObjectivesUIDirectorBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMatchObjectivesUIDirectorBase, DefaultScenes) == 624, "Offset mismatch for UMatchObjectivesUIDirectorBase::DefaultScenes");
static_assert(offsetof(UMatchObjectivesUIDirectorBase, OwningLocalPlayer) == 640, "Offset mismatch for UMatchObjectivesUIDirectorBase::OwningLocalPlayer");
static_assert(offsetof(UMatchObjectivesUIDirectorBase, bEnabledDuringReplay) == 648, "Offset mismatch for UMatchObjectivesUIDirectorBase::bEnabledDuringReplay");
static_assert(offsetof(UMatchObjectivesUIDirectorBase, ScenesManuallyAdded) == 656, "Offset mismatch for UMatchObjectivesUIDirectorBase::ScenesManuallyAdded");
