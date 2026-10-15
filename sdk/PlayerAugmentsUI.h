/**
 * decamp dumper generated SDK
 * Package: /Script/PlayerAugmentsUI
 */
#pragma once
#include "Basic.h"

// /Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UFortMobileActionBBE_AugmentShoot
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* IconOverrideSprite; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconOverrideTag[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMobileActionBBE_AugmentShoot, IconOverrideSprite) == 144, "Offset mismatch for UFortMobileActionBBE_AugmentShoot::IconOverrideSprite");
static_assert(offsetof(UFortMobileActionBBE_AugmentShoot, IconOverrideTag) == 152, "Offset mismatch for UFortMobileActionBBE_AugmentShoot::IconOverrideTag");

// /Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileActionButtonBehavior_RerollAugments
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    void* RerollCurrency; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehavior_RerollAugments, RerollCurrency) == 664, "Offset mismatch for UFortMobileActionButtonBehavior_RerollAugments::RerollCurrency");

// /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
// Kind: Class; super: FortMobileButtonBehaviorComponent_IconPicker
class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bCachedIsInInventoryView; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    void* ListViewSprite; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker, bCachedIsInInventoryView) == 88, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::bCachedIsInInventoryView");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker, ListViewSprite) == 96, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::ListViewSprite");

// /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
// Kind: Class; super: FortMobileButtonBehaviorComponent_Visibility
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ButtonBehavior; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsSpriteProxy; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility, ButtonBehavior) == 72, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListVisibility::ButtonBehavior");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility, bIsSpriteProxy) == 80, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListVisibility::bIsSpriteProxy");

// /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
// Kind: Class; super: FortMobileButtonBehaviorComponent_AugmentsListVisibility
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ButtonBehavior; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsSpriteProxy; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap, ButtonBehavior) == 72, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap::ButtonBehavior");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap, bIsSpriteProxy) == 80, "Offset mismatch for UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap::bIsSpriteProxy");

// /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer
// Kind: Class; super: FortMobileHUDElement
class UFortMobilePlayerAugmentTimer
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    TWeakObjectPtr<void> AugmentControllerComponent; // 0x03E0 (Size: 0x8, Type: WeakObjectProperty)
    void* Button_PlayerAugmentTimer; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobilePlayerAugmentTimer, AugmentControllerComponent) == 992, "Offset mismatch for UFortMobilePlayerAugmentTimer::AugmentControllerComponent");
static_assert(offsetof(UFortMobilePlayerAugmentTimer, Button_PlayerAugmentTimer) == 1000, "Offset mismatch for UFortMobilePlayerAugmentTimer::Button_PlayerAugmentTimer");

// /Script/PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_Augments
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t AllowedAugmentGameplayTags[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_Augments, AllowedAugmentGameplayTags) == 224, "Offset mismatch for UFortPickupInteractOverrideComponent_Augments::AllowedAugmentGameplayTags");

// /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
// Kind: Class; super: AthenaCollectionListEntry
class UFortPlayerAugmentCollectionListEntry
{
public:
    std::uint8_t Pad_0000[0x16A0]; // 0x0000
    void* Image_Background; // 0x16A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParamName_ItemIcon[0x4]; // 0x16A8 (Size: 0x4, Type: NameProperty)
    FName ParamName_IsDiscovered; // 0x16AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, Image_Background) == 5792, "Offset mismatch for UFortPlayerAugmentCollectionListEntry::Image_Background");
static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, ParamName_ItemIcon) == 5800, "Offset mismatch for UFortPlayerAugmentCollectionListEntry::ParamName_ItemIcon");
static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, ParamName_IsDiscovered) == 5804, "Offset mismatch for UFortPlayerAugmentCollectionListEntry::ParamName_IsDiscovered");

// /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
// Kind: Class; super: AthenaCollectionScreenBase
class UFortPlayerAugmentCollectionScreen
{
public:
    std::uint8_t Pad_0000[0x6E0]; // 0x0000
    std::uint8_t AugmentsEnabledViaHotfix[0x28]; // 0x06E0 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> TagToImageMap; // 0x0708 (Size: 0x10, Type: MapProperty)
    void* Text_CategoryTitle; // 0x0718 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentCollectionScreen, AugmentsEnabledViaHotfix) == 1760, "Offset mismatch for UFortPlayerAugmentCollectionScreen::AugmentsEnabledViaHotfix");
static_assert(offsetof(UFortPlayerAugmentCollectionScreen, TagToImageMap) == 1800, "Offset mismatch for UFortPlayerAugmentCollectionScreen::TagToImageMap");
static_assert(offsetof(UFortPlayerAugmentCollectionScreen, Text_CategoryTitle) == 1816, "Offset mismatch for UFortPlayerAugmentCollectionScreen::Text_CategoryTitle");

// /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
// Kind: Class; super: AthenaCollectionScreenContainer
class UFortPlayerAugmentCollectionScreenContainer
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    std::uint8_t MapTabInfo[0x40]; // 0x04D0 (Size: 0x40, Type: StructProperty)
    void* VisibilitySwitcher_Content; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TabInfos; // 0x0518 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NextTabInputAction[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreviousTabInputAction[0x10]; // 0x0538 (Size: 0x10, Type: StructProperty)
    void* EntryBox_TabButtons; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* Text_TabTitle; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveTabInfos; // 0x0558 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, MapTabInfo) == 1232, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::MapTabInfo");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, VisibilitySwitcher_Content) == 1296, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::VisibilitySwitcher_Content");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, TabInfos) == 1304, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::TabInfos");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, NextTabInputAction) == 1320, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::NextTabInputAction");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, PreviousTabInputAction) == 1336, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::PreviousTabInputAction");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, EntryBox_TabButtons) == 1352, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::EntryBox_TabButtons");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, Text_TabTitle) == 1360, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::Text_TabTitle");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenContainer, ActiveTabInfos) == 1368, "Offset mismatch for UFortPlayerAugmentCollectionScreenContainer::ActiveTabInfos");

// /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
// Kind: Class; super: AthenaCollectionScreenInfoOverlay
class UFortPlayerAugmentCollectionScreenInfoOverlay
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    FName ParamName_Progress; // 0x0520 (Size: 0x8, Type: NameProperty)
    void* Text_ItemCategory; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* ItemCategoryIndicator; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_UndiscoveredText; // 0x0538 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, ParamName_Progress) == 1312, "Offset mismatch for UFortPlayerAugmentCollectionScreenInfoOverlay::ParamName_Progress");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, Text_ItemCategory) == 1320, "Offset mismatch for UFortPlayerAugmentCollectionScreenInfoOverlay::Text_ItemCategory");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, ItemCategoryIndicator) == 1328, "Offset mismatch for UFortPlayerAugmentCollectionScreenInfoOverlay::ItemCategoryIndicator");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, Overlay_UndiscoveredText) == 1336, "Offset mismatch for UFortPlayerAugmentCollectionScreenInfoOverlay::Overlay_UndiscoveredText");

// /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
// Kind: Class; super: FortHUDElementWidget
class UFortPlayerAugmentGranterWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t UnblockInteractionWithChoicesTime[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    TArray<void*> AvailableAugmentItemDefinitions; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    void* Overlay_Reroll; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentGranterWidget, UnblockInteractionWithChoicesTime) == 888, "Offset mismatch for UFortPlayerAugmentGranterWidget::UnblockInteractionWithChoicesTime");
static_assert(offsetof(UFortPlayerAugmentGranterWidget, AvailableAugmentItemDefinitions) == 928, "Offset mismatch for UFortPlayerAugmentGranterWidget::AvailableAugmentItemDefinitions");
static_assert(offsetof(UFortPlayerAugmentGranterWidget, Overlay_Reroll) == 944, "Offset mismatch for UFortPlayerAugmentGranterWidget::Overlay_Reroll");

// /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
// Kind: Class; super: CommonUserWidget
class UFortPlayerAugmentHUDQuickbarWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t HiddenAugmentGameplayTags[0x20]; // 0x0330 (Size: 0x20, Type: StructProperty)
    std::uint8_t NumAugmentGrantRoundsForPlaylist[0x1]; // 0x0350 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAugmentHUDQuickbarWidget, HiddenAugmentGameplayTags) == 816, "Offset mismatch for UFortPlayerAugmentHUDQuickbarWidget::HiddenAugmentGameplayTags");
static_assert(offsetof(UFortPlayerAugmentHUDQuickbarWidget, NumAugmentGrantRoundsForPlaylist) == 848, "Offset mismatch for UFortPlayerAugmentHUDQuickbarWidget::NumAugmentGrantRoundsForPlaylist");

// /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
// Kind: Class; super: CommonUserWidget
class UFortPlayerAugmentHUDRerollWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Image_CurrencyIcon; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RerollCurrency; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CachedNumFreeRerolls; // 0x0340 (Size: 0x4, Type: IntProperty)
    FName RerollHoldMaterialParamName; // 0x0344 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x034C
    void* Image_ProgressBar; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Text_OwnedCurrency; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Text_RerollCost; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Image_CurrencyIcon) == 816, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::Image_CurrencyIcon");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, RerollCurrency) == 824, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::RerollCurrency");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, CachedNumFreeRerolls) == 832, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::CachedNumFreeRerolls");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, RerollHoldMaterialParamName) == 836, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::RerollHoldMaterialParamName");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Image_ProgressBar) == 848, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::Image_ProgressBar");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Text_OwnedCurrency) == 856, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::Text_OwnedCurrency");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Text_RerollCost) == 864, "Offset mismatch for UFortPlayerAugmentHUDRerollWidget::Text_RerollCost");

// /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
// Kind: Class; super: FortPlayerAugmentHUDTimerWidget
class UFortPlayerAugmentHUDSelectionTimerWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t bIsAugmentReadyVisible; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCountdownActive; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOffline; // 0x0372 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0373
    std::uint8_t HideTimerHandle[0x8]; // 0x0378 (Size: 0x8, Type: StructProperty)
    void* TimerProgressDMI; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CountdownStartTimeHF[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    void* NativeAugmentTimerText; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* NativeAnimTimerTextCountdownUpdated; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* NativeAnimProgressBarCountdownUpdated; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, bIsAugmentReadyVisible) == 880, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::bIsAugmentReadyVisible");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, bIsCountdownActive) == 881, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::bIsCountdownActive");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, bIsOffline) == 882, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::bIsOffline");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, HideTimerHandle) == 888, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::HideTimerHandle");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, TimerProgressDMI) == 896, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::TimerProgressDMI");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, CountdownStartTimeHF) == 904, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::CountdownStartTimeHF");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, NativeAugmentTimerText) == 944, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::NativeAugmentTimerText");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, NativeAnimTimerTextCountdownUpdated) == 952, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::NativeAnimTimerTextCountdownUpdated");
static_assert(offsetof(UFortPlayerAugmentHUDSelectionTimerWidget, NativeAnimProgressBarCountdownUpdated) == 960, "Offset mismatch for UFortPlayerAugmentHUDSelectionTimerWidget::NativeAnimProgressBarCountdownUpdated");

// /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
// Kind: Class; super: FortHUDElementWidget
class UFortPlayerAugmentHUDTimerWidget
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

static_assert(offsetof(UFortPlayerAugmentHUDTimerWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UFortPlayerAugmentHUDTimerWidget::HLTDependentWidgetTag");
static_assert(offsetof(UFortPlayerAugmentHUDTimerWidget, ElementTag) == 828, "Offset mismatch for UFortPlayerAugmentHUDTimerWidget::ElementTag");
static_assert(offsetof(UFortPlayerAugmentHUDTimerWidget, HUDElementTag) == 832, "Offset mismatch for UFortPlayerAugmentHUDTimerWidget::HUDElementTag");
static_assert(offsetof(UFortPlayerAugmentHUDTimerWidget, HiddenVisibility) == 864, "Offset mismatch for UFortPlayerAugmentHUDTimerWidget::HiddenVisibility");
static_assert(offsetof(UFortPlayerAugmentHUDTimerWidget, TutorialHighlight) == 872, "Offset mismatch for UFortPlayerAugmentHUDTimerWidget::TutorialHighlight");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
// Kind: Class; super: FortHUDElementWidget
class UFortPlayerAugmentInGameCarriedWidget
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

static_assert(offsetof(UFortPlayerAugmentInGameCarriedWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UFortPlayerAugmentInGameCarriedWidget::HLTDependentWidgetTag");
static_assert(offsetof(UFortPlayerAugmentInGameCarriedWidget, ElementTag) == 828, "Offset mismatch for UFortPlayerAugmentInGameCarriedWidget::ElementTag");
static_assert(offsetof(UFortPlayerAugmentInGameCarriedWidget, HUDElementTag) == 832, "Offset mismatch for UFortPlayerAugmentInGameCarriedWidget::HUDElementTag");
static_assert(offsetof(UFortPlayerAugmentInGameCarriedWidget, HiddenVisibility) == 864, "Offset mismatch for UFortPlayerAugmentInGameCarriedWidget::HiddenVisibility");
static_assert(offsetof(UFortPlayerAugmentInGameCarriedWidget, TutorialHighlight) == 872, "Offset mismatch for UFortPlayerAugmentInGameCarriedWidget::TutorialHighlight");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
// Kind: Class; super: CommonUserWidget
class UFortPlayerAugmentInfoEntryWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t RarityTextFormat[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    void* Text_AugmentName; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Text_AugmentRarity; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Text_AugmentCategory; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* ItemCategoryIndicator; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Image_CategoryAsImage; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* Text_AugmentDescription; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Icon_LenderAvatarIcon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_LenderAvatarIcon; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Image_LenderSquadColor; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Text_BorrowingText; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, RarityTextFormat) == 816, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::RarityTextFormat");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentName) == 832, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Text_AugmentName");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentRarity) == 840, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Text_AugmentRarity");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentCategory) == 848, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Text_AugmentCategory");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, ItemCategoryIndicator) == 856, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::ItemCategoryIndicator");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Image_CategoryAsImage) == 864, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Image_CategoryAsImage");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentDescription) == 872, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Text_AugmentDescription");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Icon_LenderAvatarIcon) == 880, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Icon_LenderAvatarIcon");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Overlay_LenderAvatarIcon) == 888, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Overlay_LenderAvatarIcon");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Image_LenderSquadColor) == 896, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Image_LenderSquadColor");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_BorrowingText) == 904, "Offset mismatch for UFortPlayerAugmentInfoEntryWidget::Text_BorrowingText");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget
// Kind: Class; super: FortTouchUserWidget
class UFortPlayerAugmentInfoTouchWidget
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    TArray<void*> ActionNames; // 0x0318 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsClickThrough; // 0x0328 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerAugmentInfoTouchWidget, ActionNames) == 792, "Offset mismatch for UFortPlayerAugmentInfoTouchWidget::ActionNames");
static_assert(offsetof(UFortPlayerAugmentInfoTouchWidget, bIsClickThrough) == 808, "Offset mismatch for UFortPlayerAugmentInfoTouchWidget::bIsClickThrough");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
// Kind: Class; super: AthenaInventoryGroupBase
class UFortPlayerAugmentInventoryExtensionRow
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t AugmentsEnabledViaHotfix[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockedGameplayTags[0x1]; // 0x03D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAugmentInventoryExtensionRow, AugmentsEnabledViaHotfix) == 944, "Offset mismatch for UFortPlayerAugmentInventoryExtensionRow::AugmentsEnabledViaHotfix");
static_assert(offsetof(UFortPlayerAugmentInventoryExtensionRow, BlockedGameplayTags) == 984, "Offset mismatch for UFortPlayerAugmentInventoryExtensionRow::BlockedGameplayTags");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
// Kind: Class; super: CommonActivatableWidget
class UFortPlayerAugmentInventoryInfoWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t RarityTextFormat[0x10]; // 0x04A8 (Size: 0x10, Type: TextProperty)
    void* Text_ItemName; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemRarity; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemCategory; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ItemCategoryIndicator; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemDescription; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Icon_LenderAvatarIcon; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Image_LenderSquadColor; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_BorrowingText; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, RarityTextFormat) == 1192, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::RarityTextFormat");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemName) == 1208, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Text_ItemName");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemRarity) == 1216, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Text_ItemRarity");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemCategory) == 1224, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Text_ItemCategory");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, ItemCategoryIndicator) == 1232, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::ItemCategoryIndicator");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemDescription) == 1240, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Text_ItemDescription");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Icon_LenderAvatarIcon) == 1248, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Icon_LenderAvatarIcon");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Image_LenderSquadColor) == 1256, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Image_LenderSquadColor");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_BorrowingText) == 1264, "Offset mismatch for UFortPlayerAugmentInventoryInfoWidget::Text_BorrowingText");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
// Kind: Class; super: CommonButtonBase
class UFortPlayerAugmentInventoryListEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ClickEvent[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::int32_t MinWidth; // 0x0334 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x033C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* Style; // 0x0348 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHideInputAction; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0351
    std::uint8_t PressedSlateSoundOverride[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSoundOverride[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSoundOverride[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSoundOverride[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSoundOverride[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSoundOverride[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedPressedSlateSoundOverride[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedClickedSlateSoundOverride[0x18]; // 0x0400 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSoundOverride[0x18]; // 0x0418 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyAlphaOnDisable; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bDisplayInputActionWhenNotInteractable (shared storage)
    // 0x0430 BoolProperty bInteractableWhenSelected (shared storage)
    // 0x0430 BoolProperty bLocked (shared storage)
    // 0x0430 BoolProperty bSelectable (shared storage)
    // 0x0430 BoolProperty bShouldSelectUponReceivingFocus (shared storage)
    // 0x0430 BoolProperty bToggleable (shared storage)
    // 0x0430 BoolProperty bTriggerClickedAfterSelection (shared storage)
    std::uint8_t bHideInputActionWithKeyboard; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bRequiresHold (shared storage)
    // 0x0431 BoolProperty bShouldUseFallbackDefaultInputAction (shared storage)
    std::uint8_t Pad_0003[0x6]; // 0x0432
    void* HoldData; // 0x0438 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSimulateHoverOnTouchInput; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0441
    std::uint8_t ClickMethod; // 0x0443 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0444 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0445 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0446
    std::int32_t InputPriority; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x044C
    std::uint8_t TriggeringInputAction[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    void* TriggeringEnhancedInputAction; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0468
    std::uint8_t bNavigateToNextWidgetOnDisable; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0479
    FMulticastInlineDelegate OnSelectedChangedBase; // 0x0480 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseClicked; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseHovered; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseFocused; // 0x04D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnfocused; // 0x04E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x04F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseSelected; // 0x0510 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnselected; // 0x0520 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragDetected; // 0x0530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragEnter; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragLeave; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragOver; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDrop; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x38]; // 0x0580
    std::uint8_t bIsPersistentBinding; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputModeOverride; // 0x05B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x26]; // 0x05BA
    void* SingleMaterialStyleMID; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x05E8
    std::uint8_t NormalStyle[0x390]; // 0x05F0 (Size: 0x390, Type: StructProperty)
    std::uint8_t SelectedStyle[0x390]; // 0x0980 (Size: 0x390, Type: StructProperty)
    std::uint8_t DisabledStyle[0x390]; // 0x0D10 (Size: 0x390, Type: StructProperty)
    std::uint8_t LockedStyle[0x390]; // 0x10A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t bStopDoubleClickPropagation; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x167]; // 0x1431
    void* InputActionWidget; // 0x1598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, ClickEvent) == 816, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::ClickEvent");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, MinWidth) == 820, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::MinWidth");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, MinHeight) == 824, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::MinHeight");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, MaxWidth) == 828, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::MaxWidth");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, MaxHeight) == 832, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::MaxHeight");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, Style) == 840, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::Style");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bHideInputAction) == 848, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bHideInputAction");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, PressedSlateSoundOverride) == 856, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::PressedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, ClickedSlateSoundOverride) == 880, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::ClickedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, HoveredSlateSoundOverride) == 904, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::HoveredSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::LockedPressedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::LockedClickedSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bApplyAlphaOnDisable");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bHideInputActionWithKeyboard");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, HoldData) == 1080, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::HoldData");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bSimulateHoverOnTouchInput");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, ClickMethod) == 1091, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::ClickMethod");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, TouchMethod) == 1092, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::TouchMethod");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, PressMethod) == 1093, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::PressMethod");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, InputPriority) == 1096, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::InputPriority");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, TriggeringInputAction) == 1104, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::TriggeringInputAction");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::TriggeringEnhancedInputAction");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnSelectedChangedBase) == 1152, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnSelectedChangedBase");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseClicked) == 1168, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseClicked");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDoubleClicked");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseHovered) == 1200, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseHovered");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseUnhovered");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseFocused) == 1232, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseFocused");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseUnfocused");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseLockClicked");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseSelected) == 1296, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseSelected");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseUnselected) == 1312, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseUnselected");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDragDetected");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDragEnter");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDragLeave");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDragOver) == 1376, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDragOver");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, OnButtonBaseDrop) == 1392, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::OnButtonBaseDrop");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bIsPersistentBinding) == 1464, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bIsPersistentBinding");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, InputModeOverride) == 1465, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::InputModeOverride");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, SingleMaterialStyleMID) == 1504, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::SingleMaterialStyleMID");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, NormalStyle) == 1520, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::NormalStyle");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, SelectedStyle) == 2432, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::SelectedStyle");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, DisabledStyle) == 3344, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::DisabledStyle");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, LockedStyle) == 4256, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::LockedStyle");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::bStopDoubleClickPropagation");
static_assert(offsetof(UFortPlayerAugmentInventoryListEntry, InputActionWidget) == 5528, "Offset mismatch for UFortPlayerAugmentInventoryListEntry::InputActionWidget");

// /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab
// Kind: Class; super: CommonActivatableWidget
class UFortPlayerAugmentInventoryTab
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t AugmentsEnabledViaHotfix[0x28]; // 0x04A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HiddenAugmentGameplayTags[0x20]; // 0x04D0 (Size: 0x20, Type: StructProperty)
    FName TabNameId; // 0x04F0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04F8
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0500 (Size: 0xF0, Type: StructProperty)
    void* AugmentInfo; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Augments; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerAugmentInventoryTab, AugmentsEnabledViaHotfix) == 1192, "Offset mismatch for UFortPlayerAugmentInventoryTab::AugmentsEnabledViaHotfix");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, HiddenAugmentGameplayTags) == 1232, "Offset mismatch for UFortPlayerAugmentInventoryTab::HiddenAugmentGameplayTags");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, TabNameId) == 1264, "Offset mismatch for UFortPlayerAugmentInventoryTab::TabNameId");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, TabButtonLabelInfo) == 1280, "Offset mismatch for UFortPlayerAugmentInventoryTab::TabButtonLabelInfo");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, AugmentInfo) == 1520, "Offset mismatch for UFortPlayerAugmentInventoryTab::AugmentInfo");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, ListView_Augments) == 1528, "Offset mismatch for UFortPlayerAugmentInventoryTab::ListView_Augments");

// /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
// Kind: Class; super: CommonUserWidget
class UFortPlayerAugmentLobbyWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerAugmentLobbyWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortPlayerAugmentLobbyWidget::bDisplayInActionBar");
static_assert(offsetof(UFortPlayerAugmentLobbyWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortPlayerAugmentLobbyWidget::bConsumePointerInput");

// /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
// Kind: Class; super: FortHUDElementWidget
class UFortPlayerAugmentPostMatchUnlocksWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t AugmentsEnabledViaHotfix[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAugmentPostMatchUnlocksWidget, AugmentsEnabledViaHotfix) == 880, "Offset mismatch for UFortPlayerAugmentPostMatchUnlocksWidget::AugmentsEnabledViaHotfix");

// /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
// Kind: Class; super: FortHUDElementWidget
class UFortPlayerAugmentSpecialAcquiredNotificationWidget
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    std::uint8_t PrioritizationData[0x8]; // 0x03D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetGameplayTags[0x1]; // 0x03D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerAugmentSpecialAcquiredNotificationWidget, PrioritizationData) == 976, "Offset mismatch for UFortPlayerAugmentSpecialAcquiredNotificationWidget::PrioritizationData");
static_assert(offsetof(UFortPlayerAugmentSpecialAcquiredNotificationWidget, TargetGameplayTags) == 984, "Offset mismatch for UFortPlayerAugmentSpecialAcquiredNotificationWidget::TargetGameplayTags");

// /Script/PlayerAugmentsUI.HUDWidgetBehaviorCondition_PlayerAugment
// Kind: Class; super: HUDWidgetBehaviorConditionBase
class UHUDWidgetBehaviorCondition_PlayerAugment
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bOnAugmentToolViewSwap; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnAugmentSelectorOpenedStatusChanged; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHUDWidgetBehaviorCondition_PlayerAugment, bOnAugmentToolViewSwap) == 72, "Offset mismatch for UHUDWidgetBehaviorCondition_PlayerAugment::bOnAugmentToolViewSwap");
static_assert(offsetof(UHUDWidgetBehaviorCondition_PlayerAugment, bOnAugmentSelectorOpenedStatusChanged) == 73, "Offset mismatch for UHUDWidgetBehaviorCondition_PlayerAugment::bOnAugmentSelectorOpenedStatusChanged");
