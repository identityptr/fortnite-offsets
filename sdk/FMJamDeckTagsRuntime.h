/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamDeckTagsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamDeckTagsRuntime.JamDeckTagsAsset
// Kind: Class; super: Object
class UJamDeckTagsAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PermitJamDeckTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RestrictJamDeckTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t AlwaysSpawnDecksTag[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamDeckTagsAsset, PermitJamDeckTag) == 40, "Offset mismatch for UJamDeckTagsAsset::PermitJamDeckTag");
static_assert(offsetof(UJamDeckTagsAsset, RestrictJamDeckTag) == 44, "Offset mismatch for UJamDeckTagsAsset::RestrictJamDeckTag");
static_assert(offsetof(UJamDeckTagsAsset, AlwaysSpawnDecksTag) == 48, "Offset mismatch for UJamDeckTagsAsset::AlwaysSpawnDecksTag");
