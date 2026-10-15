/**
 * decamp dumper generated SDK
 * Package: /Script/TakeRecorderNamingTokens
 */
#pragma once
#include "Basic.h"

// /Script/TakeRecorderNamingTokens.TakeRecorderNamingTokens
// Kind: Class; super: NamingTokens
class UTakeRecorderNamingTokens
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TWeakObjectPtr<void> TakeMetaData; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    void* Context; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTakeRecorderNamingTokens, TakeMetaData) == 208, "Offset mismatch for UTakeRecorderNamingTokens::TakeMetaData");
static_assert(offsetof(UTakeRecorderNamingTokens, Context) == 216, "Offset mismatch for UTakeRecorderNamingTokens::Context");
