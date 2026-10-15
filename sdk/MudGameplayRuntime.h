/**
 * decamp dumper generated SDK
 * Package: /Script/MudGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MudGameplayRuntime.FortPawnComponent_Mud
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_Mud
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CurieFireTag[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SlidingTag[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    std::uint8_t SprintingTag[0x4]; // 0x00D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t AttachParentCoveredEventTag[0x4]; // 0x00D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t CreatureSprintingTag[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_Mud, CurieFireTag) == 200, "Offset mismatch for UFortPawnComponent_Mud::CurieFireTag");
static_assert(offsetof(UFortPawnComponent_Mud, SlidingTag) == 204, "Offset mismatch for UFortPawnComponent_Mud::SlidingTag");
static_assert(offsetof(UFortPawnComponent_Mud, SprintingTag) == 208, "Offset mismatch for UFortPawnComponent_Mud::SprintingTag");
static_assert(offsetof(UFortPawnComponent_Mud, AttachParentCoveredEventTag) == 212, "Offset mismatch for UFortPawnComponent_Mud::AttachParentCoveredEventTag");
static_assert(offsetof(UFortPawnComponent_Mud, CreatureSprintingTag) == 216, "Offset mismatch for UFortPawnComponent_Mud::CreatureSprintingTag");
