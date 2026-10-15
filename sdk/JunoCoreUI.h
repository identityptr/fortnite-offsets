/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoCoreUI.JunoContextMenuInfo
// Kind: ScriptStruct; super: none
struct FJunoContextMenuInfo
{
public:
    std::uint8_t MenuAction; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t QuantityCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoContextMenuInfo, MenuAction) == 0, "Offset mismatch for FJunoContextMenuInfo::MenuAction");
static_assert(offsetof(FJunoContextMenuInfo, QuantityCount) == 4, "Offset mismatch for FJunoContextMenuInfo::QuantityCount");

// /Script/JunoCoreUI.JunoContextMenuQuantityChange
// Kind: ScriptStruct; super: none
struct FJunoContextMenuQuantityChange
{
public:
    std::uint8_t MenuAction; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t QuantityCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoContextMenuQuantityChange, MenuAction) == 0, "Offset mismatch for FJunoContextMenuQuantityChange::MenuAction");
static_assert(offsetof(FJunoContextMenuQuantityChange, QuantityCount) == 4, "Offset mismatch for FJunoContextMenuQuantityChange::QuantityCount");

// /Script/JunoCoreUI.JunoGenericContextMenuEntry
// Kind: ScriptStruct; super: none
struct FJunoGenericContextMenuEntry
{
public:
    std::uint8_t UIData[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::int32_t QuantitySelectStart; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t QuantitySelectMax; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t QuantitySelectIncrement; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoGenericContextMenuEntry, UIData) == 0, "Offset mismatch for FJunoGenericContextMenuEntry::UIData");
static_assert(offsetof(FJunoGenericContextMenuEntry, QuantitySelectStart) == 56, "Offset mismatch for FJunoGenericContextMenuEntry::QuantitySelectStart");
static_assert(offsetof(FJunoGenericContextMenuEntry, QuantitySelectMax) == 60, "Offset mismatch for FJunoGenericContextMenuEntry::QuantitySelectMax");
static_assert(offsetof(FJunoGenericContextMenuEntry, QuantitySelectIncrement) == 64, "Offset mismatch for FJunoGenericContextMenuEntry::QuantitySelectIncrement");

// /Script/JunoCoreUI.JunoGenericContextMenuUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoGenericContextMenuUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextMenuTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Label[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t bShowQuantitySelect; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBottomBarAction; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t TriggeringInputAction[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoGenericContextMenuUIData, ContextMenuTag) == 8, "Offset mismatch for FJunoGenericContextMenuUIData::ContextMenuTag");
static_assert(offsetof(FJunoGenericContextMenuUIData, Label) == 16, "Offset mismatch for FJunoGenericContextMenuUIData::Label");
static_assert(offsetof(FJunoGenericContextMenuUIData, bShowQuantitySelect) == 32, "Offset mismatch for FJunoGenericContextMenuUIData::bShowQuantitySelect");
static_assert(offsetof(FJunoGenericContextMenuUIData, bIsBottomBarAction) == 33, "Offset mismatch for FJunoGenericContextMenuUIData::bIsBottomBarAction");
static_assert(offsetof(FJunoGenericContextMenuUIData, TriggeringInputAction) == 40, "Offset mismatch for FJunoGenericContextMenuUIData::TriggeringInputAction");

// /Script/JunoCoreUI.JunoVirtualKeyboardState
// Kind: ScriptStruct; super: none
struct FJunoVirtualKeyboardState
{
public:
    std::int32_t RectTop; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RectLeft; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t RectBottom; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t RectRight; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t VirtualKeyboardInputHeight; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsVirtualKeyboardVisible; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoVirtualKeyboardState, RectTop) == 0, "Offset mismatch for FJunoVirtualKeyboardState::RectTop");
static_assert(offsetof(FJunoVirtualKeyboardState, RectLeft) == 4, "Offset mismatch for FJunoVirtualKeyboardState::RectLeft");
static_assert(offsetof(FJunoVirtualKeyboardState, RectBottom) == 8, "Offset mismatch for FJunoVirtualKeyboardState::RectBottom");
static_assert(offsetof(FJunoVirtualKeyboardState, RectRight) == 12, "Offset mismatch for FJunoVirtualKeyboardState::RectRight");
static_assert(offsetof(FJunoVirtualKeyboardState, VirtualKeyboardInputHeight) == 16, "Offset mismatch for FJunoVirtualKeyboardState::VirtualKeyboardInputHeight");
static_assert(offsetof(FJunoVirtualKeyboardState, bIsVirtualKeyboardVisible) == 20, "Offset mismatch for FJunoVirtualKeyboardState::bIsVirtualKeyboardVisible");

// /Script/JunoCoreUI.JunoWorldImageDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoWorldImageDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> WorldImage; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoWorldImageDataRow, WorldImage) == 8, "Offset mismatch for FJunoWorldImageDataRow::WorldImage");

// /Script/JunoCoreUI.JunoContextMenu
// Kind: Class; super: CommonActivatableWidget
class UJunoContextMenu
{
public:
    std::uint8_t Pad_0000[0x4E0]; // 0x0000
    TMap<void*, void*> MenuActionToDisplayText; // 0x04E0 (Size: 0x10, Type: MapProperty)
    void* Widget_QuantitySelector; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackAction[0x1]; // 0x04F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoContextMenu, MenuActionToDisplayText) == 1248, "Offset mismatch for UJunoContextMenu::MenuActionToDisplayText");
static_assert(offsetof(UJunoContextMenu, Widget_QuantitySelector) == 1264, "Offset mismatch for UJunoContextMenu::Widget_QuantitySelector");
static_assert(offsetof(UJunoContextMenu, BackAction) == 1272, "Offset mismatch for UJunoContextMenu::BackAction");

// /Script/JunoCoreUI.JunoCoreUIFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoCoreUIFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoCoreUI.JunoDropSplitModal
// Kind: Class; super: CommonActivatableWidget
class UJunoDropSplitModal
{
public:
    std::uint8_t Pad_0000[0x4C0]; // 0x0000
    void* Button_Confirm; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDropSplitModal, Button_Confirm) == 1216, "Offset mismatch for UJunoDropSplitModal::Button_Confirm");

// /Script/JunoCoreUI.JunoGenericContextMenu
// Kind: Class; super: CommonActivatableWidget
class UJunoGenericContextMenu
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Switcher_MenuState; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* ButtonContainer; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Widget_QuantitySelector; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ContextMenuEntries; // 0x04B8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ContextMenuButtons; // 0x04C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoGenericContextMenu, Switcher_MenuState) == 1184, "Offset mismatch for UJunoGenericContextMenu::Switcher_MenuState");
static_assert(offsetof(UJunoGenericContextMenu, ButtonContainer) == 1192, "Offset mismatch for UJunoGenericContextMenu::ButtonContainer");
static_assert(offsetof(UJunoGenericContextMenu, Widget_QuantitySelector) == 1200, "Offset mismatch for UJunoGenericContextMenu::Widget_QuantitySelector");
static_assert(offsetof(UJunoGenericContextMenu, ContextMenuEntries) == 1208, "Offset mismatch for UJunoGenericContextMenu::ContextMenuEntries");
static_assert(offsetof(UJunoGenericContextMenu, ContextMenuButtons) == 1224, "Offset mismatch for UJunoGenericContextMenu::ContextMenuButtons");

// /Script/JunoCoreUI.JunoIndexedWidgetInterface
// Kind: Class; super: Interface
class UJunoIndexedWidgetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoCoreUI.JunoPlayerAvatarContainer
// Kind: Class; super: FortHUDElementWidget
class UJunoPlayerAvatarContainer
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* PlayerAvatarViewModel; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerAvatarContainer, PlayerAvatarViewModel) == 880, "Offset mismatch for UJunoPlayerAvatarContainer::PlayerAvatarViewModel");

// /Script/JunoCoreUI.JunoPlayerCardViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoPlayerCardViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PlayerName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t PlayerRole; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayerStatus; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsInParty; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsViewOnly; // 0x007B (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFriendsWithWorldOwner; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsEliminated; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007E
    std::int32_t NumKeysLeft; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsLocalSplitscreenPlayer; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    std::uint8_t UniqueNetId[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    void* OwningPlayerController; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* OpenProfileActionMenuClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0003[0x20]; // 0x00C8
    FMulticastInlineDelegate OnWorldKeyGranted; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorldKeyRevoked; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorldBanGranted; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorldBanRevoked; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoPlayerCardViewModel, PlayerName) == 104, "Offset mismatch for UJunoPlayerCardViewModel::PlayerName");
static_assert(offsetof(UJunoPlayerCardViewModel, PlayerRole) == 120, "Offset mismatch for UJunoPlayerCardViewModel::PlayerRole");
static_assert(offsetof(UJunoPlayerCardViewModel, PlayerStatus) == 121, "Offset mismatch for UJunoPlayerCardViewModel::PlayerStatus");
static_assert(offsetof(UJunoPlayerCardViewModel, IsInParty) == 122, "Offset mismatch for UJunoPlayerCardViewModel::IsInParty");
static_assert(offsetof(UJunoPlayerCardViewModel, IsViewOnly) == 123, "Offset mismatch for UJunoPlayerCardViewModel::IsViewOnly");
static_assert(offsetof(UJunoPlayerCardViewModel, IsFriendsWithWorldOwner) == 124, "Offset mismatch for UJunoPlayerCardViewModel::IsFriendsWithWorldOwner");
static_assert(offsetof(UJunoPlayerCardViewModel, IsEliminated) == 125, "Offset mismatch for UJunoPlayerCardViewModel::IsEliminated");
static_assert(offsetof(UJunoPlayerCardViewModel, NumKeysLeft) == 128, "Offset mismatch for UJunoPlayerCardViewModel::NumKeysLeft");
static_assert(offsetof(UJunoPlayerCardViewModel, IsLocalSplitscreenPlayer) == 132, "Offset mismatch for UJunoPlayerCardViewModel::IsLocalSplitscreenPlayer");
static_assert(offsetof(UJunoPlayerCardViewModel, UniqueNetId) == 136, "Offset mismatch for UJunoPlayerCardViewModel::UniqueNetId");
static_assert(offsetof(UJunoPlayerCardViewModel, OwningPlayerController) == 184, "Offset mismatch for UJunoPlayerCardViewModel::OwningPlayerController");
static_assert(offsetof(UJunoPlayerCardViewModel, OpenProfileActionMenuClass) == 192, "Offset mismatch for UJunoPlayerCardViewModel::OpenProfileActionMenuClass");
static_assert(offsetof(UJunoPlayerCardViewModel, OnWorldKeyGranted) == 232, "Offset mismatch for UJunoPlayerCardViewModel::OnWorldKeyGranted");
static_assert(offsetof(UJunoPlayerCardViewModel, OnWorldKeyRevoked) == 248, "Offset mismatch for UJunoPlayerCardViewModel::OnWorldKeyRevoked");
static_assert(offsetof(UJunoPlayerCardViewModel, OnWorldBanGranted) == 264, "Offset mismatch for UJunoPlayerCardViewModel::OnWorldBanGranted");
static_assert(offsetof(UJunoPlayerCardViewModel, OnWorldBanRevoked) == 280, "Offset mismatch for UJunoPlayerCardViewModel::OnWorldBanRevoked");

// /Script/JunoCoreUI.JunoPlayerManagementViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoPlayerManagementViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> NeedsInvitePlayerCards; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InWorldPlayerCards; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NotInWorldPlayerCards; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BannedPlayerCards; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    void* SelectedPlayerCard; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldSanctionType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    std::int32_t NumKeysLeft; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t NumSpotsLeft; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00BC
    std::uint8_t WorldName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t OwnerName[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t IsWorldOwner; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsViewOnly; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x00E2
    std::int32_t NumSurvivingKeyholders; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumOfPlayers; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumOfKeys; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoPlayerManagementViewModel, NeedsInvitePlayerCards) == 104, "Offset mismatch for UJunoPlayerManagementViewModel::NeedsInvitePlayerCards");
static_assert(offsetof(UJunoPlayerManagementViewModel, InWorldPlayerCards) == 120, "Offset mismatch for UJunoPlayerManagementViewModel::InWorldPlayerCards");
static_assert(offsetof(UJunoPlayerManagementViewModel, NotInWorldPlayerCards) == 136, "Offset mismatch for UJunoPlayerManagementViewModel::NotInWorldPlayerCards");
static_assert(offsetof(UJunoPlayerManagementViewModel, BannedPlayerCards) == 152, "Offset mismatch for UJunoPlayerManagementViewModel::BannedPlayerCards");
static_assert(offsetof(UJunoPlayerManagementViewModel, SelectedPlayerCard) == 168, "Offset mismatch for UJunoPlayerManagementViewModel::SelectedPlayerCard");
static_assert(offsetof(UJunoPlayerManagementViewModel, WorldSanctionType) == 176, "Offset mismatch for UJunoPlayerManagementViewModel::WorldSanctionType");
static_assert(offsetof(UJunoPlayerManagementViewModel, NumKeysLeft) == 180, "Offset mismatch for UJunoPlayerManagementViewModel::NumKeysLeft");
static_assert(offsetof(UJunoPlayerManagementViewModel, NumSpotsLeft) == 184, "Offset mismatch for UJunoPlayerManagementViewModel::NumSpotsLeft");
static_assert(offsetof(UJunoPlayerManagementViewModel, WorldName) == 192, "Offset mismatch for UJunoPlayerManagementViewModel::WorldName");
static_assert(offsetof(UJunoPlayerManagementViewModel, OwnerName) == 208, "Offset mismatch for UJunoPlayerManagementViewModel::OwnerName");
static_assert(offsetof(UJunoPlayerManagementViewModel, IsWorldOwner) == 224, "Offset mismatch for UJunoPlayerManagementViewModel::IsWorldOwner");
static_assert(offsetof(UJunoPlayerManagementViewModel, IsViewOnly) == 225, "Offset mismatch for UJunoPlayerManagementViewModel::IsViewOnly");
static_assert(offsetof(UJunoPlayerManagementViewModel, NumSurvivingKeyholders) == 228, "Offset mismatch for UJunoPlayerManagementViewModel::NumSurvivingKeyholders");
static_assert(offsetof(UJunoPlayerManagementViewModel, MaxNumOfPlayers) == 232, "Offset mismatch for UJunoPlayerManagementViewModel::MaxNumOfPlayers");
static_assert(offsetof(UJunoPlayerManagementViewModel, MaxNumOfKeys) == 236, "Offset mismatch for UJunoPlayerManagementViewModel::MaxNumOfKeys");

// /Script/JunoCoreUI.JunoSanitizedEditableText
// Kind: Class; super: EditableTextBox
class UJunoSanitizedEditableText
{
public:
    std::uint8_t Pad_0000[0xEA0]; // 0x0000
    FMulticastInlineDelegate OnCharacterLimitReached; // 0x0EA0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInvalidCharacterUsed; // 0x0EB0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProfanityDetected; // 0x0EC0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextIsValid; // 0x0ED0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t CharacterLimit; // 0x0EE0 (Size: 0x4, Type: IntProperty)
    std::int32_t CharacterCount; // 0x0EE4 (Size: 0x4, Type: IntProperty)
    FString ContextId; // 0x0EE8 (Size: 0x10, Type: StrProperty)
    FString ContextEntity; // 0x0EF8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoSanitizedEditableText, OnCharacterLimitReached) == 3744, "Offset mismatch for UJunoSanitizedEditableText::OnCharacterLimitReached");
static_assert(offsetof(UJunoSanitizedEditableText, OnInvalidCharacterUsed) == 3760, "Offset mismatch for UJunoSanitizedEditableText::OnInvalidCharacterUsed");
static_assert(offsetof(UJunoSanitizedEditableText, OnProfanityDetected) == 3776, "Offset mismatch for UJunoSanitizedEditableText::OnProfanityDetected");
static_assert(offsetof(UJunoSanitizedEditableText, OnTextIsValid) == 3792, "Offset mismatch for UJunoSanitizedEditableText::OnTextIsValid");
static_assert(offsetof(UJunoSanitizedEditableText, CharacterLimit) == 3808, "Offset mismatch for UJunoSanitizedEditableText::CharacterLimit");
static_assert(offsetof(UJunoSanitizedEditableText, CharacterCount) == 3812, "Offset mismatch for UJunoSanitizedEditableText::CharacterCount");
static_assert(offsetof(UJunoSanitizedEditableText, ContextId) == 3816, "Offset mismatch for UJunoSanitizedEditableText::ContextId");
static_assert(offsetof(UJunoSanitizedEditableText, ContextEntity) == 3832, "Offset mismatch for UJunoSanitizedEditableText::ContextEntity");

// /Script/JunoCoreUI.JunoSettingRotator
// Kind: Class; super: CommonRotator
class UJunoSettingRotator
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    FMulticastInlineDelegate OnRotatedWithDirection; // 0x15B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRotated; // 0x15C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x15D0
    void* MyText; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoSettingRotator, OnRotatedWithDirection) == 5552, "Offset mismatch for UJunoSettingRotator::OnRotatedWithDirection");
static_assert(offsetof(UJunoSettingRotator, OnRotated) == 5568, "Offset mismatch for UJunoSettingRotator::OnRotated");
static_assert(offsetof(UJunoSettingRotator, MyText) == 5608, "Offset mismatch for UJunoSettingRotator::MyText");

// /Script/JunoCoreUI.JunoUGCViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoUGCViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString ContextId; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString ContextEntity; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t CurrentText[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t DefaultText[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t bPendingSave; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCharLimitReached; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bContainsSpecialChar; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bContainsProfanity; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCustomValidationFailed; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTextIsValid; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenericErrorOccurred; // 0x00AE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoUGCViewModel, ContextId) == 104, "Offset mismatch for UJunoUGCViewModel::ContextId");
static_assert(offsetof(UJunoUGCViewModel, ContextEntity) == 120, "Offset mismatch for UJunoUGCViewModel::ContextEntity");
static_assert(offsetof(UJunoUGCViewModel, CurrentText) == 136, "Offset mismatch for UJunoUGCViewModel::CurrentText");
static_assert(offsetof(UJunoUGCViewModel, DefaultText) == 152, "Offset mismatch for UJunoUGCViewModel::DefaultText");
static_assert(offsetof(UJunoUGCViewModel, bPendingSave) == 168, "Offset mismatch for UJunoUGCViewModel::bPendingSave");
static_assert(offsetof(UJunoUGCViewModel, bCharLimitReached) == 169, "Offset mismatch for UJunoUGCViewModel::bCharLimitReached");
static_assert(offsetof(UJunoUGCViewModel, bContainsSpecialChar) == 170, "Offset mismatch for UJunoUGCViewModel::bContainsSpecialChar");
static_assert(offsetof(UJunoUGCViewModel, bContainsProfanity) == 171, "Offset mismatch for UJunoUGCViewModel::bContainsProfanity");
static_assert(offsetof(UJunoUGCViewModel, bCustomValidationFailed) == 172, "Offset mismatch for UJunoUGCViewModel::bCustomValidationFailed");
static_assert(offsetof(UJunoUGCViewModel, bTextIsValid) == 173, "Offset mismatch for UJunoUGCViewModel::bTextIsValid");
static_assert(offsetof(UJunoUGCViewModel, bGenericErrorOccurred) == 174, "Offset mismatch for UJunoUGCViewModel::bGenericErrorOccurred");

// /Script/JunoCoreUI.JunoVirtualKeyboardViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoVirtualKeyboardViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t VirtualKeyboardState[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVirtualKeyboardViewModel, VirtualKeyboardState) == 104, "Offset mismatch for UJunoVirtualKeyboardViewModel::VirtualKeyboardState");

// /Script/JunoCoreUI.JunoWorldCheckpointViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoWorldCheckpointViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bMarkedAsPreserved; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoWorldCheckpointViewModel, bMarkedAsPreserved) == 128, "Offset mismatch for UJunoWorldCheckpointViewModel::bMarkedAsPreserved");

// /Script/JunoCoreUI.JunoWorldDataViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoWorldDataViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t WorldName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t WorldSlotNumber; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    std::uint8_t WorldOwner[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t WorldOwnerId[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t CreationDate[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastPlayed[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t TimePlayed[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsEliminated; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    std::int32_t NumSurvivingKeyholders; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsCreateFlow; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRestoreFlow; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEmptyWorldSlot; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNewInvitation; // 0x00EB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00EC
    void* WorldImageObj; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ActivePlayers; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::int32_t GrantedKeys; // 0x00FC (Size: 0x4, Type: IntProperty)
    void* NameVM; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* ModeVM; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* ImageVM; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* SeedVM; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSettingsLocked; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSettingsChangedAfterGeneration; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0122
    std::int32_t MaxPlayersInWorld; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t MatchmakingError; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SanctionType; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RestoreBlockedReason; // 0x012A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x5]; // 0x012B
    std::uint8_t NextRestoreAllowedAt[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsSharedWorld; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCustom; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanBeSaved; // 0x013A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowWorldUGCCreation; // 0x013B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInCabinMode; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x23]; // 0x013D
    TArray<void*> AdvancedSettingsList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldImageList; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0180
    FString WorldId; // 0x0190 (Size: 0x10, Type: StrProperty)
    void* OriginalData; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* WidgetOwnerPC; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> WorldVersions; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoWorldDataViewModel, WorldName) == 104, "Offset mismatch for UJunoWorldDataViewModel::WorldName");
static_assert(offsetof(UJunoWorldDataViewModel, WorldSlotNumber) == 120, "Offset mismatch for UJunoWorldDataViewModel::WorldSlotNumber");
static_assert(offsetof(UJunoWorldDataViewModel, WorldOwner) == 128, "Offset mismatch for UJunoWorldDataViewModel::WorldOwner");
static_assert(offsetof(UJunoWorldDataViewModel, WorldOwnerId) == 144, "Offset mismatch for UJunoWorldDataViewModel::WorldOwnerId");
static_assert(offsetof(UJunoWorldDataViewModel, CreationDate) == 192, "Offset mismatch for UJunoWorldDataViewModel::CreationDate");
static_assert(offsetof(UJunoWorldDataViewModel, LastPlayed) == 200, "Offset mismatch for UJunoWorldDataViewModel::LastPlayed");
static_assert(offsetof(UJunoWorldDataViewModel, TimePlayed) == 208, "Offset mismatch for UJunoWorldDataViewModel::TimePlayed");
static_assert(offsetof(UJunoWorldDataViewModel, bIsEliminated) == 224, "Offset mismatch for UJunoWorldDataViewModel::bIsEliminated");
static_assert(offsetof(UJunoWorldDataViewModel, NumSurvivingKeyholders) == 228, "Offset mismatch for UJunoWorldDataViewModel::NumSurvivingKeyholders");
static_assert(offsetof(UJunoWorldDataViewModel, bIsCreateFlow) == 232, "Offset mismatch for UJunoWorldDataViewModel::bIsCreateFlow");
static_assert(offsetof(UJunoWorldDataViewModel, bIsRestoreFlow) == 233, "Offset mismatch for UJunoWorldDataViewModel::bIsRestoreFlow");
static_assert(offsetof(UJunoWorldDataViewModel, bIsEmptyWorldSlot) == 234, "Offset mismatch for UJunoWorldDataViewModel::bIsEmptyWorldSlot");
static_assert(offsetof(UJunoWorldDataViewModel, bIsNewInvitation) == 235, "Offset mismatch for UJunoWorldDataViewModel::bIsNewInvitation");
static_assert(offsetof(UJunoWorldDataViewModel, WorldImageObj) == 240, "Offset mismatch for UJunoWorldDataViewModel::WorldImageObj");
static_assert(offsetof(UJunoWorldDataViewModel, ActivePlayers) == 248, "Offset mismatch for UJunoWorldDataViewModel::ActivePlayers");
static_assert(offsetof(UJunoWorldDataViewModel, GrantedKeys) == 252, "Offset mismatch for UJunoWorldDataViewModel::GrantedKeys");
static_assert(offsetof(UJunoWorldDataViewModel, NameVM) == 256, "Offset mismatch for UJunoWorldDataViewModel::NameVM");
static_assert(offsetof(UJunoWorldDataViewModel, ModeVM) == 264, "Offset mismatch for UJunoWorldDataViewModel::ModeVM");
static_assert(offsetof(UJunoWorldDataViewModel, ImageVM) == 272, "Offset mismatch for UJunoWorldDataViewModel::ImageVM");
static_assert(offsetof(UJunoWorldDataViewModel, SeedVM) == 280, "Offset mismatch for UJunoWorldDataViewModel::SeedVM");
static_assert(offsetof(UJunoWorldDataViewModel, bSettingsLocked) == 288, "Offset mismatch for UJunoWorldDataViewModel::bSettingsLocked");
static_assert(offsetof(UJunoWorldDataViewModel, bSettingsChangedAfterGeneration) == 289, "Offset mismatch for UJunoWorldDataViewModel::bSettingsChangedAfterGeneration");
static_assert(offsetof(UJunoWorldDataViewModel, MaxPlayersInWorld) == 292, "Offset mismatch for UJunoWorldDataViewModel::MaxPlayersInWorld");
static_assert(offsetof(UJunoWorldDataViewModel, MatchmakingError) == 296, "Offset mismatch for UJunoWorldDataViewModel::MatchmakingError");
static_assert(offsetof(UJunoWorldDataViewModel, SanctionType) == 297, "Offset mismatch for UJunoWorldDataViewModel::SanctionType");
static_assert(offsetof(UJunoWorldDataViewModel, RestoreBlockedReason) == 298, "Offset mismatch for UJunoWorldDataViewModel::RestoreBlockedReason");
static_assert(offsetof(UJunoWorldDataViewModel, NextRestoreAllowedAt) == 304, "Offset mismatch for UJunoWorldDataViewModel::NextRestoreAllowedAt");
static_assert(offsetof(UJunoWorldDataViewModel, bIsSharedWorld) == 312, "Offset mismatch for UJunoWorldDataViewModel::bIsSharedWorld");
static_assert(offsetof(UJunoWorldDataViewModel, bIsCustom) == 313, "Offset mismatch for UJunoWorldDataViewModel::bIsCustom");
static_assert(offsetof(UJunoWorldDataViewModel, bCanBeSaved) == 314, "Offset mismatch for UJunoWorldDataViewModel::bCanBeSaved");
static_assert(offsetof(UJunoWorldDataViewModel, bAllowWorldUGCCreation) == 315, "Offset mismatch for UJunoWorldDataViewModel::bAllowWorldUGCCreation");
static_assert(offsetof(UJunoWorldDataViewModel, bIsInCabinMode) == 316, "Offset mismatch for UJunoWorldDataViewModel::bIsInCabinMode");
static_assert(offsetof(UJunoWorldDataViewModel, AdvancedSettingsList) == 352, "Offset mismatch for UJunoWorldDataViewModel::AdvancedSettingsList");
static_assert(offsetof(UJunoWorldDataViewModel, WorldImageList) == 368, "Offset mismatch for UJunoWorldDataViewModel::WorldImageList");
static_assert(offsetof(UJunoWorldDataViewModel, WorldId) == 400, "Offset mismatch for UJunoWorldDataViewModel::WorldId");
static_assert(offsetof(UJunoWorldDataViewModel, OriginalData) == 416, "Offset mismatch for UJunoWorldDataViewModel::OriginalData");
static_assert(offsetof(UJunoWorldDataViewModel, WidgetOwnerPC) == 424, "Offset mismatch for UJunoWorldDataViewModel::WidgetOwnerPC");
static_assert(offsetof(UJunoWorldDataViewModel, WorldVersions) == 432, "Offset mismatch for UJunoWorldDataViewModel::WorldVersions");

// /Script/JunoCoreUI.JunoWorldImageObject
// Kind: Class; super: Object
class UJunoWorldImageObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnTextureUpdated; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t RowHandle[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoWorldImageObject, OnTextureUpdated) == 40, "Offset mismatch for UJunoWorldImageObject::OnTextureUpdated");
static_assert(offsetof(UJunoWorldImageObject, RowHandle) == 56, "Offset mismatch for UJunoWorldImageObject::RowHandle");

// /Script/JunoCoreUI.JunoWorldSettingViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoWorldSettingViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString SettingId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t SettingName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t SettingCategory; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t SelectedOption; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t SelectedModeIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    TArray<void*> CanDefaultBeChangedPerMode; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CanChangePostCreation; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultOptionPerMode; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumericValue; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00CC
    void* UGCViewModel; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsGameMode; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bContainsUGC; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x00DA
    TArray<void*> OptionList; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SettingImage[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bShowDefaultTag; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCustom; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocked; // 0x0112 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanBeLocked; // 0x0113 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockQuestProgressIfChanged; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x13]; // 0x0115
    FMulticastInlineDelegate OnSelectedOptionChangedDynamic; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoWorldSettingViewModel, SettingId) == 104, "Offset mismatch for UJunoWorldSettingViewModel::SettingId");
static_assert(offsetof(UJunoWorldSettingViewModel, SettingName) == 120, "Offset mismatch for UJunoWorldSettingViewModel::SettingName");
static_assert(offsetof(UJunoWorldSettingViewModel, SettingCategory) == 136, "Offset mismatch for UJunoWorldSettingViewModel::SettingCategory");
static_assert(offsetof(UJunoWorldSettingViewModel, SelectedOption) == 140, "Offset mismatch for UJunoWorldSettingViewModel::SelectedOption");
static_assert(offsetof(UJunoWorldSettingViewModel, SelectedModeIndex) == 144, "Offset mismatch for UJunoWorldSettingViewModel::SelectedModeIndex");
static_assert(offsetof(UJunoWorldSettingViewModel, CanDefaultBeChangedPerMode) == 152, "Offset mismatch for UJunoWorldSettingViewModel::CanDefaultBeChangedPerMode");
static_assert(offsetof(UJunoWorldSettingViewModel, CanChangePostCreation) == 168, "Offset mismatch for UJunoWorldSettingViewModel::CanChangePostCreation");
static_assert(offsetof(UJunoWorldSettingViewModel, DefaultOptionPerMode) == 184, "Offset mismatch for UJunoWorldSettingViewModel::DefaultOptionPerMode");
static_assert(offsetof(UJunoWorldSettingViewModel, NumericValue) == 200, "Offset mismatch for UJunoWorldSettingViewModel::NumericValue");
static_assert(offsetof(UJunoWorldSettingViewModel, UGCViewModel) == 208, "Offset mismatch for UJunoWorldSettingViewModel::UGCViewModel");
static_assert(offsetof(UJunoWorldSettingViewModel, bIsGameMode) == 216, "Offset mismatch for UJunoWorldSettingViewModel::bIsGameMode");
static_assert(offsetof(UJunoWorldSettingViewModel, bContainsUGC) == 217, "Offset mismatch for UJunoWorldSettingViewModel::bContainsUGC");
static_assert(offsetof(UJunoWorldSettingViewModel, OptionList) == 224, "Offset mismatch for UJunoWorldSettingViewModel::OptionList");
static_assert(offsetof(UJunoWorldSettingViewModel, SettingImage) == 240, "Offset mismatch for UJunoWorldSettingViewModel::SettingImage");
static_assert(offsetof(UJunoWorldSettingViewModel, bShowDefaultTag) == 272, "Offset mismatch for UJunoWorldSettingViewModel::bShowDefaultTag");
static_assert(offsetof(UJunoWorldSettingViewModel, bIsCustom) == 273, "Offset mismatch for UJunoWorldSettingViewModel::bIsCustom");
static_assert(offsetof(UJunoWorldSettingViewModel, bIsLocked) == 274, "Offset mismatch for UJunoWorldSettingViewModel::bIsLocked");
static_assert(offsetof(UJunoWorldSettingViewModel, bCanBeLocked) == 275, "Offset mismatch for UJunoWorldSettingViewModel::bCanBeLocked");
static_assert(offsetof(UJunoWorldSettingViewModel, bBlockQuestProgressIfChanged) == 276, "Offset mismatch for UJunoWorldSettingViewModel::bBlockQuestProgressIfChanged");
static_assert(offsetof(UJunoWorldSettingViewModel, OnSelectedOptionChangedDynamic) == 296, "Offset mismatch for UJunoWorldSettingViewModel::OnSelectedOptionChangedDynamic");

// /Script/JunoCoreUI.JunoWorldSettingsScreenBase
// Kind: Class; super: CommonActivatableWidget
class UJunoWorldSettingsScreenBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoWorldSettingsScreenBase, bIsBackHandler) == 816, "Offset mismatch for UJunoWorldSettingsScreenBase::bIsBackHandler");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJunoWorldSettingsScreenBase::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJunoWorldSettingsScreenBase, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJunoWorldSettingsScreenBase::OverrideBackActionDisplayName");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bAutoActivate) == 840, "Offset mismatch for UJunoWorldSettingsScreenBase::bAutoActivate");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bSupportsActivationFocus) == 841, "Offset mismatch for UJunoWorldSettingsScreenBase::bSupportsActivationFocus");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bIsModal) == 842, "Offset mismatch for UJunoWorldSettingsScreenBase::bIsModal");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bAutoRestoreFocus) == 843, "Offset mismatch for UJunoWorldSettingsScreenBase::bAutoRestoreFocus");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bOverrideActionDomain) == 844, "Offset mismatch for UJunoWorldSettingsScreenBase::bOverrideActionDomain");
static_assert(offsetof(UJunoWorldSettingsScreenBase, InputMapping) == 848, "Offset mismatch for UJunoWorldSettingsScreenBase::InputMapping");
static_assert(offsetof(UJunoWorldSettingsScreenBase, InputMappingPriority) == 856, "Offset mismatch for UJunoWorldSettingsScreenBase::InputMappingPriority");
static_assert(offsetof(UJunoWorldSettingsScreenBase, InputModeTagsToAdd) == 864, "Offset mismatch for UJunoWorldSettingsScreenBase::InputModeTagsToAdd");
static_assert(offsetof(UJunoWorldSettingsScreenBase, InputModeTagsToRemove) == 896, "Offset mismatch for UJunoWorldSettingsScreenBase::InputModeTagsToRemove");
static_assert(offsetof(UJunoWorldSettingsScreenBase, ActionDomainOverride) == 928, "Offset mismatch for UJunoWorldSettingsScreenBase::ActionDomainOverride");
static_assert(offsetof(UJunoWorldSettingsScreenBase, BP_OnWidgetActivated) == 960, "Offset mismatch for UJunoWorldSettingsScreenBase::BP_OnWidgetActivated");
static_assert(offsetof(UJunoWorldSettingsScreenBase, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJunoWorldSettingsScreenBase::BP_OnWidgetDeactivated");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bIsActive) == 992, "Offset mismatch for UJunoWorldSettingsScreenBase::bIsActive");
static_assert(offsetof(UJunoWorldSettingsScreenBase, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJunoWorldSettingsScreenBase::VisibilityBoundWidgets");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJunoWorldSettingsScreenBase::bSetVisibilityOnActivated");
static_assert(offsetof(UJunoWorldSettingsScreenBase, ActivatedVisibility) == 1177, "Offset mismatch for UJunoWorldSettingsScreenBase::ActivatedVisibility");
static_assert(offsetof(UJunoWorldSettingsScreenBase, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJunoWorldSettingsScreenBase::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJunoWorldSettingsScreenBase, DeactivatedVisibility) == 1179, "Offset mismatch for UJunoWorldSettingsScreenBase::DeactivatedVisibility");
