/**
 * decamp dumper generated SDK
 * Package: /Script/WeaponModsUI
 */
#pragma once
#include "Basic.h"

// /Script/WeaponModsUI.AthenaEquippedItemInfoWeaponMods
// Kind: Class; super: FortHUDElementWidget
class UAthenaEquippedItemInfoWeaponMods
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

static_assert(offsetof(UAthenaEquippedItemInfoWeaponMods, HLTDependentWidgetTag) == 824, "Offset mismatch for UAthenaEquippedItemInfoWeaponMods::HLTDependentWidgetTag");
static_assert(offsetof(UAthenaEquippedItemInfoWeaponMods, ElementTag) == 828, "Offset mismatch for UAthenaEquippedItemInfoWeaponMods::ElementTag");
static_assert(offsetof(UAthenaEquippedItemInfoWeaponMods, HUDElementTag) == 832, "Offset mismatch for UAthenaEquippedItemInfoWeaponMods::HUDElementTag");
static_assert(offsetof(UAthenaEquippedItemInfoWeaponMods, HiddenVisibility) == 864, "Offset mismatch for UAthenaEquippedItemInfoWeaponMods::HiddenVisibility");
static_assert(offsetof(UAthenaEquippedItemInfoWeaponMods, TutorialHighlight) == 872, "Offset mismatch for UAthenaEquippedItemInfoWeaponMods::TutorialHighlight");

// /Script/WeaponModsUI.AthenaInventoryGroupWeaponMods
// Kind: Class; super: AthenaInventoryGroupBase
class UAthenaInventoryGroupWeaponMods
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> ParentInventoryPanel; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    void* ItemTileView; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredItemTypes; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DefaultNumEntries; // 0x0350 (Size: 0x4, Type: IntProperty)
    std::uint8_t InventoryContentSortType; // 0x0354 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0355
    TArray<void*> SupportedEmptyDefinitionOverrideTypes; // 0x0358 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAthenaInventoryGroupWeaponMods, ParentInventoryPanel) == 816, "Offset mismatch for UAthenaInventoryGroupWeaponMods::ParentInventoryPanel");
static_assert(offsetof(UAthenaInventoryGroupWeaponMods, ItemTileView) == 824, "Offset mismatch for UAthenaInventoryGroupWeaponMods::ItemTileView");
static_assert(offsetof(UAthenaInventoryGroupWeaponMods, FilteredItemTypes) == 832, "Offset mismatch for UAthenaInventoryGroupWeaponMods::FilteredItemTypes");
static_assert(offsetof(UAthenaInventoryGroupWeaponMods, DefaultNumEntries) == 848, "Offset mismatch for UAthenaInventoryGroupWeaponMods::DefaultNumEntries");
static_assert(offsetof(UAthenaInventoryGroupWeaponMods, InventoryContentSortType) == 852, "Offset mismatch for UAthenaInventoryGroupWeaponMods::InventoryContentSortType");
static_assert(offsetof(UAthenaInventoryGroupWeaponMods, SupportedEmptyDefinitionOverrideTypes) == 856, "Offset mismatch for UAthenaInventoryGroupWeaponMods::SupportedEmptyDefinitionOverrideTypes");

// /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponMods
// Kind: Class; super: UserWidget
class UAthenaInventoryItemInfoWeaponMods
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

static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, ColorAndOpacity) == 416, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::ColorAndOpacity");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, ColorAndOpacityDelegate) == 432, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::ColorAndOpacityDelegate");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, ForegroundColor) == 444, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::ForegroundColor");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, ForegroundColorDelegate) == 464, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::ForegroundColorDelegate");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, OnVisibilityChanged) == 480, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::OnVisibilityChanged");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, Padding) == 544, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::Padding");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, Priority) == 560, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::Priority");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, ActiveSequencePlayers) == 584, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::ActiveSequencePlayers");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, AnimationTickManager) == 600, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::AnimationTickManager");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, StoppedSequencePlayers) == 608, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::StoppedSequencePlayers");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, NamedSlotBindings) == 648, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::NamedSlotBindings");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, Extensions) == 664, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::Extensions");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, WidgetTree) == 680, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::WidgetTree");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, bHasScriptImplementedPaint) == 688, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::bHasScriptImplementedPaint");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, TickFrequency) == 712, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::TickFrequency");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, DesiredFocusWidget) == 716, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::DesiredFocusWidget");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, InputComponent) == 728, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::InputComponent");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponMods, AnimationCallbacks) == 736, "Offset mismatch for UAthenaInventoryItemInfoWeaponMods::AnimationCallbacks");

// /Script/WeaponModsUI.AthenaInventoryItemInfoWeaponModsConfigurator
// Kind: Class; super: AthenaInventoryItemInfoWeaponMods
class UAthenaInventoryItemInfoWeaponModsConfigurator
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

static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, ColorAndOpacity) == 416, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::ColorAndOpacity");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, ColorAndOpacityDelegate) == 432, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::ColorAndOpacityDelegate");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, ForegroundColor) == 444, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::ForegroundColor");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, ForegroundColorDelegate) == 464, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::ForegroundColorDelegate");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, OnVisibilityChanged) == 480, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::OnVisibilityChanged");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, Padding) == 544, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::Padding");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, Priority) == 560, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::Priority");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, ActiveSequencePlayers) == 584, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::ActiveSequencePlayers");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, AnimationTickManager) == 600, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::AnimationTickManager");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, StoppedSequencePlayers) == 608, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::StoppedSequencePlayers");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, NamedSlotBindings) == 648, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::NamedSlotBindings");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, Extensions) == 664, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::Extensions");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, WidgetTree) == 680, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::WidgetTree");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, bHasScriptImplementedPaint) == 688, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::bHasScriptImplementedPaint");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, TickFrequency) == 712, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::TickFrequency");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, DesiredFocusWidget) == 716, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::DesiredFocusWidget");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, InputComponent) == 728, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::InputComponent");
static_assert(offsetof(UAthenaInventoryItemInfoWeaponModsConfigurator, AnimationCallbacks) == 736, "Offset mismatch for UAthenaInventoryItemInfoWeaponModsConfigurator::AnimationCallbacks");

// /Script/WeaponModsUI.AthenaLastKillerWeaponModsInfo
// Kind: Class; super: FortHUDElementWidget
class UAthenaLastKillerWeaponModsInfo
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

static_assert(offsetof(UAthenaLastKillerWeaponModsInfo, HLTDependentWidgetTag) == 824, "Offset mismatch for UAthenaLastKillerWeaponModsInfo::HLTDependentWidgetTag");
static_assert(offsetof(UAthenaLastKillerWeaponModsInfo, ElementTag) == 828, "Offset mismatch for UAthenaLastKillerWeaponModsInfo::ElementTag");
static_assert(offsetof(UAthenaLastKillerWeaponModsInfo, HUDElementTag) == 832, "Offset mismatch for UAthenaLastKillerWeaponModsInfo::HUDElementTag");
static_assert(offsetof(UAthenaLastKillerWeaponModsInfo, HiddenVisibility) == 864, "Offset mismatch for UAthenaLastKillerWeaponModsInfo::HiddenVisibility");
static_assert(offsetof(UAthenaLastKillerWeaponModsInfo, TutorialHighlight) == 872, "Offset mismatch for UAthenaLastKillerWeaponModsInfo::TutorialHighlight");

// /Script/WeaponModsUI.AthenaMarkerDetailsExtensionWeaponMods
// Kind: Class; super: AthenaMarkerDetailsExtension
class UAthenaMarkerDetailsExtensionWeaponMods
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

static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, ColorAndOpacity) == 416, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::ColorAndOpacity");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, ColorAndOpacityDelegate) == 432, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::ColorAndOpacityDelegate");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, ForegroundColor) == 444, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::ForegroundColor");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, ForegroundColorDelegate) == 464, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::ForegroundColorDelegate");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, OnVisibilityChanged) == 480, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::OnVisibilityChanged");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, Padding) == 544, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::Padding");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, Priority) == 560, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::Priority");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, ActiveSequencePlayers) == 584, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::ActiveSequencePlayers");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, AnimationTickManager) == 600, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::AnimationTickManager");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, StoppedSequencePlayers) == 608, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::StoppedSequencePlayers");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, NamedSlotBindings) == 648, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::NamedSlotBindings");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, Extensions) == 664, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::Extensions");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, WidgetTree) == 680, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::WidgetTree");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, bHasScriptImplementedPaint) == 688, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::bHasScriptImplementedPaint");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, TickFrequency) == 712, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::TickFrequency");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, DesiredFocusWidget) == 716, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::DesiredFocusWidget");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, InputComponent) == 728, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::InputComponent");
static_assert(offsetof(UAthenaMarkerDetailsExtensionWeaponMods, AnimationCallbacks) == 736, "Offset mismatch for UAthenaMarkerDetailsExtensionWeaponMods::AnimationCallbacks");

// /Script/WeaponModsUI.AthenaPickupIndicatorWeaponMods
// Kind: Class; super: FortInteractContextInfoWidget
class UAthenaPickupIndicatorWeaponMods
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

static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, ColorAndOpacity) == 416, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::ColorAndOpacity");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, ColorAndOpacityDelegate) == 432, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::ColorAndOpacityDelegate");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, ForegroundColor) == 444, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::ForegroundColor");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, ForegroundColorDelegate) == 464, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::ForegroundColorDelegate");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, OnVisibilityChanged) == 480, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::OnVisibilityChanged");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, Padding) == 544, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::Padding");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, Priority) == 560, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::Priority");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, ActiveSequencePlayers) == 584, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::ActiveSequencePlayers");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, AnimationTickManager) == 600, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::AnimationTickManager");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, StoppedSequencePlayers) == 608, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::StoppedSequencePlayers");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, NamedSlotBindings) == 648, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::NamedSlotBindings");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, Extensions) == 664, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::Extensions");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, WidgetTree) == 680, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::WidgetTree");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, bHasScriptImplementedPaint) == 688, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::bHasScriptImplementedPaint");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, TickFrequency) == 712, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::TickFrequency");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, DesiredFocusWidget) == 716, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::DesiredFocusWidget");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, InputComponent) == 728, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::InputComponent");
static_assert(offsetof(UAthenaPickupIndicatorWeaponMods, AnimationCallbacks) == 736, "Offset mismatch for UAthenaPickupIndicatorWeaponMods::AnimationCallbacks");

// /Script/WeaponModsUI.AthenaQuickBarSlotWeaponModsIndicator
// Kind: Class; super: AthenaQuickBarSlotExtensionWidgetBase
class UAthenaQuickBarSlotWeaponModsIndicator
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Image_ModOptic; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Image_ModMag; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Image_ModUnderbarrel; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Image_ModBarrel; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Image_ScopeIcon; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EmptyModSlotBrush[0xB0]; // 0x0360 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FilledModSlotBrush[0xB0]; // 0x0410 (Size: 0xB0, Type: StructProperty)
    TMap<void*, void*> ModSlotWidgets; // 0x04C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t WeaponModSlotOpticTag[0x1]; // 0x04D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, Image_ModOptic) == 824, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::Image_ModOptic");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, Image_ModMag) == 832, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::Image_ModMag");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, Image_ModUnderbarrel) == 840, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::Image_ModUnderbarrel");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, Image_ModBarrel) == 848, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::Image_ModBarrel");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, Image_ScopeIcon) == 856, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::Image_ScopeIcon");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, EmptyModSlotBrush) == 864, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::EmptyModSlotBrush");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, FilledModSlotBrush) == 1040, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::FilledModSlotBrush");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, ModSlotWidgets) == 1216, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::ModSlotWidgets");
static_assert(offsetof(UAthenaQuickBarSlotWeaponModsIndicator, WeaponModSlotOpticTag) == 1232, "Offset mismatch for UAthenaQuickBarSlotWeaponModsIndicator::WeaponModSlotOpticTag");

// /Script/WeaponModsUI.FortGameSettingRegistryExtension_WeaponModsUI
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_WeaponModsUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_WeaponModsUI, MarkupBase) == 40, "Offset mismatch for UFortGameSettingRegistryExtension_WeaponModsUI::MarkupBase");

// /Script/WeaponModsUI.FortPickupInteractOverrideComponent_ModdableWeapons
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_ModdableWeapons
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FMulticastInlineDelegate OnAttemptSecondInteractDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_ModdableWeapons, OnAttemptSecondInteractDelegate) == 224, "Offset mismatch for UFortPickupInteractOverrideComponent_ModdableWeapons::OnAttemptSecondInteractDelegate");
