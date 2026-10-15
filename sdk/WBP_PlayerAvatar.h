/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Foundation/Profile/WBP_PlayerAvatar
 */
#pragma once
#include "Basic.h"

// /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C
// Kind: WidgetBlueprintGeneratedClass; super: FortPlayerAvatar
class UWBP_PlayerAvatar_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* Spacer_Size; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* SharingActivity; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0328
    void* AvatarImage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Hover; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* FortPlayerAvatarViewModel; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* FortOnlineStatusViewModel; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* AvatarMaterial; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0358
    std::uint8_t PresenceSelect_Online[0x10]; // 0x0368 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Away[0x10]; // 0x0378 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Offline[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Blocked[0x40]; // 0x0398 (Size: 0x40, Type: StructProperty)
    std::uint8_t ShowOnlinePresence; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x03D9
    double PresenceIconScale; // 0x03E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0004[0x10]; // 0x03E8
    std::uint8_t ShowPresenceBg; // 0x03F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_PlayerAvatar_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_PlayerAvatar_C::UberGraphFrame");
static_assert(offsetof(UWBP_PlayerAvatar_C, Spacer_Size) == 792, "Offset mismatch for UWBP_PlayerAvatar_C::Spacer_Size");
static_assert(offsetof(UWBP_PlayerAvatar_C, SharingActivity) == 800, "Offset mismatch for UWBP_PlayerAvatar_C::SharingActivity");
static_assert(offsetof(UWBP_PlayerAvatar_C, AvatarImage) == 816, "Offset mismatch for UWBP_PlayerAvatar_C::AvatarImage");
static_assert(offsetof(UWBP_PlayerAvatar_C, Anim_Hover) == 824, "Offset mismatch for UWBP_PlayerAvatar_C::Anim_Hover");
static_assert(offsetof(UWBP_PlayerAvatar_C, FortPlayerAvatarViewModel) == 832, "Offset mismatch for UWBP_PlayerAvatar_C::FortPlayerAvatarViewModel");
static_assert(offsetof(UWBP_PlayerAvatar_C, FortOnlineStatusViewModel) == 840, "Offset mismatch for UWBP_PlayerAvatar_C::FortOnlineStatusViewModel");
static_assert(offsetof(UWBP_PlayerAvatar_C, AvatarMaterial) == 848, "Offset mismatch for UWBP_PlayerAvatar_C::AvatarMaterial");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Online) == 872, "Offset mismatch for UWBP_PlayerAvatar_C::PresenceSelect_Online");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Away) == 888, "Offset mismatch for UWBP_PlayerAvatar_C::PresenceSelect_Away");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Offline) == 904, "Offset mismatch for UWBP_PlayerAvatar_C::PresenceSelect_Offline");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceSelect_Blocked) == 920, "Offset mismatch for UWBP_PlayerAvatar_C::PresenceSelect_Blocked");
static_assert(offsetof(UWBP_PlayerAvatar_C, ShowOnlinePresence) == 984, "Offset mismatch for UWBP_PlayerAvatar_C::ShowOnlinePresence");
static_assert(offsetof(UWBP_PlayerAvatar_C, PresenceIconScale) == 992, "Offset mismatch for UWBP_PlayerAvatar_C::PresenceIconScale");
static_assert(offsetof(UWBP_PlayerAvatar_C, ShowPresenceBg) == 1016, "Offset mismatch for UWBP_PlayerAvatar_C::ShowPresenceBg");
