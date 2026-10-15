/**
 * decamp dumper generated SDK
 * Package: /Script/CoreOnline
 */
#pragma once
#include "Basic.h"

// /Script/CoreOnline.JoinabilitySettings
// Kind: ScriptStruct; super: none
struct FJoinabilitySettings
{
public:
    std::uint8_t SessionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPublicSearchable; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInvites; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJoinViaPresence; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJoinViaPresenceFriendsOnly; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::int32_t MaxPlayers; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPartySize; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJoinabilitySettings, SessionName) == 0, "Offset mismatch for FJoinabilitySettings::SessionName");
static_assert(offsetof(FJoinabilitySettings, bPublicSearchable) == 4, "Offset mismatch for FJoinabilitySettings::bPublicSearchable");
static_assert(offsetof(FJoinabilitySettings, bAllowInvites) == 5, "Offset mismatch for FJoinabilitySettings::bAllowInvites");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresence) == 6, "Offset mismatch for FJoinabilitySettings::bJoinViaPresence");
static_assert(offsetof(FJoinabilitySettings, bJoinViaPresenceFriendsOnly) == 7, "Offset mismatch for FJoinabilitySettings::bJoinViaPresenceFriendsOnly");
static_assert(offsetof(FJoinabilitySettings, MaxPlayers) == 8, "Offset mismatch for FJoinabilitySettings::MaxPlayers");
static_assert(offsetof(FJoinabilitySettings, MaxPartySize) == 12, "Offset mismatch for FJoinabilitySettings::MaxPartySize");

// /Script/CoreOnline.UniqueNetIdWrapper
// Kind: ScriptStruct; super: none
struct FUniqueNetIdWrapper
{
public:
    std::uint8_t Opaque[1];
};
