#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RocketRamGameplayRuntime
{
    struct RocketRamItemLayerAnimInstance
    {
        static constexpr std::string_view Name = "RocketRamItemLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRRWindUp = 0x5F0;
            static constexpr std::uintptr_t bIsRRSlowAcceleration = 0x5F1;
            static constexpr std::uintptr_t bIsRRActiveThrust = 0x5F2;
            static constexpr std::uintptr_t bIsRRFreeFall = 0x5F3;
            static constexpr std::uintptr_t bIsRRFastFreeFall = 0x5F4;
            static constexpr std::uintptr_t bIsRRBraking = 0x5F5;
            static constexpr std::uintptr_t bIsRRRecovery = 0x5F6;
            static constexpr std::uintptr_t bIsRRRecoveryDelayed = 0x5F7;
            static constexpr std::uintptr_t bIsRRRecoveryHalfSecDelay = 0x5F8;
            static constexpr std::uintptr_t bIsRROff = 0x5F9;
            static constexpr std::uintptr_t bIsFalling = 0x5FA;
            static constexpr std::uintptr_t bIsSliding = 0x5FB;
            static constexpr std::uintptr_t bIsCrouchingLocal = 0x5FC;
            static constexpr std::uintptr_t XInput = 0x600;
            static constexpr std::uintptr_t YInput = 0x604;
            static constexpr std::uintptr_t Pitch = 0x608;
            static constexpr std::uintptr_t Yaw = 0x60C;
            static constexpr std::uintptr_t WallImpactPitch = 0x610;
            static constexpr std::uintptr_t WallImpactYaw = 0x614;
            static constexpr std::uintptr_t WeaponLaunchDirection = 0x618;
            static constexpr std::uintptr_t bIsBoneRotOn = 0x630;
            static constexpr std::uintptr_t bIsPitchAndYawRot = 0x631;
            static constexpr std::uintptr_t bIsNoMortar = 0x632;
            static constexpr std::uintptr_t bIsGoingUp = 0x633;
            static constexpr std::uintptr_t bIsJumpFromGround = 0x634;
            static constexpr std::uintptr_t bIsMoving2DLocal = 0x635;
            static constexpr std::uintptr_t AdditiveSquatAlpha = 0x638;
            static constexpr std::uintptr_t JumpAddCurveAlpha = 0x63C;
            static constexpr std::uintptr_t ArmsHeadAddAlpha = 0x640;
            static constexpr std::uintptr_t JumpAddOffsetAlpha = 0x644;
            static constexpr std::uintptr_t bIsImpactWallBackup = 0x648;
            static constexpr std::uintptr_t bIsLandingDetected = 0x649;
            static constexpr std::uintptr_t bIsWallImpact = 0x64A;
            static constexpr std::uintptr_t bIsApexTimerEnd = 0x64B;
            static constexpr std::uintptr_t FortPlayerPawn = 0x650;
            static constexpr std::uintptr_t WeaponRocketRam = 0x658;
            static constexpr std::uintptr_t FBImpactGroundStateAlpha = 0x660;
            static constexpr std::uintptr_t bFBGroundSlideToFBWait = 0x664;
            static constexpr std::uintptr_t bFBThrustingToFBApex = 0x665;
            static constexpr std::uintptr_t bFBApexToFBToMortar = 0x666;
            static constexpr std::uintptr_t bFBOffGroundToFBImpactGround = 0x667;
            static constexpr std::uintptr_t bFBOffWallToFBImpactWall = 0x668;
            static constexpr std::uintptr_t bFBDetectGroundToFBToImpactGround = 0x669;
            static constexpr std::uintptr_t FBJumpStateAlpha = 0x66C;
            static constexpr std::uintptr_t FBToApexStateAlpha = 0x670;
            static constexpr std::uintptr_t bFBDetectSlideToFBToSlide = 0x674;
            static constexpr std::uintptr_t bFBOffToFBWait = 0x675;
            static constexpr std::uintptr_t UBPullLeverStateAlpha = 0x678;
            static constexpr std::uintptr_t UBSquatStateAlpha = 0x67C;
            static constexpr std::uintptr_t UBJumpStateAlpha = 0x680;
            static constexpr std::uintptr_t bUBSquatToUBJump = 0x684;
            static constexpr std::uintptr_t bUBJumpToUBWait = 0x685;
            static constexpr std::uintptr_t bUBJumpToUBToGroundImpact = 0x686;
            static constexpr std::uintptr_t bUBWaitToUBImpactGround = 0x687;
            static constexpr std::uintptr_t bUBOffToUBWait = 0x688;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"bIsRRWindUp", 0x5F0, "BoolProperty"},
            {"bIsRRSlowAcceleration", 0x5F1, "BoolProperty"},
            {"bIsRRActiveThrust", 0x5F2, "BoolProperty"},
            {"bIsRRFreeFall", 0x5F3, "BoolProperty"},
            {"bIsRRFastFreeFall", 0x5F4, "BoolProperty"},
            {"bIsRRBraking", 0x5F5, "BoolProperty"},
            {"bIsRRRecovery", 0x5F6, "BoolProperty"},
            {"bIsRRRecoveryDelayed", 0x5F7, "BoolProperty"},
            {"bIsRRRecoveryHalfSecDelay", 0x5F8, "BoolProperty"},
            {"bIsRROff", 0x5F9, "BoolProperty"},
            {"bIsFalling", 0x5FA, "BoolProperty"},
            {"bIsSliding", 0x5FB, "BoolProperty"},
            {"bIsCrouchingLocal", 0x5FC, "BoolProperty"},
            {"XInput", 0x600, "FloatProperty"},
            {"YInput", 0x604, "FloatProperty"},
            {"Pitch", 0x608, "FloatProperty"},
            {"Yaw", 0x60C, "FloatProperty"},
            {"WallImpactPitch", 0x610, "FloatProperty"},
            {"WallImpactYaw", 0x614, "FloatProperty"},
            {"WeaponLaunchDirection", 0x618, "StructProperty"},
            {"bIsBoneRotOn", 0x630, "BoolProperty"},
            {"bIsPitchAndYawRot", 0x631, "BoolProperty"},
            {"bIsNoMortar", 0x632, "BoolProperty"},
            {"bIsGoingUp", 0x633, "BoolProperty"},
            {"bIsJumpFromGround", 0x634, "BoolProperty"},
            {"bIsMoving2DLocal", 0x635, "BoolProperty"},
            {"AdditiveSquatAlpha", 0x638, "FloatProperty"},
            {"JumpAddCurveAlpha", 0x63C, "FloatProperty"},
            {"ArmsHeadAddAlpha", 0x640, "FloatProperty"},
            {"JumpAddOffsetAlpha", 0x644, "FloatProperty"},
            {"bIsImpactWallBackup", 0x648, "BoolProperty"},
            {"bIsLandingDetected", 0x649, "BoolProperty"},
            {"bIsWallImpact", 0x64A, "BoolProperty"},
            {"bIsApexTimerEnd", 0x64B, "BoolProperty"},
            {"FortPlayerPawn", 0x650, "ObjectProperty"},
            {"WeaponRocketRam", 0x658, "ObjectProperty"},
            {"FBImpactGroundStateAlpha", 0x660, "FloatProperty"},
            {"bFBGroundSlideToFBWait", 0x664, "BoolProperty"},
            {"bFBThrustingToFBApex", 0x665, "BoolProperty"},
            {"bFBApexToFBToMortar", 0x666, "BoolProperty"},
            {"bFBOffGroundToFBImpactGround", 0x667, "BoolProperty"},
            {"bFBOffWallToFBImpactWall", 0x668, "BoolProperty"},
            {"bFBDetectGroundToFBToImpactGround", 0x669, "BoolProperty"},
            {"FBJumpStateAlpha", 0x66C, "FloatProperty"},
            {"FBToApexStateAlpha", 0x670, "FloatProperty"},
            {"bFBDetectSlideToFBToSlide", 0x674, "BoolProperty"},
            {"bFBOffToFBWait", 0x675, "BoolProperty"},
            {"UBPullLeverStateAlpha", 0x678, "FloatProperty"},
            {"UBSquatStateAlpha", 0x67C, "FloatProperty"},
            {"UBJumpStateAlpha", 0x680, "FloatProperty"},
            {"bUBSquatToUBJump", 0x684, "BoolProperty"},
            {"bUBJumpToUBWait", 0x685, "BoolProperty"},
            {"bUBJumpToUBToGroundImpact", 0x686, "BoolProperty"},
            {"bUBWaitToUBImpactGround", 0x687, "BoolProperty"},
            {"bUBOffToUBWait", 0x688, "BoolProperty"},
        }};
    };

}
