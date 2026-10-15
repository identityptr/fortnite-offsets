/**
 * decamp dumper generated SDK
 * Package: /Script/DiscoveryBrowserUI
 */
#pragma once
#include "Basic.h"

// /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
// Kind: ScriptStruct; super: none
struct FColorSchemeParamaterValues
{
public:
    void* AlternateMaterialCollection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ScalarParameterValues; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VectorParameterValues; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FColorSchemeParamaterValues, AlternateMaterialCollection) == 0, "Offset mismatch for FColorSchemeParamaterValues::AlternateMaterialCollection");
static_assert(offsetof(FColorSchemeParamaterValues, ScalarParameterValues) == 8, "Offset mismatch for FColorSchemeParamaterValues::ScalarParameterValues");
static_assert(offsetof(FColorSchemeParamaterValues, VectorParameterValues) == 24, "Offset mismatch for FColorSchemeParamaterValues::VectorParameterValues");

// /Script/DiscoveryBrowserUI.ThemedTemplatesMediaChannel
// Kind: ScriptStruct; super: none
struct FThemedTemplatesMediaChannel
{
public:
    void* MediaSource; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MediaPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FThemedTemplatesMediaChannel, MediaSource) == 0, "Offset mismatch for FThemedTemplatesMediaChannel::MediaSource");
static_assert(offsetof(FThemedTemplatesMediaChannel, MediaPlayer) == 8, "Offset mismatch for FThemedTemplatesMediaChannel::MediaPlayer");

// /Script/DiscoveryBrowserUI.ThemedTemplatesMediaEntry
// Kind: ScriptStruct; super: none
struct FThemedTemplatesMediaEntry
{
public:
    FString VideoVUID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PosterImageURL; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FThemedTemplatesMediaEntry, VideoVUID) == 0, "Offset mismatch for FThemedTemplatesMediaEntry::VideoVUID");
static_assert(offsetof(FThemedTemplatesMediaEntry, PosterImageURL) == 16, "Offset mismatch for FThemedTemplatesMediaEntry::PosterImageURL");

// /Script/DiscoveryBrowserUI.ActivityLibraryComponent
// Kind: Class; super: ActorComponent
class UActivityLibraryComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TSoftClassPtr<void> CreatorPageOverrideClass; // 0x00D0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UActivityLibraryComponent, CreatorPageOverrideClass) == 208, "Offset mismatch for UActivityLibraryComponent::CreatorPageOverrideClass");

// /Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
// Kind: Class; super: MVVMViewModelBase
class UDiscoverSelectedActivityViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bLoading; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPartyData; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLibrary; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActiveInvite; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPartyPrivate; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    std::int32_t CurrentPartySize; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0074
    std::uint8_t RichPresenceText[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    void* ActivityVM; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDiscoverSelectedActivityViewModel, bLoading) == 104, "Offset mismatch for UDiscoverSelectedActivityViewModel::bLoading");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, bHasPartyData) == 105, "Offset mismatch for UDiscoverSelectedActivityViewModel::bHasPartyData");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, bIsLibrary) == 106, "Offset mismatch for UDiscoverSelectedActivityViewModel::bIsLibrary");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, bIsActiveInvite) == 107, "Offset mismatch for UDiscoverSelectedActivityViewModel::bIsActiveInvite");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, bIsPartyPrivate) == 108, "Offset mismatch for UDiscoverSelectedActivityViewModel::bIsPartyPrivate");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, CurrentPartySize) == 112, "Offset mismatch for UDiscoverSelectedActivityViewModel::CurrentPartySize");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, RichPresenceText) == 120, "Offset mismatch for UDiscoverSelectedActivityViewModel::RichPresenceText");
static_assert(offsetof(UDiscoverSelectedActivityViewModel, ActivityVM) == 136, "Offset mismatch for UDiscoverSelectedActivityViewModel::ActivityVM");

// /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
// Kind: Class; super: DataAsset
class UFortActivityBrowserColorSchemeAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MaterialCollectionOverrides; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortActivityBrowserColorSchemeAsset, MaterialCollectionOverrides) == 40, "Offset mismatch for UFortActivityBrowserColorSchemeAsset::MaterialCollectionOverrides");

// /Script/DiscoveryBrowserUI.FortActivityBrowserContext
// Kind: Class; super: GameInstanceSubsystem
class UFortActivityBrowserContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DiscoveryBrowserUI.FortActivityBrowserLibraryTile
// Kind: Class; super: FortActivityBrowserTileBase
class UFortActivityBrowserLibraryTile
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    void* OnboardingTooltip; // 0x1610 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityBrowserLibraryTile, OnboardingTooltip) == 5648, "Offset mismatch for UFortActivityBrowserLibraryTile::OnboardingTooltip");

// /Script/DiscoveryBrowserUI.FortActivityBrowserListView
// Kind: Class; super: ListViewBase
class UFortActivityBrowserListView
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    float DirectionalNavigationTimeThreshold; // 0x0458 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x045C
    void* DiscoverItemRowClass; // 0x0460 (Size: 0x8, Type: ClassProperty)
    void* HomebarItemRowClass; // 0x0468 (Size: 0x8, Type: ClassProperty)
    void* BannerItemRowClass; // 0x0470 (Size: 0x8, Type: ClassProperty)
    void* NonScrollingItemRowClass; // 0x0478 (Size: 0x8, Type: ClassProperty)
    void* ScrollingViewModelItemRowClass; // 0x0480 (Size: 0x8, Type: ClassProperty)
    void* TabBarItemRowClass; // 0x0488 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> RowTypes; // 0x0490 (Size: 0x10, Type: MapProperty)
    void* OverrideItemSelector; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* SurfaceViewModel; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowNonFullGridRows; // 0x04B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTinyOffsetWhenScrollingIntoView; // 0x04B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInternalRowSelection; // 0x04B2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortActivityBrowserListView, DirectionalNavigationTimeThreshold) == 1112, "Offset mismatch for UFortActivityBrowserListView::DirectionalNavigationTimeThreshold");
static_assert(offsetof(UFortActivityBrowserListView, DiscoverItemRowClass) == 1120, "Offset mismatch for UFortActivityBrowserListView::DiscoverItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, HomebarItemRowClass) == 1128, "Offset mismatch for UFortActivityBrowserListView::HomebarItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, BannerItemRowClass) == 1136, "Offset mismatch for UFortActivityBrowserListView::BannerItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, NonScrollingItemRowClass) == 1144, "Offset mismatch for UFortActivityBrowserListView::NonScrollingItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, ScrollingViewModelItemRowClass) == 1152, "Offset mismatch for UFortActivityBrowserListView::ScrollingViewModelItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, TabBarItemRowClass) == 1160, "Offset mismatch for UFortActivityBrowserListView::TabBarItemRowClass");
static_assert(offsetof(UFortActivityBrowserListView, RowTypes) == 1168, "Offset mismatch for UFortActivityBrowserListView::RowTypes");
static_assert(offsetof(UFortActivityBrowserListView, OverrideItemSelector) == 1184, "Offset mismatch for UFortActivityBrowserListView::OverrideItemSelector");
static_assert(offsetof(UFortActivityBrowserListView, SurfaceViewModel) == 1192, "Offset mismatch for UFortActivityBrowserListView::SurfaceViewModel");
static_assert(offsetof(UFortActivityBrowserListView, bAllowNonFullGridRows) == 1200, "Offset mismatch for UFortActivityBrowserListView::bAllowNonFullGridRows");
static_assert(offsetof(UFortActivityBrowserListView, bUseTinyOffsetWhenScrollingIntoView) == 1201, "Offset mismatch for UFortActivityBrowserListView::bUseTinyOffsetWhenScrollingIntoView");
static_assert(offsetof(UFortActivityBrowserListView, bAllowInternalRowSelection) == 1202, "Offset mismatch for UFortActivityBrowserListView::bAllowInternalRowSelection");

// /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
// Kind: Class; super: FortActivityBrowserTileBase
class UFortActivityBrowserPlayWithFriendsTile
{
public:
    std::uint8_t Pad_0000[0x1608]; // 0x0000
    std::int32_t MaxNamesToDisplay; // 0x1608 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPortraitsToDisplay; // 0x160C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x10]; // 0x1610
    void* PartyMembersAvatarsDisplay; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsActiveInvite; // 0x1628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x1629
    std::int32_t CurrentPartySize; // 0x162C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPartyPrivate; // 0x1630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x1631
    void* CachedGameActivity; // 0x1638 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x1640
    TWeakObjectPtr<void> CachedTargetSocialUser; // 0x1650 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentCTAButtonText[0x10]; // 0x1658 (Size: 0x10, Type: TextProperty)
    std::uint8_t JoinPartyText[0x10]; // 0x1668 (Size: 0x10, Type: TextProperty)
    std::uint8_t RequestToJoinText[0x10]; // 0x1678 (Size: 0x10, Type: TextProperty)
    std::uint8_t JoinFriendInputAction_Touch[0x1]; // 0x1688 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, MaxNamesToDisplay) == 5640, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::MaxNamesToDisplay");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, MaxPortraitsToDisplay) == 5644, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::MaxPortraitsToDisplay");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, PartyMembersAvatarsDisplay) == 5664, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::PartyMembersAvatarsDisplay");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, bIsActiveInvite) == 5672, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::bIsActiveInvite");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, CurrentPartySize) == 5676, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::CurrentPartySize");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, bIsPartyPrivate) == 5680, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::bIsPartyPrivate");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, CachedGameActivity) == 5688, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::CachedGameActivity");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, CachedTargetSocialUser) == 5712, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::CachedTargetSocialUser");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, CurrentCTAButtonText) == 5720, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::CurrentCTAButtonText");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, JoinPartyText) == 5736, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::JoinPartyText");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, RequestToJoinText) == 5752, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::RequestToJoinText");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, JoinFriendInputAction_Touch) == 5768, "Offset mismatch for UFortActivityBrowserPlayWithFriendsTile::JoinFriendInputAction_Touch");

// /Script/DiscoveryBrowserUI.FortActivityBrowserRow
// Kind: Class; super: CommonActivatableWidget
class UFortActivityBrowserRow
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    std::int32_t MinimumVisibilityPercentageForRowActivation; // 0x04B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04BC
    void* OverrideItemSelector; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* SurfaceViewModel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PanelViewModelSource; // 0x04D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x04D1
    void* NestedButtonGroupSelectionVM; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0xB0]; // 0x04E0
    void* Text_CategoryName; // 0x0590 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityBrowserRow, MinimumVisibilityPercentageForRowActivation) == 1208, "Offset mismatch for UFortActivityBrowserRow::MinimumVisibilityPercentageForRowActivation");
static_assert(offsetof(UFortActivityBrowserRow, OverrideItemSelector) == 1216, "Offset mismatch for UFortActivityBrowserRow::OverrideItemSelector");
static_assert(offsetof(UFortActivityBrowserRow, SurfaceViewModel) == 1224, "Offset mismatch for UFortActivityBrowserRow::SurfaceViewModel");
static_assert(offsetof(UFortActivityBrowserRow, PanelViewModelSource) == 1232, "Offset mismatch for UFortActivityBrowserRow::PanelViewModelSource");
static_assert(offsetof(UFortActivityBrowserRow, NestedButtonGroupSelectionVM) == 1240, "Offset mismatch for UFortActivityBrowserRow::NestedButtonGroupSelectionVM");
static_assert(offsetof(UFortActivityBrowserRow, Text_CategoryName) == 1424, "Offset mismatch for UFortActivityBrowserRow::Text_CategoryName");

// /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
// Kind: Class; super: FortActivityBrowserRow
class UFortActivityBrowserRowList
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* ListView_Activities; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageLeft; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageRight; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityBrowserRowList, ListView_Activities) == 1440, "Offset mismatch for UFortActivityBrowserRowList::ListView_Activities");
static_assert(offsetof(UFortActivityBrowserRowList, Button_PageLeft) == 1448, "Offset mismatch for UFortActivityBrowserRowList::Button_PageLeft");
static_assert(offsetof(UFortActivityBrowserRowList, Button_PageRight) == 1456, "Offset mismatch for UFortActivityBrowserRowList::Button_PageRight");

// /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
// Kind: Class; super: FortActivityBrowserView
class UFortActivityBrowserRowView
{
public:
    std::uint8_t Pad_0000[0x5C8]; // 0x0000
    float MouseWheelScrollTimeThreshold; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05CC
    void* BrowserList_Activities; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x28]; // 0x05D8
    FName TabNameId; // 0x0600 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0608
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0610 (Size: 0xF0, Type: StructProperty)
    TArray<void*> ActivityProviderFilter; // 0x0700 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActivityProviderFilterType; // 0x0710 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortActivityBrowserRowView, MouseWheelScrollTimeThreshold) == 1480, "Offset mismatch for UFortActivityBrowserRowView::MouseWheelScrollTimeThreshold");
static_assert(offsetof(UFortActivityBrowserRowView, BrowserList_Activities) == 1488, "Offset mismatch for UFortActivityBrowserRowView::BrowserList_Activities");
static_assert(offsetof(UFortActivityBrowserRowView, TabNameId) == 1536, "Offset mismatch for UFortActivityBrowserRowView::TabNameId");
static_assert(offsetof(UFortActivityBrowserRowView, TabButtonLabelInfo) == 1552, "Offset mismatch for UFortActivityBrowserRowView::TabButtonLabelInfo");
static_assert(offsetof(UFortActivityBrowserRowView, ActivityProviderFilter) == 1792, "Offset mismatch for UFortActivityBrowserRowView::ActivityProviderFilter");
static_assert(offsetof(UFortActivityBrowserRowView, ActivityProviderFilterType) == 1808, "Offset mismatch for UFortActivityBrowserRowView::ActivityProviderFilterType");

// /Script/DiscoveryBrowserUI.FortActivityBrowserTile
// Kind: Class; super: FortActivityBrowserTileBase
class UFortActivityBrowserTile
{
public:
    std::uint8_t Pad_0000[0x1608]; // 0x0000
    void* Display_TileDetails; // 0x1608 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityBrowserTile, Display_TileDetails) == 5640, "Offset mismatch for UFortActivityBrowserTile::Display_TileDetails");

// /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
// Kind: Class; super: CommonButtonBase
class UFortActivityBrowserTileBase
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

static_assert(offsetof(UFortActivityBrowserTileBase, ClickEvent) == 816, "Offset mismatch for UFortActivityBrowserTileBase::ClickEvent");
static_assert(offsetof(UFortActivityBrowserTileBase, MinWidth) == 820, "Offset mismatch for UFortActivityBrowserTileBase::MinWidth");
static_assert(offsetof(UFortActivityBrowserTileBase, MinHeight) == 824, "Offset mismatch for UFortActivityBrowserTileBase::MinHeight");
static_assert(offsetof(UFortActivityBrowserTileBase, MaxWidth) == 828, "Offset mismatch for UFortActivityBrowserTileBase::MaxWidth");
static_assert(offsetof(UFortActivityBrowserTileBase, MaxHeight) == 832, "Offset mismatch for UFortActivityBrowserTileBase::MaxHeight");
static_assert(offsetof(UFortActivityBrowserTileBase, Style) == 840, "Offset mismatch for UFortActivityBrowserTileBase::Style");
static_assert(offsetof(UFortActivityBrowserTileBase, bHideInputAction) == 848, "Offset mismatch for UFortActivityBrowserTileBase::bHideInputAction");
static_assert(offsetof(UFortActivityBrowserTileBase, PressedSlateSoundOverride) == 856, "Offset mismatch for UFortActivityBrowserTileBase::PressedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, ClickedSlateSoundOverride) == 880, "Offset mismatch for UFortActivityBrowserTileBase::ClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, HoveredSlateSoundOverride) == 904, "Offset mismatch for UFortActivityBrowserTileBase::HoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UFortActivityBrowserTileBase::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UFortActivityBrowserTileBase::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UFortActivityBrowserTileBase::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UFortActivityBrowserTileBase::LockedPressedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UFortActivityBrowserTileBase::LockedClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UFortActivityBrowserTileBase::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UFortActivityBrowserTileBase::bApplyAlphaOnDisable");
static_assert(offsetof(UFortActivityBrowserTileBase, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UFortActivityBrowserTileBase::bHideInputActionWithKeyboard");
static_assert(offsetof(UFortActivityBrowserTileBase, HoldData) == 1080, "Offset mismatch for UFortActivityBrowserTileBase::HoldData");
static_assert(offsetof(UFortActivityBrowserTileBase, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UFortActivityBrowserTileBase::bSimulateHoverOnTouchInput");
static_assert(offsetof(UFortActivityBrowserTileBase, ClickMethod) == 1091, "Offset mismatch for UFortActivityBrowserTileBase::ClickMethod");
static_assert(offsetof(UFortActivityBrowserTileBase, TouchMethod) == 1092, "Offset mismatch for UFortActivityBrowserTileBase::TouchMethod");
static_assert(offsetof(UFortActivityBrowserTileBase, PressMethod) == 1093, "Offset mismatch for UFortActivityBrowserTileBase::PressMethod");
static_assert(offsetof(UFortActivityBrowserTileBase, InputPriority) == 1096, "Offset mismatch for UFortActivityBrowserTileBase::InputPriority");
static_assert(offsetof(UFortActivityBrowserTileBase, TriggeringInputAction) == 1104, "Offset mismatch for UFortActivityBrowserTileBase::TriggeringInputAction");
static_assert(offsetof(UFortActivityBrowserTileBase, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UFortActivityBrowserTileBase::TriggeringEnhancedInputAction");
static_assert(offsetof(UFortActivityBrowserTileBase, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UFortActivityBrowserTileBase::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UFortActivityBrowserTileBase, OnSelectedChangedBase) == 1152, "Offset mismatch for UFortActivityBrowserTileBase::OnSelectedChangedBase");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseClicked) == 1168, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseClicked");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDoubleClicked");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseHovered) == 1200, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseHovered");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseUnhovered");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseFocused) == 1232, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseFocused");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseUnfocused");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseLockClicked");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseSelected) == 1296, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseSelected");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseUnselected) == 1312, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseUnselected");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDragDetected");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDragEnter");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDragLeave");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDragOver) == 1376, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDragOver");
static_assert(offsetof(UFortActivityBrowserTileBase, OnButtonBaseDrop) == 1392, "Offset mismatch for UFortActivityBrowserTileBase::OnButtonBaseDrop");
static_assert(offsetof(UFortActivityBrowserTileBase, bIsPersistentBinding) == 1464, "Offset mismatch for UFortActivityBrowserTileBase::bIsPersistentBinding");
static_assert(offsetof(UFortActivityBrowserTileBase, InputModeOverride) == 1465, "Offset mismatch for UFortActivityBrowserTileBase::InputModeOverride");
static_assert(offsetof(UFortActivityBrowserTileBase, SingleMaterialStyleMID) == 1504, "Offset mismatch for UFortActivityBrowserTileBase::SingleMaterialStyleMID");
static_assert(offsetof(UFortActivityBrowserTileBase, NormalStyle) == 1520, "Offset mismatch for UFortActivityBrowserTileBase::NormalStyle");
static_assert(offsetof(UFortActivityBrowserTileBase, SelectedStyle) == 2432, "Offset mismatch for UFortActivityBrowserTileBase::SelectedStyle");
static_assert(offsetof(UFortActivityBrowserTileBase, DisabledStyle) == 3344, "Offset mismatch for UFortActivityBrowserTileBase::DisabledStyle");
static_assert(offsetof(UFortActivityBrowserTileBase, LockedStyle) == 4256, "Offset mismatch for UFortActivityBrowserTileBase::LockedStyle");
static_assert(offsetof(UFortActivityBrowserTileBase, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UFortActivityBrowserTileBase::bStopDoubleClickPropagation");
static_assert(offsetof(UFortActivityBrowserTileBase, InputActionWidget) == 5528, "Offset mismatch for UFortActivityBrowserTileBase::InputActionWidget");

// /Script/DiscoveryBrowserUI.FortActivityBrowserView
// Kind: Class; super: FortActivityView
class UFortActivityBrowserView
{
public:
    std::uint8_t Pad_0000[0x4F0]; // 0x0000
    std::uint8_t bShowCustomMatchmakingModalButton; // 0x04F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSpectateMatchModalButton; // 0x04F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMobileGameDetailsButton; // 0x04F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMobileAcceptButton; // 0x04F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBackToTopButton; // 0x04F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x04F5
    std::uint8_t DiscoverySurfaceName[0x4]; // 0x04F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDefaultDiscoverSurfaceToFrontend; // 0x04FC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortActivityBrowserView, bShowCustomMatchmakingModalButton) == 1264, "Offset mismatch for UFortActivityBrowserView::bShowCustomMatchmakingModalButton");
static_assert(offsetof(UFortActivityBrowserView, bShowSpectateMatchModalButton) == 1265, "Offset mismatch for UFortActivityBrowserView::bShowSpectateMatchModalButton");
static_assert(offsetof(UFortActivityBrowserView, bShowMobileGameDetailsButton) == 1266, "Offset mismatch for UFortActivityBrowserView::bShowMobileGameDetailsButton");
static_assert(offsetof(UFortActivityBrowserView, bShowMobileAcceptButton) == 1267, "Offset mismatch for UFortActivityBrowserView::bShowMobileAcceptButton");
static_assert(offsetof(UFortActivityBrowserView, bShowBackToTopButton) == 1268, "Offset mismatch for UFortActivityBrowserView::bShowBackToTopButton");
static_assert(offsetof(UFortActivityBrowserView, DiscoverySurfaceName) == 1272, "Offset mismatch for UFortActivityBrowserView::DiscoverySurfaceName");
static_assert(offsetof(UFortActivityBrowserView, bDefaultDiscoverSurfaceToFrontend) == 1276, "Offset mismatch for UFortActivityBrowserView::bDefaultDiscoverSurfaceToFrontend");

// /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
// Kind: Class; super: FortActivityPlayerBrowserView
class UFortActivityCategoryPageView
{
public:
    std::uint8_t Pad_0000[0x6F8]; // 0x0000
    void* Text_CategoryTitle; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_BackToTop; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x0708 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x0710 (Size: 0x8, Type: ObjectProperty)
    void* Button_MobileAccept; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* Button_MobileShowGameDetails; // 0x0720 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityCategoryPageView, Text_CategoryTitle) == 1784, "Offset mismatch for UFortActivityCategoryPageView::Text_CategoryTitle");
static_assert(offsetof(UFortActivityCategoryPageView, Button_BackToTop) == 1792, "Offset mismatch for UFortActivityCategoryPageView::Button_BackToTop");
static_assert(offsetof(UFortActivityCategoryPageView, Button_CloseTouch) == 1800, "Offset mismatch for UFortActivityCategoryPageView::Button_CloseTouch");
static_assert(offsetof(UFortActivityCategoryPageView, Button_Back) == 1808, "Offset mismatch for UFortActivityCategoryPageView::Button_Back");
static_assert(offsetof(UFortActivityCategoryPageView, Button_MobileAccept) == 1816, "Offset mismatch for UFortActivityCategoryPageView::Button_MobileAccept");
static_assert(offsetof(UFortActivityCategoryPageView, Button_MobileShowGameDetails) == 1824, "Offset mismatch for UFortActivityCategoryPageView::Button_MobileShowGameDetails");

// /Script/DiscoveryBrowserUI.FortActivityCategoryTile
// Kind: Class; super: FortActivityTileViewTileBase
class UFortActivityCategoryTile
{
public:
    std::uint8_t Pad_0000[0x1630]; // 0x0000
    void* Text_CategoryTitle; // 0x1630 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityCategoryTile, Text_CategoryTitle) == 5680, "Offset mismatch for UFortActivityCategoryTile::Text_CategoryTitle");

// /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
// Kind: Class; super: CommonUserWidget
class UFortActivityCategoryTilePanel
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* TileView_Categories; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TileViewQueryThreshold; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* CachedActivityProvider; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityCategoryTilePanel, TileView_Categories) == 816, "Offset mismatch for UFortActivityCategoryTilePanel::TileView_Categories");
static_assert(offsetof(UFortActivityCategoryTilePanel, Text_Title) == 824, "Offset mismatch for UFortActivityCategoryTilePanel::Text_Title");
static_assert(offsetof(UFortActivityCategoryTilePanel, TileViewQueryThreshold) == 832, "Offset mismatch for UFortActivityCategoryTilePanel::TileViewQueryThreshold");
static_assert(offsetof(UFortActivityCategoryTilePanel, CachedActivityProvider) == 840, "Offset mismatch for UFortActivityCategoryTilePanel::CachedActivityProvider");

// /Script/DiscoveryBrowserUI.FortActivityCategoryView
// Kind: Class; super: FortActivityBrowserView
class UFortActivityCategoryView
{
public:
    std::uint8_t Pad_0000[0x5C8]; // 0x0000
    FName TabNameId; // 0x05C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x05D0 (Size: 0xF0, Type: StructProperty)
    void* TilePanel_Featured; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* TilePanel_All; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* CurrentSelectedPanel; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityCategoryView, TabNameId) == 1480, "Offset mismatch for UFortActivityCategoryView::TabNameId");
static_assert(offsetof(UFortActivityCategoryView, TabButtonLabelInfo) == 1488, "Offset mismatch for UFortActivityCategoryView::TabButtonLabelInfo");
static_assert(offsetof(UFortActivityCategoryView, TilePanel_Featured) == 1728, "Offset mismatch for UFortActivityCategoryView::TilePanel_Featured");
static_assert(offsetof(UFortActivityCategoryView, TilePanel_All) == 1736, "Offset mismatch for UFortActivityCategoryView::TilePanel_All");
static_assert(offsetof(UFortActivityCategoryView, CurrentSelectedPanel) == 1744, "Offset mismatch for UFortActivityCategoryView::CurrentSelectedPanel");

// /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
// Kind: Class; super: FortActivityCategoryPageView
class UFortActivityCreatorPageView
{
public:
    std::uint8_t Pad_0000[0x828]; // 0x0000
    std::int32_t AmountOfCreatorLinkEntriesQueried; // 0x0828 (Size: 0x4, Type: IntProperty)
    std::int32_t ProcessedCreatorLinkEntries; // 0x082C (Size: 0x4, Type: IntProperty)
    std::int32_t AmountOfEntriesQueried; // 0x0830 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortActivityCreatorPageView, AmountOfCreatorLinkEntriesQueried) == 2088, "Offset mismatch for UFortActivityCreatorPageView::AmountOfCreatorLinkEntriesQueried");
static_assert(offsetof(UFortActivityCreatorPageView, ProcessedCreatorLinkEntries) == 2092, "Offset mismatch for UFortActivityCreatorPageView::ProcessedCreatorLinkEntries");
static_assert(offsetof(UFortActivityCreatorPageView, AmountOfEntriesQueried) == 2096, "Offset mismatch for UFortActivityCreatorPageView::AmountOfEntriesQueried");

// /Script/DiscoveryBrowserUI.FortActivityDiscoverView
// Kind: Class; super: FortActivityBrowserRowView
class UFortActivityDiscoverView
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    std::uint8_t bPlayDetailsAnimationOnScreenOpen; // 0x0730 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0731
    float DetailsDisplayUpdateDelay; // 0x0734 (Size: 0x4, Type: FloatProperty)
    void* MovieWidgetClass; // 0x0738 (Size: 0x8, Type: ClassProperty)
    void* DetailsDisplay_SelectedActivity; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* DetailsDisplay_PromotedActivity; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* Panel_VideoSlot; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    void* Panel_PromotedVideoSlot; // 0x0758 (Size: 0x8, Type: ObjectProperty)
    void* ActivityMovieWidget; // 0x0760 (Size: 0x8, Type: ObjectProperty)
    void* PromotedActivityMovieWidget; // 0x0768 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0770
    void* BoundKeyArtOutroAnimation; // 0x07B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityDiscoverView, bPlayDetailsAnimationOnScreenOpen) == 1840, "Offset mismatch for UFortActivityDiscoverView::bPlayDetailsAnimationOnScreenOpen");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplayUpdateDelay) == 1844, "Offset mismatch for UFortActivityDiscoverView::DetailsDisplayUpdateDelay");
static_assert(offsetof(UFortActivityDiscoverView, MovieWidgetClass) == 1848, "Offset mismatch for UFortActivityDiscoverView::MovieWidgetClass");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplay_SelectedActivity) == 1856, "Offset mismatch for UFortActivityDiscoverView::DetailsDisplay_SelectedActivity");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplay_PromotedActivity) == 1864, "Offset mismatch for UFortActivityDiscoverView::DetailsDisplay_PromotedActivity");
static_assert(offsetof(UFortActivityDiscoverView, Panel_VideoSlot) == 1872, "Offset mismatch for UFortActivityDiscoverView::Panel_VideoSlot");
static_assert(offsetof(UFortActivityDiscoverView, Panel_PromotedVideoSlot) == 1880, "Offset mismatch for UFortActivityDiscoverView::Panel_PromotedVideoSlot");
static_assert(offsetof(UFortActivityDiscoverView, ActivityMovieWidget) == 1888, "Offset mismatch for UFortActivityDiscoverView::ActivityMovieWidget");
static_assert(offsetof(UFortActivityDiscoverView, PromotedActivityMovieWidget) == 1896, "Offset mismatch for UFortActivityDiscoverView::PromotedActivityMovieWidget");
static_assert(offsetof(UFortActivityDiscoverView, BoundKeyArtOutroAnimation) == 1976, "Offset mismatch for UFortActivityDiscoverView::BoundKeyArtOutroAnimation");

// /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
// Kind: Class; super: FortActivityBrowserRowView
class UFortActivityDiscoverViewV2
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    FMulticastInlineDelegate OnActivityRequested; // 0x0730 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CustomKeyInputAction[0x10]; // 0x0740 (Size: 0x10, Type: StructProperty)
    void* DiscoverPreviewManager; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x0758
    void* SelectedActivityVM; // 0x07B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftCustomMatchmakingModalClass[0x20]; // 0x07C0 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> SoftSpectateMatchModalClass; // 0x07E0 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t BackToTopInputAction[0x18]; // 0x0808 (Size: 0x18, Type: StructProperty)
    std::uint8_t ShowSpectateMatchModalInputAction[0x18]; // 0x0820 (Size: 0x18, Type: StructProperty)
    std::uint8_t JoinAsSpectatorInputAction[0x18]; // 0x0838 (Size: 0x18, Type: StructProperty)
    std::uint8_t JoinAsPlayerInputAction[0x18]; // 0x0850 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectActivityInputAction_Touch[0x60]; // 0x0868 (Size: 0x60, Type: StructProperty)
    void* NestedButtonGroupSelectionVM; // 0x08C8 (Size: 0x8, Type: ObjectProperty)
    void* CachedLinkedReferenceVM; // 0x08D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityDiscoverViewV2, OnActivityRequested) == 1840, "Offset mismatch for UFortActivityDiscoverViewV2::OnActivityRequested");
static_assert(offsetof(UFortActivityDiscoverViewV2, CustomKeyInputAction) == 1856, "Offset mismatch for UFortActivityDiscoverViewV2::CustomKeyInputAction");
static_assert(offsetof(UFortActivityDiscoverViewV2, DiscoverPreviewManager) == 1872, "Offset mismatch for UFortActivityDiscoverViewV2::DiscoverPreviewManager");
static_assert(offsetof(UFortActivityDiscoverViewV2, SelectedActivityVM) == 1976, "Offset mismatch for UFortActivityDiscoverViewV2::SelectedActivityVM");
static_assert(offsetof(UFortActivityDiscoverViewV2, SoftCustomMatchmakingModalClass) == 1984, "Offset mismatch for UFortActivityDiscoverViewV2::SoftCustomMatchmakingModalClass");
static_assert(offsetof(UFortActivityDiscoverViewV2, SoftSpectateMatchModalClass) == 2016, "Offset mismatch for UFortActivityDiscoverViewV2::SoftSpectateMatchModalClass");
static_assert(offsetof(UFortActivityDiscoverViewV2, BackToTopInputAction) == 2056, "Offset mismatch for UFortActivityDiscoverViewV2::BackToTopInputAction");
static_assert(offsetof(UFortActivityDiscoverViewV2, ShowSpectateMatchModalInputAction) == 2080, "Offset mismatch for UFortActivityDiscoverViewV2::ShowSpectateMatchModalInputAction");
static_assert(offsetof(UFortActivityDiscoverViewV2, JoinAsSpectatorInputAction) == 2104, "Offset mismatch for UFortActivityDiscoverViewV2::JoinAsSpectatorInputAction");
static_assert(offsetof(UFortActivityDiscoverViewV2, JoinAsPlayerInputAction) == 2128, "Offset mismatch for UFortActivityDiscoverViewV2::JoinAsPlayerInputAction");
static_assert(offsetof(UFortActivityDiscoverViewV2, SelectActivityInputAction_Touch) == 2152, "Offset mismatch for UFortActivityDiscoverViewV2::SelectActivityInputAction_Touch");
static_assert(offsetof(UFortActivityDiscoverViewV2, NestedButtonGroupSelectionVM) == 2248, "Offset mismatch for UFortActivityDiscoverViewV2::NestedButtonGroupSelectionVM");
static_assert(offsetof(UFortActivityDiscoverViewV2, CachedLinkedReferenceVM) == 2256, "Offset mismatch for UFortActivityDiscoverViewV2::CachedLinkedReferenceVM");

// /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
// Kind: Class; super: Object
class UFortActivityListItemWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DiscoveryBrowserUI.FortActivityListView
// Kind: Class; super: ListViewBase
class UFortActivityListView
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    float DirectionalNavigationTimeThreshold; // 0x0458 (Size: 0x4, Type: FloatProperty)
    std::uint8_t orientation; // 0x045C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x045D
    float EntrySpacing; // 0x0460 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCircularNavigationEnabled; // 0x0464 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0465
    TMap<void*, void*> TileTypes; // 0x0468 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortActivityListView, DirectionalNavigationTimeThreshold) == 1112, "Offset mismatch for UFortActivityListView::DirectionalNavigationTimeThreshold");
static_assert(offsetof(UFortActivityListView, orientation) == 1116, "Offset mismatch for UFortActivityListView::orientation");
static_assert(offsetof(UFortActivityListView, EntrySpacing) == 1120, "Offset mismatch for UFortActivityListView::EntrySpacing");
static_assert(offsetof(UFortActivityListView, bCircularNavigationEnabled) == 1124, "Offset mismatch for UFortActivityListView::bCircularNavigationEnabled");
static_assert(offsetof(UFortActivityListView, TileTypes) == 1128, "Offset mismatch for UFortActivityListView::TileTypes");

// /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
// Kind: Class; super: FortActivityModeSetSelectionModalBase
class UFortActivityModeSetSelectionModal
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* Text_ActivityName; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x04C0
    void* Button_Back; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_BackBoard; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* List_SubModeList; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ActivitySquadFill; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* Button_ActivityPrivacy; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* Button_Activity_Habanero; // 0x0510 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityModeSetSelectionModal, Text_ActivityName) == 1208, "Offset mismatch for UFortActivityModeSetSelectionModal::Text_ActivityName");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_Back) == 1256, "Offset mismatch for UFortActivityModeSetSelectionModal::Button_Back");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_BackBoard) == 1264, "Offset mismatch for UFortActivityModeSetSelectionModal::Button_BackBoard");
static_assert(offsetof(UFortActivityModeSetSelectionModal, List_SubModeList) == 1272, "Offset mismatch for UFortActivityModeSetSelectionModal::List_SubModeList");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_ActivitySquadFill) == 1280, "Offset mismatch for UFortActivityModeSetSelectionModal::Button_ActivitySquadFill");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_ActivityPrivacy) == 1288, "Offset mismatch for UFortActivityModeSetSelectionModal::Button_ActivityPrivacy");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_Activity_Habanero) == 1296, "Offset mismatch for UFortActivityModeSetSelectionModal::Button_Activity_Habanero");

// /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
// Kind: Class; super: FortActivityTileViewTileBase
class UFortActivityPlayerBrowserTile
{
public:
    std::uint8_t Pad_0000[0x1630]; // 0x0000
    void* Display_TileDetails; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    void* Text_LastPlayedDate; // 0x1638 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortActivityPlayerBrowserTile, Display_TileDetails) == 5680, "Offset mismatch for UFortActivityPlayerBrowserTile::Display_TileDetails");
static_assert(offsetof(UFortActivityPlayerBrowserTile, Text_LastPlayedDate) == 5688, "Offset mismatch for UFortActivityPlayerBrowserTile::Text_LastPlayedDate");

// /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
// Kind: Class; super: FortActivityBrowserView
class UFortActivityPlayerBrowserView
{
public:
    std::uint8_t Pad_0000[0x5C8]; // 0x0000
    void* ActivityProvider; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* TileView_PlayerActivities; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    FName TabNameId; // 0x05D8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x05E0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t PlayHistoryProviderType; // 0x06D0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortActivityPlayerBrowserView, ActivityProvider) == 1480, "Offset mismatch for UFortActivityPlayerBrowserView::ActivityProvider");
static_assert(offsetof(UFortActivityPlayerBrowserView, TileView_PlayerActivities) == 1488, "Offset mismatch for UFortActivityPlayerBrowserView::TileView_PlayerActivities");
static_assert(offsetof(UFortActivityPlayerBrowserView, TabNameId) == 1496, "Offset mismatch for UFortActivityPlayerBrowserView::TabNameId");
static_assert(offsetof(UFortActivityPlayerBrowserView, TabButtonLabelInfo) == 1504, "Offset mismatch for UFortActivityPlayerBrowserView::TabButtonLabelInfo");
static_assert(offsetof(UFortActivityPlayerBrowserView, PlayHistoryProviderType) == 1744, "Offset mismatch for UFortActivityPlayerBrowserView::PlayHistoryProviderType");

// /Script/DiscoveryBrowserUI.FortActivitySelector
// Kind: Class; super: FortLocalPlayerSubsystem
class UFortActivitySelector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnShowActivityDetailsOnCreatorPageDelegate; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0280
    TMap<void*, void*> ColorSchemes; // 0x0290 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortActivitySelector, OnShowActivityDetailsOnCreatorPageDelegate) == 624, "Offset mismatch for UFortActivitySelector::OnShowActivityDetailsOnCreatorPageDelegate");
static_assert(offsetof(UFortActivitySelector, ColorSchemes) == 656, "Offset mismatch for UFortActivitySelector::ColorSchemes");

// /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// Kind: Class; super: UIKitHoldableModularButton
class UFortActivityTileDetailsDisplay
{
public:
    std::uint8_t Pad_0000[0x16C8]; // 0x0000
    FMulticastInlineDelegate OnActivitySelectedDelegate; // 0x16C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActivityUnSelectedDelegate; // 0x16D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bShowDetailsButton; // 0x16E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x16E9
    float VisiblePercentage_Width; // 0x16EC (Size: 0x4, Type: FloatProperty)
    float VisiblePercentage_Height; // 0x16F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InvalidActivityReason; // 0x16F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x16F5
    void* Text_ActivityName; // 0x16F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_PlayerCount; // 0x1700 (Size: 0x8, Type: ObjectProperty)
    void* Button_Favorite; // 0x1708 (Size: 0x8, Type: ObjectProperty)
    void* Button_Details; // 0x1710 (Size: 0x8, Type: ObjectProperty)
    void* ActivityBrowserTag_EpicOriginal; // 0x1718 (Size: 0x8, Type: ObjectProperty)
    void* Text_DebugId; // 0x1720 (Size: 0x8, Type: ObjectProperty)
    void* ActivityVideoCycleWidget; // 0x1728 (Size: 0x8, Type: ObjectProperty)
    void* ActivityDetailsModalClass; // 0x1730 (Size: 0x8, Type: ClassProperty)
    void* ActivityDetailsModalClassV2; // 0x1738 (Size: 0x8, Type: ClassProperty)
    void* PlayerPageViewClass; // 0x1740 (Size: 0x8, Type: ClassProperty)
    void* ActivityAttributionsClass; // 0x1748 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortActivityTileDetailsDisplay, OnActivitySelectedDelegate) == 5832, "Offset mismatch for UFortActivityTileDetailsDisplay::OnActivitySelectedDelegate");
static_assert(offsetof(UFortActivityTileDetailsDisplay, OnActivityUnSelectedDelegate) == 5848, "Offset mismatch for UFortActivityTileDetailsDisplay::OnActivityUnSelectedDelegate");
static_assert(offsetof(UFortActivityTileDetailsDisplay, bShowDetailsButton) == 5864, "Offset mismatch for UFortActivityTileDetailsDisplay::bShowDetailsButton");
static_assert(offsetof(UFortActivityTileDetailsDisplay, VisiblePercentage_Width) == 5868, "Offset mismatch for UFortActivityTileDetailsDisplay::VisiblePercentage_Width");
static_assert(offsetof(UFortActivityTileDetailsDisplay, VisiblePercentage_Height) == 5872, "Offset mismatch for UFortActivityTileDetailsDisplay::VisiblePercentage_Height");
static_assert(offsetof(UFortActivityTileDetailsDisplay, InvalidActivityReason) == 5876, "Offset mismatch for UFortActivityTileDetailsDisplay::InvalidActivityReason");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_ActivityName) == 5880, "Offset mismatch for UFortActivityTileDetailsDisplay::Text_ActivityName");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_PlayerCount) == 5888, "Offset mismatch for UFortActivityTileDetailsDisplay::Text_PlayerCount");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Button_Favorite) == 5896, "Offset mismatch for UFortActivityTileDetailsDisplay::Button_Favorite");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Button_Details) == 5904, "Offset mismatch for UFortActivityTileDetailsDisplay::Button_Details");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityBrowserTag_EpicOriginal) == 5912, "Offset mismatch for UFortActivityTileDetailsDisplay::ActivityBrowserTag_EpicOriginal");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_DebugId) == 5920, "Offset mismatch for UFortActivityTileDetailsDisplay::Text_DebugId");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityVideoCycleWidget) == 5928, "Offset mismatch for UFortActivityTileDetailsDisplay::ActivityVideoCycleWidget");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityDetailsModalClass) == 5936, "Offset mismatch for UFortActivityTileDetailsDisplay::ActivityDetailsModalClass");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityDetailsModalClassV2) == 5944, "Offset mismatch for UFortActivityTileDetailsDisplay::ActivityDetailsModalClassV2");
static_assert(offsetof(UFortActivityTileDetailsDisplay, PlayerPageViewClass) == 5952, "Offset mismatch for UFortActivityTileDetailsDisplay::PlayerPageViewClass");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityAttributionsClass) == 5960, "Offset mismatch for UFortActivityTileDetailsDisplay::ActivityAttributionsClass");

// /Script/DiscoveryBrowserUI.FortActivityTileView
// Kind: Class; super: FortTileView
class UFortActivityTileView
{
public:
    std::uint8_t Pad_0000[0x1010]; // 0x0000
    std::uint8_t bConsumeTouchInputWhenScrolling; // 0x1010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeverConsumeTouchInputWhenScrolling; // 0x1011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMobileScrollBarThicknessOverride; // 0x1012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x1013
    float MobileScrollBarThicknessOverride; // 0x1014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortActivityTileView, bConsumeTouchInputWhenScrolling) == 4112, "Offset mismatch for UFortActivityTileView::bConsumeTouchInputWhenScrolling");
static_assert(offsetof(UFortActivityTileView, bNeverConsumeTouchInputWhenScrolling) == 4113, "Offset mismatch for UFortActivityTileView::bNeverConsumeTouchInputWhenScrolling");
static_assert(offsetof(UFortActivityTileView, bEnableMobileScrollBarThicknessOverride) == 4114, "Offset mismatch for UFortActivityTileView::bEnableMobileScrollBarThicknessOverride");
static_assert(offsetof(UFortActivityTileView, MobileScrollBarThicknessOverride) == 4116, "Offset mismatch for UFortActivityTileView::MobileScrollBarThicknessOverride");

// /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
// Kind: Class; super: CommonButtonBase
class UFortActivityTileViewTileBase
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

static_assert(offsetof(UFortActivityTileViewTileBase, ClickEvent) == 816, "Offset mismatch for UFortActivityTileViewTileBase::ClickEvent");
static_assert(offsetof(UFortActivityTileViewTileBase, MinWidth) == 820, "Offset mismatch for UFortActivityTileViewTileBase::MinWidth");
static_assert(offsetof(UFortActivityTileViewTileBase, MinHeight) == 824, "Offset mismatch for UFortActivityTileViewTileBase::MinHeight");
static_assert(offsetof(UFortActivityTileViewTileBase, MaxWidth) == 828, "Offset mismatch for UFortActivityTileViewTileBase::MaxWidth");
static_assert(offsetof(UFortActivityTileViewTileBase, MaxHeight) == 832, "Offset mismatch for UFortActivityTileViewTileBase::MaxHeight");
static_assert(offsetof(UFortActivityTileViewTileBase, Style) == 840, "Offset mismatch for UFortActivityTileViewTileBase::Style");
static_assert(offsetof(UFortActivityTileViewTileBase, bHideInputAction) == 848, "Offset mismatch for UFortActivityTileViewTileBase::bHideInputAction");
static_assert(offsetof(UFortActivityTileViewTileBase, PressedSlateSoundOverride) == 856, "Offset mismatch for UFortActivityTileViewTileBase::PressedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, ClickedSlateSoundOverride) == 880, "Offset mismatch for UFortActivityTileViewTileBase::ClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, HoveredSlateSoundOverride) == 904, "Offset mismatch for UFortActivityTileViewTileBase::HoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UFortActivityTileViewTileBase::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UFortActivityTileViewTileBase::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UFortActivityTileViewTileBase::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UFortActivityTileViewTileBase::LockedPressedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UFortActivityTileViewTileBase::LockedClickedSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UFortActivityTileViewTileBase::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UFortActivityTileViewTileBase::bApplyAlphaOnDisable");
static_assert(offsetof(UFortActivityTileViewTileBase, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UFortActivityTileViewTileBase::bHideInputActionWithKeyboard");
static_assert(offsetof(UFortActivityTileViewTileBase, HoldData) == 1080, "Offset mismatch for UFortActivityTileViewTileBase::HoldData");
static_assert(offsetof(UFortActivityTileViewTileBase, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UFortActivityTileViewTileBase::bSimulateHoverOnTouchInput");
static_assert(offsetof(UFortActivityTileViewTileBase, ClickMethod) == 1091, "Offset mismatch for UFortActivityTileViewTileBase::ClickMethod");
static_assert(offsetof(UFortActivityTileViewTileBase, TouchMethod) == 1092, "Offset mismatch for UFortActivityTileViewTileBase::TouchMethod");
static_assert(offsetof(UFortActivityTileViewTileBase, PressMethod) == 1093, "Offset mismatch for UFortActivityTileViewTileBase::PressMethod");
static_assert(offsetof(UFortActivityTileViewTileBase, InputPriority) == 1096, "Offset mismatch for UFortActivityTileViewTileBase::InputPriority");
static_assert(offsetof(UFortActivityTileViewTileBase, TriggeringInputAction) == 1104, "Offset mismatch for UFortActivityTileViewTileBase::TriggeringInputAction");
static_assert(offsetof(UFortActivityTileViewTileBase, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UFortActivityTileViewTileBase::TriggeringEnhancedInputAction");
static_assert(offsetof(UFortActivityTileViewTileBase, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UFortActivityTileViewTileBase::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UFortActivityTileViewTileBase, OnSelectedChangedBase) == 1152, "Offset mismatch for UFortActivityTileViewTileBase::OnSelectedChangedBase");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseClicked) == 1168, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseClicked");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDoubleClicked");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseHovered) == 1200, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseHovered");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseUnhovered");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseFocused) == 1232, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseFocused");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseUnfocused");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseLockClicked");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseSelected) == 1296, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseSelected");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseUnselected) == 1312, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseUnselected");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDragDetected");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDragEnter");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDragLeave");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDragOver) == 1376, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDragOver");
static_assert(offsetof(UFortActivityTileViewTileBase, OnButtonBaseDrop) == 1392, "Offset mismatch for UFortActivityTileViewTileBase::OnButtonBaseDrop");
static_assert(offsetof(UFortActivityTileViewTileBase, bIsPersistentBinding) == 1464, "Offset mismatch for UFortActivityTileViewTileBase::bIsPersistentBinding");
static_assert(offsetof(UFortActivityTileViewTileBase, InputModeOverride) == 1465, "Offset mismatch for UFortActivityTileViewTileBase::InputModeOverride");
static_assert(offsetof(UFortActivityTileViewTileBase, SingleMaterialStyleMID) == 1504, "Offset mismatch for UFortActivityTileViewTileBase::SingleMaterialStyleMID");
static_assert(offsetof(UFortActivityTileViewTileBase, NormalStyle) == 1520, "Offset mismatch for UFortActivityTileViewTileBase::NormalStyle");
static_assert(offsetof(UFortActivityTileViewTileBase, SelectedStyle) == 2432, "Offset mismatch for UFortActivityTileViewTileBase::SelectedStyle");
static_assert(offsetof(UFortActivityTileViewTileBase, DisabledStyle) == 3344, "Offset mismatch for UFortActivityTileViewTileBase::DisabledStyle");
static_assert(offsetof(UFortActivityTileViewTileBase, LockedStyle) == 4256, "Offset mismatch for UFortActivityTileViewTileBase::LockedStyle");
static_assert(offsetof(UFortActivityTileViewTileBase, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UFortActivityTileViewTileBase::bStopDoubleClickPropagation");
static_assert(offsetof(UFortActivityTileViewTileBase, InputActionWidget) == 5528, "Offset mismatch for UFortActivityTileViewTileBase::InputActionWidget");

// /Script/DiscoveryBrowserUI.FortDiscoverBrowserGridRow
// Kind: Class; super: FortActivityBrowserRow
class UFortDiscoverBrowserGridRow
{
public:
    std::uint8_t Pad_0000[0x5A8]; // 0x0000
    std::int32_t ItemIndexRepresented; // 0x05A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x05AC
    std::uint8_t bSupportLessThanMaxVisibleSubRows; // 0x05B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSizeShiftedFocusOffset; // 0x05B1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDiscoverBrowserGridRow, ItemIndexRepresented) == 1448, "Offset mismatch for UFortDiscoverBrowserGridRow::ItemIndexRepresented");
static_assert(offsetof(UFortDiscoverBrowserGridRow, bSupportLessThanMaxVisibleSubRows) == 1456, "Offset mismatch for UFortDiscoverBrowserGridRow::bSupportLessThanMaxVisibleSubRows");
static_assert(offsetof(UFortDiscoverBrowserGridRow, bUseSizeShiftedFocusOffset) == 1457, "Offset mismatch for UFortDiscoverBrowserGridRow::bUseSizeShiftedFocusOffset");

// /Script/DiscoveryBrowserUI.FortDiscoverFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortDiscoverFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DiscoveryBrowserUI.FortDiscoverHomespace
// Kind: Class; super: ScrollableActivatableWidget
class UFortDiscoverHomespace
{
public:
    std::uint8_t Pad_0000[0x4C0]; // 0x0000
    void* HomebarWidget; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDiscoverHomespace, HomebarWidget) == 1216, "Offset mismatch for UFortDiscoverHomespace::HomebarWidget");

// /Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow
// Kind: Class; super: FortActivityBrowserRow
class UFortDiscoverItemBrowserRow
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* ListView_Tiles; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageLeft; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_PageRight; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDiscoverItemBrowserRow, ListView_Tiles) == 1440, "Offset mismatch for UFortDiscoverItemBrowserRow::ListView_Tiles");
static_assert(offsetof(UFortDiscoverItemBrowserRow, Button_PageLeft) == 1448, "Offset mismatch for UFortDiscoverItemBrowserRow::Button_PageLeft");
static_assert(offsetof(UFortDiscoverItemBrowserRow, Button_PageRight) == 1456, "Offset mismatch for UFortDiscoverItemBrowserRow::Button_PageRight");

// /Script/DiscoveryBrowserUI.FortDiscoverItemListView
// Kind: Class; super: ListViewBase
class UFortDiscoverItemListView
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    float DirectionalNavigationTimeThreshold; // 0x0458 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x045C
    void* PlayWithFriendsEntryWidgetClass; // 0x0460 (Size: 0x8, Type: ClassProperty)
    void* ActivityEntryWidgetClass; // 0x0468 (Size: 0x8, Type: ClassProperty)
    void* LibraryEntryWidgetClass; // 0x0470 (Size: 0x8, Type: ClassProperty)
    std::uint8_t orientation; // 0x0478 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0479
    float EntrySpacing; // 0x047C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCircularNavigationEnabled; // 0x0480 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDiscoverItemListView, DirectionalNavigationTimeThreshold) == 1112, "Offset mismatch for UFortDiscoverItemListView::DirectionalNavigationTimeThreshold");
static_assert(offsetof(UFortDiscoverItemListView, PlayWithFriendsEntryWidgetClass) == 1120, "Offset mismatch for UFortDiscoverItemListView::PlayWithFriendsEntryWidgetClass");
static_assert(offsetof(UFortDiscoverItemListView, ActivityEntryWidgetClass) == 1128, "Offset mismatch for UFortDiscoverItemListView::ActivityEntryWidgetClass");
static_assert(offsetof(UFortDiscoverItemListView, LibraryEntryWidgetClass) == 1136, "Offset mismatch for UFortDiscoverItemListView::LibraryEntryWidgetClass");
static_assert(offsetof(UFortDiscoverItemListView, orientation) == 1144, "Offset mismatch for UFortDiscoverItemListView::orientation");
static_assert(offsetof(UFortDiscoverItemListView, EntrySpacing) == 1148, "Offset mismatch for UFortDiscoverItemListView::EntrySpacing");
static_assert(offsetof(UFortDiscoverItemListView, bCircularNavigationEnabled) == 1152, "Offset mismatch for UFortDiscoverItemListView::bCircularNavigationEnabled");

// /Script/DiscoveryBrowserUI.FortDiscoverNavigationSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UFortDiscoverNavigationSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnOpenNestedSurface; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0040
    void* NavigationSurfaceTileItemVM; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDiscoverNavigationSubsystem, OnOpenNestedSurface) == 48, "Offset mismatch for UFortDiscoverNavigationSubsystem::OnOpenNestedSurface");
static_assert(offsetof(UFortDiscoverNavigationSubsystem, NavigationSurfaceTileItemVM) == 72, "Offset mismatch for UFortDiscoverNavigationSubsystem::NavigationSurfaceTileItemVM");

// /Script/DiscoveryBrowserUI.FortDiscoverPreviewManager
// Kind: Class; super: Object
class UFortDiscoverPreviewManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DiscoveryBrowserUI.ThemedTemplatesMediaPlayerVM
// Kind: Class; super: FortPerUserViewModel
class UThemedTemplatesMediaPlayerVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnPlaybackSummaryReady; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActiveSlideChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTransitionRequested; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChannelPlaybackStarted; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChannelPlaybackEnded; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnViewVisibilityChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUserNavigated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float AutoscrollInterval; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxNumRetries; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentIndex; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsChannel2; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScrollingPaused; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00F6
    FString ActivePosterImageURL; // 0x00F8 (Size: 0x10, Type: StrProperty)
    TArray<void*> MediaEntries; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Channels[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnPlaybackSummaryReady) == 120, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnPlaybackSummaryReady");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnActiveSlideChanged) == 136, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnActiveSlideChanged");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnTransitionRequested) == 152, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnTransitionRequested");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnChannelPlaybackStarted) == 168, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnChannelPlaybackStarted");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnChannelPlaybackEnded) == 184, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnChannelPlaybackEnded");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnViewVisibilityChanged) == 200, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnViewVisibilityChanged");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, OnUserNavigated) == 216, "Offset mismatch for UThemedTemplatesMediaPlayerVM::OnUserNavigated");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, AutoscrollInterval) == 232, "Offset mismatch for UThemedTemplatesMediaPlayerVM::AutoscrollInterval");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, MaxNumRetries) == 236, "Offset mismatch for UThemedTemplatesMediaPlayerVM::MaxNumRetries");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, CurrentIndex) == 240, "Offset mismatch for UThemedTemplatesMediaPlayerVM::CurrentIndex");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, bIsChannel2) == 244, "Offset mismatch for UThemedTemplatesMediaPlayerVM::bIsChannel2");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, bIsScrollingPaused) == 245, "Offset mismatch for UThemedTemplatesMediaPlayerVM::bIsScrollingPaused");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, ActivePosterImageURL) == 248, "Offset mismatch for UThemedTemplatesMediaPlayerVM::ActivePosterImageURL");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, MediaEntries) == 264, "Offset mismatch for UThemedTemplatesMediaPlayerVM::MediaEntries");
static_assert(offsetof(UThemedTemplatesMediaPlayerVM, Channels) == 280, "Offset mismatch for UThemedTemplatesMediaPlayerVM::Channels");
