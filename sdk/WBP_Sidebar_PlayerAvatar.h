/**
 * decamp dumper generated SDK
 * Package: /Sidebar/Panels/WBP_Sidebar_PlayerAvatar
 */
#pragma once
#include "Basic.h"

// /Sidebar/Panels/WBP_Sidebar_PlayerAvatar.WBP_Sidebar_PlayerAvatar_C
// Kind: WidgetBlueprintGeneratedClass; super: FortPlayerAvatar
class UWBP_Sidebar_PlayerAvatar_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* VoiceIndicator; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Spacer_Size; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* SharingActivity; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0330
    void* AvatarImage; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Hover; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Anim_VoiceActive; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* FortPlayerAvatarViewModel; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* FortOnlineStatusViewModel; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Player2_FortPlayerAvatarViewModel; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* FortSocialItemVM; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* AvatarMaterial; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0378
    std::uint8_t PresenceSelect_Online[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Away[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Offline[0x10]; // 0x03A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Blocked[0x40]; // 0x03B8 (Size: 0x40, Type: StructProperty)
    std::uint8_t ShowOnlinePresence; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x03F9
    double PresenceIconScale; // 0x0400 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0408
    std::uint8_t ShowPresenceBg; // 0x0418 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0419
    std::uint8_t DisplayGroupAvatar; // 0x041A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomizeSilouettes; // 0x041B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMultiple; // 0x041C (Size: 0x1, Type: BoolProperty)
    std::uint8_t isFriendRequest; // 0x041D (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldUseTwoAvatars; // 0x041E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::UberGraphFrame");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, VoiceIndicator) == 792, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::VoiceIndicator");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, Spacer_Size) == 800, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::Spacer_Size");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, SharingActivity) == 808, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::SharingActivity");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, AvatarImage) == 824, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::AvatarImage");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, Anim_Hover) == 832, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::Anim_Hover");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, Anim_VoiceActive) == 840, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::Anim_VoiceActive");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, FortPlayerAvatarViewModel) == 848, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::FortPlayerAvatarViewModel");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, FortOnlineStatusViewModel) == 856, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::FortOnlineStatusViewModel");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, Player2_FortPlayerAvatarViewModel) == 864, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::Player2_FortPlayerAvatarViewModel");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, FortSocialItemVM) == 872, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::FortSocialItemVM");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, AvatarMaterial) == 880, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::AvatarMaterial");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, PresenceSelect_Online) == 904, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::PresenceSelect_Online");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, PresenceSelect_Away) == 920, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::PresenceSelect_Away");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, PresenceSelect_Offline) == 936, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::PresenceSelect_Offline");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, PresenceSelect_Blocked) == 952, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::PresenceSelect_Blocked");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, ShowOnlinePresence) == 1016, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::ShowOnlinePresence");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, PresenceIconScale) == 1024, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::PresenceIconScale");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, ShowPresenceBg) == 1048, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::ShowPresenceBg");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, DisplayGroupAvatar) == 1050, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::DisplayGroupAvatar");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, bRandomizeSilouettes) == 1051, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::bRandomizeSilouettes");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, bShowMultiple) == 1052, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::bShowMultiple");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, isFriendRequest) == 1053, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::isFriendRequest");
static_assert(offsetof(UWBP_Sidebar_PlayerAvatar_C, ShouldUseTwoAvatars) == 1054, "Offset mismatch for UWBP_Sidebar_PlayerAvatar_C::ShouldUseTwoAvatars");
