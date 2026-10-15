/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMatchmakingSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksMatchmakingSettingsUI.SparksVMEventHandleWrapper
// Kind: ScriptStruct; super: none
struct FSparksVMEventHandleWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMatchmakingSettingsUI.SparksActivityVM
// Kind: Class; super: MVVMViewModelBase
class USparksActivityVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> ProductModes; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    FString CurrentProductMode; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USparksActivityVM, ProductModes) == 120, "Offset mismatch for USparksActivityVM::ProductModes");
static_assert(offsetof(USparksActivityVM, CurrentProductMode) == 136, "Offset mismatch for USparksActivityVM::CurrentProductMode");

// /Script/SparksMatchmakingSettingsUI.SparksBattleStageIslandVM
// Kind: Class; super: SparksIslandVM
class USparksBattleStageIslandVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> ModeOptions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasBeenInitialized; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasError; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x26]; // 0x008A
    std::uint8_t Title[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortTitle[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasFillOption; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    void* FortActivityVM; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewImage; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksBattleStageIslandVM, ModeOptions) == 120, "Offset mismatch for USparksBattleStageIslandVM::ModeOptions");
static_assert(offsetof(USparksBattleStageIslandVM, bHasBeenInitialized) == 136, "Offset mismatch for USparksBattleStageIslandVM::bHasBeenInitialized");
static_assert(offsetof(USparksBattleStageIslandVM, bHasError) == 137, "Offset mismatch for USparksBattleStageIslandVM::bHasError");
static_assert(offsetof(USparksBattleStageIslandVM, Title) == 176, "Offset mismatch for USparksBattleStageIslandVM::Title");
static_assert(offsetof(USparksBattleStageIslandVM, ShortTitle) == 192, "Offset mismatch for USparksBattleStageIslandVM::ShortTitle");
static_assert(offsetof(USparksBattleStageIslandVM, Description) == 208, "Offset mismatch for USparksBattleStageIslandVM::Description");
static_assert(offsetof(USparksBattleStageIslandVM, bHasFillOption) == 224, "Offset mismatch for USparksBattleStageIslandVM::bHasFillOption");
static_assert(offsetof(USparksBattleStageIslandVM, FortActivityVM) == 232, "Offset mismatch for USparksBattleStageIslandVM::FortActivityVM");
static_assert(offsetof(USparksBattleStageIslandVM, PreviewImage) == 240, "Offset mismatch for USparksBattleStageIslandVM::PreviewImage");

// /Script/SparksMatchmakingSettingsUI.SparksBattleStageSubModeVM
// Kind: Class; super: SparksIslandModeOptionVM
class USparksBattleStageSubModeVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsSingleLink; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInitialUserSelectedGameMode; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x007A
    void* PreviewImage; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    FString PlaylistMnemonic; // 0x0098 (Size: 0x10, Type: StrProperty)
    std::uint8_t Title[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x00B8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USparksBattleStageSubModeVM, bIsSingleLink) == 120, "Offset mismatch for USparksBattleStageSubModeVM::bIsSingleLink");
static_assert(offsetof(USparksBattleStageSubModeVM, bIsInitialUserSelectedGameMode) == 121, "Offset mismatch for USparksBattleStageSubModeVM::bIsInitialUserSelectedGameMode");
static_assert(offsetof(USparksBattleStageSubModeVM, PreviewImage) == 144, "Offset mismatch for USparksBattleStageSubModeVM::PreviewImage");
static_assert(offsetof(USparksBattleStageSubModeVM, PlaylistMnemonic) == 152, "Offset mismatch for USparksBattleStageSubModeVM::PlaylistMnemonic");
static_assert(offsetof(USparksBattleStageSubModeVM, Title) == 168, "Offset mismatch for USparksBattleStageSubModeVM::Title");
static_assert(offsetof(USparksBattleStageSubModeVM, Description) == 184, "Offset mismatch for USparksBattleStageSubModeVM::Description");

// /Script/SparksMatchmakingSettingsUI.SparksIslandModeOptionVM
// Kind: Class; super: FortPerUserViewModel
class USparksIslandModeOptionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsSingleLink; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInitialUserSelectedGameMode; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x007A
    void* PreviewImage; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    FString PlaylistMnemonic; // 0x0098 (Size: 0x10, Type: StrProperty)
    std::uint8_t Title[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x00B8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USparksIslandModeOptionVM, bIsSingleLink) == 120, "Offset mismatch for USparksIslandModeOptionVM::bIsSingleLink");
static_assert(offsetof(USparksIslandModeOptionVM, bIsInitialUserSelectedGameMode) == 121, "Offset mismatch for USparksIslandModeOptionVM::bIsInitialUserSelectedGameMode");
static_assert(offsetof(USparksIslandModeOptionVM, PreviewImage) == 144, "Offset mismatch for USparksIslandModeOptionVM::PreviewImage");
static_assert(offsetof(USparksIslandModeOptionVM, PlaylistMnemonic) == 152, "Offset mismatch for USparksIslandModeOptionVM::PlaylistMnemonic");
static_assert(offsetof(USparksIslandModeOptionVM, Title) == 168, "Offset mismatch for USparksIslandModeOptionVM::Title");
static_assert(offsetof(USparksIslandModeOptionVM, Description) == 184, "Offset mismatch for USparksIslandModeOptionVM::Description");

// /Script/SparksMatchmakingSettingsUI.SparksIslandVM
// Kind: Class; super: FortPerUserViewModel
class USparksIslandVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> ModeOptions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasBeenInitialized; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasError; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x26]; // 0x008A
    std::uint8_t Title[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortTitle[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasFillOption; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    void* FortActivityVM; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewImage; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksIslandVM, ModeOptions) == 120, "Offset mismatch for USparksIslandVM::ModeOptions");
static_assert(offsetof(USparksIslandVM, bHasBeenInitialized) == 136, "Offset mismatch for USparksIslandVM::bHasBeenInitialized");
static_assert(offsetof(USparksIslandVM, bHasError) == 137, "Offset mismatch for USparksIslandVM::bHasError");
static_assert(offsetof(USparksIslandVM, Title) == 176, "Offset mismatch for USparksIslandVM::Title");
static_assert(offsetof(USparksIslandVM, ShortTitle) == 192, "Offset mismatch for USparksIslandVM::ShortTitle");
static_assert(offsetof(USparksIslandVM, Description) == 208, "Offset mismatch for USparksIslandVM::Description");
static_assert(offsetof(USparksIslandVM, bHasFillOption) == 224, "Offset mismatch for USparksIslandVM::bHasFillOption");
static_assert(offsetof(USparksIslandVM, FortActivityVM) == 232, "Offset mismatch for USparksIslandVM::FortActivityVM");
static_assert(offsetof(USparksIslandVM, PreviewImage) == 240, "Offset mismatch for USparksIslandVM::PreviewImage");

// /Script/SparksMatchmakingSettingsUI.SparksMatchmakingSettingsUI
// Kind: Class; super: MatchmakingSettingsOverrideUI
class USparksMatchmakingSettingsUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MatchmakingSettingsModal[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MatchFoundWidget[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    void* ProductModeUserFacingDataClass; // 0x0068 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USparksMatchmakingSettingsUI, MatchmakingSettingsModal) == 40, "Offset mismatch for USparksMatchmakingSettingsUI::MatchmakingSettingsModal");
static_assert(offsetof(USparksMatchmakingSettingsUI, MatchFoundWidget) == 72, "Offset mismatch for USparksMatchmakingSettingsUI::MatchFoundWidget");
static_assert(offsetof(USparksMatchmakingSettingsUI, ProductModeUserFacingDataClass) == 104, "Offset mismatch for USparksMatchmakingSettingsUI::ProductModeUserFacingDataClass");

// /Script/SparksMatchmakingSettingsUI.SparksMatchmakingSquadFillButton
// Kind: Class; super: CommonButtonBase
class USparksMatchmakingSquadFillButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t FillOnlyText[0x10]; // 0x15A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCommitSelectionOnClick; // 0x15B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPrivateGameSelected; // 0x15B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1E]; // 0x15B2
    void* SquadFillVM; // 0x15D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksMatchmakingSquadFillButton, FillOnlyText) == 5536, "Offset mismatch for USparksMatchmakingSquadFillButton::FillOnlyText");
static_assert(offsetof(USparksMatchmakingSquadFillButton, bCommitSelectionOnClick) == 5552, "Offset mismatch for USparksMatchmakingSquadFillButton::bCommitSelectionOnClick");
static_assert(offsetof(USparksMatchmakingSquadFillButton, bIsPrivateGameSelected) == 5553, "Offset mismatch for USparksMatchmakingSquadFillButton::bIsPrivateGameSelected");
static_assert(offsetof(USparksMatchmakingSquadFillButton, SquadFillVM) == 5584, "Offset mismatch for USparksMatchmakingSquadFillButton::SquadFillVM");

// /Script/SparksMatchmakingSettingsUI.SparksModeSelectScreen
// Kind: Class; super: FortActivityModeSetSelectionModalBase
class USparksModeSelectScreen
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* SparksModeSelectVM; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* SparksProductModeVM; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* SparksPrivacyVM; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ProductModeUserFacingDataClass; // 0x04D0 (Size: 0x8, Type: ClassProperty)
    void* Button_ActivityPrivacy; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ActivityFill; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksModeSelectScreen, SparksModeSelectVM) == 1208, "Offset mismatch for USparksModeSelectScreen::SparksModeSelectVM");
static_assert(offsetof(USparksModeSelectScreen, SparksProductModeVM) == 1216, "Offset mismatch for USparksModeSelectScreen::SparksProductModeVM");
static_assert(offsetof(USparksModeSelectScreen, SparksPrivacyVM) == 1224, "Offset mismatch for USparksModeSelectScreen::SparksPrivacyVM");
static_assert(offsetof(USparksModeSelectScreen, ProductModeUserFacingDataClass) == 1232, "Offset mismatch for USparksModeSelectScreen::ProductModeUserFacingDataClass");
static_assert(offsetof(USparksModeSelectScreen, Button_ActivityPrivacy) == 1240, "Offset mismatch for USparksModeSelectScreen::Button_ActivityPrivacy");
static_assert(offsetof(USparksModeSelectScreen, Button_ActivityFill) == 1248, "Offset mismatch for USparksModeSelectScreen::Button_ActivityFill");

// /Script/SparksMatchmakingSettingsUI.SparksModeSelectVM
// Kind: Class; super: FortPerUserViewModel
class USparksModeSelectVM
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> SparksIslands; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksModeSelectVM, SparksIslands) == 136, "Offset mismatch for USparksModeSelectVM::SparksIslands");

// /Script/SparksMatchmakingSettingsUI.SparksPrivacyButton
// Kind: Class; super: CommonButtonBase
class USparksPrivacyButton
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

static_assert(offsetof(USparksPrivacyButton, ClickEvent) == 816, "Offset mismatch for USparksPrivacyButton::ClickEvent");
static_assert(offsetof(USparksPrivacyButton, MinWidth) == 820, "Offset mismatch for USparksPrivacyButton::MinWidth");
static_assert(offsetof(USparksPrivacyButton, MinHeight) == 824, "Offset mismatch for USparksPrivacyButton::MinHeight");
static_assert(offsetof(USparksPrivacyButton, MaxWidth) == 828, "Offset mismatch for USparksPrivacyButton::MaxWidth");
static_assert(offsetof(USparksPrivacyButton, MaxHeight) == 832, "Offset mismatch for USparksPrivacyButton::MaxHeight");
static_assert(offsetof(USparksPrivacyButton, Style) == 840, "Offset mismatch for USparksPrivacyButton::Style");
static_assert(offsetof(USparksPrivacyButton, bHideInputAction) == 848, "Offset mismatch for USparksPrivacyButton::bHideInputAction");
static_assert(offsetof(USparksPrivacyButton, PressedSlateSoundOverride) == 856, "Offset mismatch for USparksPrivacyButton::PressedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, ClickedSlateSoundOverride) == 880, "Offset mismatch for USparksPrivacyButton::ClickedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, HoveredSlateSoundOverride) == 904, "Offset mismatch for USparksPrivacyButton::HoveredSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for USparksPrivacyButton::SelectedPressedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for USparksPrivacyButton::SelectedClickedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for USparksPrivacyButton::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for USparksPrivacyButton::LockedPressedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for USparksPrivacyButton::LockedClickedSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for USparksPrivacyButton::LockedHoveredSlateSoundOverride");
static_assert(offsetof(USparksPrivacyButton, bApplyAlphaOnDisable) == 1072, "Offset mismatch for USparksPrivacyButton::bApplyAlphaOnDisable");
static_assert(offsetof(USparksPrivacyButton, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for USparksPrivacyButton::bHideInputActionWithKeyboard");
static_assert(offsetof(USparksPrivacyButton, HoldData) == 1080, "Offset mismatch for USparksPrivacyButton::HoldData");
static_assert(offsetof(USparksPrivacyButton, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for USparksPrivacyButton::bSimulateHoverOnTouchInput");
static_assert(offsetof(USparksPrivacyButton, ClickMethod) == 1091, "Offset mismatch for USparksPrivacyButton::ClickMethod");
static_assert(offsetof(USparksPrivacyButton, TouchMethod) == 1092, "Offset mismatch for USparksPrivacyButton::TouchMethod");
static_assert(offsetof(USparksPrivacyButton, PressMethod) == 1093, "Offset mismatch for USparksPrivacyButton::PressMethod");
static_assert(offsetof(USparksPrivacyButton, InputPriority) == 1096, "Offset mismatch for USparksPrivacyButton::InputPriority");
static_assert(offsetof(USparksPrivacyButton, TriggeringInputAction) == 1104, "Offset mismatch for USparksPrivacyButton::TriggeringInputAction");
static_assert(offsetof(USparksPrivacyButton, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for USparksPrivacyButton::TriggeringEnhancedInputAction");
static_assert(offsetof(USparksPrivacyButton, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for USparksPrivacyButton::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(USparksPrivacyButton, OnSelectedChangedBase) == 1152, "Offset mismatch for USparksPrivacyButton::OnSelectedChangedBase");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseClicked) == 1168, "Offset mismatch for USparksPrivacyButton::OnButtonBaseClicked");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDoubleClicked");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseHovered) == 1200, "Offset mismatch for USparksPrivacyButton::OnButtonBaseHovered");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseUnhovered) == 1216, "Offset mismatch for USparksPrivacyButton::OnButtonBaseUnhovered");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseFocused) == 1232, "Offset mismatch for USparksPrivacyButton::OnButtonBaseFocused");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseUnfocused) == 1248, "Offset mismatch for USparksPrivacyButton::OnButtonBaseUnfocused");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseLockClicked) == 1264, "Offset mismatch for USparksPrivacyButton::OnButtonBaseLockClicked");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for USparksPrivacyButton::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseSelected) == 1296, "Offset mismatch for USparksPrivacyButton::OnButtonBaseSelected");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseUnselected) == 1312, "Offset mismatch for USparksPrivacyButton::OnButtonBaseUnselected");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDragDetected) == 1328, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDragDetected");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDragEnter) == 1344, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDragEnter");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDragLeave) == 1360, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDragLeave");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDragOver) == 1376, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDragOver");
static_assert(offsetof(USparksPrivacyButton, OnButtonBaseDrop) == 1392, "Offset mismatch for USparksPrivacyButton::OnButtonBaseDrop");
static_assert(offsetof(USparksPrivacyButton, bIsPersistentBinding) == 1464, "Offset mismatch for USparksPrivacyButton::bIsPersistentBinding");
static_assert(offsetof(USparksPrivacyButton, InputModeOverride) == 1465, "Offset mismatch for USparksPrivacyButton::InputModeOverride");
static_assert(offsetof(USparksPrivacyButton, SingleMaterialStyleMID) == 1504, "Offset mismatch for USparksPrivacyButton::SingleMaterialStyleMID");
static_assert(offsetof(USparksPrivacyButton, NormalStyle) == 1520, "Offset mismatch for USparksPrivacyButton::NormalStyle");
static_assert(offsetof(USparksPrivacyButton, SelectedStyle) == 2432, "Offset mismatch for USparksPrivacyButton::SelectedStyle");
static_assert(offsetof(USparksPrivacyButton, DisabledStyle) == 3344, "Offset mismatch for USparksPrivacyButton::DisabledStyle");
static_assert(offsetof(USparksPrivacyButton, LockedStyle) == 4256, "Offset mismatch for USparksPrivacyButton::LockedStyle");
static_assert(offsetof(USparksPrivacyButton, bStopDoubleClickPropagation) == 5168, "Offset mismatch for USparksPrivacyButton::bStopDoubleClickPropagation");
static_assert(offsetof(USparksPrivacyButton, InputActionWidget) == 5528, "Offset mismatch for USparksPrivacyButton::InputActionWidget");

// /Script/SparksMatchmakingSettingsUI.SparksPrivacyVM
// Kind: Class; super: FortPerUserViewModel
class USparksPrivacyVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bShowPrivacyButton; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPrivacyPreferred; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrivacyButtonEnabled; // 0x007A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksPrivacyVM, bShowPrivacyButton) == 120, "Offset mismatch for USparksPrivacyVM::bShowPrivacyButton");
static_assert(offsetof(USparksPrivacyVM, bIsPrivacyPreferred) == 121, "Offset mismatch for USparksPrivacyVM::bIsPrivacyPreferred");
static_assert(offsetof(USparksPrivacyVM, bPrivacyButtonEnabled) == 122, "Offset mismatch for USparksPrivacyVM::bPrivacyButtonEnabled");

// /Script/SparksMatchmakingSettingsUI.SparksProductModeUserFacingDataVM
// Kind: Class; super: FortPerUserViewModel
class USparksProductModeUserFacingDataVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* ProductModeUserFacingDataClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USparksProductModeUserFacingDataVM, ProductModeUserFacingDataClass) == 120, "Offset mismatch for USparksProductModeUserFacingDataVM::ProductModeUserFacingDataClass");

// /Script/SparksMatchmakingSettingsUI.SparksQuickplayIslandVM
// Kind: Class; super: SparksIslandVM
class USparksQuickplayIslandVM
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> ProductModes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    FString CurrentProductMode; // 0x0108 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0118
    TMap<void*, void*> PotentialModeOptions; // 0x0130 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ModeCallbackHandles; // 0x0140 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksQuickplayIslandVM, ProductModes) == 248, "Offset mismatch for USparksQuickplayIslandVM::ProductModes");
static_assert(offsetof(USparksQuickplayIslandVM, CurrentProductMode) == 264, "Offset mismatch for USparksQuickplayIslandVM::CurrentProductMode");
static_assert(offsetof(USparksQuickplayIslandVM, PotentialModeOptions) == 304, "Offset mismatch for USparksQuickplayIslandVM::PotentialModeOptions");
static_assert(offsetof(USparksQuickplayIslandVM, ModeCallbackHandles) == 320, "Offset mismatch for USparksQuickplayIslandVM::ModeCallbackHandles");

// /Script/SparksMatchmakingSettingsUI.SparksQuickplayProductModeVM
// Kind: Class; super: SparksIslandModeOptionVM
class USparksQuickplayProductModeVM
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FString ProductMode; // 0x00C8 (Size: 0x10, Type: StrProperty)
    void* ParentQuickplayIslandVM; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanExpire; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t EventEndTime[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsCuratedSetlist; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksQuickplayProductModeVM, ProductMode) == 200, "Offset mismatch for USparksQuickplayProductModeVM::ProductMode");
static_assert(offsetof(USparksQuickplayProductModeVM, ParentQuickplayIslandVM) == 216, "Offset mismatch for USparksQuickplayProductModeVM::ParentQuickplayIslandVM");
static_assert(offsetof(USparksQuickplayProductModeVM, bCanExpire) == 224, "Offset mismatch for USparksQuickplayProductModeVM::bCanExpire");
static_assert(offsetof(USparksQuickplayProductModeVM, EventEndTime) == 232, "Offset mismatch for USparksQuickplayProductModeVM::EventEndTime");
static_assert(offsetof(USparksQuickplayProductModeVM, bIsCuratedSetlist) == 240, "Offset mismatch for USparksQuickplayProductModeVM::bIsCuratedSetlist");

// /Script/SparksMatchmakingSettingsUI.SparksSingleLinkIslandVM
// Kind: Class; super: SparksIslandVM
class USparksSingleLinkIslandVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> ModeOptions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasBeenInitialized; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasError; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x26]; // 0x008A
    std::uint8_t Title[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortTitle[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasFillOption; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    void* FortActivityVM; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewImage; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSingleLinkIslandVM, ModeOptions) == 120, "Offset mismatch for USparksSingleLinkIslandVM::ModeOptions");
static_assert(offsetof(USparksSingleLinkIslandVM, bHasBeenInitialized) == 136, "Offset mismatch for USparksSingleLinkIslandVM::bHasBeenInitialized");
static_assert(offsetof(USparksSingleLinkIslandVM, bHasError) == 137, "Offset mismatch for USparksSingleLinkIslandVM::bHasError");
static_assert(offsetof(USparksSingleLinkIslandVM, Title) == 176, "Offset mismatch for USparksSingleLinkIslandVM::Title");
static_assert(offsetof(USparksSingleLinkIslandVM, ShortTitle) == 192, "Offset mismatch for USparksSingleLinkIslandVM::ShortTitle");
static_assert(offsetof(USparksSingleLinkIslandVM, Description) == 208, "Offset mismatch for USparksSingleLinkIslandVM::Description");
static_assert(offsetof(USparksSingleLinkIslandVM, bHasFillOption) == 224, "Offset mismatch for USparksSingleLinkIslandVM::bHasFillOption");
static_assert(offsetof(USparksSingleLinkIslandVM, FortActivityVM) == 232, "Offset mismatch for USparksSingleLinkIslandVM::FortActivityVM");
static_assert(offsetof(USparksSingleLinkIslandVM, PreviewImage) == 240, "Offset mismatch for USparksSingleLinkIslandVM::PreviewImage");

// /Script/SparksMatchmakingSettingsUI.SparksSquadFillVM
// Kind: Class; super: FortPerUserViewModel
class USparksSquadFillVM
{
public:
    std::uint8_t Opaque[1];
};
