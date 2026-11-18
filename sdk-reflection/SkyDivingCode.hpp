#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SkyDivingCode
{
    struct FortMovementMode_ExtLogicSkyDiving
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicSkyDiving";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveControlParam = 0x1C8;
            static constexpr std::uintptr_t PassiveControlParam = 0x308;
            static constexpr std::uintptr_t TerminalVelocityMinimumDrag = 0x448;
            static constexpr std::uintptr_t VortexOrbitParachuteVelocityMultiplier = 0x470;
            static constexpr std::uintptr_t SkydiveVortexOrbitDragCoef = 0x498;
            static constexpr std::uintptr_t SkydiveModifiedJumpHorizontalVelocity = 0x4C0;
            static constexpr std::uintptr_t SkydivingMaxSmoothUpdateDistanceScale = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ActiveControlParam", 0x1C8, "StructProperty"},
            {"PassiveControlParam", 0x308, "StructProperty"},
            {"TerminalVelocityMinimumDrag", 0x448, "StructProperty"},
            {"VortexOrbitParachuteVelocityMultiplier", 0x470, "StructProperty"},
            {"SkydiveVortexOrbitDragCoef", 0x498, "StructProperty"},
            {"SkydiveModifiedJumpHorizontalVelocity", 0x4C0, "StructProperty"},
            {"SkydivingMaxSmoothUpdateDistanceScale", 0x4E8, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicSkyDivingFollowing
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicSkyDivingFollowing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPawn = 0x44;
            static constexpr std::uintptr_t OwnerMovementComponent = 0x4C;
            static constexpr std::uintptr_t OwnerAbilitySystemComponent = 0x54;
            static constexpr std::uintptr_t bUseFullSimulation = 0x5C;
            static constexpr std::uintptr_t SimProxyTickMode = 0x5D;
            static constexpr std::uintptr_t bUseDilatedDeltaTime = 0x5E;
            static constexpr std::uintptr_t MovementModeExtensionIDTag = 0x78;
            static constexpr std::uintptr_t QuestMovementMode = 0x98;
            static constexpr std::uintptr_t StartMMECue = 0x9C;
            static constexpr std::uintptr_t EndMMECue = 0xA0;
            static constexpr std::uintptr_t MMEContinuousCue = 0xA4;
            static constexpr std::uintptr_t AbilityIDTag = 0xA8;
            static constexpr std::uintptr_t StartEventTag = 0xC8;
            static constexpr std::uintptr_t StopEventTag = 0xCC;
            static constexpr std::uintptr_t NativeActionTag = 0xD0;
            static constexpr std::uintptr_t BlockingMMETags = 0xD8;
            static constexpr std::uintptr_t TagsToPush = 0xF8;
            static constexpr std::uintptr_t CancelAbilityTags = 0x118;
            static constexpr std::uintptr_t BlockAbilityTags = 0x138;
            static constexpr std::uintptr_t RequiredMMETags = 0x158;
            static constexpr std::uintptr_t bShouldSkipRootMotionResimulation = 0x178;
            static constexpr std::uintptr_t bIsSimulatedProxy = 0x179;
            static constexpr std::uintptr_t bIsLocalPlayer = 0x17A;
            static constexpr std::uintptr_t bIsServer = 0x17B;
            static constexpr std::uintptr_t bIsServerBotControlled = 0x17C;
            static constexpr std::uintptr_t CameraMode = 0x188;
            static constexpr std::uintptr_t CameraModeTag = 0x190;
            static constexpr std::uintptr_t MaxSpeedThresholdCombine = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"OwnerPawn", 0x44, "WeakObjectProperty"},
            {"OwnerMovementComponent", 0x4C, "WeakObjectProperty"},
            {"OwnerAbilitySystemComponent", 0x54, "WeakObjectProperty"},
            {"bUseFullSimulation", 0x5C, "BoolProperty"},
            {"SimProxyTickMode", 0x5D, "EnumProperty"},
            {"bUseDilatedDeltaTime", 0x5E, "BoolProperty"},
            {"MovementModeExtensionIDTag", 0x78, "StructProperty"},
            {"QuestMovementMode", 0x98, "EnumProperty"},
            {"StartMMECue", 0x9C, "StructProperty"},
            {"EndMMECue", 0xA0, "StructProperty"},
            {"MMEContinuousCue", 0xA4, "StructProperty"},
            {"AbilityIDTag", 0xA8, "StructProperty"},
            {"StartEventTag", 0xC8, "StructProperty"},
            {"StopEventTag", 0xCC, "StructProperty"},
            {"NativeActionTag", 0xD0, "StructProperty"},
            {"BlockingMMETags", 0xD8, "StructProperty"},
            {"TagsToPush", 0xF8, "StructProperty"},
            {"CancelAbilityTags", 0x118, "StructProperty"},
            {"BlockAbilityTags", 0x138, "StructProperty"},
            {"RequiredMMETags", 0x158, "StructProperty"},
            {"bShouldSkipRootMotionResimulation", 0x178, "BoolProperty"},
            {"bIsSimulatedProxy", 0x179, "BoolProperty"},
            {"bIsLocalPlayer", 0x17A, "BoolProperty"},
            {"bIsServer", 0x17B, "BoolProperty"},
            {"bIsServerBotControlled", 0x17C, "BoolProperty"},
            {"CameraMode", 0x188, "ClassProperty"},
            {"CameraModeTag", 0x190, "StructProperty"},
            {"MaxSpeedThresholdCombine", 0x194, "FloatProperty"},
        }};
    };

    struct FortMovementMode_SkyDivingFollowingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SkyDivingFollowingRuntimeData";
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

    struct FortMovementMode_SkyDivingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SkyDivingRuntimeData";
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

    struct FortPawnComponent_SkyDiving
    {
        static constexpr std::string_view Name = "FortPawnComponent_SkyDiving";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeExtensionSkyDiving = 0xD8;
            static constexpr std::uintptr_t MovementModeExtensionSkyDivingFollowing = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MovementModeExtensionSkyDiving", 0xD8, "ClassProperty"},
            {"MovementModeExtensionSkyDivingFollowing", 0xE0, "ClassProperty"},
        }};
    };

}
