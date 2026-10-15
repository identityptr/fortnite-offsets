/**
 * decamp dumper generated SDK
 * Package: /Script/SouthBulkAIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SouthBulkAIRuntime.SouthBalkAIAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USouthBalkAIAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsMoving; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIdleBreak; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIdle_BP; // 0x1172 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USouthBalkAIAnimInstance, bIsMoving) == 4464, "Offset mismatch for USouthBalkAIAnimInstance::bIsMoving");
static_assert(offsetof(USouthBalkAIAnimInstance, bIsIdleBreak) == 4465, "Offset mismatch for USouthBalkAIAnimInstance::bIsIdleBreak");
static_assert(offsetof(USouthBalkAIAnimInstance, bIsIdle_BP) == 4466, "Offset mismatch for USouthBalkAIAnimInstance::bIsIdle_BP");
