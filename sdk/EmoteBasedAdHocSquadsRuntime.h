/**
 * decamp dumper generated SDK
 * Package: /Script/EmoteBasedAdHocSquadsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EmoteBasedAdHocSquadsRuntime.FortAthenaMutator_EBAHSSquadInfo
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_EBAHSSquadInfo
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t AlwaysDisplaySquadInfo[0x1]; // 0x02E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_EBAHSSquadInfo, AlwaysDisplaySquadInfo) == 736, "Offset mismatch for UFortAthenaMutator_EBAHSSquadInfo::AlwaysDisplaySquadInfo");
