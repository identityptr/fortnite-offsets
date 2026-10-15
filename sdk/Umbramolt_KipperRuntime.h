/**
 * decamp dumper generated SDK
 * Package: /Script/Umbramolt_KipperRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Umbramolt_KipperRuntime.Umbramolt_KipperAttributeSet
// Kind: Class; super: FortAttributeSet
class UUmbramolt_KipperAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t DamageMultiplier[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUmbramolt_KipperAttributeSet, DamageMultiplier) == 72, "Offset mismatch for UUmbramolt_KipperAttributeSet::DamageMultiplier");
