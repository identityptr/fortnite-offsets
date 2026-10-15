/**
 * decamp dumper generated SDK
 * Package: /Script/MarksmanVisorGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MarksmanVisorGameplayRuntime.FortGameStateComponent_MarksmanVisor
// Kind: Class; super: FortGameStateComponent_FootstepVisualization
class UFortGameStateComponent_MarksmanVisor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnVisorLocalViewTargetPawnsChanged; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t LocalViewTargetPawnsSettleSeconds[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    TArray<void*> VisorLocalViewTargetPawns; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_MarksmanVisor, OnVisorLocalViewTargetPawnsChanged) == 624, "Offset mismatch for UFortGameStateComponent_MarksmanVisor::OnVisorLocalViewTargetPawnsChanged");
static_assert(offsetof(UFortGameStateComponent_MarksmanVisor, LocalViewTargetPawnsSettleSeconds) == 640, "Offset mismatch for UFortGameStateComponent_MarksmanVisor::LocalViewTargetPawnsSettleSeconds");
static_assert(offsetof(UFortGameStateComponent_MarksmanVisor, VisorLocalViewTargetPawns) == 680, "Offset mismatch for UFortGameStateComponent_MarksmanVisor::VisorLocalViewTargetPawns");
