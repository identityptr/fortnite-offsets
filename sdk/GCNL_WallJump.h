/**
 * decamp dumper generated SDK
 * Package: /WallJump/GameplayCues/GCNL_WallJump
 */
#pragma once
#include "Basic.h"

// /WallJump/GameplayCues/GCNL_WallJump.GCNL_WallJump_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_WallJump_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    void* CameraShakeLeft; // 0x0C50 (Size: 0x8, Type: ClassProperty)
    void* CameraShakeRight; // 0x0C58 (Size: 0x8, Type: ClassProperty)
    void* CameraShakeBack; // 0x0C60 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UGCNL_WallJump_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_WallJump_C::UberGraphFrame");
static_assert(offsetof(UGCNL_WallJump_C, CameraShakeLeft) == 3152, "Offset mismatch for UGCNL_WallJump_C::CameraShakeLeft");
static_assert(offsetof(UGCNL_WallJump_C, CameraShakeRight) == 3160, "Offset mismatch for UGCNL_WallJump_C::CameraShakeRight");
static_assert(offsetof(UGCNL_WallJump_C, CameraShakeBack) == 3168, "Offset mismatch for UGCNL_WallJump_C::CameraShakeBack");
