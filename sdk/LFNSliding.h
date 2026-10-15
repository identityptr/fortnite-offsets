/**
 * decamp dumper generated SDK
 * Package: /Script/LFNSliding
 */
#pragma once
#include "Basic.h"

// /Script/LFNSliding.LFNControllerComponent_Sliding
// Kind: Class; super: FortControllerComponent_Sliding
class ULFNControllerComponent_Sliding
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    std::uint8_t StealthTag[0x1]; // 0x0248 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNControllerComponent_Sliding, StealthTag) == 584, "Offset mismatch for ULFNControllerComponent_Sliding::StealthTag");
