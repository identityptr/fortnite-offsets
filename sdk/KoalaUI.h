/**
 * decamp dumper generated SDK
 * Package: /Script/KoalaUI
 */
#pragma once
#include "Basic.h"

// /Script/KoalaUI.KoalaClipInfo
// Kind: ScriptStruct; super: none
struct FKoalaClipInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/KoalaUI.FortGameSettingRegistryExtension_Koala
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortGameSettingRegistryExtension_Koala
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t SettingExtensions[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameSettingRegistryExtension_Koala, SettingExtensions) == 72, "Offset mismatch for UFortGameSettingRegistryExtension_Koala::SettingExtensions");

// /Script/KoalaUI.FortSettingEditCondition_KoalaClipRemindersAvailable
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_KoalaClipRemindersAvailable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/KoalaUI.FortSettingEditCondition_KoalaClippingEnabledAvailable
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_KoalaClippingEnabledAvailable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/KoalaUI.FortSettingEditCondition_KoalaLinkAvailable
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_KoalaLinkAvailable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/KoalaUI.FortSidebarPanelKoala
// Kind: Class; super: CommonActivatableWidget
class UFortSidebarPanelKoala
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Button_KoalaDummy; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* QRCodeImage; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    FString QRCodeURL; // 0x04C8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortSidebarPanelKoala, Button_KoalaDummy) == 1208, "Offset mismatch for UFortSidebarPanelKoala::Button_KoalaDummy");
static_assert(offsetof(UFortSidebarPanelKoala, QRCodeImage) == 1216, "Offset mismatch for UFortSidebarPanelKoala::QRCodeImage");
static_assert(offsetof(UFortSidebarPanelKoala, QRCodeURL) == 1224, "Offset mismatch for UFortSidebarPanelKoala::QRCodeURL");

// /Script/KoalaUI.KoalaGraphicsModal
// Kind: Class; super: CommonActivatableWidget
class UKoalaGraphicsModal
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Button_KeepEnabled; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Disable; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UKoalaGraphicsModal, Button_KeepEnabled) == 1208, "Offset mismatch for UKoalaGraphicsModal::Button_KeepEnabled");
static_assert(offsetof(UKoalaGraphicsModal, Button_Disable) == 1216, "Offset mismatch for UKoalaGraphicsModal::Button_Disable");

// /Script/KoalaUI.KoalaHUDWidget
// Kind: Class; super: CommonActivatableWidget
class UKoalaHUDWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    float ClipDebounceTime; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    float PlayerKilledPlayerReminderTime; // 0x04AC (Size: 0x4, Type: FloatProperty)
    float MatchEndedReminderTime; // 0x04B0 (Size: 0x4, Type: FloatProperty)
    float ClipReminderCooldownTime; // 0x04B4 (Size: 0x4, Type: FloatProperty)
    float EliminationClipReminderDelayTime; // 0x04B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04BC
    void* ClipAudioSubmix; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* ClipActionWidget; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClipObjectInputAction[0x18]; // 0x04D0 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> ClipTracker; // 0x04E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x8]; // 0x04F8
    std::int32_t LastClipID; // 0x0500 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x26]; // 0x0504
    std::uint8_t MockClipMode; // 0x052A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x052B
    std::int32_t MockClipUploadShortTime; // 0x052C (Size: 0x4, Type: IntProperty)
    std::int32_t MockClipUploadLongTime; // 0x0530 (Size: 0x4, Type: IntProperty)
    std::int32_t MockClipCreateShortTime; // 0x0534 (Size: 0x4, Type: IntProperty)
    std::int32_t MockClipCreateLongTime; // 0x0538 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UKoalaHUDWidget, ClipDebounceTime) == 1192, "Offset mismatch for UKoalaHUDWidget::ClipDebounceTime");
static_assert(offsetof(UKoalaHUDWidget, PlayerKilledPlayerReminderTime) == 1196, "Offset mismatch for UKoalaHUDWidget::PlayerKilledPlayerReminderTime");
static_assert(offsetof(UKoalaHUDWidget, MatchEndedReminderTime) == 1200, "Offset mismatch for UKoalaHUDWidget::MatchEndedReminderTime");
static_assert(offsetof(UKoalaHUDWidget, ClipReminderCooldownTime) == 1204, "Offset mismatch for UKoalaHUDWidget::ClipReminderCooldownTime");
static_assert(offsetof(UKoalaHUDWidget, EliminationClipReminderDelayTime) == 1208, "Offset mismatch for UKoalaHUDWidget::EliminationClipReminderDelayTime");
static_assert(offsetof(UKoalaHUDWidget, ClipAudioSubmix) == 1216, "Offset mismatch for UKoalaHUDWidget::ClipAudioSubmix");
static_assert(offsetof(UKoalaHUDWidget, ClipActionWidget) == 1224, "Offset mismatch for UKoalaHUDWidget::ClipActionWidget");
static_assert(offsetof(UKoalaHUDWidget, ClipObjectInputAction) == 1232, "Offset mismatch for UKoalaHUDWidget::ClipObjectInputAction");
static_assert(offsetof(UKoalaHUDWidget, ClipTracker) == 1256, "Offset mismatch for UKoalaHUDWidget::ClipTracker");
static_assert(offsetof(UKoalaHUDWidget, LastClipID) == 1280, "Offset mismatch for UKoalaHUDWidget::LastClipID");
static_assert(offsetof(UKoalaHUDWidget, MockClipMode) == 1322, "Offset mismatch for UKoalaHUDWidget::MockClipMode");
static_assert(offsetof(UKoalaHUDWidget, MockClipUploadShortTime) == 1324, "Offset mismatch for UKoalaHUDWidget::MockClipUploadShortTime");
static_assert(offsetof(UKoalaHUDWidget, MockClipUploadLongTime) == 1328, "Offset mismatch for UKoalaHUDWidget::MockClipUploadLongTime");
static_assert(offsetof(UKoalaHUDWidget, MockClipCreateShortTime) == 1332, "Offset mismatch for UKoalaHUDWidget::MockClipCreateShortTime");
static_assert(offsetof(UKoalaHUDWidget, MockClipCreateLongTime) == 1336, "Offset mismatch for UKoalaHUDWidget::MockClipCreateLongTime");

// /Script/KoalaUI.KoalaMainMenuButton
// Kind: Class; super: FortMainMenuButtonExtension
class UKoalaMainMenuButton
{
public:
    std::uint8_t Pad_0000[0x1700]; // 0x0000
    void* SidebarPanelToActivate; // 0x1700 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UKoalaMainMenuButton, SidebarPanelToActivate) == 5888, "Offset mismatch for UKoalaMainMenuButton::SidebarPanelToActivate");

// /Script/KoalaUI.KoalaSettingDetailExtension
// Kind: Class; super: FortSettingDetailExtension
class UKoalaSettingDetailExtension
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Setting; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UKoalaSettingDetailExtension, Setting) == 776, "Offset mismatch for UKoalaSettingDetailExtension::Setting");

// /Script/KoalaUI.KoalaUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UKoalaUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    FMulticastInlineDelegate OnPostPartyConnectionChanged; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UKoalaUIDirector, OnPostPartyConnectionChanged) == 672, "Offset mismatch for UKoalaUIDirector::OnPostPartyConnectionChanged");
