#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UncleBrollyRuntime
{
    struct UncleBrollyItemLayerAnimInstance
    {
        static constexpr std::string_view Name = "UncleBrollyItemLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t UmbrellaGliderOpenStateDataArray = 0x5F0;
            static constexpr std::uintptr_t WrapTranslation = 0x608;
            static constexpr std::uintptr_t WrapRotation = 0x620;
            static constexpr std::uintptr_t RootRotationOffset = 0x638;
            static constexpr std::uintptr_t LandingPredictedTimer = 0x650;
            static constexpr std::uintptr_t bShouldUpdateYawCorrection = 0x654;
            static constexpr std::uintptr_t bWasAcceleratingBeforeDodge = 0x655;
            static constexpr std::uintptr_t UncleBrollyDeployCurveValue = 0x658;
            static constexpr std::uintptr_t DashChargeTier = 0x65C;
            static constexpr std::uintptr_t DashChargeAdditivePlayrate = 0x660;
            static constexpr std::uintptr_t bIsUmbrellaFailing = 0x664;
            static constexpr std::uintptr_t bIsMeleeGuarding = 0x665;
            static constexpr std::uintptr_t bIsSprinting = 0x666;
            static constexpr std::uintptr_t bIsInAir = 0x667;
            static constexpr std::uintptr_t bIsLandingPredicted = 0x668;
            static constexpr std::uintptr_t bIsJumping = 0x669;
            static constexpr std::uintptr_t bIsDodging = 0x66A;
            static constexpr std::uintptr_t bIsDodgingEast = 0x66B;
            static constexpr std::uintptr_t bIsDodgingSouth = 0x66C;
            static constexpr std::uintptr_t bIsDodgingWest = 0x66D;
            static constexpr std::uintptr_t bIsDashing = 0x66E;
            static constexpr std::uintptr_t bIsDashCharging = 0x66F;
            static constexpr std::uintptr_t bIsDashPredictingEnd = 0x670;
            static constexpr std::uintptr_t bIsChargeTier1 = 0x671;
            static constexpr std::uintptr_t bIsChargeTier2 = 0x672;
            static constexpr std::uintptr_t bIsChargeTier3 = 0x673;
            static constexpr std::uintptr_t bMeleeGuardingOrUmbrellaFailing = 0x674;
            static constexpr std::uintptr_t bTransition_Default_to_GuardLoop = 0x675;
            static constexpr std::uintptr_t bTransition_Default_to_GuardIntro = 0x676;
            static constexpr std::uintptr_t bTransition_GuardIntro_to_Default = 0x677;
            static constexpr std::uintptr_t bUpperBodyShouldPassThrough = 0x678;
            static constexpr std::uintptr_t bUmbrellaGliderIsOpen = 0x679;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"UmbrellaGliderOpenStateDataArray", 0x5F0, "StructProperty"},
            {"WrapTranslation", 0x608, "StructProperty"},
            {"WrapRotation", 0x620, "StructProperty"},
            {"RootRotationOffset", 0x638, "StructProperty"},
            {"LandingPredictedTimer", 0x650, "FloatProperty"},
            {"bShouldUpdateYawCorrection", 0x654, "BoolProperty"},
            {"bWasAcceleratingBeforeDodge", 0x655, "BoolProperty"},
            {"UncleBrollyDeployCurveValue", 0x658, "FloatProperty"},
            {"DashChargeTier", 0x65C, "FloatProperty"},
            {"DashChargeAdditivePlayrate", 0x660, "FloatProperty"},
            {"bIsUmbrellaFailing", 0x664, "BoolProperty"},
            {"bIsMeleeGuarding", 0x665, "BoolProperty"},
            {"bIsSprinting", 0x666, "BoolProperty"},
            {"bIsInAir", 0x667, "BoolProperty"},
            {"bIsLandingPredicted", 0x668, "BoolProperty"},
            {"bIsJumping", 0x669, "BoolProperty"},
            {"bIsDodging", 0x66A, "BoolProperty"},
            {"bIsDodgingEast", 0x66B, "BoolProperty"},
            {"bIsDodgingSouth", 0x66C, "BoolProperty"},
            {"bIsDodgingWest", 0x66D, "BoolProperty"},
            {"bIsDashing", 0x66E, "BoolProperty"},
            {"bIsDashCharging", 0x66F, "BoolProperty"},
            {"bIsDashPredictingEnd", 0x670, "BoolProperty"},
            {"bIsChargeTier1", 0x671, "BoolProperty"},
            {"bIsChargeTier2", 0x672, "BoolProperty"},
            {"bIsChargeTier3", 0x673, "BoolProperty"},
            {"bMeleeGuardingOrUmbrellaFailing", 0x674, "BoolProperty"},
            {"bTransition_Default_to_GuardLoop", 0x675, "BoolProperty"},
            {"bTransition_Default_to_GuardIntro", 0x676, "BoolProperty"},
            {"bTransition_GuardIntro_to_Default", 0x677, "BoolProperty"},
            {"bUpperBodyShouldPassThrough", 0x678, "BoolProperty"},
            {"bUmbrellaGliderIsOpen", 0x679, "BoolProperty"},
        }};
    };

    struct UncleBrollyMantisWeaponAnimInstance
    {
        static constexpr std::string_view Name = "UncleBrollyMantisWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t UncleBrollyItemLayer = 0x260;
            static constexpr std::uintptr_t UmbrellaRotation = 0x268;
            static constexpr std::uintptr_t UmbrellaSpinSpeed = 0x280;
            static constexpr std::uintptr_t BlockDeployEndPlayrate = 0x284;
            static constexpr std::uintptr_t BlockDeployEndStartPosition = 0x288;
            static constexpr std::uintptr_t bIsDodging = 0x28C;
            static constexpr std::uintptr_t bIsPlayingMeleeAnim = 0x28D;
            static constexpr std::uintptr_t bIsUmbrellaFailing = 0x28E;
            static constexpr std::uintptr_t bIsMeleeGuarding = 0x28F;
            static constexpr std::uintptr_t bIsInAir = 0x290;
            static constexpr std::uintptr_t bIsDashing = 0x291;
            static constexpr std::uintptr_t bIsSprinting = 0x292;
            static constexpr std::uintptr_t bIsPredictingEnd = 0x293;
            static constexpr std::uintptr_t bIsDashCharging = 0x294;
            static constexpr std::uintptr_t bIsDashPredictingEnd = 0x295;
            static constexpr std::uintptr_t bInAirAndMeleeGuarding = 0x296;
            static constexpr std::uintptr_t bTransition_Default_to_DeployStart = 0x297;
            static constexpr std::uintptr_t bTransition_DeployStart_to_Default = 0x298;
            static constexpr std::uintptr_t bTransition_Fail_to_FailToDeploy = 0x299;
            static constexpr std::uintptr_t bTransition_FailLoop_to_DeployEnd = 0x29A;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"UncleBrollyItemLayer", 0x260, "ClassProperty"},
            {"UmbrellaRotation", 0x268, "StructProperty"},
            {"UmbrellaSpinSpeed", 0x280, "FloatProperty"},
            {"BlockDeployEndPlayrate", 0x284, "FloatProperty"},
            {"BlockDeployEndStartPosition", 0x288, "FloatProperty"},
            {"bIsDodging", 0x28C, "BoolProperty"},
            {"bIsPlayingMeleeAnim", 0x28D, "BoolProperty"},
            {"bIsUmbrellaFailing", 0x28E, "BoolProperty"},
            {"bIsMeleeGuarding", 0x28F, "BoolProperty"},
            {"bIsInAir", 0x290, "BoolProperty"},
            {"bIsDashing", 0x291, "BoolProperty"},
            {"bIsSprinting", 0x292, "BoolProperty"},
            {"bIsPredictingEnd", 0x293, "BoolProperty"},
            {"bIsDashCharging", 0x294, "BoolProperty"},
            {"bIsDashPredictingEnd", 0x295, "BoolProperty"},
            {"bInAirAndMeleeGuarding", 0x296, "BoolProperty"},
            {"bTransition_Default_to_DeployStart", 0x297, "BoolProperty"},
            {"bTransition_DeployStart_to_Default", 0x298, "BoolProperty"},
            {"bTransition_Fail_to_FailToDeploy", 0x299, "BoolProperty"},
            {"bTransition_FailLoop_to_DeployEnd", 0x29A, "BoolProperty"},
        }};
    };

}
