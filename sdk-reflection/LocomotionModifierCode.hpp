#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LocomotionModifierCode
{
    struct FortMovementMode_ExtLocomotionModifier
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLocomotionModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtMovementAttribute";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHeadingTurnRate = 0x3D0;
            static constexpr std::uintptr_t bForceAutoRun = 0x400;
            static constexpr std::uintptr_t SteerSource = 0x401;
            static constexpr std::uintptr_t SteerInputAccelerationThreshold = 0x404;
            static constexpr std::uintptr_t bAllowBackwardSteering = 0x408;
            static constexpr std::uintptr_t RotationRateYaw = 0x410;
            static constexpr std::uintptr_t bOrientRotationToMovement = 0x448;
            static constexpr std::uintptr_t bInfiniteDuration = 0x449;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MaxHeadingTurnRate", 0x3D0, "OptionalProperty"},
            {"bForceAutoRun", 0x400, "BoolProperty"},
            {"SteerSource", 0x401, "EnumProperty"},
            {"SteerInputAccelerationThreshold", 0x404, "FloatProperty"},
            {"bAllowBackwardSteering", 0x408, "BoolProperty"},
            {"RotationRateYaw", 0x410, "OptionalProperty"},
            {"bOrientRotationToMovement", 0x448, "BoolProperty"},
            {"bInfiniteDuration", 0x449, "BoolProperty"},
        }};
    };

    struct FortMovementMode_LocomotionModifierRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_LocomotionModifierRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_MovementAttributeRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

}
