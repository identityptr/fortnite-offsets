/**
 * decamp dumper generated SDK
 * Package: /Script/Rejoin
 */
#pragma once
#include "Basic.h"

// /Script/Rejoin.RejoinCheck
// Kind: Class; super: Object
class URejoinCheck
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LastKnownStatus; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRejoinAfterCheck; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttemptingRejoin; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldRecheckIfRejoinCheckUnsuccessful; // 0x002B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URejoinCheck, LastKnownStatus) == 40, "Offset mismatch for URejoinCheck::LastKnownStatus");
static_assert(offsetof(URejoinCheck, bRejoinAfterCheck) == 41, "Offset mismatch for URejoinCheck::bRejoinAfterCheck");
static_assert(offsetof(URejoinCheck, bAttemptingRejoin) == 42, "Offset mismatch for URejoinCheck::bAttemptingRejoin");
static_assert(offsetof(URejoinCheck, bShouldRecheckIfRejoinCheckUnsuccessful) == 43, "Offset mismatch for URejoinCheck::bShouldRecheckIfRejoinCheckUnsuccessful");
