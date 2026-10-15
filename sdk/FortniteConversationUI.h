/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteConversationUI
 */
#pragma once
#include "Basic.h"

// /Script/FortniteConversationUI.FortApplyAbilityBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortApplyAbilityBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t PurchaseServiceText[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    void* Text_Display; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortApplyAbilityBrief, PurchaseServiceText) == 840, "Offset mismatch for UFortApplyAbilityBrief::PurchaseServiceText");
static_assert(offsetof(UFortApplyAbilityBrief, Text_Display) == 856, "Offset mismatch for UFortApplyAbilityBrief::Text_Display");

// /Script/FortniteConversationUI.FortBasicBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortBasicBrief
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBasicBrief, bDisplayInActionBar) == 776, "Offset mismatch for UFortBasicBrief::bDisplayInActionBar");
static_assert(offsetof(UFortBasicBrief, bConsumePointerInput) == 777, "Offset mismatch for UFortBasicBrief::bConsumePointerInput");

// /Script/FortniteConversationUI.FortBasicItemBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortBasicItemBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Text_TitleBar; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* TransactionStrip_Main; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* DisplayItem; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ServiceConfigs; // 0x0350 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortBasicItemBrief, Text_TitleBar) == 824, "Offset mismatch for UFortBasicItemBrief::Text_TitleBar");
static_assert(offsetof(UFortBasicItemBrief, TransactionStrip_Main) == 832, "Offset mismatch for UFortBasicItemBrief::TransactionStrip_Main");
static_assert(offsetof(UFortBasicItemBrief, DisplayItem) == 840, "Offset mismatch for UFortBasicItemBrief::DisplayItem");
static_assert(offsetof(UFortBasicItemBrief, ServiceConfigs) == 848, "Offset mismatch for UFortBasicItemBrief::ServiceConfigs");

// /Script/FortniteConversationUI.FortBuyBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortBuyBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    FString RemainingForSaleKey; // 0x0348 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortBuyBrief, RemainingForSaleKey) == 840, "Offset mismatch for UFortBuyBrief::RemainingForSaleKey");

// /Script/FortniteConversationUI.FortConversationBriefRadialList
// Kind: Class; super: UserWidget
class UFortConversationBriefRadialList
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

static_assert(offsetof(UFortConversationBriefRadialList, ColorAndOpacity) == 416, "Offset mismatch for UFortConversationBriefRadialList::ColorAndOpacity");
static_assert(offsetof(UFortConversationBriefRadialList, ColorAndOpacityDelegate) == 432, "Offset mismatch for UFortConversationBriefRadialList::ColorAndOpacityDelegate");
static_assert(offsetof(UFortConversationBriefRadialList, ForegroundColor) == 444, "Offset mismatch for UFortConversationBriefRadialList::ForegroundColor");
static_assert(offsetof(UFortConversationBriefRadialList, ForegroundColorDelegate) == 464, "Offset mismatch for UFortConversationBriefRadialList::ForegroundColorDelegate");
static_assert(offsetof(UFortConversationBriefRadialList, OnVisibilityChanged) == 480, "Offset mismatch for UFortConversationBriefRadialList::OnVisibilityChanged");
static_assert(offsetof(UFortConversationBriefRadialList, Padding) == 544, "Offset mismatch for UFortConversationBriefRadialList::Padding");
static_assert(offsetof(UFortConversationBriefRadialList, Priority) == 560, "Offset mismatch for UFortConversationBriefRadialList::Priority");
static_assert(offsetof(UFortConversationBriefRadialList, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UFortConversationBriefRadialList::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UFortConversationBriefRadialList, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UFortConversationBriefRadialList::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UFortConversationBriefRadialList, ActiveSequencePlayers) == 584, "Offset mismatch for UFortConversationBriefRadialList::ActiveSequencePlayers");
static_assert(offsetof(UFortConversationBriefRadialList, AnimationTickManager) == 600, "Offset mismatch for UFortConversationBriefRadialList::AnimationTickManager");
static_assert(offsetof(UFortConversationBriefRadialList, StoppedSequencePlayers) == 608, "Offset mismatch for UFortConversationBriefRadialList::StoppedSequencePlayers");
static_assert(offsetof(UFortConversationBriefRadialList, NamedSlotBindings) == 648, "Offset mismatch for UFortConversationBriefRadialList::NamedSlotBindings");
static_assert(offsetof(UFortConversationBriefRadialList, Extensions) == 664, "Offset mismatch for UFortConversationBriefRadialList::Extensions");
static_assert(offsetof(UFortConversationBriefRadialList, WidgetTree) == 680, "Offset mismatch for UFortConversationBriefRadialList::WidgetTree");
static_assert(offsetof(UFortConversationBriefRadialList, bHasScriptImplementedPaint) == 688, "Offset mismatch for UFortConversationBriefRadialList::bHasScriptImplementedPaint");
static_assert(offsetof(UFortConversationBriefRadialList, TickFrequency) == 712, "Offset mismatch for UFortConversationBriefRadialList::TickFrequency");
static_assert(offsetof(UFortConversationBriefRadialList, DesiredFocusWidget) == 716, "Offset mismatch for UFortConversationBriefRadialList::DesiredFocusWidget");
static_assert(offsetof(UFortConversationBriefRadialList, InputComponent) == 728, "Offset mismatch for UFortConversationBriefRadialList::InputComponent");
static_assert(offsetof(UFortConversationBriefRadialList, AnimationCallbacks) == 736, "Offset mismatch for UFortConversationBriefRadialList::AnimationCallbacks");

// /Script/FortniteConversationUI.FortConversationMarker
// Kind: Class; super: FortActorIndicatorWidget
class UFortConversationMarker
{
public:
    std::uint8_t Pad_0000[0x440]; // 0x0000
    std::uint8_t bShowConversationLimitHit; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x27]; // 0x0441
    std::uint8_t InitialOffset[0x18]; // 0x0468 (Size: 0x18, Type: StructProperty)
    std::uint8_t ManualOffset[0x18]; // 0x0480 (Size: 0x18, Type: StructProperty)
    float MessageBubbleDuration; // 0x0498 (Size: 0x4, Type: FloatProperty)
    float LastTextBubbleDuration; // 0x049C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetCustomInteractionWidgetOnlyWhenNeeded; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x04A1
    void* Switcher_States; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_PreviewState; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x04B8
    void* ConversationMessage_Main; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x04C8
    void* Text_ParticipantName; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x04D8
    void* Keybind_Nameplate; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* NPCIcon; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* CustomDialogMarkerIndicatorIcon; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultDialogMarkerIndicatorIcon; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> DefaultMaxParticipantIconTexture; // 0x0500 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortConversationMarker, bShowConversationLimitHit) == 1088, "Offset mismatch for UFortConversationMarker::bShowConversationLimitHit");
static_assert(offsetof(UFortConversationMarker, InitialOffset) == 1128, "Offset mismatch for UFortConversationMarker::InitialOffset");
static_assert(offsetof(UFortConversationMarker, ManualOffset) == 1152, "Offset mismatch for UFortConversationMarker::ManualOffset");
static_assert(offsetof(UFortConversationMarker, MessageBubbleDuration) == 1176, "Offset mismatch for UFortConversationMarker::MessageBubbleDuration");
static_assert(offsetof(UFortConversationMarker, LastTextBubbleDuration) == 1180, "Offset mismatch for UFortConversationMarker::LastTextBubbleDuration");
static_assert(offsetof(UFortConversationMarker, bSetCustomInteractionWidgetOnlyWhenNeeded) == 1184, "Offset mismatch for UFortConversationMarker::bSetCustomInteractionWidgetOnlyWhenNeeded");
static_assert(offsetof(UFortConversationMarker, Switcher_States) == 1192, "Offset mismatch for UFortConversationMarker::Switcher_States");
static_assert(offsetof(UFortConversationMarker, Overlay_PreviewState) == 1200, "Offset mismatch for UFortConversationMarker::Overlay_PreviewState");
static_assert(offsetof(UFortConversationMarker, ConversationMessage_Main) == 1216, "Offset mismatch for UFortConversationMarker::ConversationMessage_Main");
static_assert(offsetof(UFortConversationMarker, Text_ParticipantName) == 1232, "Offset mismatch for UFortConversationMarker::Text_ParticipantName");
static_assert(offsetof(UFortConversationMarker, Keybind_Nameplate) == 1248, "Offset mismatch for UFortConversationMarker::Keybind_Nameplate");
static_assert(offsetof(UFortConversationMarker, NPCIcon) == 1256, "Offset mismatch for UFortConversationMarker::NPCIcon");
static_assert(offsetof(UFortConversationMarker, CustomDialogMarkerIndicatorIcon) == 1264, "Offset mismatch for UFortConversationMarker::CustomDialogMarkerIndicatorIcon");
static_assert(offsetof(UFortConversationMarker, DefaultDialogMarkerIndicatorIcon) == 1272, "Offset mismatch for UFortConversationMarker::DefaultDialogMarkerIndicatorIcon");
static_assert(offsetof(UFortConversationMarker, DefaultMaxParticipantIconTexture) == 1280, "Offset mismatch for UFortConversationMarker::DefaultMaxParticipantIconTexture");

// /Script/FortniteConversationUI.FortConversationMessageWidget
// Kind: Class; super: FortHUDElementWidget
class UFortConversationMessageWidget
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

static_assert(offsetof(UFortConversationMessageWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UFortConversationMessageWidget::HLTDependentWidgetTag");
static_assert(offsetof(UFortConversationMessageWidget, ElementTag) == 828, "Offset mismatch for UFortConversationMessageWidget::ElementTag");
static_assert(offsetof(UFortConversationMessageWidget, HUDElementTag) == 832, "Offset mismatch for UFortConversationMessageWidget::HUDElementTag");
static_assert(offsetof(UFortConversationMessageWidget, HiddenVisibility) == 864, "Offset mismatch for UFortConversationMessageWidget::HiddenVisibility");
static_assert(offsetof(UFortConversationMessageWidget, TutorialHighlight) == 872, "Offset mismatch for UFortConversationMessageWidget::TutorialHighlight");

// /Script/FortniteConversationUI.FortConversationOption
// Kind: Class; super: FortRadialPickerEntry
class UFortConversationOption
{
public:
    std::uint8_t Pad_0000[0x1668]; // 0x0000
    void* OnOptionConfirmedSound; // 0x1668 (Size: 0x8, Type: ObjectProperty)
    void* OnOptionHoveredSound; // 0x1670 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_DisplayAsset; // 0x1678 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultSoftTaskIcon[0x20]; // 0x1680 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultConfirmChoiceSound[0x20]; // 0x16A0 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DefaultHoverChoiceSound; // 0x16C0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortConversationOption, OnOptionConfirmedSound) == 5736, "Offset mismatch for UFortConversationOption::OnOptionConfirmedSound");
static_assert(offsetof(UFortConversationOption, OnOptionHoveredSound) == 5744, "Offset mismatch for UFortConversationOption::OnOptionHoveredSound");
static_assert(offsetof(UFortConversationOption, Switcher_DisplayAsset) == 5752, "Offset mismatch for UFortConversationOption::Switcher_DisplayAsset");
static_assert(offsetof(UFortConversationOption, DefaultSoftTaskIcon) == 5760, "Offset mismatch for UFortConversationOption::DefaultSoftTaskIcon");
static_assert(offsetof(UFortConversationOption, DefaultConfirmChoiceSound) == 5792, "Offset mismatch for UFortConversationOption::DefaultConfirmChoiceSound");
static_assert(offsetof(UFortConversationOption, DefaultHoverChoiceSound) == 5824, "Offset mismatch for UFortConversationOption::DefaultHoverChoiceSound");

// /Script/FortniteConversationUI.FortConversationOptionBrief
// Kind: Class; super: CommonUserWidget
class UFortConversationOptionBrief
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortConversationOptionBrief, bDisplayInActionBar) == 776, "Offset mismatch for UFortConversationOptionBrief::bDisplayInActionBar");
static_assert(offsetof(UFortConversationOptionBrief, bConsumePointerInput) == 777, "Offset mismatch for UFortConversationOptionBrief::bConsumePointerInput");

// /Script/FortniteConversationUI.FortConversationOptionsPanel
// Kind: Class; super: PanelWidget
class UFortConversationOptionsPanel
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::int32_t MaxRows; // 0x0190 (Size: 0x4, Type: IntProperty)
    std::int32_t MiddleColumnWidth; // 0x0194 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortConversationOptionsPanel, MaxRows) == 400, "Offset mismatch for UFortConversationOptionsPanel::MaxRows");
static_assert(offsetof(UFortConversationOptionsPanel, MiddleColumnWidth) == 404, "Offset mismatch for UFortConversationOptionsPanel::MiddleColumnWidth");

// /Script/FortniteConversationUI.FortConversationResourceWidget
// Kind: Class; super: UserWidget
class UFortConversationResourceWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* ResourceItemDefinition; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortConversationResourceWidget, ResourceItemDefinition) == 776, "Offset mismatch for UFortConversationResourceWidget::ResourceItemDefinition");

// /Script/FortniteConversationUI.FortConversationScreen
// Kind: Class; super: CommonActivatableWidget
class UFortConversationScreen
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    FMulticastInlineDelegate OnConversationOptionUpdated; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t BriefAvailableWidgetPool[0x50]; // 0x04C0 (Size: 0x50, Type: StructProperty)
    TMap<void*, void*> CurrentConversationBriefWidgets; // 0x0510 (Size: 0x10, Type: MapProperty)
    TArray<void*> CurrentResourcesUsedInConversationBriefs; // 0x0520 (Size: 0x10, Type: ArrayProperty)
    void* Switcher_Details; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentConversationNPCIcon[0x20]; // 0x0538 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> CurrentConversationNPCActor; // 0x0558 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0560
    void* ConversationInputComp; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentlySelectedIndex; // 0x05A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bBlockOptionIntroAnimation; // 0x05A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05A5
    FName RadialSelectionMaterialParameterName; // 0x05A8 (Size: 0x8, Type: NameProperty)
    TArray<void*> TagPriorities; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InteractActionNameKBM[0x4]; // 0x05C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ADSInputAction[0x4]; // 0x05C4 (Size: 0x4, Type: NameProperty)
    FName InteractActionNameGamepad; // 0x05C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t ConfirmBinding[0x10]; // 0x05D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MakeSelectionBinding[0x10]; // 0x05E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ADSMouseBinding[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CancelActionBinding[0x10]; // 0x0600 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightTriggerBinding[0x10]; // 0x0610 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> DetailsNodeTypeToBrief; // 0x0620 (Size: 0x10, Type: MapProperty)
    std::uint8_t ChatBrief[0x20]; // 0x0630 (Size: 0x20, Type: SoftClassProperty)
    FString DataDrivenBriefPrefix; // 0x0650 (Size: 0x10, Type: StrProperty)
    std::uint8_t DataDrivenBrief[0x20]; // 0x0660 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t BasicBrief[0x20]; // 0x0680 (Size: 0x20, Type: SoftClassProperty)
    void* RadialMenu_DialogOptions; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    void* Image_RadialHighlight; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_Confirm; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    void* BasicBrief_Main; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_RadialMenu; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Details; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_WheelContainer; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    void* Image_Background; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    void* Image_LoadingSpinner; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortConversationScreen, OnConversationOptionUpdated) == 1200, "Offset mismatch for UFortConversationScreen::OnConversationOptionUpdated");
static_assert(offsetof(UFortConversationScreen, BriefAvailableWidgetPool) == 1216, "Offset mismatch for UFortConversationScreen::BriefAvailableWidgetPool");
static_assert(offsetof(UFortConversationScreen, CurrentConversationBriefWidgets) == 1296, "Offset mismatch for UFortConversationScreen::CurrentConversationBriefWidgets");
static_assert(offsetof(UFortConversationScreen, CurrentResourcesUsedInConversationBriefs) == 1312, "Offset mismatch for UFortConversationScreen::CurrentResourcesUsedInConversationBriefs");
static_assert(offsetof(UFortConversationScreen, Switcher_Details) == 1328, "Offset mismatch for UFortConversationScreen::Switcher_Details");
static_assert(offsetof(UFortConversationScreen, CurrentConversationNPCIcon) == 1336, "Offset mismatch for UFortConversationScreen::CurrentConversationNPCIcon");
static_assert(offsetof(UFortConversationScreen, CurrentConversationNPCActor) == 1368, "Offset mismatch for UFortConversationScreen::CurrentConversationNPCActor");
static_assert(offsetof(UFortConversationScreen, ConversationInputComp) == 1432, "Offset mismatch for UFortConversationScreen::ConversationInputComp");
static_assert(offsetof(UFortConversationScreen, CurrentlySelectedIndex) == 1440, "Offset mismatch for UFortConversationScreen::CurrentlySelectedIndex");
static_assert(offsetof(UFortConversationScreen, bBlockOptionIntroAnimation) == 1444, "Offset mismatch for UFortConversationScreen::bBlockOptionIntroAnimation");
static_assert(offsetof(UFortConversationScreen, RadialSelectionMaterialParameterName) == 1448, "Offset mismatch for UFortConversationScreen::RadialSelectionMaterialParameterName");
static_assert(offsetof(UFortConversationScreen, TagPriorities) == 1456, "Offset mismatch for UFortConversationScreen::TagPriorities");
static_assert(offsetof(UFortConversationScreen, InteractActionNameKBM) == 1472, "Offset mismatch for UFortConversationScreen::InteractActionNameKBM");
static_assert(offsetof(UFortConversationScreen, ADSInputAction) == 1476, "Offset mismatch for UFortConversationScreen::ADSInputAction");
static_assert(offsetof(UFortConversationScreen, InteractActionNameGamepad) == 1480, "Offset mismatch for UFortConversationScreen::InteractActionNameGamepad");
static_assert(offsetof(UFortConversationScreen, ConfirmBinding) == 1488, "Offset mismatch for UFortConversationScreen::ConfirmBinding");
static_assert(offsetof(UFortConversationScreen, MakeSelectionBinding) == 1504, "Offset mismatch for UFortConversationScreen::MakeSelectionBinding");
static_assert(offsetof(UFortConversationScreen, ADSMouseBinding) == 1520, "Offset mismatch for UFortConversationScreen::ADSMouseBinding");
static_assert(offsetof(UFortConversationScreen, CancelActionBinding) == 1536, "Offset mismatch for UFortConversationScreen::CancelActionBinding");
static_assert(offsetof(UFortConversationScreen, RightTriggerBinding) == 1552, "Offset mismatch for UFortConversationScreen::RightTriggerBinding");
static_assert(offsetof(UFortConversationScreen, DetailsNodeTypeToBrief) == 1568, "Offset mismatch for UFortConversationScreen::DetailsNodeTypeToBrief");
static_assert(offsetof(UFortConversationScreen, ChatBrief) == 1584, "Offset mismatch for UFortConversationScreen::ChatBrief");
static_assert(offsetof(UFortConversationScreen, DataDrivenBriefPrefix) == 1616, "Offset mismatch for UFortConversationScreen::DataDrivenBriefPrefix");
static_assert(offsetof(UFortConversationScreen, DataDrivenBrief) == 1632, "Offset mismatch for UFortConversationScreen::DataDrivenBrief");
static_assert(offsetof(UFortConversationScreen, BasicBrief) == 1664, "Offset mismatch for UFortConversationScreen::BasicBrief");
static_assert(offsetof(UFortConversationScreen, RadialMenu_DialogOptions) == 1696, "Offset mismatch for UFortConversationScreen::RadialMenu_DialogOptions");
static_assert(offsetof(UFortConversationScreen, Image_RadialHighlight) == 1704, "Offset mismatch for UFortConversationScreen::Image_RadialHighlight");
static_assert(offsetof(UFortConversationScreen, Keybind_Confirm) == 1712, "Offset mismatch for UFortConversationScreen::Keybind_Confirm");
static_assert(offsetof(UFortConversationScreen, BasicBrief_Main) == 1720, "Offset mismatch for UFortConversationScreen::BasicBrief_Main");
static_assert(offsetof(UFortConversationScreen, SizeBox_RadialMenu) == 1728, "Offset mismatch for UFortConversationScreen::SizeBox_RadialMenu");
static_assert(offsetof(UFortConversationScreen, Overlay_Details) == 1736, "Offset mismatch for UFortConversationScreen::Overlay_Details");
static_assert(offsetof(UFortConversationScreen, Overlay_WheelContainer) == 1744, "Offset mismatch for UFortConversationScreen::Overlay_WheelContainer");
static_assert(offsetof(UFortConversationScreen, Image_Background) == 1752, "Offset mismatch for UFortConversationScreen::Image_Background");
static_assert(offsetof(UFortConversationScreen, Image_LoadingSpinner) == 1760, "Offset mismatch for UFortConversationScreen::Image_LoadingSpinner");

// /Script/FortniteConversationUI.FortConversation_CommActiveBase
// Kind: Class; super: CommonActivatableWidget
class UFortConversation_CommActiveBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ConversationInputComponent; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    FName FireInputActionName; // 0x04A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t ADS_DataTableRowHandle[0x10]; // 0x04B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction_DataTableRowHandle[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ADSInputActionName[0x4]; // 0x04D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t InventoryKBMInputActionName[0x4]; // 0x04D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t InventoryGamepadInputActionName[0x4]; // 0x04D8 (Size: 0x4, Type: NameProperty)
    FName PlaceMapMarkerInputActionName; // 0x04DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortConversation_CommActiveBase, ConversationInputComponent) == 1184, "Offset mismatch for UFortConversation_CommActiveBase::ConversationInputComponent");
static_assert(offsetof(UFortConversation_CommActiveBase, FireInputActionName) == 1192, "Offset mismatch for UFortConversation_CommActiveBase::FireInputActionName");
static_assert(offsetof(UFortConversation_CommActiveBase, ADS_DataTableRowHandle) == 1200, "Offset mismatch for UFortConversation_CommActiveBase::ADS_DataTableRowHandle");
static_assert(offsetof(UFortConversation_CommActiveBase, BackAction_DataTableRowHandle) == 1216, "Offset mismatch for UFortConversation_CommActiveBase::BackAction_DataTableRowHandle");
static_assert(offsetof(UFortConversation_CommActiveBase, ADSInputActionName) == 1232, "Offset mismatch for UFortConversation_CommActiveBase::ADSInputActionName");
static_assert(offsetof(UFortConversation_CommActiveBase, InventoryKBMInputActionName) == 1236, "Offset mismatch for UFortConversation_CommActiveBase::InventoryKBMInputActionName");
static_assert(offsetof(UFortConversation_CommActiveBase, InventoryGamepadInputActionName) == 1240, "Offset mismatch for UFortConversation_CommActiveBase::InventoryGamepadInputActionName");
static_assert(offsetof(UFortConversation_CommActiveBase, PlaceMapMarkerInputActionName) == 1244, "Offset mismatch for UFortConversation_CommActiveBase::PlaceMapMarkerInputActionName");

// /Script/FortniteConversationUI.FortDataDrivenServiceBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortDataDrivenServiceBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Text_TitleBar; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* RichText_Description; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Text_StockRemaining; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* TransactionStrip_Main; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ServiceConfigs; // 0x0358 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDataDrivenServiceBrief, Text_TitleBar) == 824, "Offset mismatch for UFortDataDrivenServiceBrief::Text_TitleBar");
static_assert(offsetof(UFortDataDrivenServiceBrief, RichText_Description) == 832, "Offset mismatch for UFortDataDrivenServiceBrief::RichText_Description");
static_assert(offsetof(UFortDataDrivenServiceBrief, Text_StockRemaining) == 840, "Offset mismatch for UFortDataDrivenServiceBrief::Text_StockRemaining");
static_assert(offsetof(UFortDataDrivenServiceBrief, TransactionStrip_Main) == 848, "Offset mismatch for UFortDataDrivenServiceBrief::TransactionStrip_Main");
static_assert(offsetof(UFortDataDrivenServiceBrief, ServiceConfigs) == 856, "Offset mismatch for UFortDataDrivenServiceBrief::ServiceConfigs");

// /Script/FortniteConversationUI.FortDuelBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortDuelBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t TextTemplate[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    void* Text_Objective; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* TileView; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDuelBrief, TextTemplate) == 840, "Offset mismatch for UFortDuelBrief::TextTemplate");
static_assert(offsetof(UFortDuelBrief, Text_Objective) == 856, "Offset mismatch for UFortDuelBrief::Text_Objective");
static_assert(offsetof(UFortDuelBrief, TileView) == 864, "Offset mismatch for UFortDuelBrief::TileView");

// /Script/FortniteConversationUI.FortHireBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortHireBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t TextTemplate[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    void* Text_Objective; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* SpecializationsVisualDataTable; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHireBrief, TextTemplate) == 840, "Offset mismatch for UFortHireBrief::TextTemplate");
static_assert(offsetof(UFortHireBrief, Text_Objective) == 856, "Offset mismatch for UFortHireBrief::Text_Objective");
static_assert(offsetof(UFortHireBrief, SpecializationsVisualDataTable) == 864, "Offset mismatch for UFortHireBrief::SpecializationsVisualDataTable");

// /Script/FortniteConversationUI.FortIntelBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortIntelBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t TextTemplate[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    void* Text_Objective; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortIntelBrief, TextTemplate) == 840, "Offset mismatch for UFortIntelBrief::TextTemplate");
static_assert(offsetof(UFortIntelBrief, Text_Objective) == 856, "Offset mismatch for UFortIntelBrief::Text_Objective");

// /Script/FortniteConversationUI.FortItemFundBrief
// Kind: Class; super: CommonUserWidget
class UFortItemFundBrief
{
public:
    std::uint8_t Pad_0000[0x3D8]; // 0x0000
    void* Text_TitleBar; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* Text_ProgressPercent; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ProgressCount; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* Progress_Funding; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* LazyImage_Icon; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* TransactionStrip_Main; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ServiceConfigs; // 0x0408 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortItemFundBrief, Text_TitleBar) == 984, "Offset mismatch for UFortItemFundBrief::Text_TitleBar");
static_assert(offsetof(UFortItemFundBrief, Text_ProgressPercent) == 992, "Offset mismatch for UFortItemFundBrief::Text_ProgressPercent");
static_assert(offsetof(UFortItemFundBrief, Text_ProgressCount) == 1000, "Offset mismatch for UFortItemFundBrief::Text_ProgressCount");
static_assert(offsetof(UFortItemFundBrief, Progress_Funding) == 1008, "Offset mismatch for UFortItemFundBrief::Progress_Funding");
static_assert(offsetof(UFortItemFundBrief, LazyImage_Icon) == 1016, "Offset mismatch for UFortItemFundBrief::LazyImage_Icon");
static_assert(offsetof(UFortItemFundBrief, TransactionStrip_Main) == 1024, "Offset mismatch for UFortItemFundBrief::TransactionStrip_Main");
static_assert(offsetof(UFortItemFundBrief, ServiceConfigs) == 1032, "Offset mismatch for UFortItemFundBrief::ServiceConfigs");

// /Script/FortniteConversationUI.FortItemTransactionBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortItemTransactionBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* TransactionStrip_Main; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* DisplayItem; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortItemTransactionBrief, TransactionStrip_Main) == 824, "Offset mismatch for UFortItemTransactionBrief::TransactionStrip_Main");
static_assert(offsetof(UFortItemTransactionBrief, DisplayItem) == 832, "Offset mismatch for UFortItemTransactionBrief::DisplayItem");

// /Script/FortniteConversationUI.FortMultiItemFundBrief
// Kind: Class; super: FortSingleItemFundBrief
class UFortMultiItemFundBrief
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    void* Item_EntrySecondary; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Item_EntryTertiary; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMultiItemFundBrief, Item_EntrySecondary) == 856, "Offset mismatch for UFortMultiItemFundBrief::Item_EntrySecondary");
static_assert(offsetof(UFortMultiItemFundBrief, Item_EntryTertiary) == 864, "Offset mismatch for UFortMultiItemFundBrief::Item_EntryTertiary");

// /Script/FortniteConversationUI.FortNPCTextDisplay
// Kind: Class; super: UserWidget
class UFortNPCTextDisplay
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Text_Message; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* LazyImage_NPCImage; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortNPCTextDisplay, Text_Message) == 776, "Offset mismatch for UFortNPCTextDisplay::Text_Message");
static_assert(offsetof(UFortNPCTextDisplay, LazyImage_NPCImage) == 784, "Offset mismatch for UFortNPCTextDisplay::LazyImage_NPCImage");

// /Script/FortniteConversationUI.FortPlayerConversationUIComponent
// Kind: Class; super: ActorComponent
class UFortPlayerConversationUIComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bBlockUISpawning; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t DialogWidgetSoftClass[0x20]; // 0x00D0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DialogMarkerSoftClass[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MobileDialogWidgetSoftClass[0x20]; // 0x0110 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MultiBriefsDialogWidgetSoftClass[0x20]; // 0x0130 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MobileMultiBriefsDialogWidgetSoftClass[0x20]; // 0x0150 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> SpectatorConversationScenes; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpectatorMobileConversationScenes; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    void* DialogWidgetClass; // 0x0190 (Size: 0x8, Type: ClassProperty)
    void* DialogMarkerClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DialogWidgetPool[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerConversationUIComponent, bBlockUISpawning) == 200, "Offset mismatch for UFortPlayerConversationUIComponent::bBlockUISpawning");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetSoftClass) == 208, "Offset mismatch for UFortPlayerConversationUIComponent::DialogWidgetSoftClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogMarkerSoftClass) == 240, "Offset mismatch for UFortPlayerConversationUIComponent::DialogMarkerSoftClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, MobileDialogWidgetSoftClass) == 272, "Offset mismatch for UFortPlayerConversationUIComponent::MobileDialogWidgetSoftClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, MultiBriefsDialogWidgetSoftClass) == 304, "Offset mismatch for UFortPlayerConversationUIComponent::MultiBriefsDialogWidgetSoftClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, MobileMultiBriefsDialogWidgetSoftClass) == 336, "Offset mismatch for UFortPlayerConversationUIComponent::MobileMultiBriefsDialogWidgetSoftClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, SpectatorConversationScenes) == 368, "Offset mismatch for UFortPlayerConversationUIComponent::SpectatorConversationScenes");
static_assert(offsetof(UFortPlayerConversationUIComponent, SpectatorMobileConversationScenes) == 384, "Offset mismatch for UFortPlayerConversationUIComponent::SpectatorMobileConversationScenes");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetClass) == 400, "Offset mismatch for UFortPlayerConversationUIComponent::DialogWidgetClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogMarkerClass) == 408, "Offset mismatch for UFortPlayerConversationUIComponent::DialogMarkerClass");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetPool) == 416, "Offset mismatch for UFortPlayerConversationUIComponent::DialogWidgetPool");

// /Script/FortniteConversationUI.FortQuestBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortQuestBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t ThisMatchOnlyQuestText[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    void* Text_Objective; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Text_MoneyReward; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Text_XpReward; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Text_ExpirationTime; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* LazyImage_QuestProviderImage; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_QuestProvider; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestBrief, ThisMatchOnlyQuestText) == 824, "Offset mismatch for UFortQuestBrief::ThisMatchOnlyQuestText");
static_assert(offsetof(UFortQuestBrief, Text_Objective) == 840, "Offset mismatch for UFortQuestBrief::Text_Objective");
static_assert(offsetof(UFortQuestBrief, Text_MoneyReward) == 848, "Offset mismatch for UFortQuestBrief::Text_MoneyReward");
static_assert(offsetof(UFortQuestBrief, Text_XpReward) == 856, "Offset mismatch for UFortQuestBrief::Text_XpReward");
static_assert(offsetof(UFortQuestBrief, Text_ExpirationTime) == 864, "Offset mismatch for UFortQuestBrief::Text_ExpirationTime");
static_assert(offsetof(UFortQuestBrief, LazyImage_QuestProviderImage) == 872, "Offset mismatch for UFortQuestBrief::LazyImage_QuestProviderImage");
static_assert(offsetof(UFortQuestBrief, Overlay_QuestProvider) == 880, "Offset mismatch for UFortQuestBrief::Overlay_QuestProvider");

// /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortShowFutureStormCircleBrief
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t PurchaseServiceText[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    void* Text_Display; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortShowFutureStormCircleBrief, PurchaseServiceText) == 840, "Offset mismatch for UFortShowFutureStormCircleBrief::PurchaseServiceText");
static_assert(offsetof(UFortShowFutureStormCircleBrief, Text_Display) == 856, "Offset mismatch for UFortShowFutureStormCircleBrief::Text_Display");

// /Script/FortniteConversationUI.FortSingleItemFundBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortSingleItemFundBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Item_Entry; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* NPCTextDisplay; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ServiceConfigs; // 0x0348 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortSingleItemFundBrief, Item_Entry) == 824, "Offset mismatch for UFortSingleItemFundBrief::Item_Entry");
static_assert(offsetof(UFortSingleItemFundBrief, NPCTextDisplay) == 832, "Offset mismatch for UFortSingleItemFundBrief::NPCTextDisplay");
static_assert(offsetof(UFortSingleItemFundBrief, ServiceConfigs) == 840, "Offset mismatch for UFortSingleItemFundBrief::ServiceConfigs");

// /Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief
// Kind: Class; super: FortConversationOptionBrief
class UFortSingleOrMultiItemFundBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t SingleItemBrief[0x20]; // 0x0338 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MultiItemsBrief[0x20]; // 0x0358 (Size: 0x20, Type: SoftClassProperty)
    void* Overlay_Brief; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSingleOrMultiItemFundBrief, SingleItemBrief) == 824, "Offset mismatch for UFortSingleOrMultiItemFundBrief::SingleItemBrief");
static_assert(offsetof(UFortSingleOrMultiItemFundBrief, MultiItemsBrief) == 856, "Offset mismatch for UFortSingleOrMultiItemFundBrief::MultiItemsBrief");
static_assert(offsetof(UFortSingleOrMultiItemFundBrief, Overlay_Brief) == 888, "Offset mismatch for UFortSingleOrMultiItemFundBrief::Overlay_Brief");

// /Script/FortniteConversationUI.FortTransactionStrip
// Kind: Class; super: UserWidget
class UFortTransactionStrip
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* Text_CostDescription; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedGlobalCurrency; // 0x0318 (Size: 0x8, Type: WeakObjectProperty)
    void* ResourceCurrency; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTransactionStrip, Text_CostDescription) == 784, "Offset mismatch for UFortTransactionStrip::Text_CostDescription");
static_assert(offsetof(UFortTransactionStrip, CachedGlobalCurrency) == 792, "Offset mismatch for UFortTransactionStrip::CachedGlobalCurrency");
static_assert(offsetof(UFortTransactionStrip, ResourceCurrency) == 800, "Offset mismatch for UFortTransactionStrip::ResourceCurrency");

// /Script/FortniteConversationUI.FortUpgradeBrief
// Kind: Class; super: FortItemTransactionBrief
class UFortUpgradeBrief
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* TransactionStrip_Main; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* DisplayItem; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortUpgradeBrief, TransactionStrip_Main) == 824, "Offset mismatch for UFortUpgradeBrief::TransactionStrip_Main");
static_assert(offsetof(UFortUpgradeBrief, DisplayItem) == 832, "Offset mismatch for UFortUpgradeBrief::DisplayItem");

// /Script/FortniteConversationUI.MobileConversationScreen
// Kind: Class; super: FortConversationScreen
class UMobileConversationScreen
{
public:
    std::uint8_t Pad_0000[0x6E8]; // 0x0000
    void* CloseButtonArea; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x06F0
    void* MobileButtonConfirm; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* MobileButtonTouchInformation; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0708
    void* Switcher_CenteredDetails; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMobileConversationScreen, CloseButtonArea) == 1768, "Offset mismatch for UMobileConversationScreen::CloseButtonArea");
static_assert(offsetof(UMobileConversationScreen, MobileButtonConfirm) == 1784, "Offset mismatch for UMobileConversationScreen::MobileButtonConfirm");
static_assert(offsetof(UMobileConversationScreen, MobileButtonTouchInformation) == 1792, "Offset mismatch for UMobileConversationScreen::MobileButtonTouchInformation");
static_assert(offsetof(UMobileConversationScreen, Switcher_CenteredDetails) == 1808, "Offset mismatch for UMobileConversationScreen::Switcher_CenteredDetails");
