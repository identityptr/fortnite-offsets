#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMatchmakingSettingsUI
{
    struct SparksActivityVM
    {
        static constexpr std::string_view Name = "SparksActivityVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductModes = 0x78;
            static constexpr std::uintptr_t CurrentProductMode = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProductModes", 0x78, "ArrayProperty"},
            {"CurrentProductMode", 0x88, "StrProperty"},
        }};
    };

    struct SparksBattleStageIslandVM
    {
        static constexpr std::string_view Name = "SparksBattleStageIslandVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksIslandVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeOptions = 0x78;
            static constexpr std::uintptr_t bHasBeenInitialized = 0x88;
            static constexpr std::uintptr_t bHasError = 0x89;
            static constexpr std::uintptr_t Title = 0xB0;
            static constexpr std::uintptr_t ShortTitle = 0xC0;
            static constexpr std::uintptr_t Description = 0xD0;
            static constexpr std::uintptr_t bHasFillOption = 0xE0;
            static constexpr std::uintptr_t FortActivityVM = 0xE8;
            static constexpr std::uintptr_t PreviewImage = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ModeOptions", 0x78, "ArrayProperty"},
            {"bHasBeenInitialized", 0x88, "BoolProperty"},
            {"bHasError", 0x89, "BoolProperty"},
            {"Title", 0xB0, "TextProperty"},
            {"ShortTitle", 0xC0, "TextProperty"},
            {"Description", 0xD0, "TextProperty"},
            {"bHasFillOption", 0xE0, "BoolProperty"},
            {"FortActivityVM", 0xE8, "ObjectProperty"},
            {"PreviewImage", 0xF0, "ObjectProperty"},
        }};
    };

    struct SparksBattleStageSubModeVM
    {
        static constexpr std::string_view Name = "SparksBattleStageSubModeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksIslandModeOptionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSingleLink = 0x78;
            static constexpr std::uintptr_t bIsInitialUserSelectedGameMode = 0x79;
            static constexpr std::uintptr_t PreviewImage = 0x90;
            static constexpr std::uintptr_t PlaylistMnemonic = 0x98;
            static constexpr std::uintptr_t Title = 0xA8;
            static constexpr std::uintptr_t Description = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsSingleLink", 0x78, "BoolProperty"},
            {"bIsInitialUserSelectedGameMode", 0x79, "BoolProperty"},
            {"PreviewImage", 0x90, "ObjectProperty"},
            {"PlaylistMnemonic", 0x98, "StrProperty"},
            {"Title", 0xA8, "TextProperty"},
            {"Description", 0xB8, "TextProperty"},
        }};
    };

    struct SparksIslandModeOptionVM
    {
        static constexpr std::string_view Name = "SparksIslandModeOptionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSingleLink = 0x78;
            static constexpr std::uintptr_t bIsInitialUserSelectedGameMode = 0x79;
            static constexpr std::uintptr_t PreviewImage = 0x90;
            static constexpr std::uintptr_t PlaylistMnemonic = 0x98;
            static constexpr std::uintptr_t Title = 0xA8;
            static constexpr std::uintptr_t Description = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsSingleLink", 0x78, "BoolProperty"},
            {"bIsInitialUserSelectedGameMode", 0x79, "BoolProperty"},
            {"PreviewImage", 0x90, "ObjectProperty"},
            {"PlaylistMnemonic", 0x98, "StrProperty"},
            {"Title", 0xA8, "TextProperty"},
            {"Description", 0xB8, "TextProperty"},
        }};
    };

    struct SparksIslandVM
    {
        static constexpr std::string_view Name = "SparksIslandVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeOptions = 0x78;
            static constexpr std::uintptr_t bHasBeenInitialized = 0x88;
            static constexpr std::uintptr_t bHasError = 0x89;
            static constexpr std::uintptr_t Title = 0xB0;
            static constexpr std::uintptr_t ShortTitle = 0xC0;
            static constexpr std::uintptr_t Description = 0xD0;
            static constexpr std::uintptr_t bHasFillOption = 0xE0;
            static constexpr std::uintptr_t FortActivityVM = 0xE8;
            static constexpr std::uintptr_t PreviewImage = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ModeOptions", 0x78, "ArrayProperty"},
            {"bHasBeenInitialized", 0x88, "BoolProperty"},
            {"bHasError", 0x89, "BoolProperty"},
            {"Title", 0xB0, "TextProperty"},
            {"ShortTitle", 0xC0, "TextProperty"},
            {"Description", 0xD0, "TextProperty"},
            {"bHasFillOption", 0xE0, "BoolProperty"},
            {"FortActivityVM", 0xE8, "ObjectProperty"},
            {"PreviewImage", 0xF0, "ObjectProperty"},
        }};
    };

    struct SparksMatchmakingSettingsUI
    {
        static constexpr std::string_view Name = "SparksMatchmakingSettingsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MatchmakingSettingsOverrideUI";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchmakingSettingsModal = 0x28;
            static constexpr std::uintptr_t MatchFoundWidget = 0x48;
            static constexpr std::uintptr_t ProductModeUserFacingDataClass = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MatchmakingSettingsModal", 0x28, "SoftClassProperty"},
            {"MatchFoundWidget", 0x48, "SoftClassProperty"},
            {"ProductModeUserFacingDataClass", 0x68, "ClassProperty"},
        }};
    };

    struct SparksMatchmakingSquadFillButton
    {
        static constexpr std::string_view Name = "SparksMatchmakingSquadFillButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FillOnlyText = 0x15D0;
            static constexpr std::uintptr_t bCommitSelectionOnClick = 0x15E0;
            static constexpr std::uintptr_t bIsPrivateGameSelected = 0x15E1;
            static constexpr std::uintptr_t SquadFillVM = 0x1600;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FillOnlyText", 0x15D0, "TextProperty"},
            {"bCommitSelectionOnClick", 0x15E0, "BoolProperty"},
            {"bIsPrivateGameSelected", 0x15E1, "BoolProperty"},
            {"SquadFillVM", 0x1600, "ObjectProperty"},
        }};
    };

    struct SparksModeSelectScreen
    {
        static constexpr std::string_view Name = "SparksModeSelectScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityModeSetSelectionModalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksModeSelectVM = 0x4B8;
            static constexpr std::uintptr_t SparksProductModeVM = 0x4C0;
            static constexpr std::uintptr_t SparksPrivacyVM = 0x4C8;
            static constexpr std::uintptr_t ProductModeUserFacingDataClass = 0x4D0;
            static constexpr std::uintptr_t Button_ActivityPrivacy = 0x4D8;
            static constexpr std::uintptr_t Button_ActivityFill = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SparksModeSelectVM", 0x4B8, "ObjectProperty"},
            {"SparksProductModeVM", 0x4C0, "ObjectProperty"},
            {"SparksPrivacyVM", 0x4C8, "ObjectProperty"},
            {"ProductModeUserFacingDataClass", 0x4D0, "ClassProperty"},
            {"Button_ActivityPrivacy", 0x4D8, "ObjectProperty"},
            {"Button_ActivityFill", 0x4E0, "ObjectProperty"},
        }};
    };

    struct SparksModeSelectVM
    {
        static constexpr std::string_view Name = "SparksModeSelectVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksIslands = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SparksIslands", 0x88, "ArrayProperty"},
        }};
    };

    struct SparksPrivacyButton
    {
        static constexpr std::string_view Name = "SparksPrivacyButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickEvent = 0x330;
            static constexpr std::uintptr_t MinWidth = 0x334;
            static constexpr std::uintptr_t MinHeight = 0x338;
            static constexpr std::uintptr_t MaxWidth = 0x33C;
            static constexpr std::uintptr_t MaxHeight = 0x340;
            static constexpr std::uintptr_t Style = 0x348;
            static constexpr std::uintptr_t bHideInputAction = 0x350;
            static constexpr std::uintptr_t PressedSlateSoundOverride = 0x358;
            static constexpr std::uintptr_t ClickedSlateSoundOverride = 0x370;
            static constexpr std::uintptr_t HoveredSlateSoundOverride = 0x388;
            static constexpr std::uintptr_t SelectedPressedSlateSoundOverride = 0x3A0;
            static constexpr std::uintptr_t SelectedClickedSlateSoundOverride = 0x3B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSoundOverride = 0x3D0;
            static constexpr std::uintptr_t LockedPressedSlateSoundOverride = 0x3E8;
            static constexpr std::uintptr_t LockedClickedSlateSoundOverride = 0x400;
            static constexpr std::uintptr_t LockedHoveredSlateSoundOverride = 0x418;
            static constexpr std::uintptr_t bApplyAlphaOnDisable = 0x430;
            static constexpr std::uintptr_t bDisplayInputActionWhenNotInteractable = 0x430;
            static constexpr std::uintptr_t bInteractableWhenSelected = 0x430;
            static constexpr std::uintptr_t bLocked = 0x430;
            static constexpr std::uintptr_t bSelectable = 0x430;
            static constexpr std::uintptr_t bShouldSelectUponReceivingFocus = 0x430;
            static constexpr std::uintptr_t bToggleable = 0x430;
            static constexpr std::uintptr_t bTriggerClickedAfterSelection = 0x430;
            static constexpr std::uintptr_t bHideInputActionWithKeyboard = 0x431;
            static constexpr std::uintptr_t bRequiresHold = 0x431;
            static constexpr std::uintptr_t bShouldUseFallbackDefaultInputAction = 0x431;
            static constexpr std::uintptr_t HoldData = 0x438;
            static constexpr std::uintptr_t bSimulateHoverOnTouchInput = 0x440;
            static constexpr std::uintptr_t ClickMethod = 0x443;
            static constexpr std::uintptr_t TouchMethod = 0x444;
            static constexpr std::uintptr_t PressMethod = 0x445;
            static constexpr std::uintptr_t InputPriority = 0x448;
            static constexpr std::uintptr_t TriggeringInputAction = 0x450;
            static constexpr std::uintptr_t TriggeringEnhancedInputAction = 0x460;
            static constexpr std::uintptr_t bNavigateToNextWidgetOnDisable = 0x478;
            static constexpr std::uintptr_t OnSelectedChangedBase = 0x480;
            static constexpr std::uintptr_t OnButtonBaseClicked = 0x490;
            static constexpr std::uintptr_t OnButtonBaseDoubleClicked = 0x4A0;
            static constexpr std::uintptr_t OnButtonBaseHovered = 0x4B0;
            static constexpr std::uintptr_t OnButtonBaseUnhovered = 0x4C0;
            static constexpr std::uintptr_t OnButtonBaseFocused = 0x4D0;
            static constexpr std::uintptr_t OnButtonBaseUnfocused = 0x4E0;
            static constexpr std::uintptr_t OnButtonBaseLockClicked = 0x4F0;
            static constexpr std::uintptr_t OnButtonBaseLockDoubleClicked = 0x500;
            static constexpr std::uintptr_t OnButtonBaseSelected = 0x510;
            static constexpr std::uintptr_t OnButtonBaseUnselected = 0x520;
            static constexpr std::uintptr_t OnButtonBaseDragDetected = 0x530;
            static constexpr std::uintptr_t OnButtonBaseDragEnter = 0x540;
            static constexpr std::uintptr_t OnButtonBaseDragLeave = 0x550;
            static constexpr std::uintptr_t OnButtonBaseDragOver = 0x560;
            static constexpr std::uintptr_t OnButtonBaseDrop = 0x570;
            static constexpr std::uintptr_t bIsPersistentBinding = 0x5B8;
            static constexpr std::uintptr_t InputModeOverride = 0x5B9;
            static constexpr std::uintptr_t SingleMaterialStyleMID = 0x5E0;
            static constexpr std::uintptr_t NormalStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedStyle = 0x980;
            static constexpr std::uintptr_t DisabledStyle = 0xD10;
            static constexpr std::uintptr_t LockedStyle = 0x10A0;
            static constexpr std::uintptr_t bStopDoubleClickPropagation = 0x1430;
            static constexpr std::uintptr_t InputActionWidget = 0x15C8;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"ClickEvent", 0x330, "StructProperty"},
            {"MinWidth", 0x334, "IntProperty"},
            {"MinHeight", 0x338, "IntProperty"},
            {"MaxWidth", 0x33C, "IntProperty"},
            {"MaxHeight", 0x340, "IntProperty"},
            {"Style", 0x348, "ClassProperty"},
            {"bHideInputAction", 0x350, "BoolProperty"},
            {"PressedSlateSoundOverride", 0x358, "StructProperty"},
            {"ClickedSlateSoundOverride", 0x370, "StructProperty"},
            {"HoveredSlateSoundOverride", 0x388, "StructProperty"},
            {"SelectedPressedSlateSoundOverride", 0x3A0, "StructProperty"},
            {"SelectedClickedSlateSoundOverride", 0x3B8, "StructProperty"},
            {"SelectedHoveredSlateSoundOverride", 0x3D0, "StructProperty"},
            {"LockedPressedSlateSoundOverride", 0x3E8, "StructProperty"},
            {"LockedClickedSlateSoundOverride", 0x400, "StructProperty"},
            {"LockedHoveredSlateSoundOverride", 0x418, "StructProperty"},
            {"bApplyAlphaOnDisable", 0x430, "BoolProperty"},
            {"bDisplayInputActionWhenNotInteractable", 0x430, "BoolProperty"},
            {"bInteractableWhenSelected", 0x430, "BoolProperty"},
            {"bLocked", 0x430, "BoolProperty"},
            {"bSelectable", 0x430, "BoolProperty"},
            {"bShouldSelectUponReceivingFocus", 0x430, "BoolProperty"},
            {"bToggleable", 0x430, "BoolProperty"},
            {"bTriggerClickedAfterSelection", 0x430, "BoolProperty"},
            {"bHideInputActionWithKeyboard", 0x431, "BoolProperty"},
            {"bRequiresHold", 0x431, "BoolProperty"},
            {"bShouldUseFallbackDefaultInputAction", 0x431, "BoolProperty"},
            {"HoldData", 0x438, "ClassProperty"},
            {"bSimulateHoverOnTouchInput", 0x440, "BoolProperty"},
            {"ClickMethod", 0x443, "ByteProperty"},
            {"TouchMethod", 0x444, "ByteProperty"},
            {"PressMethod", 0x445, "ByteProperty"},
            {"InputPriority", 0x448, "IntProperty"},
            {"TriggeringInputAction", 0x450, "StructProperty"},
            {"TriggeringEnhancedInputAction", 0x460, "ObjectProperty"},
            {"bNavigateToNextWidgetOnDisable", 0x478, "BoolProperty"},
            {"OnSelectedChangedBase", 0x480, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseClicked", 0x490, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDoubleClicked", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseHovered", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnhovered", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseFocused", 0x4D0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnfocused", 0x4E0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockClicked", 0x4F0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockDoubleClicked", 0x500, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseSelected", 0x510, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnselected", 0x520, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragDetected", 0x530, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragEnter", 0x540, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragLeave", 0x550, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragOver", 0x560, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDrop", 0x570, "MulticastInlineDelegateProperty"},
            {"bIsPersistentBinding", 0x5B8, "BoolProperty"},
            {"InputModeOverride", 0x5B9, "EnumProperty"},
            {"SingleMaterialStyleMID", 0x5E0, "ObjectProperty"},
            {"NormalStyle", 0x5F0, "StructProperty"},
            {"SelectedStyle", 0x980, "StructProperty"},
            {"DisabledStyle", 0xD10, "StructProperty"},
            {"LockedStyle", 0x10A0, "StructProperty"},
            {"bStopDoubleClickPropagation", 0x1430, "BoolProperty"},
            {"InputActionWidget", 0x15C8, "ObjectProperty"},
        }};
    };

    struct SparksPrivacyVM
    {
        static constexpr std::string_view Name = "SparksPrivacyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowPrivacyButton = 0x78;
            static constexpr std::uintptr_t bIsPrivacyPreferred = 0x79;
            static constexpr std::uintptr_t bPrivacyButtonEnabled = 0x7A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bShowPrivacyButton", 0x78, "BoolProperty"},
            {"bIsPrivacyPreferred", 0x79, "BoolProperty"},
            {"bPrivacyButtonEnabled", 0x7A, "BoolProperty"},
        }};
    };

    struct SparksProductModeUserFacingDataVM
    {
        static constexpr std::string_view Name = "SparksProductModeUserFacingDataVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductModeUserFacingDataClass = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProductModeUserFacingDataClass", 0x78, "ClassProperty"},
        }};
    };

    struct SparksQuickplayIslandVM
    {
        static constexpr std::string_view Name = "SparksQuickplayIslandVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksIslandVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductModes = 0xF8;
            static constexpr std::uintptr_t CurrentProductMode = 0x108;
            static constexpr std::uintptr_t PotentialModeOptions = 0x130;
            static constexpr std::uintptr_t ModeCallbackHandles = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProductModes", 0xF8, "ArrayProperty"},
            {"CurrentProductMode", 0x108, "StrProperty"},
            {"PotentialModeOptions", 0x130, "MapProperty"},
            {"ModeCallbackHandles", 0x140, "MapProperty"},
        }};
    };

    struct SparksQuickplayProductModeVM
    {
        static constexpr std::string_view Name = "SparksQuickplayProductModeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksIslandModeOptionVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductMode = 0xC8;
            static constexpr std::uintptr_t ParentQuickplayIslandVM = 0xD8;
            static constexpr std::uintptr_t bCanExpire = 0xE0;
            static constexpr std::uintptr_t EventEndTime = 0xE8;
            static constexpr std::uintptr_t bIsCuratedSetlist = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProductMode", 0xC8, "StrProperty"},
            {"ParentQuickplayIslandVM", 0xD8, "ObjectProperty"},
            {"bCanExpire", 0xE0, "BoolProperty"},
            {"EventEndTime", 0xE8, "StructProperty"},
            {"bIsCuratedSetlist", 0xF0, "BoolProperty"},
        }};
    };

    struct SparksSingleLinkIslandVM
    {
        static constexpr std::string_view Name = "SparksSingleLinkIslandVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksIslandVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeOptions = 0x78;
            static constexpr std::uintptr_t bHasBeenInitialized = 0x88;
            static constexpr std::uintptr_t bHasError = 0x89;
            static constexpr std::uintptr_t Title = 0xB0;
            static constexpr std::uintptr_t ShortTitle = 0xC0;
            static constexpr std::uintptr_t Description = 0xD0;
            static constexpr std::uintptr_t bHasFillOption = 0xE0;
            static constexpr std::uintptr_t FortActivityVM = 0xE8;
            static constexpr std::uintptr_t PreviewImage = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ModeOptions", 0x78, "ArrayProperty"},
            {"bHasBeenInitialized", 0x88, "BoolProperty"},
            {"bHasError", 0x89, "BoolProperty"},
            {"Title", 0xB0, "TextProperty"},
            {"ShortTitle", 0xC0, "TextProperty"},
            {"Description", 0xD0, "TextProperty"},
            {"bHasFillOption", 0xE0, "BoolProperty"},
            {"FortActivityVM", 0xE8, "ObjectProperty"},
            {"PreviewImage", 0xF0, "ObjectProperty"},
        }};
    };

    struct SparksSquadFillVM
    {
        static constexpr std::string_view Name = "SparksSquadFillVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
