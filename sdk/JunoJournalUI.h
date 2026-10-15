/**
 * decamp dumper generated SDK
 * Package: /Script/JunoJournalUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoJournalUI.JunoHUDTrackJournalTaskEvent
// Kind: ScriptStruct; super: none
struct FJunoHUDTrackJournalTaskEvent
{
public:
    std::uint8_t TaskRowName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWasAutoTracked; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TWeakObjectPtr<void> JournalComponent; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoHUDTrackJournalTaskEvent, TaskRowName) == 0, "Offset mismatch for FJunoHUDTrackJournalTaskEvent::TaskRowName");
static_assert(offsetof(FJunoHUDTrackJournalTaskEvent, bWasAutoTracked) == 4, "Offset mismatch for FJunoHUDTrackJournalTaskEvent::bWasAutoTracked");
static_assert(offsetof(FJunoHUDTrackJournalTaskEvent, JournalComponent) == 8, "Offset mismatch for FJunoHUDTrackJournalTaskEvent::JournalComponent");

// /Script/JunoJournalUI.JunoJournalNotificationDisplayedEvent
// Kind: ScriptStruct; super: none
struct FJunoJournalNotificationDisplayedEvent
{
public:
    std::uint8_t bIsShowing; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoJournalNotificationDisplayedEvent, bIsShowing) == 0, "Offset mismatch for FJunoJournalNotificationDisplayedEvent::bIsShowing");

// /Script/JunoJournalUI.JunoJournalCategoryVM
// Kind: Class; super: JunoJournalEntryBaseVM
class UJunoJournalCategoryVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> AllTasks; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Title[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t FoundInBiome[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImage[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AreAllTasksComplete; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsTracked; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsNew; // 0x0102 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNewBadgeAllowed; // 0x0103 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsCollapsed; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0105
    std::int32_t SortOrder; // 0x0108 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoJournalCategoryVM, AllTasks) == 128, "Offset mismatch for UJunoJournalCategoryVM::AllTasks");
static_assert(offsetof(UJunoJournalCategoryVM, Title) == 144, "Offset mismatch for UJunoJournalCategoryVM::Title");
static_assert(offsetof(UJunoJournalCategoryVM, FoundInBiome) == 160, "Offset mismatch for UJunoJournalCategoryVM::FoundInBiome");
static_assert(offsetof(UJunoJournalCategoryVM, Description) == 176, "Offset mismatch for UJunoJournalCategoryVM::Description");
static_assert(offsetof(UJunoJournalCategoryVM, Icon) == 192, "Offset mismatch for UJunoJournalCategoryVM::Icon");
static_assert(offsetof(UJunoJournalCategoryVM, LargeImage) == 224, "Offset mismatch for UJunoJournalCategoryVM::LargeImage");
static_assert(offsetof(UJunoJournalCategoryVM, AreAllTasksComplete) == 256, "Offset mismatch for UJunoJournalCategoryVM::AreAllTasksComplete");
static_assert(offsetof(UJunoJournalCategoryVM, IsTracked) == 257, "Offset mismatch for UJunoJournalCategoryVM::IsTracked");
static_assert(offsetof(UJunoJournalCategoryVM, IsNew) == 258, "Offset mismatch for UJunoJournalCategoryVM::IsNew");
static_assert(offsetof(UJunoJournalCategoryVM, bIsNewBadgeAllowed) == 259, "Offset mismatch for UJunoJournalCategoryVM::bIsNewBadgeAllowed");
static_assert(offsetof(UJunoJournalCategoryVM, IsCollapsed) == 260, "Offset mismatch for UJunoJournalCategoryVM::IsCollapsed");
static_assert(offsetof(UJunoJournalCategoryVM, SortOrder) == 264, "Offset mismatch for UJunoJournalCategoryVM::SortOrder");

// /Script/JunoJournalUI.JunoJournalEntryBaseVM
// Kind: Class; super: FortPerUserViewModel
class UJunoJournalEntryBaseVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoJournalUI.JunoJournalNotificationBatchData
// Kind: Class; super: Object
class UJunoJournalNotificationBatchData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NotificationVMs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoJournalNotificationBatchData, NotificationVMs) == 40, "Offset mismatch for UJunoJournalNotificationBatchData::NotificationVMs");

// /Script/JunoJournalUI.JunoJournalNotificationVM
// Kind: Class; super: FortPerUserViewModel
class UJunoJournalNotificationVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EntryRowName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsCategory; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint8_t Title[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t Subtitle[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t State; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsPerPlayer; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00C2
    void* Rewards; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoJournalNotificationVM, EntryRowName) == 120, "Offset mismatch for UJunoJournalNotificationVM::EntryRowName");
static_assert(offsetof(UJunoJournalNotificationVM, IsCategory) == 124, "Offset mismatch for UJunoJournalNotificationVM::IsCategory");
static_assert(offsetof(UJunoJournalNotificationVM, Title) == 128, "Offset mismatch for UJunoJournalNotificationVM::Title");
static_assert(offsetof(UJunoJournalNotificationVM, Subtitle) == 144, "Offset mismatch for UJunoJournalNotificationVM::Subtitle");
static_assert(offsetof(UJunoJournalNotificationVM, Icon) == 160, "Offset mismatch for UJunoJournalNotificationVM::Icon");
static_assert(offsetof(UJunoJournalNotificationVM, State) == 192, "Offset mismatch for UJunoJournalNotificationVM::State");
static_assert(offsetof(UJunoJournalNotificationVM, IsPerPlayer) == 193, "Offset mismatch for UJunoJournalNotificationVM::IsPerPlayer");
static_assert(offsetof(UJunoJournalNotificationVM, Rewards) == 200, "Offset mismatch for UJunoJournalNotificationVM::Rewards");

// /Script/JunoJournalUI.JunoJournalPrerequisiteVM
// Kind: Class; super: FortPerUserViewModel
class UJunoJournalPrerequisiteVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t IsComplete; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t ProgressCurrent; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t ProgressTotal; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoJournalPrerequisiteVM, Title) == 120, "Offset mismatch for UJunoJournalPrerequisiteVM::Title");
static_assert(offsetof(UJunoJournalPrerequisiteVM, IsComplete) == 136, "Offset mismatch for UJunoJournalPrerequisiteVM::IsComplete");
static_assert(offsetof(UJunoJournalPrerequisiteVM, ProgressCurrent) == 140, "Offset mismatch for UJunoJournalPrerequisiteVM::ProgressCurrent");
static_assert(offsetof(UJunoJournalPrerequisiteVM, ProgressTotal) == 144, "Offset mismatch for UJunoJournalPrerequisiteVM::ProgressTotal");

// /Script/JunoJournalUI.JunoJournalRewardsVM
// Kind: Class; super: JunoRewardsBaseVM
class UJunoJournalRewardsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> IndividualRewards; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoJournalRewardsVM, IndividualRewards) == 120, "Offset mismatch for UJunoJournalRewardsVM::IndividualRewards");

// /Script/JunoJournalUI.JunoJournalScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoJournalScreen
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    void* Button_Back; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoJournalScreen, Button_Back) == 1224, "Offset mismatch for UJunoJournalScreen::Button_Back");

// /Script/JunoJournalUI.JunoJournalTaskVM
// Kind: Class; super: JunoJournalEntryBaseVM
class UJunoJournalTaskVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* Category; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Prerequisites; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Title[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t Subtitle[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t LargeImage[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CustomIcon[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    void* Rewards; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsComplete; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsTracked; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsNew; // 0x0122 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HidePrereqs; // 0x0123 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPerPlayer; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HideWhenComplete; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CanAbandon; // 0x0126 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WasAutoTracked; // 0x0127 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoJournalTaskVM, Category) == 128, "Offset mismatch for UJunoJournalTaskVM::Category");
static_assert(offsetof(UJunoJournalTaskVM, Prerequisites) == 136, "Offset mismatch for UJunoJournalTaskVM::Prerequisites");
static_assert(offsetof(UJunoJournalTaskVM, Title) == 152, "Offset mismatch for UJunoJournalTaskVM::Title");
static_assert(offsetof(UJunoJournalTaskVM, Subtitle) == 168, "Offset mismatch for UJunoJournalTaskVM::Subtitle");
static_assert(offsetof(UJunoJournalTaskVM, ShortDescription) == 184, "Offset mismatch for UJunoJournalTaskVM::ShortDescription");
static_assert(offsetof(UJunoJournalTaskVM, Description) == 200, "Offset mismatch for UJunoJournalTaskVM::Description");
static_assert(offsetof(UJunoJournalTaskVM, LargeImage) == 216, "Offset mismatch for UJunoJournalTaskVM::LargeImage");
static_assert(offsetof(UJunoJournalTaskVM, CustomIcon) == 248, "Offset mismatch for UJunoJournalTaskVM::CustomIcon");
static_assert(offsetof(UJunoJournalTaskVM, Rewards) == 280, "Offset mismatch for UJunoJournalTaskVM::Rewards");
static_assert(offsetof(UJunoJournalTaskVM, IsComplete) == 288, "Offset mismatch for UJunoJournalTaskVM::IsComplete");
static_assert(offsetof(UJunoJournalTaskVM, IsTracked) == 289, "Offset mismatch for UJunoJournalTaskVM::IsTracked");
static_assert(offsetof(UJunoJournalTaskVM, IsNew) == 290, "Offset mismatch for UJunoJournalTaskVM::IsNew");
static_assert(offsetof(UJunoJournalTaskVM, HidePrereqs) == 291, "Offset mismatch for UJunoJournalTaskVM::HidePrereqs");
static_assert(offsetof(UJunoJournalTaskVM, IsPerPlayer) == 292, "Offset mismatch for UJunoJournalTaskVM::IsPerPlayer");
static_assert(offsetof(UJunoJournalTaskVM, HideWhenComplete) == 293, "Offset mismatch for UJunoJournalTaskVM::HideWhenComplete");
static_assert(offsetof(UJunoJournalTaskVM, CanAbandon) == 294, "Offset mismatch for UJunoJournalTaskVM::CanAbandon");
static_assert(offsetof(UJunoJournalTaskVM, WasAutoTracked) == 295, "Offset mismatch for UJunoJournalTaskVM::WasAutoTracked");

// /Script/JunoJournalUI.JunoJournalTrackTaskVM
// Kind: Class; super: FortPerUserViewModel
class UJunoJournalTrackTaskVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* IncomingTaskVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* TaskVM; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoJournalTrackTaskVM, IncomingTaskVM) == 120, "Offset mismatch for UJunoJournalTrackTaskVM::IncomingTaskVM");
static_assert(offsetof(UJunoJournalTrackTaskVM, TaskVM) == 128, "Offset mismatch for UJunoJournalTrackTaskVM::TaskVM");

// /Script/JunoJournalUI.JunoJournalTreeView
// Kind: Class; super: CommonTreeView
class UJunoJournalTreeView
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    FScriptDelegate BP_OnGetItemChildren; // 0x0FF0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x1000 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoJournalTreeView, BP_OnGetItemChildren) == 4080, "Offset mismatch for UJunoJournalTreeView::BP_OnGetItemChildren");
static_assert(offsetof(UJunoJournalTreeView, BP_OnItemExpansionChanged) == 4096, "Offset mismatch for UJunoJournalTreeView::BP_OnItemExpansionChanged");

// /Script/JunoJournalUI.JunoJournalVM
// Kind: Class; super: FortPerUserViewModel
class UJunoJournalVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AllCategories; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoTrackingEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoJournalVM, AllCategories) == 120, "Offset mismatch for UJunoJournalVM::AllCategories");
static_assert(offsetof(UJunoJournalVM, bAutoTrackingEnabled) == 136, "Offset mismatch for UJunoJournalVM::bAutoTrackingEnabled");

// /Script/JunoJournalUI.JunoPlayerStateComponent_JournalUI
// Kind: Class; super: PlayerStateComponent
class UJunoPlayerStateComponent_JournalUI
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t JournalCategoryRegistryType[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t TaskRevealedNotificationTag[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t TaskCompletedNotificationTag[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t CategoryRevealedNotificationTag[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    std::uint8_t CategoryCompletedNotificationTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> JournalNotificationWidgetClass; // 0x00D8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, JournalCategoryRegistryType) == 192, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::JournalCategoryRegistryType");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, TaskRevealedNotificationTag) == 196, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::TaskRevealedNotificationTag");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, TaskCompletedNotificationTag) == 200, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::TaskCompletedNotificationTag");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, CategoryRevealedNotificationTag) == 204, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::CategoryRevealedNotificationTag");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, CategoryCompletedNotificationTag) == 208, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::CategoryCompletedNotificationTag");
static_assert(offsetof(UJunoPlayerStateComponent_JournalUI, JournalNotificationWidgetClass) == 216, "Offset mismatch for UJunoPlayerStateComponent_JournalUI::JournalNotificationWidgetClass");
