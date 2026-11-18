#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LabradorRuntime
{
    struct FortAIFaunaAnimInstance_Labrador
    {
        static constexpr std::string_view Name = "FortAIFaunaAnimInstance_Labrador";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIFaunaAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHighVelocity = 0x630;
            static constexpr std::uintptr_t bIsInterruptible = 0x631;
            static constexpr std::uintptr_t bLocoToIdle = 0x632;
            static constexpr std::uintptr_t bIdleToLoco = 0x633;
            static constexpr std::uintptr_t bJumpStartToJumpLoop = 0x634;
            static constexpr std::uintptr_t bJumpLandToMovement = 0x635;
            static constexpr std::uintptr_t bIsRunning = 0x636;
            static constexpr std::uintptr_t bIdleToFalling = 0x637;
            static constexpr std::uintptr_t bToppledOnGround = 0x638;
            static constexpr std::uintptr_t bTransitionToLand = 0x639;
            static constexpr std::uintptr_t TargetDistance = 0x63C;
            static constexpr std::uintptr_t FPWeight = 0x640;
            static constexpr std::uintptr_t bTargetIsClose = 0x644;
            static constexpr std::uintptr_t bIdleToMovement = 0x645;
            static constexpr std::uintptr_t bIdleToStartled = 0x646;
            static constexpr std::uintptr_t bLandToMovement = 0x647;
            static constexpr std::uintptr_t bIsToppled = 0x648;
            static constexpr std::uintptr_t bIsLeaking = 0x649;
            static constexpr std::uintptr_t bJustLanded = 0x64A;
            static constexpr std::uintptr_t MinHighVelocityMagnitude = 0x64C;
            static constexpr std::uintptr_t MaxInterruptibleCurveValue = 0x650;
            static constexpr std::uintptr_t LocoIdleTransitionThreshold = 0x654;
            static constexpr std::uintptr_t RunSpeedThreshold = 0x658;
            static constexpr std::uintptr_t JumpLandToMovementInterruptibleThreshold = 0x65C;
            static constexpr std::uintptr_t MinTargetIsCloseDistance = 0x660;
            static constexpr std::uintptr_t CurveName_Interruptible = 0x664;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"bHighVelocity", 0x630, "BoolProperty"},
            {"bIsInterruptible", 0x631, "BoolProperty"},
            {"bLocoToIdle", 0x632, "BoolProperty"},
            {"bIdleToLoco", 0x633, "BoolProperty"},
            {"bJumpStartToJumpLoop", 0x634, "BoolProperty"},
            {"bJumpLandToMovement", 0x635, "BoolProperty"},
            {"bIsRunning", 0x636, "BoolProperty"},
            {"bIdleToFalling", 0x637, "BoolProperty"},
            {"bToppledOnGround", 0x638, "BoolProperty"},
            {"bTransitionToLand", 0x639, "BoolProperty"},
            {"TargetDistance", 0x63C, "FloatProperty"},
            {"FPWeight", 0x640, "FloatProperty"},
            {"bTargetIsClose", 0x644, "BoolProperty"},
            {"bIdleToMovement", 0x645, "BoolProperty"},
            {"bIdleToStartled", 0x646, "BoolProperty"},
            {"bLandToMovement", 0x647, "BoolProperty"},
            {"bIsToppled", 0x648, "BoolProperty"},
            {"bIsLeaking", 0x649, "BoolProperty"},
            {"bJustLanded", 0x64A, "BoolProperty"},
            {"MinHighVelocityMagnitude", 0x64C, "FloatProperty"},
            {"MaxInterruptibleCurveValue", 0x650, "FloatProperty"},
            {"LocoIdleTransitionThreshold", 0x654, "FloatProperty"},
            {"RunSpeedThreshold", 0x658, "FloatProperty"},
            {"JumpLandToMovementInterruptibleThreshold", 0x65C, "FloatProperty"},
            {"MinTargetIsCloseDistance", 0x660, "FloatProperty"},
            {"CurveName_Interruptible", 0x664, "NameProperty"},
        }};
    };

    struct FortLabradorComponent_Telemetry
    {
        static constexpr std::string_view Name = "FortLabradorComponent_Telemetry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIComponent_Telemetry";
        struct Offsets
        {
            static constexpr std::uintptr_t bWasAwake = 0x128;
            static constexpr std::uintptr_t InstigatorAwakeNetIDString = 0x130;
            static constexpr std::uintptr_t DespawnReason = 0x140;
            static constexpr std::uintptr_t DamageReceivedFromPlayers = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bWasAwake", 0x128, "BoolProperty"},
            {"InstigatorAwakeNetIDString", 0x130, "StrProperty"},
            {"DespawnReason", 0x140, "EnumProperty"},
            {"DamageReceivedFromPlayers", 0x144, "FloatProperty"},
        }};
    };

}
