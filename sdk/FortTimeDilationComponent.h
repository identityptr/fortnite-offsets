/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/FortTimeDilationComponent
 */
#pragma once
#include "Basic.h"

// /Game/Athena/FortTimeDilationComponent.FortTimeDilationComponent_C
// Kind: BlueprintGeneratedClass; super: FortGameStateComponent_TimeDilation
class UFortTimeDilationComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* EndGameTimeDilationCurve; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EndGameTimeDilationDuration[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    void* TimeDilationManager; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTimeDilationComponent_C, EndGameTimeDilationCurve) == 192, "Offset mismatch for UFortTimeDilationComponent_C::EndGameTimeDilationCurve");
static_assert(offsetof(UFortTimeDilationComponent_C, EndGameTimeDilationDuration) == 200, "Offset mismatch for UFortTimeDilationComponent_C::EndGameTimeDilationDuration");
static_assert(offsetof(UFortTimeDilationComponent_C, TimeDilationManager) == 240, "Offset mismatch for UFortTimeDilationComponent_C::TimeDilationManager");
