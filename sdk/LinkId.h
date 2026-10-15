/**
 * decamp dumper generated SDK
 * Package: /Script/LinkId
 */
#pragma once
#include "Basic.h"

// /Script/LinkId.OnlineLinkId
// Kind: ScriptStruct; super: none
struct FOnlineLinkId
{
public:
    FString Mnemonic; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FOnlineLinkId, Mnemonic) == 0, "Offset mismatch for FOnlineLinkId::Mnemonic");
static_assert(offsetof(FOnlineLinkId, Version) == 16, "Offset mismatch for FOnlineLinkId::Version");
