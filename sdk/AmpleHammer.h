/**
 * decamp dumper generated SDK
 * Package: /Script/AmpleHammer
 */
#pragma once
#include "Basic.h"

// /Script/AmpleHammer.AmpleHammerPINModalHelper
// Kind: Class; super: Object
class UAmpleHammerPINModalHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Description[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t InfoTitle[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    FText InfoDescription; // 0x0048 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UAmpleHammerPINModalHelper, Description) == 40, "Offset mismatch for UAmpleHammerPINModalHelper::Description");
static_assert(offsetof(UAmpleHammerPINModalHelper, InfoTitle) == 56, "Offset mismatch for UAmpleHammerPINModalHelper::InfoTitle");
static_assert(offsetof(UAmpleHammerPINModalHelper, InfoDescription) == 72, "Offset mismatch for UAmpleHammerPINModalHelper::InfoDescription");

// /Script/AmpleHammer.AmpleHammerRequestConsentHelper
// Kind: Class; super: Object
class UAmpleHammerRequestConsentHelper
{
public:
    std::uint8_t Opaque[1];
};
