/**
 * decamp dumper generated SDK
 * Package: /Script/FancyMopGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FancyMopGameplayRuntime.FancyMop_PlayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFancyMop_PlayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t UpperBodyTwistRotator[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsGrindRail; // 0x1188 (Size: 0x1, Type: BoolProperty)
    // 0x1188 BoolProperty bIsIceFire (shared storage)
    // 0x1188 BoolProperty bIsIceFireFallEnd (shared storage)
    // 0x1188 BoolProperty bIsIceFireFallStart (shared storage)
    // 0x1188 BoolProperty bIsIceFireToIdle (shared storage)
    // 0x1188 BoolProperty bIsIceFireToSprint (shared storage)
    // 0x1188 BoolProperty bIsIceFireUpperBody (shared storage)
    // 0x1188 BoolProperty bIsUpperBody (shared storage)
    std::uint8_t bIsFireEndExitUnexpectedly; // 0x1189 (Size: 0x1, Type: BoolProperty)
    // 0x1189 BoolProperty bIsFireExitUnexpectedly (shared storage)
    // 0x1189 BoolProperty bIsFromIceFireEndState (shared storage)
    // 0x1189 BoolProperty bIsIceFireFullBodyGround (shared storage)
    // 0x1189 BoolProperty bIsIceFireFullBodyGroundSprint (shared storage)
    // 0x1189 BoolProperty bIsTrFromFireEndIdle (shared storage)
    // 0x1189 BoolProperty bIsTrFromFireEndLoco (shared storage)
    // 0x1189 BoolProperty bRockThrow_01 (shared storage)
    std::uint8_t bIsCrouchMovingLocal; // 0x118A (Size: 0x1, Type: BoolProperty)
    // 0x118A BoolProperty bRockThrowExit (shared storage)
    // 0x118A BoolProperty bRockThrow_02 (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x118B
    float PunchAim; // 0x118C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveName_MeleeTwist[0x4]; // 0x1190 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_TurnEnd[0x4]; // 0x1194 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_Interruptible[0x4]; // 0x1198 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_UserCurve01[0x4]; // 0x119C (Size: 0x4, Type: NameProperty)
    FName CurveName_UserCurve02; // 0x11A0 (Size: 0x8, Type: NameProperty)
    FString MontageName_FancyMop_Wall_Summon_Sprint_M; // 0x11A8 (Size: 0x10, Type: StrProperty)
    FString MontageName_FancyMop_ThrowRock_M; // 0x11B8 (Size: 0x10, Type: StrProperty)
    FString MontageName_CantDoThat; // 0x11C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDoOnceFlipFlop; // 0x11D8 (Size: 0x1, Type: BoolProperty)
    // 0x11D8 BoolProperty bDoOnce_SetIsIceFire (shared storage)
    // 0x11D8 BoolProperty bFlipFlopAB (shared storage)
};

static_assert(offsetof(UFancyMop_PlayerAnimInstance, UpperBodyTwistRotator) == 4464, "Offset mismatch for UFancyMop_PlayerAnimInstance::UpperBodyTwistRotator");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, bIsGrindRail) == 4488, "Offset mismatch for UFancyMop_PlayerAnimInstance::bIsGrindRail");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, bIsFireEndExitUnexpectedly) == 4489, "Offset mismatch for UFancyMop_PlayerAnimInstance::bIsFireEndExitUnexpectedly");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, bIsCrouchMovingLocal) == 4490, "Offset mismatch for UFancyMop_PlayerAnimInstance::bIsCrouchMovingLocal");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, PunchAim) == 4492, "Offset mismatch for UFancyMop_PlayerAnimInstance::PunchAim");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, CurveName_MeleeTwist) == 4496, "Offset mismatch for UFancyMop_PlayerAnimInstance::CurveName_MeleeTwist");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, CurveName_TurnEnd) == 4500, "Offset mismatch for UFancyMop_PlayerAnimInstance::CurveName_TurnEnd");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, CurveName_Interruptible) == 4504, "Offset mismatch for UFancyMop_PlayerAnimInstance::CurveName_Interruptible");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, CurveName_UserCurve01) == 4508, "Offset mismatch for UFancyMop_PlayerAnimInstance::CurveName_UserCurve01");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, CurveName_UserCurve02) == 4512, "Offset mismatch for UFancyMop_PlayerAnimInstance::CurveName_UserCurve02");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, MontageName_FancyMop_Wall_Summon_Sprint_M) == 4520, "Offset mismatch for UFancyMop_PlayerAnimInstance::MontageName_FancyMop_Wall_Summon_Sprint_M");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, MontageName_FancyMop_ThrowRock_M) == 4536, "Offset mismatch for UFancyMop_PlayerAnimInstance::MontageName_FancyMop_ThrowRock_M");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, MontageName_CantDoThat) == 4552, "Offset mismatch for UFancyMop_PlayerAnimInstance::MontageName_CantDoThat");
static_assert(offsetof(UFancyMop_PlayerAnimInstance, bDoOnceFlipFlop) == 4568, "Offset mismatch for UFancyMop_PlayerAnimInstance::bDoOnceFlipFlop");
