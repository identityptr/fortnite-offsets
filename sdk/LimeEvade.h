/**
 * decamp dumper generated SDK
 * Package: /Script/LimeEvade
 */
#pragma once
#include "Basic.h"

// /Script/LimeEvade.FortUserOptionComponent_LimeEvade
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_LimeEvade
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t bAllowEvade; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0151
    std::uint8_t AllowEvade_DataRegistry[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUserOptionComponent_LimeEvade, bAllowEvade) == 336, "Offset mismatch for UFortUserOptionComponent_LimeEvade::bAllowEvade");
static_assert(offsetof(UFortUserOptionComponent_LimeEvade, AllowEvade_DataRegistry) == 344, "Offset mismatch for UFortUserOptionComponent_LimeEvade::AllowEvade_DataRegistry");
