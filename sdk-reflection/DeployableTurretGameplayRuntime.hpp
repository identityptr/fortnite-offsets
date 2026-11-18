#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeployableTurretGameplayRuntime
{
    struct DeployableTurretAnimInstance
    {
        static constexpr std::string_view Name = "DeployableTurretAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bFallAndDeployToDeactivated = 0x260;
            static constexpr std::uintptr_t bIsAggro = 0x260;
            static constexpr std::uintptr_t bIsAttacking = 0x260;
            static constexpr std::uintptr_t bIsDeactivated = 0x260;
            static constexpr std::uintptr_t bIsScanning = 0x260;
            static constexpr std::uintptr_t bIsTracking = 0x260;
            static constexpr std::uintptr_t bIsWindDown = 0x260;
            static constexpr std::uintptr_t bIsWindUp = 0x260;
            static constexpr std::uintptr_t bAggroToFire = 0x261;
            static constexpr std::uintptr_t bFallAndDeployToScan = 0x261;
            static constexpr std::uintptr_t bInterruptibleCurveOverThreshold = 0x261;
            static constexpr std::uintptr_t bTurnEndCurveOverThreshold = 0x261;
            static constexpr std::uintptr_t InterruptibleCurveName = 0x264;
            static constexpr std::uintptr_t InterruptibleCurveThreshold = 0x268;
            static constexpr std::uintptr_t TurnEndCurveName = 0x26C;
            static constexpr std::uintptr_t TurnEndCurveThreshold = 0x270;
            static constexpr std::uintptr_t AimRotationInComponentSpace = 0x278;
            static constexpr std::uintptr_t SurfaceRotation = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bFallAndDeployToDeactivated", 0x260, "BoolProperty"},
            {"bIsAggro", 0x260, "BoolProperty"},
            {"bIsAttacking", 0x260, "BoolProperty"},
            {"bIsDeactivated", 0x260, "BoolProperty"},
            {"bIsScanning", 0x260, "BoolProperty"},
            {"bIsTracking", 0x260, "BoolProperty"},
            {"bIsWindDown", 0x260, "BoolProperty"},
            {"bIsWindUp", 0x260, "BoolProperty"},
            {"bAggroToFire", 0x261, "BoolProperty"},
            {"bFallAndDeployToScan", 0x261, "BoolProperty"},
            {"bInterruptibleCurveOverThreshold", 0x261, "BoolProperty"},
            {"bTurnEndCurveOverThreshold", 0x261, "BoolProperty"},
            {"InterruptibleCurveName", 0x264, "NameProperty"},
            {"InterruptibleCurveThreshold", 0x268, "FloatProperty"},
            {"TurnEndCurveName", 0x26C, "NameProperty"},
            {"TurnEndCurveThreshold", 0x270, "FloatProperty"},
            {"AimRotationInComponentSpace", 0x278, "StructProperty"},
            {"SurfaceRotation", 0x290, "StructProperty"},
        }};
    };

    struct DeployableTurretLibrary
    {
        static constexpr std::string_view Name = "DeployableTurretLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
