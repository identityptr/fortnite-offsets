/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent
 */
#pragma once
#include "Basic.h"

// /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// Kind: BlueprintGeneratedClass; super: NPC_Pawn_Parent_C
class UNPC_Pawn_Wildlife_Parent_C
{
public:
    std::uint8_t None[0x4000]; // 0x0000 (Size: 0x4000, Type: UnknownProperty)
    std::uint8_t Pad_0000[0x180]; // 0x4000
    std::uint8_t UberGraphFrame[0x18]; // 0x4180 (Size: 0x18, Type: StructProperty)
    void* ConvertComponent; // 0x4198 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x88]; // 0x41A0
    std::uint8_t bCanBeInteractedWithWhileTamed; // 0x4228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2F]; // 0x4229
    std::uint8_t bIsBeingRidden; // 0x4258 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2F]; // 0x4259
    double CurrentEnergy; // 0x4288 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0004[0x78]; // 0x4290
    std::int32_t StuckBouncing_LaunchCount; // 0x4308 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, None) == 0, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::None");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, UberGraphFrame) == 16768, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::UberGraphFrame");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, ConvertComponent) == 16792, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::ConvertComponent");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, bCanBeInteractedWithWhileTamed) == 16936, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::bCanBeInteractedWithWhileTamed");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, bIsBeingRidden) == 16984, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::bIsBeingRidden");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, CurrentEnergy) == 17032, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::CurrentEnergy");
static_assert(offsetof(UNPC_Pawn_Wildlife_Parent_C, StuckBouncing_LaunchCount) == 17160, "Offset mismatch for UNPC_Pawn_Wildlife_Parent_C::StuckBouncing_LaunchCount");
