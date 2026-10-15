/**
 * decamp dumper generated SDK
 * Package: /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent
 */
#pragma once
#include "Basic.h"

// /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_Athena_Surface_Parent_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    void* TargetPawn; // 0x0C50 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Debug; // 0x0C58 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGCNL_Athena_Surface_Parent_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_Athena_Surface_Parent_C::UberGraphFrame");
static_assert(offsetof(UGCNL_Athena_Surface_Parent_C, TargetPawn) == 3152, "Offset mismatch for UGCNL_Athena_Surface_Parent_C::TargetPawn");
static_assert(offsetof(UGCNL_Athena_Surface_Parent_C, Debug) == 3160, "Offset mismatch for UGCNL_Athena_Surface_Parent_C::Debug");
