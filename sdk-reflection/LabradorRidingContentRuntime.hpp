#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LabradorRidingContentRuntime
{
    struct LabradorPlayerLayerAnimInstance
    {
        static constexpr std::string_view Name = "LabradorPlayerLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance_Riding";
        struct Offsets
        {
            static constexpr std::uintptr_t AlphaValue = 0xA00;
            static constexpr std::uintptr_t CurrentCurveValue = 0xA08;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0xA10;
            static constexpr std::uintptr_t bShouldPlayStopBackwards = 0xA11;
            static constexpr std::uintptr_t bIsJumping_BP = 0xA12;
            static constexpr std::uintptr_t bIsFalling_BP = 0xA13;
            static constexpr std::uintptr_t bStateRuleJumpLandMoving = 0xA14;
            static constexpr std::uintptr_t bIsRunning = 0xA15;
            static constexpr std::uintptr_t bIsBoosting_BP = 0xA16;
            static constexpr std::uintptr_t bIsLeaningRight = 0xA17;
            static constexpr std::uintptr_t bStateRuleFallIdle = 0xA18;
            static constexpr std::uintptr_t bStateRuleIdleMoving = 0xA19;
            static constexpr std::uintptr_t bIdleToMovement = 0xA1A;
            static constexpr std::uintptr_t bMovementToIdle = 0xA1B;
            static constexpr std::uintptr_t bIdleToStartled = 0xA1C;
            static constexpr std::uintptr_t bLandToMovement = 0xA1D;
            static constexpr std::uintptr_t CurrentCurve = 0xA20;
            static constexpr std::uintptr_t AimLeanSwitchThresholdAngleOffset = 0xA28;
            static constexpr std::uintptr_t MaxLeanAngle = 0xA30;
            static constexpr std::uintptr_t AimLeanSwitchThresholdAngle = 0xA38;
            static constexpr std::uintptr_t LeanfromAngle_FallOff = 0xA40;
            static constexpr std::uintptr_t LeanfromAngle = 0xA48;
            static constexpr std::uintptr_t LabradorRidingPlayerBoostNMAnimMontage = 0xA50;
            static constexpr std::uintptr_t LabradorRunBoundingBoostMountedMAnimMontage = 0xA58;
            static constexpr std::uintptr_t ChooserLocomotion = 0xA60;
            static constexpr std::uintptr_t Locomotion_Output_Data = 0xA68;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"AlphaValue", 0xA00, "FloatProperty"},
            {"CurrentCurveValue", 0xA08, "DoubleProperty"},
            {"bIsSurfaceSwimming", 0xA10, "BoolProperty"},
            {"bShouldPlayStopBackwards", 0xA11, "BoolProperty"},
            {"bIsJumping_BP", 0xA12, "BoolProperty"},
            {"bIsFalling_BP", 0xA13, "BoolProperty"},
            {"bStateRuleJumpLandMoving", 0xA14, "BoolProperty"},
            {"bIsRunning", 0xA15, "BoolProperty"},
            {"bIsBoosting_BP", 0xA16, "BoolProperty"},
            {"bIsLeaningRight", 0xA17, "BoolProperty"},
            {"bStateRuleFallIdle", 0xA18, "BoolProperty"},
            {"bStateRuleIdleMoving", 0xA19, "BoolProperty"},
            {"bIdleToMovement", 0xA1A, "BoolProperty"},
            {"bMovementToIdle", 0xA1B, "BoolProperty"},
            {"bIdleToStartled", 0xA1C, "BoolProperty"},
            {"bLandToMovement", 0xA1D, "BoolProperty"},
            {"CurrentCurve", 0xA20, "NameProperty"},
            {"AimLeanSwitchThresholdAngleOffset", 0xA28, "DoubleProperty"},
            {"MaxLeanAngle", 0xA30, "DoubleProperty"},
            {"AimLeanSwitchThresholdAngle", 0xA38, "DoubleProperty"},
            {"LeanfromAngle_FallOff", 0xA40, "ObjectProperty"},
            {"LeanfromAngle", 0xA48, "ObjectProperty"},
            {"LabradorRidingPlayerBoostNMAnimMontage", 0xA50, "ObjectProperty"},
            {"LabradorRunBoundingBoostMountedMAnimMontage", 0xA58, "ObjectProperty"},
            {"ChooserLocomotion", 0xA60, "ObjectProperty"},
            {"Locomotion_Output_Data", 0xA68, "StructProperty"},
        }};
    };

    struct LabradorRidingFunctionLibrary
    {
        static constexpr std::string_view Name = "LabradorRidingFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
