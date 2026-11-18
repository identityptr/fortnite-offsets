#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayerAugmentsUI
{
    struct FortMobileActionBBE_AugmentShoot
    {
        static constexpr std::string_view Name = "FortMobileActionBBE_AugmentShoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehaviorExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t IconOverrideSprite = 0x90;
            static constexpr std::uintptr_t IconOverrideTag = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IconOverrideSprite", 0x90, "ObjectProperty"},
            {"IconOverrideTag", 0x98, "StructProperty"},
        }};
    };

    struct FortMobileActionButtonBehavior_RerollAugments
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehavior_RerollAugments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t RerollCurrency = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RerollCurrency", 0x2A0, "ObjectProperty"},
        }};
    };

    struct FortMobileButtonBehaviorComponent_AugmentsListIconPicker
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_AugmentsListIconPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileButtonBehaviorComponent_IconPicker";
        struct Offsets
        {
            static constexpr std::uintptr_t bCachedIsInInventoryView = 0x58;
            static constexpr std::uintptr_t ListViewSprite = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCachedIsInInventoryView", 0x58, "BoolProperty"},
            {"ListViewSprite", 0x60, "ObjectProperty"},
        }};
    };

    struct FortMobileButtonBehaviorComponent_AugmentsListVisibility
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_AugmentsListVisibility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileButtonBehaviorComponent_Visibility";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonBehavior = 0x48;
            static constexpr std::uintptr_t bIsSpriteProxy = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ButtonBehavior", 0x48, "ObjectProperty"},
            {"bIsSpriteProxy", 0x50, "BoolProperty"},
        }};
    };

    struct FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileButtonBehaviorComponent_AugmentsListVisibility";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonBehavior = 0x48;
            static constexpr std::uintptr_t bIsSpriteProxy = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ButtonBehavior", 0x48, "ObjectProperty"},
            {"bIsSpriteProxy", 0x50, "BoolProperty"},
        }};
    };

    struct FortMobilePlayerAugmentTimer
    {
        static constexpr std::string_view Name = "FortMobilePlayerAugmentTimer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentControllerComponent = 0x3E0;
            static constexpr std::uintptr_t Button_PlayerAugmentTimer = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AugmentControllerComponent", 0x3E0, "WeakObjectProperty"},
            {"Button_PlayerAugmentTimer", 0x3E8, "ObjectProperty"},
        }};
    };

    struct FortPickupInteractOverrideComponent_Augments
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_Augments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedAugmentGameplayTags = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllowedAugmentGameplayTags", 0xE0, "StructProperty"},
        }};
    };

    struct FortPlayerAugmentCollectionListEntry
    {
        static constexpr std::string_view Name = "FortPlayerAugmentCollectionListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCollectionListEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_Background = 0x16D0;
            static constexpr std::uintptr_t ParamName_ItemIcon = 0x16D8;
            static constexpr std::uintptr_t ParamName_IsDiscovered = 0x16DC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Image_Background", 0x16D0, "ObjectProperty"},
            {"ParamName_ItemIcon", 0x16D8, "NameProperty"},
            {"ParamName_IsDiscovered", 0x16DC, "NameProperty"},
        }};
    };

    struct FortPlayerAugmentCollectionScreen
    {
        static constexpr std::string_view Name = "FortPlayerAugmentCollectionScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCollectionScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentsEnabledViaHotfix = 0x6E0;
            static constexpr std::uintptr_t TagToImageMap = 0x708;
            static constexpr std::uintptr_t Text_CategoryTitle = 0x718;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AugmentsEnabledViaHotfix", 0x6E0, "StructProperty"},
            {"TagToImageMap", 0x708, "MapProperty"},
            {"Text_CategoryTitle", 0x718, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentCollectionScreenContainer
    {
        static constexpr std::string_view Name = "FortPlayerAugmentCollectionScreenContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCollectionScreenContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t MapTabInfo = 0x4D0;
            static constexpr std::uintptr_t VisibilitySwitcher_Content = 0x510;
            static constexpr std::uintptr_t TabInfos = 0x518;
            static constexpr std::uintptr_t NextTabInputAction = 0x528;
            static constexpr std::uintptr_t PreviousTabInputAction = 0x538;
            static constexpr std::uintptr_t EntryBox_TabButtons = 0x548;
            static constexpr std::uintptr_t Text_TabTitle = 0x550;
            static constexpr std::uintptr_t ActiveTabInfos = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MapTabInfo", 0x4D0, "StructProperty"},
            {"VisibilitySwitcher_Content", 0x510, "ObjectProperty"},
            {"TabInfos", 0x518, "ArrayProperty"},
            {"NextTabInputAction", 0x528, "StructProperty"},
            {"PreviousTabInputAction", 0x538, "StructProperty"},
            {"EntryBox_TabButtons", 0x548, "ObjectProperty"},
            {"Text_TabTitle", 0x550, "ObjectProperty"},
            {"ActiveTabInfos", 0x558, "ArrayProperty"},
        }};
    };

    struct FortPlayerAugmentCollectionScreenInfoOverlay
    {
        static constexpr std::string_view Name = "FortPlayerAugmentCollectionScreenInfoOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCollectionScreenInfoOverlay";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName_Progress = 0x520;
            static constexpr std::uintptr_t Text_ItemCategory = 0x528;
            static constexpr std::uintptr_t ItemCategoryIndicator = 0x530;
            static constexpr std::uintptr_t Overlay_UndiscoveredText = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParamName_Progress", 0x520, "NameProperty"},
            {"Text_ItemCategory", 0x528, "ObjectProperty"},
            {"ItemCategoryIndicator", 0x530, "ObjectProperty"},
            {"Overlay_UndiscoveredText", 0x538, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentGranterWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentGranterWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t UnblockInteractionWithChoicesTime = 0x380;
            static constexpr std::uintptr_t AvailableAugmentItemDefinitions = 0x3A8;
            static constexpr std::uintptr_t Overlay_Reroll = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UnblockInteractionWithChoicesTime", 0x380, "StructProperty"},
            {"AvailableAugmentItemDefinitions", 0x3A8, "ArrayProperty"},
            {"Overlay_Reroll", 0x3B8, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentHUDQuickbarWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentHUDQuickbarWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HiddenAugmentGameplayTags = 0x330;
            static constexpr std::uintptr_t NumAugmentGrantRoundsForPlaylist = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HiddenAugmentGameplayTags", 0x330, "StructProperty"},
            {"NumAugmentGrantRoundsForPlaylist", 0x350, "StructProperty"},
        }};
    };

    struct FortPlayerAugmentHUDRerollWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentHUDRerollWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_CurrencyIcon = 0x330;
            static constexpr std::uintptr_t RerollCurrency = 0x338;
            static constexpr std::uintptr_t CachedNumFreeRerolls = 0x340;
            static constexpr std::uintptr_t RerollHoldMaterialParamName = 0x344;
            static constexpr std::uintptr_t Image_ProgressBar = 0x350;
            static constexpr std::uintptr_t Text_OwnedCurrency = 0x358;
            static constexpr std::uintptr_t Text_RerollCost = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Image_CurrencyIcon", 0x330, "ObjectProperty"},
            {"RerollCurrency", 0x338, "ObjectProperty"},
            {"CachedNumFreeRerolls", 0x340, "IntProperty"},
            {"RerollHoldMaterialParamName", 0x344, "NameProperty"},
            {"Image_ProgressBar", 0x350, "ObjectProperty"},
            {"Text_OwnedCurrency", 0x358, "ObjectProperty"},
            {"Text_RerollCost", 0x360, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentHUDSelectionTimerWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentHUDSelectionTimerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAugmentHUDTimerWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAugmentReadyVisible = 0x370;
            static constexpr std::uintptr_t bIsCountdownActive = 0x371;
            static constexpr std::uintptr_t bIsOffline = 0x372;
            static constexpr std::uintptr_t HideTimerHandle = 0x378;
            static constexpr std::uintptr_t TimerProgressDMI = 0x388;
            static constexpr std::uintptr_t CountdownStartTimeHF = 0x390;
            static constexpr std::uintptr_t NativeAugmentTimerText = 0x3B8;
            static constexpr std::uintptr_t NativeAnimTimerTextCountdownUpdated = 0x3C0;
            static constexpr std::uintptr_t NativeAnimProgressBarCountdownUpdated = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bIsAugmentReadyVisible", 0x370, "BoolProperty"},
            {"bIsCountdownActive", 0x371, "BoolProperty"},
            {"bIsOffline", 0x372, "BoolProperty"},
            {"HideTimerHandle", 0x378, "StructProperty"},
            {"TimerProgressDMI", 0x388, "ObjectProperty"},
            {"CountdownStartTimeHF", 0x390, "StructProperty"},
            {"NativeAugmentTimerText", 0x3B8, "ObjectProperty"},
            {"NativeAnimTimerTextCountdownUpdated", 0x3C0, "ObjectProperty"},
            {"NativeAnimProgressBarCountdownUpdated", 0x3C8, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentHUDTimerWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentHUDTimerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentInGameCarriedWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInGameCarriedWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentInfoEntryWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInfoEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RarityTextFormat = 0x330;
            static constexpr std::uintptr_t Text_AugmentName = 0x340;
            static constexpr std::uintptr_t Text_AugmentRarity = 0x348;
            static constexpr std::uintptr_t Text_AugmentCategory = 0x350;
            static constexpr std::uintptr_t ItemCategoryIndicator = 0x358;
            static constexpr std::uintptr_t Image_CategoryAsImage = 0x360;
            static constexpr std::uintptr_t Text_AugmentDescription = 0x368;
            static constexpr std::uintptr_t Icon_LenderAvatarIcon = 0x370;
            static constexpr std::uintptr_t Overlay_LenderAvatarIcon = 0x378;
            static constexpr std::uintptr_t Image_LenderSquadColor = 0x380;
            static constexpr std::uintptr_t Text_BorrowingText = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"RarityTextFormat", 0x330, "TextProperty"},
            {"Text_AugmentName", 0x340, "ObjectProperty"},
            {"Text_AugmentRarity", 0x348, "ObjectProperty"},
            {"Text_AugmentCategory", 0x350, "ObjectProperty"},
            {"ItemCategoryIndicator", 0x358, "ObjectProperty"},
            {"Image_CategoryAsImage", 0x360, "ObjectProperty"},
            {"Text_AugmentDescription", 0x368, "ObjectProperty"},
            {"Icon_LenderAvatarIcon", 0x370, "ObjectProperty"},
            {"Overlay_LenderAvatarIcon", 0x378, "ObjectProperty"},
            {"Image_LenderSquadColor", 0x380, "ObjectProperty"},
            {"Text_BorrowingText", 0x388, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentInfoTouchWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInfoTouchWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTouchUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionNames = 0x318;
            static constexpr std::uintptr_t bIsClickThrough = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActionNames", 0x318, "ArrayProperty"},
            {"bIsClickThrough", 0x328, "BoolProperty"},
        }};
    };

    struct FortPlayerAugmentInventoryExtensionRow
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInventoryExtensionRow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaInventoryGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentsEnabledViaHotfix = 0x3B0;
            static constexpr std::uintptr_t BlockedGameplayTags = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AugmentsEnabledViaHotfix", 0x3B0, "StructProperty"},
            {"BlockedGameplayTags", 0x3D8, "StructProperty"},
        }};
    };

    struct FortPlayerAugmentInventoryInfoWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInventoryInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RarityTextFormat = 0x4A8;
            static constexpr std::uintptr_t Text_ItemName = 0x4B8;
            static constexpr std::uintptr_t Text_ItemRarity = 0x4C0;
            static constexpr std::uintptr_t Text_ItemCategory = 0x4C8;
            static constexpr std::uintptr_t ItemCategoryIndicator = 0x4D0;
            static constexpr std::uintptr_t Text_ItemDescription = 0x4D8;
            static constexpr std::uintptr_t Icon_LenderAvatarIcon = 0x4E0;
            static constexpr std::uintptr_t Image_LenderSquadColor = 0x4E8;
            static constexpr std::uintptr_t Text_BorrowingText = 0x4F0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"RarityTextFormat", 0x4A8, "TextProperty"},
            {"Text_ItemName", 0x4B8, "ObjectProperty"},
            {"Text_ItemRarity", 0x4C0, "ObjectProperty"},
            {"Text_ItemCategory", 0x4C8, "ObjectProperty"},
            {"ItemCategoryIndicator", 0x4D0, "ObjectProperty"},
            {"Text_ItemDescription", 0x4D8, "ObjectProperty"},
            {"Icon_LenderAvatarIcon", 0x4E0, "ObjectProperty"},
            {"Image_LenderSquadColor", 0x4E8, "ObjectProperty"},
            {"Text_BorrowingText", 0x4F0, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentInventoryListEntry
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInventoryListEntry";
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

    struct FortPlayerAugmentInventoryTab
    {
        static constexpr std::string_view Name = "FortPlayerAugmentInventoryTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentsEnabledViaHotfix = 0x4A8;
            static constexpr std::uintptr_t HiddenAugmentGameplayTags = 0x4D0;
            static constexpr std::uintptr_t TabNameId = 0x4F0;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x500;
            static constexpr std::uintptr_t AugmentInfo = 0x5F0;
            static constexpr std::uintptr_t ListView_Augments = 0x5F8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AugmentsEnabledViaHotfix", 0x4A8, "StructProperty"},
            {"HiddenAugmentGameplayTags", 0x4D0, "StructProperty"},
            {"TabNameId", 0x4F0, "NameProperty"},
            {"TabButtonLabelInfo", 0x500, "StructProperty"},
            {"AugmentInfo", 0x5F0, "ObjectProperty"},
            {"ListView_Augments", 0x5F8, "ObjectProperty"},
        }};
    };

    struct FortPlayerAugmentLobbyWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentLobbyWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct FortPlayerAugmentPostMatchUnlocksWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentPostMatchUnlocksWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentsEnabledViaHotfix = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AugmentsEnabledViaHotfix", 0x370, "StructProperty"},
        }};
    };

    struct FortPlayerAugmentSpecialAcquiredNotificationWidget
    {
        static constexpr std::string_view Name = "FortPlayerAugmentSpecialAcquiredNotificationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizationData = 0x3D0;
            static constexpr std::uintptr_t TargetGameplayTags = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrioritizationData", 0x3D0, "StructProperty"},
            {"TargetGameplayTags", 0x3D8, "StructProperty"},
        }};
    };

    struct HUDWidgetBehaviorCondition_PlayerAugment
    {
        static constexpr std::string_view Name = "HUDWidgetBehaviorCondition_PlayerAugment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDWidgetBehaviorConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnAugmentToolViewSwap = 0x48;
            static constexpr std::uintptr_t bOnAugmentSelectorOpenedStatusChanged = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnAugmentToolViewSwap", 0x48, "BoolProperty"},
            {"bOnAugmentSelectorOpenedStatusChanged", 0x49, "BoolProperty"},
        }};
    };

}
