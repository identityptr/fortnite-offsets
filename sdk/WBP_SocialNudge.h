/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Frontend/Lobby/SocialNudge/WBP_SocialNudge
 */
#pragma once
#include "Basic.h"

// /Game/UI/Frontend/Lobby/SocialNudge/WBP_SocialNudge.WBP_SocialNudge_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_SocialNudge_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x04A0 (Size: 0x18, Type: StructProperty)
    void* WBP_UIKit_Backplate; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x04C0
    void* WBP_CaptureForPostBufferUpdate; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x04E0
    void* GridPanel_SocialNudge; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* FX_InviteInProgress; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* CallToActions; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* Button_SocialNudge; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* Button_Plus; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Block_Outline; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* FadeAnimation; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* FortTeamMemberPedestalSocialNudgeViewModel; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* FortOnlineStatusViewModel; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* FortPlayerAvatarViewModel; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentFocusedWidget; // 0x0550 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0551
    std::uint8_t MemberUniqueId[0x68]; // 0x0558 (Size: 0x68, Type: StructProperty)
    FText JoinParty; // 0x05C0 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0004[0x18]; // 0x05D8
    FText AcceptInvite; // 0x05F0 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0005[0x8]; // 0x0608
    FText AcceptRequestToJoin; // 0x0610 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UWBP_SocialNudge_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_SocialNudge_C::UberGraphFrame");
static_assert(offsetof(UWBP_SocialNudge_C, WBP_UIKit_Backplate) == 1208, "Offset mismatch for UWBP_SocialNudge_C::WBP_UIKit_Backplate");
static_assert(offsetof(UWBP_SocialNudge_C, WBP_CaptureForPostBufferUpdate) == 1240, "Offset mismatch for UWBP_SocialNudge_C::WBP_CaptureForPostBufferUpdate");
static_assert(offsetof(UWBP_SocialNudge_C, GridPanel_SocialNudge) == 1280, "Offset mismatch for UWBP_SocialNudge_C::GridPanel_SocialNudge");
static_assert(offsetof(UWBP_SocialNudge_C, FX_InviteInProgress) == 1288, "Offset mismatch for UWBP_SocialNudge_C::FX_InviteInProgress");
static_assert(offsetof(UWBP_SocialNudge_C, CallToActions) == 1296, "Offset mismatch for UWBP_SocialNudge_C::CallToActions");
static_assert(offsetof(UWBP_SocialNudge_C, Button_SocialNudge) == 1304, "Offset mismatch for UWBP_SocialNudge_C::Button_SocialNudge");
static_assert(offsetof(UWBP_SocialNudge_C, Button_Plus) == 1312, "Offset mismatch for UWBP_SocialNudge_C::Button_Plus");
static_assert(offsetof(UWBP_SocialNudge_C, Block_Outline) == 1320, "Offset mismatch for UWBP_SocialNudge_C::Block_Outline");
static_assert(offsetof(UWBP_SocialNudge_C, FadeAnimation) == 1328, "Offset mismatch for UWBP_SocialNudge_C::FadeAnimation");
static_assert(offsetof(UWBP_SocialNudge_C, FortTeamMemberPedestalSocialNudgeViewModel) == 1336, "Offset mismatch for UWBP_SocialNudge_C::FortTeamMemberPedestalSocialNudgeViewModel");
static_assert(offsetof(UWBP_SocialNudge_C, FortOnlineStatusViewModel) == 1344, "Offset mismatch for UWBP_SocialNudge_C::FortOnlineStatusViewModel");
static_assert(offsetof(UWBP_SocialNudge_C, FortPlayerAvatarViewModel) == 1352, "Offset mismatch for UWBP_SocialNudge_C::FortPlayerAvatarViewModel");
static_assert(offsetof(UWBP_SocialNudge_C, CurrentFocusedWidget) == 1360, "Offset mismatch for UWBP_SocialNudge_C::CurrentFocusedWidget");
static_assert(offsetof(UWBP_SocialNudge_C, MemberUniqueId) == 1368, "Offset mismatch for UWBP_SocialNudge_C::MemberUniqueId");
static_assert(offsetof(UWBP_SocialNudge_C, JoinParty) == 1472, "Offset mismatch for UWBP_SocialNudge_C::JoinParty");
static_assert(offsetof(UWBP_SocialNudge_C, AcceptInvite) == 1520, "Offset mismatch for UWBP_SocialNudge_C::AcceptInvite");
static_assert(offsetof(UWBP_SocialNudge_C, AcceptRequestToJoin) == 1552, "Offset mismatch for UWBP_SocialNudge_C::AcceptRequestToJoin");
