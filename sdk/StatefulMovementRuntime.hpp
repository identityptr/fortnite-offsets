#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StatefulMovementRuntime
{
    struct FortMovementMode_ESMRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ESMRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
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

    struct FortMovementMode_ExtStatefulMovement
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtStatefulMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementStates = 0x1B8;
            static constexpr std::uintptr_t FallbackStateTag = 0x1C8;
            static constexpr std::uintptr_t PreventMovementTags = 0x1D0;
            static constexpr std::uintptr_t DesiredMoveTraceCollisionChannel = 0x1F0;
            static constexpr std::uintptr_t OverrideMaxSpeedFailSafe = 0x1F8;
            static constexpr std::uintptr_t LastUpdateVelocity = 0x220;
            static constexpr std::uintptr_t WorldVelocity = 0x238;
            static constexpr std::uintptr_t PreviousWorldVelocity = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MovementStates", 0x1B8, "ArrayProperty"},
            {"FallbackStateTag", 0x1C8, "StructProperty"},
            {"PreventMovementTags", 0x1D0, "StructProperty"},
            {"DesiredMoveTraceCollisionChannel", 0x1F0, "ByteProperty"},
            {"OverrideMaxSpeedFailSafe", 0x1F8, "StructProperty"},
            {"LastUpdateVelocity", 0x220, "StructProperty"},
            {"WorldVelocity", 0x238, "StructProperty"},
            {"PreviousWorldVelocity", 0x250, "StructProperty"},
        }};
    };

    struct SM_MovementState
    {
        static constexpr std::string_view Name = "SM_MovementState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0x28;
            static constexpr std::uintptr_t bSpeedAffectedByInput = 0x50;
            static constexpr std::uintptr_t AccelerationRate = 0x58;
            static constexpr std::uintptr_t DecelerationRate = 0x80;
            static constexpr std::uintptr_t bInterpolateSpeed = 0xA8;
            static constexpr std::uintptr_t bSetMoveOrientationToControlRotationOnEnter = 0xA9;
            static constexpr std::uintptr_t bForceOrientationToControlRotation = 0xAA;
            static constexpr std::uintptr_t bOverrideMoveOrientation = 0xAB;
            static constexpr std::uintptr_t RotationMode = 0xAC;
            static constexpr std::uintptr_t RotationRate = 0xB0;
            static constexpr std::uintptr_t MinSpeedToEnterState = 0xD8;
            static constexpr std::uintptr_t MinSpeedToRemainInState = 0x100;
            static constexpr std::uintptr_t MinSpeedToRemainInStateGracePeriod = 0x128;
            static constexpr std::uintptr_t bMinSpeedToRemainOnlyAppliesWhenDecelerating = 0x150;
            static constexpr std::uintptr_t MaxForwardInputAngleToEnterState = 0x158;
            static constexpr std::uintptr_t MaxForwardInputAngleToRemainInState = 0x180;
            static constexpr std::uintptr_t bVelocityAlsoRespectsInputAngles = 0x1A8;
            static constexpr std::uintptr_t MinStaminaToEnterState = 0x1B0;
            static constexpr std::uintptr_t StaminaCostOnStart = 0x1D8;
            static constexpr std::uintptr_t StaminaCostPerSecond = 0x200;
            static constexpr std::uintptr_t CameraModeClass = 0x228;
            static constexpr std::uintptr_t CameraModePriority = 0x230;
            static constexpr std::uintptr_t CameraModeTag = 0x234;
            static constexpr std::uintptr_t CameraModifierClass = 0x238;
            static constexpr std::uintptr_t CameraShakes = 0x240;
            static constexpr std::uintptr_t MovementStateTag = 0x250;
            static constexpr std::uintptr_t TagRequirementQuery = 0x258;
            static constexpr std::uintptr_t EnterBurstGC = 0x2A0;
            static constexpr std::uintptr_t ActiveLoopingGC = 0x2A4;
            static constexpr std::uintptr_t ExitBurstGC = 0x2A8;
            static constexpr std::uintptr_t OwningMME = 0x2AC;
            static constexpr std::uintptr_t OwnerPawn = 0x2B4;
            static constexpr std::uintptr_t OwnerMovementComponent = 0x2BC;
            static constexpr std::uintptr_t OwnerAbilitySystemComponent = 0x2C4;
            static constexpr std::uintptr_t bIsSimulatedProxy = 0x2CC;
            static constexpr std::uintptr_t bIsLocalPlayer = 0x2CD;
            static constexpr std::uintptr_t bIsServer = 0x2CE;
            static constexpr std::uintptr_t bIsServerBotControlled = 0x2CF;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"Speed", 0x28, "StructProperty"},
            {"bSpeedAffectedByInput", 0x50, "BoolProperty"},
            {"AccelerationRate", 0x58, "StructProperty"},
            {"DecelerationRate", 0x80, "StructProperty"},
            {"bInterpolateSpeed", 0xA8, "BoolProperty"},
            {"bSetMoveOrientationToControlRotationOnEnter", 0xA9, "BoolProperty"},
            {"bForceOrientationToControlRotation", 0xAA, "BoolProperty"},
            {"bOverrideMoveOrientation", 0xAB, "BoolProperty"},
            {"RotationMode", 0xAC, "EnumProperty"},
            {"RotationRate", 0xB0, "StructProperty"},
            {"MinSpeedToEnterState", 0xD8, "StructProperty"},
            {"MinSpeedToRemainInState", 0x100, "StructProperty"},
            {"MinSpeedToRemainInStateGracePeriod", 0x128, "StructProperty"},
            {"bMinSpeedToRemainOnlyAppliesWhenDecelerating", 0x150, "BoolProperty"},
            {"MaxForwardInputAngleToEnterState", 0x158, "StructProperty"},
            {"MaxForwardInputAngleToRemainInState", 0x180, "StructProperty"},
            {"bVelocityAlsoRespectsInputAngles", 0x1A8, "BoolProperty"},
            {"MinStaminaToEnterState", 0x1B0, "StructProperty"},
            {"StaminaCostOnStart", 0x1D8, "StructProperty"},
            {"StaminaCostPerSecond", 0x200, "StructProperty"},
            {"CameraModeClass", 0x228, "ClassProperty"},
            {"CameraModePriority", 0x230, "IntProperty"},
            {"CameraModeTag", 0x234, "StructProperty"},
            {"CameraModifierClass", 0x238, "ClassProperty"},
            {"CameraShakes", 0x240, "ArrayProperty"},
            {"MovementStateTag", 0x250, "StructProperty"},
            {"TagRequirementQuery", 0x258, "StructProperty"},
            {"EnterBurstGC", 0x2A0, "StructProperty"},
            {"ActiveLoopingGC", 0x2A4, "StructProperty"},
            {"ExitBurstGC", 0x2A8, "StructProperty"},
            {"OwningMME", 0x2AC, "WeakObjectProperty"},
            {"OwnerPawn", 0x2B4, "WeakObjectProperty"},
            {"OwnerMovementComponent", 0x2BC, "WeakObjectProperty"},
            {"OwnerAbilitySystemComponent", 0x2C4, "WeakObjectProperty"},
            {"bIsSimulatedProxy", 0x2CC, "BoolProperty"},
            {"bIsLocalPlayer", 0x2CD, "BoolProperty"},
            {"bIsServer", 0x2CE, "BoolProperty"},
            {"bIsServerBotControlled", 0x2CF, "BoolProperty"},
        }};
    };

}
