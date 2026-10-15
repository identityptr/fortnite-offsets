/**
 * decamp dumper generated SDK
 * Package: /Script/XpEverywhereUI
 */
#pragma once
#include "Basic.h"

// /Script/XpEverywhereUI.QueuedReticleXPEvent
// Kind: ScriptStruct; super: none
struct FQueuedReticleXPEvent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SoundCue; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQueuedReticleXPEvent, SoundCue) == 56, "Offset mismatch for FQueuedReticleXPEvent::SoundCue");

// /Script/XpEverywhereUI.XpEverywhereNotificationWidgetClass
// Kind: ScriptStruct; super: none
struct FXpEverywhereNotificationWidgetClass
{
public:
    void* NotificationWidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t InitialPoolSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanIncreasePoolSizeAtRunTime; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    TArray<void*> WidgetPool; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FXpEverywhereNotificationWidgetClass, NotificationWidgetClass) == 0, "Offset mismatch for FXpEverywhereNotificationWidgetClass::NotificationWidgetClass");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, InitialPoolSize) == 8, "Offset mismatch for FXpEverywhereNotificationWidgetClass::InitialPoolSize");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, bCanIncreasePoolSizeAtRunTime) == 12, "Offset mismatch for FXpEverywhereNotificationWidgetClass::bCanIncreasePoolSizeAtRunTime");
static_assert(offsetof(FXpEverywhereNotificationWidgetClass, WidgetPool) == 16, "Offset mismatch for FXpEverywhereNotificationWidgetClass::WidgetPool");

// /Script/XpEverywhereUI.XpBoosterListVM
// Kind: Class; super: FortPerUserViewModel
class UXpBoosterListVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> XpBoosters; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    float TotalBonusMultiplier; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSuperchargeActive; // 0x008C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UXpBoosterListVM, XpBoosters) == 120, "Offset mismatch for UXpBoosterListVM::XpBoosters");
static_assert(offsetof(UXpBoosterListVM, TotalBonusMultiplier) == 136, "Offset mismatch for UXpBoosterListVM::TotalBonusMultiplier");
static_assert(offsetof(UXpBoosterListVM, bSuperchargeActive) == 140, "Offset mismatch for UXpBoosterListVM::bSuperchargeActive");

// /Script/XpEverywhereUI.XpBoosterVM
// Kind: Class; super: MVVMViewModelBase
class UXpBoosterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString ItemID; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    float XpBonusMultiplier; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    std::uint8_t ExpireDateTime[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    void* Definition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UXpBoosterVM, ItemID) == 104, "Offset mismatch for UXpBoosterVM::ItemID");
static_assert(offsetof(UXpBoosterVM, DisplayName) == 120, "Offset mismatch for UXpBoosterVM::DisplayName");
static_assert(offsetof(UXpBoosterVM, XpBonusMultiplier) == 136, "Offset mismatch for UXpBoosterVM::XpBonusMultiplier");
static_assert(offsetof(UXpBoosterVM, ExpireDateTime) == 144, "Offset mismatch for UXpBoosterVM::ExpireDateTime");
static_assert(offsetof(UXpBoosterVM, Definition) == 152, "Offset mismatch for UXpBoosterVM::Definition");

// /Script/XpEverywhereUI.XpEverywhereAccoladesWidget
// Kind: Class; super: FortHUDElementWidget
class UXpEverywhereAccoladesWidget
{
public:
    std::uint8_t Pad_0000[0x3E0]; // 0x0000
    std::uint8_t PrioritizationData[0x1]; // 0x03E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UXpEverywhereAccoladesWidget, PrioritizationData) == 992, "Offset mismatch for UXpEverywhereAccoladesWidget::PrioritizationData");

// /Script/XpEverywhereUI.XpEverywhereBar
// Kind: Class; super: CommonUserWidget
class UXpEverywhereBar
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t bXpBarAlwaysActive; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsXpBarManuallyUpdated; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0372
    void* SocialAvatarIcon; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrioritizationData[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UXpEverywhereBar, bXpBarAlwaysActive) == 880, "Offset mismatch for UXpEverywhereBar::bXpBarAlwaysActive");
static_assert(offsetof(UXpEverywhereBar, bIsXpBarManuallyUpdated) == 881, "Offset mismatch for UXpEverywhereBar::bIsXpBarManuallyUpdated");
static_assert(offsetof(UXpEverywhereBar, SocialAvatarIcon) == 888, "Offset mismatch for UXpEverywhereBar::SocialAvatarIcon");
static_assert(offsetof(UXpEverywhereBar, PrioritizationData) == 896, "Offset mismatch for UXpEverywhereBar::PrioritizationData");

// /Script/XpEverywhereUI.XpEverywhereLevelUpWidget
// Kind: Class; super: CommonUserWidget
class UXpEverywhereLevelUpWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t PrioritizationData[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UXpEverywhereLevelUpWidget, PrioritizationData) == 880, "Offset mismatch for UXpEverywhereLevelUpWidget::PrioritizationData");

// /Script/XpEverywhereUI.XpEverywhereReticleWidget
// Kind: Class; super: FortHUDElementWidget
class UXpEverywhereReticleWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    TArray<void*> QueuedEvents; // 0x0370 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UXpEverywhereReticleWidget, QueuedEvents) == 880, "Offset mismatch for UXpEverywhereReticleWidget::QueuedEvents");

// /Script/XpEverywhereUI.XpEverywhereRewardWidget
// Kind: Class; super: FortHUDElementWidget
class UXpEverywhereRewardWidget
{
public:
    std::uint8_t Pad_0000[0x3B8]; // 0x0000
    void* DefaultEntryClass; // 0x03B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHasPrioritizedWidgetFocus; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03C1
    void* ActiveWidget; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WidgetQueue; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
    void* NotificationUpdatesBox; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NotificationClassPoolData; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PrioritizationData[0x1]; // 0x03F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UXpEverywhereRewardWidget, DefaultEntryClass) == 952, "Offset mismatch for UXpEverywhereRewardWidget::DefaultEntryClass");
static_assert(offsetof(UXpEverywhereRewardWidget, bHasPrioritizedWidgetFocus) == 960, "Offset mismatch for UXpEverywhereRewardWidget::bHasPrioritizedWidgetFocus");
static_assert(offsetof(UXpEverywhereRewardWidget, ActiveWidget) == 968, "Offset mismatch for UXpEverywhereRewardWidget::ActiveWidget");
static_assert(offsetof(UXpEverywhereRewardWidget, WidgetQueue) == 976, "Offset mismatch for UXpEverywhereRewardWidget::WidgetQueue");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationUpdatesBox) == 992, "Offset mismatch for UXpEverywhereRewardWidget::NotificationUpdatesBox");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationClassPoolData) == 1000, "Offset mismatch for UXpEverywhereRewardWidget::NotificationClassPoolData");
static_assert(offsetof(UXpEverywhereRewardWidget, PrioritizationData) == 1016, "Offset mismatch for UXpEverywhereRewardWidget::PrioritizationData");

// /Script/XpEverywhereUI.XpEverywhereUIComponent
// Kind: Class; super: ActorComponent
class UXpEverywhereUIComponent
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t XpEverywhereHiddenElementTags[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UXpEverywhereUIComponent, XpEverywhereHiddenElementTags) == 384, "Offset mismatch for UXpEverywhereUIComponent::XpEverywhereHiddenElementTags");
