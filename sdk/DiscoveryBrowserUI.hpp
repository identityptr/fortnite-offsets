#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DiscoveryBrowserUI
{
    struct ActivityLibraryComponent
    {
        static constexpr std::string_view Name = "ActivityLibraryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatorPageOverrideClass = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CreatorPageOverrideClass", 0xD0, "SoftClassProperty"},
        }};
    };

    struct DiscoverSelectedActivityViewModel
    {
        static constexpr std::string_view Name = "DiscoverSelectedActivityViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bLoading = 0x68;
            static constexpr std::uintptr_t bHasPartyData = 0x69;
            static constexpr std::uintptr_t bIsLibrary = 0x6A;
            static constexpr std::uintptr_t bIsActiveInvite = 0x6B;
            static constexpr std::uintptr_t bIsPartyPrivate = 0x6C;
            static constexpr std::uintptr_t CurrentPartySize = 0x70;
            static constexpr std::uintptr_t RichPresenceText = 0x78;
            static constexpr std::uintptr_t ActivityVM = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bLoading", 0x68, "BoolProperty"},
            {"bHasPartyData", 0x69, "BoolProperty"},
            {"bIsLibrary", 0x6A, "BoolProperty"},
            {"bIsActiveInvite", 0x6B, "BoolProperty"},
            {"bIsPartyPrivate", 0x6C, "BoolProperty"},
            {"CurrentPartySize", 0x70, "IntProperty"},
            {"RichPresenceText", 0x78, "TextProperty"},
            {"ActivityVM", 0x88, "ObjectProperty"},
        }};
    };

    struct FortActivityBrowserColorSchemeAsset
    {
        static constexpr std::string_view Name = "FortActivityBrowserColorSchemeAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialCollectionOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialCollectionOverrides", 0x28, "MapProperty"},
        }};
    };

    struct FortActivityBrowserContext
    {
        static constexpr std::string_view Name = "FortActivityBrowserContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortActivityBrowserLibraryTile
    {
        static constexpr std::string_view Name = "FortActivityBrowserLibraryTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserTileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnboardingTooltip = 0x1640;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnboardingTooltip", 0x1640, "ObjectProperty"},
        }};
    };

    struct FortActivityBrowserListView
    {
        static constexpr std::string_view Name = "FortActivityBrowserListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionalNavigationTimeThreshold = 0x458;
            static constexpr std::uintptr_t DiscoverItemRowClass = 0x470;
            static constexpr std::uintptr_t HomebarItemRowClass = 0x478;
            static constexpr std::uintptr_t BannerItemRowClass = 0x480;
            static constexpr std::uintptr_t NonScrollingItemRowClass = 0x488;
            static constexpr std::uintptr_t ScrollingViewModelItemRowClass = 0x490;
            static constexpr std::uintptr_t TabBarItemRowClass = 0x498;
            static constexpr std::uintptr_t RowTypes = 0x4A0;
            static constexpr std::uintptr_t OverrideItemSelector = 0x4B0;
            static constexpr std::uintptr_t SurfaceViewModel = 0x4B8;
            static constexpr std::uintptr_t bAllowNonFullGridRows = 0x4C0;
            static constexpr std::uintptr_t bUseTinyOffsetWhenScrollingIntoView = 0x4C1;
            static constexpr std::uintptr_t bAllowInternalRowSelection = 0x4C2;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DirectionalNavigationTimeThreshold", 0x458, "FloatProperty"},
            {"DiscoverItemRowClass", 0x470, "ClassProperty"},
            {"HomebarItemRowClass", 0x478, "ClassProperty"},
            {"BannerItemRowClass", 0x480, "ClassProperty"},
            {"NonScrollingItemRowClass", 0x488, "ClassProperty"},
            {"ScrollingViewModelItemRowClass", 0x490, "ClassProperty"},
            {"TabBarItemRowClass", 0x498, "ClassProperty"},
            {"RowTypes", 0x4A0, "MapProperty"},
            {"OverrideItemSelector", 0x4B0, "ObjectProperty"},
            {"SurfaceViewModel", 0x4B8, "ObjectProperty"},
            {"bAllowNonFullGridRows", 0x4C0, "BoolProperty"},
            {"bUseTinyOffsetWhenScrollingIntoView", 0x4C1, "BoolProperty"},
            {"bAllowInternalRowSelection", 0x4C2, "BoolProperty"},
        }};
    };

    struct FortActivityBrowserPlayWithFriendsTile
    {
        static constexpr std::string_view Name = "FortActivityBrowserPlayWithFriendsTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserTileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNamesToDisplay = 0x1638;
            static constexpr std::uintptr_t MaxPortraitsToDisplay = 0x163C;
            static constexpr std::uintptr_t PartyMembersAvatarsDisplay = 0x1650;
            static constexpr std::uintptr_t bIsActiveInvite = 0x1658;
            static constexpr std::uintptr_t CurrentPartySize = 0x165C;
            static constexpr std::uintptr_t bIsPartyPrivate = 0x1660;
            static constexpr std::uintptr_t CachedGameActivity = 0x1668;
            static constexpr std::uintptr_t CachedTargetSocialUser = 0x1680;
            static constexpr std::uintptr_t CurrentCTAButtonText = 0x1688;
            static constexpr std::uintptr_t JoinPartyText = 0x1698;
            static constexpr std::uintptr_t RequestToJoinText = 0x16A8;
            static constexpr std::uintptr_t JoinFriendInputAction_Touch = 0x16B8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MaxNamesToDisplay", 0x1638, "IntProperty"},
            {"MaxPortraitsToDisplay", 0x163C, "IntProperty"},
            {"PartyMembersAvatarsDisplay", 0x1650, "ObjectProperty"},
            {"bIsActiveInvite", 0x1658, "BoolProperty"},
            {"CurrentPartySize", 0x165C, "IntProperty"},
            {"bIsPartyPrivate", 0x1660, "BoolProperty"},
            {"CachedGameActivity", 0x1668, "ObjectProperty"},
            {"CachedTargetSocialUser", 0x1680, "WeakObjectProperty"},
            {"CurrentCTAButtonText", 0x1688, "TextProperty"},
            {"JoinPartyText", 0x1698, "TextProperty"},
            {"RequestToJoinText", 0x16A8, "TextProperty"},
            {"JoinFriendInputAction_Touch", 0x16B8, "StructProperty"},
        }};
    };

    struct FortActivityBrowserRow
    {
        static constexpr std::string_view Name = "FortActivityBrowserRow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumVisibilityPercentageForRowActivation = 0x4B8;
            static constexpr std::uintptr_t OverrideItemSelector = 0x4C0;
            static constexpr std::uintptr_t SurfaceViewModel = 0x4C8;
            static constexpr std::uintptr_t PanelViewModelSource = 0x4D0;
            static constexpr std::uintptr_t NestedButtonGroupSelectionVM = 0x4D8;
            static constexpr std::uintptr_t Text_CategoryName = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MinimumVisibilityPercentageForRowActivation", 0x4B8, "IntProperty"},
            {"OverrideItemSelector", 0x4C0, "ObjectProperty"},
            {"SurfaceViewModel", 0x4C8, "ObjectProperty"},
            {"PanelViewModelSource", 0x4D0, "EnumProperty"},
            {"NestedButtonGroupSelectionVM", 0x4D8, "ObjectProperty"},
            {"Text_CategoryName", 0x590, "ObjectProperty"},
        }};
    };

    struct FortActivityBrowserRowList
    {
        static constexpr std::string_view Name = "FortActivityBrowserRowList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserRow";
        struct Offsets
        {
            static constexpr std::uintptr_t ListView_Activities = 0x5A0;
            static constexpr std::uintptr_t Button_PageLeft = 0x5A8;
            static constexpr std::uintptr_t Button_PageRight = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ListView_Activities", 0x5A0, "ObjectProperty"},
            {"Button_PageLeft", 0x5A8, "ObjectProperty"},
            {"Button_PageRight", 0x5B0, "ObjectProperty"},
        }};
    };

    struct FortActivityBrowserRowView
    {
        static constexpr std::string_view Name = "FortActivityBrowserRowView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserView";
        struct Offsets
        {
            static constexpr std::uintptr_t MouseWheelScrollTimeThreshold = 0x5C8;
            static constexpr std::uintptr_t BrowserList_Activities = 0x5D0;
            static constexpr std::uintptr_t TabNameId = 0x600;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x610;
            static constexpr std::uintptr_t ActivityProviderFilter = 0x700;
            static constexpr std::uintptr_t ActivityProviderFilterType = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MouseWheelScrollTimeThreshold", 0x5C8, "FloatProperty"},
            {"BrowserList_Activities", 0x5D0, "ObjectProperty"},
            {"TabNameId", 0x600, "NameProperty"},
            {"TabButtonLabelInfo", 0x610, "StructProperty"},
            {"ActivityProviderFilter", 0x700, "ArrayProperty"},
            {"ActivityProviderFilterType", 0x710, "EnumProperty"},
        }};
    };

    struct FortActivityBrowserTile
    {
        static constexpr std::string_view Name = "FortActivityBrowserTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserTileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Display_TileDetails = 0x1638;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Display_TileDetails", 0x1638, "ObjectProperty"},
        }};
    };

    struct FortActivityBrowserTileBase
    {
        static constexpr std::string_view Name = "FortActivityBrowserTileBase";
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

    struct FortActivityBrowserView
    {
        static constexpr std::string_view Name = "FortActivityBrowserView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityView";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowCustomMatchmakingModalButton = 0x4F0;
            static constexpr std::uintptr_t bShowSpectateMatchModalButton = 0x4F1;
            static constexpr std::uintptr_t bShowMobileGameDetailsButton = 0x4F2;
            static constexpr std::uintptr_t bShowMobileAcceptButton = 0x4F3;
            static constexpr std::uintptr_t bShowBackToTopButton = 0x4F4;
            static constexpr std::uintptr_t DiscoverySurfaceName = 0x4F8;
            static constexpr std::uintptr_t bDefaultDiscoverSurfaceToFrontend = 0x4FC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bShowCustomMatchmakingModalButton", 0x4F0, "BoolProperty"},
            {"bShowSpectateMatchModalButton", 0x4F1, "BoolProperty"},
            {"bShowMobileGameDetailsButton", 0x4F2, "BoolProperty"},
            {"bShowMobileAcceptButton", 0x4F3, "BoolProperty"},
            {"bShowBackToTopButton", 0x4F4, "BoolProperty"},
            {"DiscoverySurfaceName", 0x4F8, "NameProperty"},
            {"bDefaultDiscoverSurfaceToFrontend", 0x4FC, "BoolProperty"},
        }};
    };

    struct FortActivityCategoryPageView
    {
        static constexpr std::string_view Name = "FortActivityCategoryPageView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityPlayerBrowserView";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_CategoryTitle = 0x6F8;
            static constexpr std::uintptr_t Button_BackToTop = 0x700;
            static constexpr std::uintptr_t Button_CloseTouch = 0x708;
            static constexpr std::uintptr_t Button_Back = 0x710;
            static constexpr std::uintptr_t Button_MobileAccept = 0x718;
            static constexpr std::uintptr_t Button_MobileShowGameDetails = 0x720;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Text_CategoryTitle", 0x6F8, "ObjectProperty"},
            {"Button_BackToTop", 0x700, "ObjectProperty"},
            {"Button_CloseTouch", 0x708, "ObjectProperty"},
            {"Button_Back", 0x710, "ObjectProperty"},
            {"Button_MobileAccept", 0x718, "ObjectProperty"},
            {"Button_MobileShowGameDetails", 0x720, "ObjectProperty"},
        }};
    };

    struct FortActivityCategoryTile
    {
        static constexpr std::string_view Name = "FortActivityCategoryTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityTileViewTileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_CategoryTitle = 0x1660;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text_CategoryTitle", 0x1660, "ObjectProperty"},
        }};
    };

    struct FortActivityCategoryTilePanel
    {
        static constexpr std::string_view Name = "FortActivityCategoryTilePanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TileView_Categories = 0x330;
            static constexpr std::uintptr_t Text_Title = 0x338;
            static constexpr std::uintptr_t TileViewQueryThreshold = 0x340;
            static constexpr std::uintptr_t CachedActivityProvider = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TileView_Categories", 0x330, "ObjectProperty"},
            {"Text_Title", 0x338, "ObjectProperty"},
            {"TileViewQueryThreshold", 0x340, "IntProperty"},
            {"CachedActivityProvider", 0x348, "ObjectProperty"},
        }};
    };

    struct FortActivityCategoryView
    {
        static constexpr std::string_view Name = "FortActivityCategoryView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserView";
        struct Offsets
        {
            static constexpr std::uintptr_t TabNameId = 0x5C8;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x5D0;
            static constexpr std::uintptr_t TilePanel_Featured = 0x6C0;
            static constexpr std::uintptr_t TilePanel_All = 0x6C8;
            static constexpr std::uintptr_t CurrentSelectedPanel = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TabNameId", 0x5C8, "NameProperty"},
            {"TabButtonLabelInfo", 0x5D0, "StructProperty"},
            {"TilePanel_Featured", 0x6C0, "ObjectProperty"},
            {"TilePanel_All", 0x6C8, "ObjectProperty"},
            {"CurrentSelectedPanel", 0x6D0, "ObjectProperty"},
        }};
    };

    struct FortActivityCreatorPageView
    {
        static constexpr std::string_view Name = "FortActivityCreatorPageView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityCategoryPageView";
        struct Offsets
        {
            static constexpr std::uintptr_t AmountOfCreatorLinkEntriesQueried = 0x828;
            static constexpr std::uintptr_t ProcessedCreatorLinkEntries = 0x82C;
            static constexpr std::uintptr_t AmountOfEntriesQueried = 0x830;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AmountOfCreatorLinkEntriesQueried", 0x828, "IntProperty"},
            {"ProcessedCreatorLinkEntries", 0x82C, "IntProperty"},
            {"AmountOfEntriesQueried", 0x830, "IntProperty"},
        }};
    };

    struct FortActivityDiscoverView
    {
        static constexpr std::string_view Name = "FortActivityDiscoverView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserRowView";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayDetailsAnimationOnScreenOpen = 0x740;
            static constexpr std::uintptr_t DetailsDisplayUpdateDelay = 0x744;
            static constexpr std::uintptr_t MovieWidgetClass = 0x748;
            static constexpr std::uintptr_t DetailsDisplay_SelectedActivity = 0x750;
            static constexpr std::uintptr_t DetailsDisplay_PromotedActivity = 0x758;
            static constexpr std::uintptr_t Panel_VideoSlot = 0x760;
            static constexpr std::uintptr_t Panel_PromotedVideoSlot = 0x768;
            static constexpr std::uintptr_t ActivityMovieWidget = 0x770;
            static constexpr std::uintptr_t PromotedActivityMovieWidget = 0x778;
            static constexpr std::uintptr_t BoundKeyArtOutroAnimation = 0x7E0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bPlayDetailsAnimationOnScreenOpen", 0x740, "BoolProperty"},
            {"DetailsDisplayUpdateDelay", 0x744, "FloatProperty"},
            {"MovieWidgetClass", 0x748, "ClassProperty"},
            {"DetailsDisplay_SelectedActivity", 0x750, "ObjectProperty"},
            {"DetailsDisplay_PromotedActivity", 0x758, "ObjectProperty"},
            {"Panel_VideoSlot", 0x760, "ObjectProperty"},
            {"Panel_PromotedVideoSlot", 0x768, "ObjectProperty"},
            {"ActivityMovieWidget", 0x770, "ObjectProperty"},
            {"PromotedActivityMovieWidget", 0x778, "ObjectProperty"},
            {"BoundKeyArtOutroAnimation", 0x7E0, "ObjectProperty"},
        }};
    };

    struct FortActivityDiscoverViewV2
    {
        static constexpr std::string_view Name = "FortActivityDiscoverViewV2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserRowView";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActivityRequested = 0x740;
            static constexpr std::uintptr_t CustomKeyInputAction = 0x750;
            static constexpr std::uintptr_t DiscoverPreviewManager = 0x760;
            static constexpr std::uintptr_t SelectedActivityVM = 0x7D0;
            static constexpr std::uintptr_t SoftCustomMatchmakingModalClass = 0x7D8;
            static constexpr std::uintptr_t SoftSpectateMatchModalClass = 0x7F8;
            static constexpr std::uintptr_t BackToTopInputAction = 0x820;
            static constexpr std::uintptr_t ShowSpectateMatchModalInputAction = 0x838;
            static constexpr std::uintptr_t JoinAsSpectatorInputAction = 0x850;
            static constexpr std::uintptr_t JoinAsPlayerInputAction = 0x868;
            static constexpr std::uintptr_t SelectActivityInputAction_Touch = 0x880;
            static constexpr std::uintptr_t NestedButtonGroupSelectionVM = 0x900;
            static constexpr std::uintptr_t CachedLinkedReferenceVM = 0x908;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnActivityRequested", 0x740, "MulticastInlineDelegateProperty"},
            {"CustomKeyInputAction", 0x750, "StructProperty"},
            {"DiscoverPreviewManager", 0x760, "ObjectProperty"},
            {"SelectedActivityVM", 0x7D0, "ObjectProperty"},
            {"SoftCustomMatchmakingModalClass", 0x7D8, "SoftClassProperty"},
            {"SoftSpectateMatchModalClass", 0x7F8, "SoftClassProperty"},
            {"BackToTopInputAction", 0x820, "StructProperty"},
            {"ShowSpectateMatchModalInputAction", 0x838, "StructProperty"},
            {"JoinAsSpectatorInputAction", 0x850, "StructProperty"},
            {"JoinAsPlayerInputAction", 0x868, "StructProperty"},
            {"SelectActivityInputAction_Touch", 0x880, "StructProperty"},
            {"NestedButtonGroupSelectionVM", 0x900, "ObjectProperty"},
            {"CachedLinkedReferenceVM", 0x908, "ObjectProperty"},
        }};
    };

    struct FortActivityListItemWrapper
    {
        static constexpr std::string_view Name = "FortActivityListItemWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortActivityListView
    {
        static constexpr std::string_view Name = "FortActivityListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionalNavigationTimeThreshold = 0x458;
            static constexpr std::uintptr_t orientation = 0x45C;
            static constexpr std::uintptr_t EntrySpacing = 0x460;
            static constexpr std::uintptr_t bCircularNavigationEnabled = 0x464;
            static constexpr std::uintptr_t TileTypes = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DirectionalNavigationTimeThreshold", 0x458, "FloatProperty"},
            {"orientation", 0x45C, "ByteProperty"},
            {"EntrySpacing", 0x460, "FloatProperty"},
            {"bCircularNavigationEnabled", 0x464, "BoolProperty"},
            {"TileTypes", 0x468, "MapProperty"},
        }};
    };

    struct FortActivityModeSetSelectionModal
    {
        static constexpr std::string_view Name = "FortActivityModeSetSelectionModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityModeSetSelectionModalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_ActivityName = 0x4B8;
            static constexpr std::uintptr_t Button_Back = 0x4E8;
            static constexpr std::uintptr_t Button_BackBoard = 0x4F0;
            static constexpr std::uintptr_t List_SubModeList = 0x4F8;
            static constexpr std::uintptr_t Button_ActivitySquadFill = 0x500;
            static constexpr std::uintptr_t Button_ActivityPrivacy = 0x508;
            static constexpr std::uintptr_t Button_Activity_Habanero = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Text_ActivityName", 0x4B8, "ObjectProperty"},
            {"Button_Back", 0x4E8, "ObjectProperty"},
            {"Button_BackBoard", 0x4F0, "ObjectProperty"},
            {"List_SubModeList", 0x4F8, "ObjectProperty"},
            {"Button_ActivitySquadFill", 0x500, "ObjectProperty"},
            {"Button_ActivityPrivacy", 0x508, "ObjectProperty"},
            {"Button_Activity_Habanero", 0x510, "ObjectProperty"},
        }};
    };

    struct FortActivityPlayerBrowserTile
    {
        static constexpr std::string_view Name = "FortActivityPlayerBrowserTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityTileViewTileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Display_TileDetails = 0x1660;
            static constexpr std::uintptr_t Text_LastPlayedDate = 0x1668;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Display_TileDetails", 0x1660, "ObjectProperty"},
            {"Text_LastPlayedDate", 0x1668, "ObjectProperty"},
        }};
    };

    struct FortActivityPlayerBrowserView
    {
        static constexpr std::string_view Name = "FortActivityPlayerBrowserView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserView";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivityProvider = 0x5C8;
            static constexpr std::uintptr_t TileView_PlayerActivities = 0x5D0;
            static constexpr std::uintptr_t TabNameId = 0x5D8;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x5E0;
            static constexpr std::uintptr_t PlayHistoryProviderType = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ActivityProvider", 0x5C8, "ObjectProperty"},
            {"TileView_PlayerActivities", 0x5D0, "ObjectProperty"},
            {"TabNameId", 0x5D8, "NameProperty"},
            {"TabButtonLabelInfo", 0x5E0, "StructProperty"},
            {"PlayHistoryProviderType", 0x6D0, "EnumProperty"},
        }};
    };

    struct FortActivitySelector
    {
        static constexpr std::string_view Name = "FortActivitySelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnShowActivityDetailsOnCreatorPageDelegate = 0x270;
            static constexpr std::uintptr_t ColorSchemes = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnShowActivityDetailsOnCreatorPageDelegate", 0x270, "MulticastInlineDelegateProperty"},
            {"ColorSchemes", 0x290, "MapProperty"},
        }};
    };

    struct FortActivityTileDetailsDisplay
    {
        static constexpr std::string_view Name = "FortActivityTileDetailsDisplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIKitHoldableModularButton";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActivitySelectedDelegate = 0x16F8;
            static constexpr std::uintptr_t OnActivitySelectedDelegateWithSender = 0x1708;
            static constexpr std::uintptr_t OnActivityUnSelectedDelegate = 0x1718;
            static constexpr std::uintptr_t bShowDetailsButton = 0x1728;
            static constexpr std::uintptr_t VisiblePercentage_Width = 0x172C;
            static constexpr std::uintptr_t VisiblePercentage_Height = 0x1730;
            static constexpr std::uintptr_t InvalidActivityReason = 0x1734;
            static constexpr std::uintptr_t Text_ActivityName = 0x1738;
            static constexpr std::uintptr_t Text_PlayerCount = 0x1740;
            static constexpr std::uintptr_t Button_Favorite = 0x1748;
            static constexpr std::uintptr_t Button_Details = 0x1750;
            static constexpr std::uintptr_t ActivityBrowserTag_EpicOriginal = 0x1758;
            static constexpr std::uintptr_t Text_DebugId = 0x1760;
            static constexpr std::uintptr_t ActivityVideoCycleWidget = 0x1768;
            static constexpr std::uintptr_t ActivityDetailsModalClass = 0x1770;
            static constexpr std::uintptr_t ActivityDetailsModalClassV2 = 0x1778;
            static constexpr std::uintptr_t PlayerPageViewClass = 0x1780;
            static constexpr std::uintptr_t ActivityAttributionsClass = 0x1788;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"OnActivitySelectedDelegate", 0x16F8, "MulticastInlineDelegateProperty"},
            {"OnActivitySelectedDelegateWithSender", 0x1708, "MulticastInlineDelegateProperty"},
            {"OnActivityUnSelectedDelegate", 0x1718, "MulticastInlineDelegateProperty"},
            {"bShowDetailsButton", 0x1728, "BoolProperty"},
            {"VisiblePercentage_Width", 0x172C, "FloatProperty"},
            {"VisiblePercentage_Height", 0x1730, "FloatProperty"},
            {"InvalidActivityReason", 0x1734, "EnumProperty"},
            {"Text_ActivityName", 0x1738, "ObjectProperty"},
            {"Text_PlayerCount", 0x1740, "ObjectProperty"},
            {"Button_Favorite", 0x1748, "ObjectProperty"},
            {"Button_Details", 0x1750, "ObjectProperty"},
            {"ActivityBrowserTag_EpicOriginal", 0x1758, "ObjectProperty"},
            {"Text_DebugId", 0x1760, "ObjectProperty"},
            {"ActivityVideoCycleWidget", 0x1768, "ObjectProperty"},
            {"ActivityDetailsModalClass", 0x1770, "ClassProperty"},
            {"ActivityDetailsModalClassV2", 0x1778, "ClassProperty"},
            {"PlayerPageViewClass", 0x1780, "ClassProperty"},
            {"ActivityAttributionsClass", 0x1788, "ClassProperty"},
        }};
    };

    struct FortActivityTileView
    {
        static constexpr std::string_view Name = "FortActivityTileView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTileView";
        struct Offsets
        {
            static constexpr std::uintptr_t bConsumeTouchInputWhenScrolling = 0x1010;
            static constexpr std::uintptr_t bNeverConsumeTouchInputWhenScrolling = 0x1011;
            static constexpr std::uintptr_t bEnableMobileScrollBarThicknessOverride = 0x1012;
            static constexpr std::uintptr_t MobileScrollBarThicknessOverride = 0x1014;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bConsumeTouchInputWhenScrolling", 0x1010, "BoolProperty"},
            {"bNeverConsumeTouchInputWhenScrolling", 0x1011, "BoolProperty"},
            {"bEnableMobileScrollBarThicknessOverride", 0x1012, "BoolProperty"},
            {"MobileScrollBarThicknessOverride", 0x1014, "FloatProperty"},
        }};
    };

    struct FortActivityTileViewTileBase
    {
        static constexpr std::string_view Name = "FortActivityTileViewTileBase";
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

    struct FortDiscoverBrowserGridRow
    {
        static constexpr std::string_view Name = "FortDiscoverBrowserGridRow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserRow";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemIndexRepresented = 0x5A8;
            static constexpr std::uintptr_t bSupportLessThanMaxVisibleSubRows = 0x5B0;
            static constexpr std::uintptr_t bUseSizeShiftedFocusOffset = 0x5B1;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemIndexRepresented", 0x5A8, "IntProperty"},
            {"bSupportLessThanMaxVisibleSubRows", 0x5B0, "BoolProperty"},
            {"bUseSizeShiftedFocusOffset", 0x5B1, "BoolProperty"},
        }};
    };

    struct FortDiscoverFunctionLibrary
    {
        static constexpr std::string_view Name = "FortDiscoverFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDiscoverHomespace
    {
        static constexpr std::string_view Name = "FortDiscoverHomespace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScrollableActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HomebarWidget = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HomebarWidget", 0x4C0, "ObjectProperty"},
        }};
    };

    struct FortDiscoverItemBrowserRow
    {
        static constexpr std::string_view Name = "FortDiscoverItemBrowserRow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivityBrowserRow";
        struct Offsets
        {
            static constexpr std::uintptr_t ListView_Tiles = 0x5A0;
            static constexpr std::uintptr_t Button_PageLeft = 0x5A8;
            static constexpr std::uintptr_t Button_PageRight = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ListView_Tiles", 0x5A0, "ObjectProperty"},
            {"Button_PageLeft", 0x5A8, "ObjectProperty"},
            {"Button_PageRight", 0x5B0, "ObjectProperty"},
        }};
    };

    struct FortDiscoverItemListView
    {
        static constexpr std::string_view Name = "FortDiscoverItemListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionalNavigationTimeThreshold = 0x458;
            static constexpr std::uintptr_t PlayWithFriendsEntryWidgetClass = 0x460;
            static constexpr std::uintptr_t ActivityEntryWidgetClass = 0x468;
            static constexpr std::uintptr_t LibraryEntryWidgetClass = 0x470;
            static constexpr std::uintptr_t orientation = 0x478;
            static constexpr std::uintptr_t EntrySpacing = 0x47C;
            static constexpr std::uintptr_t bCircularNavigationEnabled = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DirectionalNavigationTimeThreshold", 0x458, "FloatProperty"},
            {"PlayWithFriendsEntryWidgetClass", 0x460, "ClassProperty"},
            {"ActivityEntryWidgetClass", 0x468, "ClassProperty"},
            {"LibraryEntryWidgetClass", 0x470, "ClassProperty"},
            {"orientation", 0x478, "ByteProperty"},
            {"EntrySpacing", 0x47C, "FloatProperty"},
            {"bCircularNavigationEnabled", 0x480, "BoolProperty"},
        }};
    };

    struct FortDiscoverNavigationSubsystem
    {
        static constexpr std::string_view Name = "FortDiscoverNavigationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOpenNestedSurface = 0x30;
            static constexpr std::uintptr_t NavigationSurfaceTileItemVM = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnOpenNestedSurface", 0x30, "MulticastInlineDelegateProperty"},
            {"NavigationSurfaceTileItemVM", 0x48, "ObjectProperty"},
        }};
    };

    struct FortDiscoverPreviewManager
    {
        static constexpr std::string_view Name = "FortDiscoverPreviewManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ThemedTemplatesMediaPlayerVM
    {
        static constexpr std::string_view Name = "ThemedTemplatesMediaPlayerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlaybackSummaryReady = 0x78;
            static constexpr std::uintptr_t OnActiveSlideChanged = 0x88;
            static constexpr std::uintptr_t OnTransitionRequested = 0x98;
            static constexpr std::uintptr_t OnChannelPlaybackStarted = 0xA8;
            static constexpr std::uintptr_t OnChannelPlaybackEnded = 0xB8;
            static constexpr std::uintptr_t OnViewVisibilityChanged = 0xC8;
            static constexpr std::uintptr_t OnUserNavigated = 0xD8;
            static constexpr std::uintptr_t AutoscrollInterval = 0xE8;
            static constexpr std::uintptr_t MaxNumRetries = 0xEC;
            static constexpr std::uintptr_t CurrentIndex = 0xF0;
            static constexpr std::uintptr_t bIsChannel2 = 0xF4;
            static constexpr std::uintptr_t bIsScrollingPaused = 0xF5;
            static constexpr std::uintptr_t ActivePosterImageURL = 0xF8;
            static constexpr std::uintptr_t MediaEntries = 0x108;
            static constexpr std::uintptr_t Channels = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OnPlaybackSummaryReady", 0x78, "MulticastInlineDelegateProperty"},
            {"OnActiveSlideChanged", 0x88, "MulticastInlineDelegateProperty"},
            {"OnTransitionRequested", 0x98, "MulticastInlineDelegateProperty"},
            {"OnChannelPlaybackStarted", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnChannelPlaybackEnded", 0xB8, "MulticastInlineDelegateProperty"},
            {"OnViewVisibilityChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnUserNavigated", 0xD8, "MulticastInlineDelegateProperty"},
            {"AutoscrollInterval", 0xE8, "FloatProperty"},
            {"MaxNumRetries", 0xEC, "IntProperty"},
            {"CurrentIndex", 0xF0, "IntProperty"},
            {"bIsChannel2", 0xF4, "BoolProperty"},
            {"bIsScrollingPaused", 0xF5, "BoolProperty"},
            {"ActivePosterImageURL", 0xF8, "StrProperty"},
            {"MediaEntries", 0x108, "ArrayProperty"},
            {"Channels", 0x118, "StructProperty"},
        }};
    };

}
