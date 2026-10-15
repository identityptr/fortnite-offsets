/**
 * decamp dumper generated SDK
 * Package: /Script/GatedItemGrantsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GatedItemGrantsRuntime.FortGatedItemGrantTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortGatedItemGrantTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ConditionalReactionGrant[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGatedItemGrantTableRow, ConditionalReactionGrant) == 8, "Offset mismatch for FFortGatedItemGrantTableRow::ConditionalReactionGrant");

// /Script/GatedItemGrantsRuntime.FortControllerComponent_GatedItemGranter
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_GatedItemGranter
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t ItemGrantsRegistry[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    TArray<void*> CachedObjects; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_GatedItemGranter, ItemGrantsRegistry) == 200, "Offset mismatch for UFortControllerComponent_GatedItemGranter::ItemGrantsRegistry");
static_assert(offsetof(UFortControllerComponent_GatedItemGranter, CachedObjects) == 256, "Offset mismatch for UFortControllerComponent_GatedItemGranter::CachedObjects");
