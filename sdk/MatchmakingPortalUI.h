/**
 * decamp dumper generated SDK
 * Package: /Script/MatchmakingPortalUI
 */
#pragma once
#include "Basic.h"

// /Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_CreativeMatchmaking
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CachedGameActivity; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* CreativeMatchmakingFeedbackClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* IslandModal; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* CreativeMatchmakingFeedbackWidget; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MatchmakingPortalModalWidget; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_CreativeMatchmaking, CachedGameActivity) == 200, "Offset mismatch for UFortControllerComponent_CreativeMatchmaking::CachedGameActivity");
static_assert(offsetof(UFortControllerComponent_CreativeMatchmaking, CreativeMatchmakingFeedbackClass) == 208, "Offset mismatch for UFortControllerComponent_CreativeMatchmaking::CreativeMatchmakingFeedbackClass");
static_assert(offsetof(UFortControllerComponent_CreativeMatchmaking, IslandModal) == 216, "Offset mismatch for UFortControllerComponent_CreativeMatchmaking::IslandModal");
static_assert(offsetof(UFortControllerComponent_CreativeMatchmaking, CreativeMatchmakingFeedbackWidget) == 224, "Offset mismatch for UFortControllerComponent_CreativeMatchmaking::CreativeMatchmakingFeedbackWidget");
static_assert(offsetof(UFortControllerComponent_CreativeMatchmaking, MatchmakingPortalModalWidget) == 232, "Offset mismatch for UFortControllerComponent_CreativeMatchmaking::MatchmakingPortalModalWidget");

// /Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback
// Kind: Class; super: CommonUserWidget
class UFortCreativeMatchmakingFeedback
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* Text_IslandName; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Text_MatchmakingStatus; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0350
    std::uint8_t bIsCancelingMatchmaking; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPartyMemberReady; // 0x0359 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPushedInputComponent; // 0x035A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1D]; // 0x035B
    void* CachedGameActivity; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasError; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0381
    std::uint8_t MatchmakingStatusText[0x10]; // 0x0388 (Size: 0x10, Type: TextProperty)
    void* Action_HoldKeybindWidget; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Action_MobileButton; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCreativeMatchmakingFeedback, Text_IslandName) == 832, "Offset mismatch for UFortCreativeMatchmakingFeedback::Text_IslandName");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, Text_MatchmakingStatus) == 840, "Offset mismatch for UFortCreativeMatchmakingFeedback::Text_MatchmakingStatus");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, bIsCancelingMatchmaking) == 856, "Offset mismatch for UFortCreativeMatchmakingFeedback::bIsCancelingMatchmaking");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, bIsLocalPartyMemberReady) == 857, "Offset mismatch for UFortCreativeMatchmakingFeedback::bIsLocalPartyMemberReady");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, bHasPushedInputComponent) == 858, "Offset mismatch for UFortCreativeMatchmakingFeedback::bHasPushedInputComponent");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, CachedGameActivity) == 888, "Offset mismatch for UFortCreativeMatchmakingFeedback::CachedGameActivity");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, bHasError) == 896, "Offset mismatch for UFortCreativeMatchmakingFeedback::bHasError");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, MatchmakingStatusText) == 904, "Offset mismatch for UFortCreativeMatchmakingFeedback::MatchmakingStatusText");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, Action_HoldKeybindWidget) == 920, "Offset mismatch for UFortCreativeMatchmakingFeedback::Action_HoldKeybindWidget");
static_assert(offsetof(UFortCreativeMatchmakingFeedback, Action_MobileButton) == 928, "Offset mismatch for UFortCreativeMatchmakingFeedback::Action_MobileButton");

// /Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown
// Kind: Class; super: CommonActivatableWidget
class UFortMatchmakingPortalCountdown
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* MatchmakingPortalInputComponent; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_IslandName; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    float CountdownTime; // 0x04B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04BC
    FMulticastInlineDelegate OnFinishedCountdown; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortMatchmakingPortalCountdown, MatchmakingPortalInputComponent) == 1192, "Offset mismatch for UFortMatchmakingPortalCountdown::MatchmakingPortalInputComponent");
static_assert(offsetof(UFortMatchmakingPortalCountdown, Text_IslandName) == 1200, "Offset mismatch for UFortMatchmakingPortalCountdown::Text_IslandName");
static_assert(offsetof(UFortMatchmakingPortalCountdown, CountdownTime) == 1208, "Offset mismatch for UFortMatchmakingPortalCountdown::CountdownTime");
static_assert(offsetof(UFortMatchmakingPortalCountdown, OnFinishedCountdown) == 1216, "Offset mismatch for UFortMatchmakingPortalCountdown::OnFinishedCountdown");

// /Script/MatchmakingPortalUI.FortMatchmakingPortalPopup
// Kind: Class; super: FortPortalHUDDetails
class UFortMatchmakingPortalPopup
{
public:
    std::uint8_t Pad_0000[0x480]; // 0x0000
    std::uint8_t WorldPointerLocation[0x18]; // 0x0480 (Size: 0x18, Type: StructProperty)
    std::uint8_t CreatorNameTextFormat[0x10]; // 0x0498 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> CachedHUDComponent; // 0x04A8 (Size: 0x8, Type: WeakObjectProperty)
    void* IslandModal; // 0x04B0 (Size: 0x8, Type: ClassProperty)
    void* ActivityDetailsModalClassV2; // 0x04B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CachedIslandData[0x48]; // 0x04C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t InvalidLinkCodeWarningText[0x10]; // 0x0508 (Size: 0x10, Type: TextProperty)
    float MatchmakingFeedbackDelayTime; // 0x0518 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsWithinPortalRange; // 0x051C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x051D
    void* RichText_CreatorName; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Text_IslandName; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_ActivityTags; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* GlobalActionKeybindWidget; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPageViewClass; // 0x0540 (Size: 0x8, Type: ClassProperty)
    void* AttributionsModalClass; // 0x0548 (Size: 0x8, Type: ClassProperty)
    void* CachedGameActivity; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0558
    std::uint8_t InteractionMessage[0x10]; // 0x0568 (Size: 0x10, Type: TextProperty)
    std::uint8_t InteractionMessage_Cancel[0x10]; // 0x0578 (Size: 0x10, Type: TextProperty)
    std::uint8_t InteractionMessage_Disabled[0x10]; // 0x0588 (Size: 0x10, Type: TextProperty)
    FText InteractionMessage_PartyLeadOnly; // 0x0598 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortMatchmakingPortalPopup, WorldPointerLocation) == 1152, "Offset mismatch for UFortMatchmakingPortalPopup::WorldPointerLocation");
static_assert(offsetof(UFortMatchmakingPortalPopup, CreatorNameTextFormat) == 1176, "Offset mismatch for UFortMatchmakingPortalPopup::CreatorNameTextFormat");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedHUDComponent) == 1192, "Offset mismatch for UFortMatchmakingPortalPopup::CachedHUDComponent");
static_assert(offsetof(UFortMatchmakingPortalPopup, IslandModal) == 1200, "Offset mismatch for UFortMatchmakingPortalPopup::IslandModal");
static_assert(offsetof(UFortMatchmakingPortalPopup, ActivityDetailsModalClassV2) == 1208, "Offset mismatch for UFortMatchmakingPortalPopup::ActivityDetailsModalClassV2");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedIslandData) == 1216, "Offset mismatch for UFortMatchmakingPortalPopup::CachedIslandData");
static_assert(offsetof(UFortMatchmakingPortalPopup, InvalidLinkCodeWarningText) == 1288, "Offset mismatch for UFortMatchmakingPortalPopup::InvalidLinkCodeWarningText");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingFeedbackDelayTime) == 1304, "Offset mismatch for UFortMatchmakingPortalPopup::MatchmakingFeedbackDelayTime");
static_assert(offsetof(UFortMatchmakingPortalPopup, bIsWithinPortalRange) == 1308, "Offset mismatch for UFortMatchmakingPortalPopup::bIsWithinPortalRange");
static_assert(offsetof(UFortMatchmakingPortalPopup, RichText_CreatorName) == 1312, "Offset mismatch for UFortMatchmakingPortalPopup::RichText_CreatorName");
static_assert(offsetof(UFortMatchmakingPortalPopup, Text_IslandName) == 1320, "Offset mismatch for UFortMatchmakingPortalPopup::Text_IslandName");
static_assert(offsetof(UFortMatchmakingPortalPopup, EntryBox_ActivityTags) == 1328, "Offset mismatch for UFortMatchmakingPortalPopup::EntryBox_ActivityTags");
static_assert(offsetof(UFortMatchmakingPortalPopup, GlobalActionKeybindWidget) == 1336, "Offset mismatch for UFortMatchmakingPortalPopup::GlobalActionKeybindWidget");
static_assert(offsetof(UFortMatchmakingPortalPopup, PlayerPageViewClass) == 1344, "Offset mismatch for UFortMatchmakingPortalPopup::PlayerPageViewClass");
static_assert(offsetof(UFortMatchmakingPortalPopup, AttributionsModalClass) == 1352, "Offset mismatch for UFortMatchmakingPortalPopup::AttributionsModalClass");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedGameActivity) == 1360, "Offset mismatch for UFortMatchmakingPortalPopup::CachedGameActivity");
static_assert(offsetof(UFortMatchmakingPortalPopup, InteractionMessage) == 1384, "Offset mismatch for UFortMatchmakingPortalPopup::InteractionMessage");
static_assert(offsetof(UFortMatchmakingPortalPopup, InteractionMessage_Cancel) == 1400, "Offset mismatch for UFortMatchmakingPortalPopup::InteractionMessage_Cancel");
static_assert(offsetof(UFortMatchmakingPortalPopup, InteractionMessage_Disabled) == 1416, "Offset mismatch for UFortMatchmakingPortalPopup::InteractionMessage_Disabled");
static_assert(offsetof(UFortMatchmakingPortalPopup, InteractionMessage_PartyLeadOnly) == 1432, "Offset mismatch for UFortMatchmakingPortalPopup::InteractionMessage_PartyLeadOnly");

// /Script/MatchmakingPortalUI.FortModalBackground
// Kind: Class; super: CommonActivatableWidget
class UFortModalBackground
{
public:
    std::uint8_t Pad_0000[0x4C0]; // 0x0000
    void* Button_Back; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_BackBoard; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortModalBackground, Button_Back) == 1216, "Offset mismatch for UFortModalBackground::Button_Back");
static_assert(offsetof(UFortModalBackground, Button_BackBoard) == 1224, "Offset mismatch for UFortModalBackground::Button_BackBoard");
static_assert(offsetof(UFortModalBackground, Button_CloseTouch) == 1232, "Offset mismatch for UFortModalBackground::Button_CloseTouch");

// /Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_OverridePortalHUDDetails
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> SoftPortalHUDDetailsClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_OverridePortalHUDDetails, SoftPortalHUDDetailsClass) == 40, "Offset mismatch for UFortUIGameFeatureAction_OverridePortalHUDDetails::SoftPortalHUDDetailsClass");
