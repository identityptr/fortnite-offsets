#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FancyMopGameplayRuntime
{
    struct FancyMop_PlayerAnimInstance
    {
        static constexpr std::string_view Name = "FancyMop_PlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t UpperBodyTwistRotator = 0x1180;
            static constexpr std::uintptr_t bIsGrindRail = 0x1198;
            static constexpr std::uintptr_t bIsIceFire = 0x1198;
            static constexpr std::uintptr_t bIsIceFireFallEnd = 0x1198;
            static constexpr std::uintptr_t bIsIceFireFallStart = 0x1198;
            static constexpr std::uintptr_t bIsIceFireToIdle = 0x1198;
            static constexpr std::uintptr_t bIsIceFireToSprint = 0x1198;
            static constexpr std::uintptr_t bIsIceFireUpperBody = 0x1198;
            static constexpr std::uintptr_t bIsUpperBody = 0x1198;
            static constexpr std::uintptr_t bIsFireEndExitUnexpectedly = 0x1199;
            static constexpr std::uintptr_t bIsFireExitUnexpectedly = 0x1199;
            static constexpr std::uintptr_t bIsFromIceFireEndState = 0x1199;
            static constexpr std::uintptr_t bIsIceFireFullBodyGround = 0x1199;
            static constexpr std::uintptr_t bIsIceFireFullBodyGroundSprint = 0x1199;
            static constexpr std::uintptr_t bIsTrFromFireEndIdle = 0x1199;
            static constexpr std::uintptr_t bIsTrFromFireEndLoco = 0x1199;
            static constexpr std::uintptr_t bRockThrow_01 = 0x1199;
            static constexpr std::uintptr_t bIsCrouchMovingLocal = 0x119A;
            static constexpr std::uintptr_t bRockThrowExit = 0x119A;
            static constexpr std::uintptr_t bRockThrow_02 = 0x119A;
            static constexpr std::uintptr_t PunchAim = 0x119C;
            static constexpr std::uintptr_t CurveName_MeleeTwist = 0x11A0;
            static constexpr std::uintptr_t CurveName_TurnEnd = 0x11A4;
            static constexpr std::uintptr_t CurveName_Interruptible = 0x11A8;
            static constexpr std::uintptr_t CurveName_UserCurve01 = 0x11AC;
            static constexpr std::uintptr_t CurveName_UserCurve02 = 0x11B0;
            static constexpr std::uintptr_t MontageName_FancyMop_Wall_Summon_Sprint_M = 0x11B8;
            static constexpr std::uintptr_t MontageName_FancyMop_ThrowRock_M = 0x11C8;
            static constexpr std::uintptr_t MontageName_CantDoThat = 0x11D8;
            static constexpr std::uintptr_t bDoOnceFlipFlop = 0x11E8;
            static constexpr std::uintptr_t bDoOnce_SetIsIceFire = 0x11E8;
            static constexpr std::uintptr_t bFlipFlopAB = 0x11E8;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"UpperBodyTwistRotator", 0x1180, "StructProperty"},
            {"bIsGrindRail", 0x1198, "BoolProperty"},
            {"bIsIceFire", 0x1198, "BoolProperty"},
            {"bIsIceFireFallEnd", 0x1198, "BoolProperty"},
            {"bIsIceFireFallStart", 0x1198, "BoolProperty"},
            {"bIsIceFireToIdle", 0x1198, "BoolProperty"},
            {"bIsIceFireToSprint", 0x1198, "BoolProperty"},
            {"bIsIceFireUpperBody", 0x1198, "BoolProperty"},
            {"bIsUpperBody", 0x1198, "BoolProperty"},
            {"bIsFireEndExitUnexpectedly", 0x1199, "BoolProperty"},
            {"bIsFireExitUnexpectedly", 0x1199, "BoolProperty"},
            {"bIsFromIceFireEndState", 0x1199, "BoolProperty"},
            {"bIsIceFireFullBodyGround", 0x1199, "BoolProperty"},
            {"bIsIceFireFullBodyGroundSprint", 0x1199, "BoolProperty"},
            {"bIsTrFromFireEndIdle", 0x1199, "BoolProperty"},
            {"bIsTrFromFireEndLoco", 0x1199, "BoolProperty"},
            {"bRockThrow_01", 0x1199, "BoolProperty"},
            {"bIsCrouchMovingLocal", 0x119A, "BoolProperty"},
            {"bRockThrowExit", 0x119A, "BoolProperty"},
            {"bRockThrow_02", 0x119A, "BoolProperty"},
            {"PunchAim", 0x119C, "FloatProperty"},
            {"CurveName_MeleeTwist", 0x11A0, "NameProperty"},
            {"CurveName_TurnEnd", 0x11A4, "NameProperty"},
            {"CurveName_Interruptible", 0x11A8, "NameProperty"},
            {"CurveName_UserCurve01", 0x11AC, "NameProperty"},
            {"CurveName_UserCurve02", 0x11B0, "NameProperty"},
            {"MontageName_FancyMop_Wall_Summon_Sprint_M", 0x11B8, "StrProperty"},
            {"MontageName_FancyMop_ThrowRock_M", 0x11C8, "StrProperty"},
            {"MontageName_CantDoThat", 0x11D8, "StrProperty"},
            {"bDoOnceFlipFlop", 0x11E8, "BoolProperty"},
            {"bDoOnce_SetIsIceFire", 0x11E8, "BoolProperty"},
            {"bFlipFlopAB", 0x11E8, "BoolProperty"},
        }};
    };

}
