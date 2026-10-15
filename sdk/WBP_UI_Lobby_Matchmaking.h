/**
 * decamp dumper generated SDK
 * Package: /EcosystemMatchmakingUI/WBP_UI_Lobby_Matchmaking
 */
#pragma once
#include "Basic.h"

// /EcosystemMatchmakingUI/WBP_UI_Lobby_Matchmaking.WBP_UI_Lobby_Matchmaking_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_UI_Lobby_Matchmaking_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_Throbber; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UIKit_StatusIndicator; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UI_Lobby_ErrorState; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UI_DownloadProgress; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UI_Button_Secondary; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UI_Button_Primary; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x04D8
    void* WBP_PilgrimCoachmark_CuratedSetlist; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Lobby_Coachmark_AFKSittingOut; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_ExtensionHolder; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0510
    void* Txt_MapName; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* Text_RPointsValue; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Text_RPoints; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Text_RMatchesAmount; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Text_RHighestScoreValue; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* Text_RHighestScore; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* Text_MMStatus; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* Text_MMData; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* Text_MMAdditionalData; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* Text_LiveTournamentCountdown; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* Text_DebugLBId; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* Text_DebugId; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_StatusIcons; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_PrimaryButton; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_MainOrMatchFound; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_GameIslandInfo; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Countdown; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x05A0
    void* SB_MatchFoundWidget; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_MatchFoundWidget; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_CustomLogoHeader; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* MapRotationCountdown; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* Img_Logo; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* Grid_StatusInfo; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x05D8
    void* Grid_RankStats; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Grid_LiveRankedCountdown; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* GP_Title; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* GameMode_SizeBox; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* GameIsland_Title; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* DecoyButton_TournamentDetails; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* Content_Main; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* CommonVisualAttachment_GizmoPip; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* CommonVisualAttachment_GizmoCoachmark; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* BackgroundThumbnail; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0630
    void* Anim_StatusIn; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x0658
    void* Anim_StatusIntro; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* Anim_StatusOutro; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x8]; // 0x0670
    void* Anim_MapRotation; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* FortMatchmakingViewModel; // 0x0680 (Size: 0x8, Type: ObjectProperty)
    void* MapRotationCountdownTimerVM; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* TournamentTimerVM; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPlaytimeVM; // 0x0698 (Size: 0x8, Type: ObjectProperty)
    void* Min_Height; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    void* LiteImageDownloadComponent_0_Img_Logo; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x8]; // 0x06B0
    void* MatchFoundslot; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x06C0
    std::uint8_t IsBottomBarVisible; // 0x06C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsStatusExpanded; // 0x06C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x1]; // 0x06CA
    std::uint8_t IsAnimating; // 0x06CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x4]; // 0x06CC
    std::uint8_t TempText[0x10]; // 0x06D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PlayButtonNewText[0x10]; // 0x06E0 (Size: 0x10, Type: TextProperty)
    void* ThumbnailDynamicMaterial; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* PrevMapTexture; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMapTexture; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x50]; // 0x0708
    void* AthenaLobby; // 0x0758 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0760
    void* MatchmakingFlushedSound; // 0x07C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x8]; // 0x07C8
    std::uint8_t FlushAudioTimer[0x18]; // 0x07D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t isMatchFoundAnimationActive; // 0x07E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x17]; // 0x07E9
    void* HabaneroDisplayData; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    void* ModeSpecificWidget; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* SettingsModal; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CanStartMatchShouldBeVisible; // 0x0818 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FlushClicked; // 0x0819 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0xE]; // 0x081A
    std::uint8_t ExtensionHolderSlotTag[0x5]; // 0x0828 (Size: 0x5, Type: StructProperty)
    std::uint8_t IsCreatetimeOut; // 0x082D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UIKit_Throbber) == 1192, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UIKit_Throbber");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UIKit_StatusIndicator) == 1200, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UIKit_StatusIndicator");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UI_Lobby_ErrorState) == 1208, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UI_Lobby_ErrorState");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UI_DownloadProgress) == 1216, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UI_DownloadProgress");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UI_Button_Secondary) == 1224, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UI_Button_Secondary");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_UI_Button_Primary) == 1232, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_UI_Button_Primary");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_PilgrimCoachmark_CuratedSetlist) == 1272, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_PilgrimCoachmark_CuratedSetlist");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, WBP_Lobby_Coachmark_AFKSittingOut) == 1280, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::WBP_Lobby_Coachmark_AFKSittingOut");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, VerticalBox_ExtensionHolder) == 1288, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::VerticalBox_ExtensionHolder");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Txt_MapName) == 1304, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Txt_MapName");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_RPointsValue) == 1312, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_RPointsValue");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_RPoints) == 1320, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_RPoints");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_RMatchesAmount) == 1328, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_RMatchesAmount");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_RHighestScoreValue) == 1336, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_RHighestScoreValue");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_RHighestScore) == 1344, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_RHighestScore");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_MMStatus) == 1352, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_MMStatus");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_MMData) == 1360, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_MMData");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_MMAdditionalData) == 1368, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_MMAdditionalData");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_LiveTournamentCountdown) == 1376, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_LiveTournamentCountdown");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_DebugLBId) == 1384, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_DebugLBId");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Text_DebugId) == 1392, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Text_DebugId");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Switcher_StatusIcons) == 1400, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Switcher_StatusIcons");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Switcher_PrimaryButton) == 1408, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Switcher_PrimaryButton");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Switcher_MainOrMatchFound) == 1416, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Switcher_MainOrMatchFound");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Switcher_GameIslandInfo) == 1424, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Switcher_GameIslandInfo");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Switcher_Countdown) == 1432, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Switcher_Countdown");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, SB_MatchFoundWidget) == 1448, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::SB_MatchFoundWidget");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, NamedSlot_MatchFoundWidget) == 1456, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::NamedSlot_MatchFoundWidget");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, NamedSlot_CustomLogoHeader) == 1464, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::NamedSlot_CustomLogoHeader");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, MapRotationCountdown) == 1472, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::MapRotationCountdown");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Img_Logo) == 1480, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Img_Logo");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Grid_StatusInfo) == 1488, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Grid_StatusInfo");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Grid_RankStats) == 1504, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Grid_RankStats");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Grid_LiveRankedCountdown) == 1512, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Grid_LiveRankedCountdown");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, GP_Title) == 1520, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::GP_Title");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, GameMode_SizeBox) == 1528, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::GameMode_SizeBox");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, GameIsland_Title) == 1536, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::GameIsland_Title");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, DecoyButton_TournamentDetails) == 1544, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::DecoyButton_TournamentDetails");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Content_Main) == 1552, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Content_Main");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, CommonVisualAttachment_GizmoPip) == 1560, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::CommonVisualAttachment_GizmoPip");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, CommonVisualAttachment_GizmoCoachmark) == 1568, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::CommonVisualAttachment_GizmoCoachmark");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, BackgroundThumbnail) == 1576, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::BackgroundThumbnail");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Anim_StatusIn) == 1616, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Anim_StatusIn");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Anim_StatusIntro) == 1632, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Anim_StatusIntro");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Anim_StatusOutro) == 1640, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Anim_StatusOutro");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Anim_MapRotation) == 1656, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Anim_MapRotation");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, FortMatchmakingViewModel) == 1664, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::FortMatchmakingViewModel");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, MapRotationCountdownTimerVM) == 1672, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::MapRotationCountdownTimerVM");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, TournamentTimerVM) == 1680, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::TournamentTimerVM");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, PlayerPlaytimeVM) == 1688, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::PlayerPlaytimeVM");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, Min_Height) == 1696, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::Min_Height");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, LiteImageDownloadComponent_0_Img_Logo) == 1704, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::LiteImageDownloadComponent_0_Img_Logo");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, MatchFoundslot) == 1720, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::MatchFoundslot");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, IsBottomBarVisible) == 1736, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::IsBottomBarVisible");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, IsStatusExpanded) == 1737, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::IsStatusExpanded");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, IsAnimating) == 1739, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::IsAnimating");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, TempText) == 1744, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::TempText");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, PlayButtonNewText) == 1760, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::PlayButtonNewText");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, ThumbnailDynamicMaterial) == 1776, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::ThumbnailDynamicMaterial");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, PrevMapTexture) == 1784, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::PrevMapTexture");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, CurrentMapTexture) == 1792, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::CurrentMapTexture");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, AthenaLobby) == 1880, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::AthenaLobby");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, MatchmakingFlushedSound) == 1984, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::MatchmakingFlushedSound");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, FlushAudioTimer) == 2000, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::FlushAudioTimer");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, isMatchFoundAnimationActive) == 2024, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::isMatchFoundAnimationActive");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, HabaneroDisplayData) == 2048, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::HabaneroDisplayData");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, ModeSpecificWidget) == 2056, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::ModeSpecificWidget");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, SettingsModal) == 2064, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::SettingsModal");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, CanStartMatchShouldBeVisible) == 2072, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::CanStartMatchShouldBeVisible");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, FlushClicked) == 2073, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::FlushClicked");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, ExtensionHolderSlotTag) == 2088, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::ExtensionHolderSlotTag");
static_assert(offsetof(UWBP_UI_Lobby_Matchmaking_C, IsCreatetimeOut) == 2093, "Offset mismatch for UWBP_UI_Lobby_Matchmaking_C::IsCreatetimeOut");
