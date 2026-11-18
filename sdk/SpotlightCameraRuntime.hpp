#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpotlightCameraRuntime
{
    struct ActorComponent_SpotlightCamera
    {
        static constexpr std::string_view Name = "ActorComponent_SpotlightCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsThatBlockSpotlightCamera = 0xC0;
            static constexpr std::uintptr_t MovementModeRuntimeData = 0xE0;
            static constexpr std::uintptr_t MovementMode = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TagsThatBlockSpotlightCamera", 0xC0, "StructProperty"},
            {"MovementModeRuntimeData", 0xE0, "ObjectProperty"},
            {"MovementMode", 0xE8, "ClassProperty"},
        }};
    };

    struct FortCameraMode_SpotlightCamera
    {
        static constexpr std::string_view Name = "FortCameraMode_SpotlightCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t MinZoomDistance = 0x2080;
            static constexpr std::uintptr_t MaxZoomDistance = 0x2084;
            static constexpr std::uintptr_t DesiredZoomDistance = 0x2088;
            static constexpr std::uintptr_t DefaultZoomDistance = 0x208C;
            static constexpr std::uintptr_t ZoomDistanceApproachSpeed = 0x2090;
            static constexpr std::uintptr_t CameraRotationLimitsLerpTimeSeconds = 0x2094;
            static constexpr std::uintptr_t BodyTypeViewOffsets = 0x2098;
            static constexpr std::uintptr_t WhatIsFacingFront = 0x20A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MinZoomDistance", 0x2080, "FloatProperty"},
            {"MaxZoomDistance", 0x2084, "FloatProperty"},
            {"DesiredZoomDistance", 0x2088, "FloatProperty"},
            {"DefaultZoomDistance", 0x208C, "FloatProperty"},
            {"ZoomDistanceApproachSpeed", 0x2090, "FloatProperty"},
            {"CameraRotationLimitsLerpTimeSeconds", 0x2094, "FloatProperty"},
            {"BodyTypeViewOffsets", 0x2098, "MapProperty"},
            {"WhatIsFacingFront", 0x20A8, "FloatProperty"},
        }};
    };

    struct FortMovementMode_SpotlightCamera
    {
        static constexpr std::string_view Name = "FortMovementMode_SpotlightCamera";
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

    struct FortMovementMode_SpotlightCamera_RuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SpotlightCamera_RuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t bOrientRotationToMovement = 0x38;
            static constexpr std::uintptr_t bUseControllerDesiredRotation = 0x39;
            static constexpr std::uintptr_t bOverrideRotationRate = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bOrientRotationToMovement", 0x38, "BoolProperty"},
            {"bUseControllerDesiredRotation", 0x39, "BoolProperty"},
            {"bOverrideRotationRate", 0x3A, "BoolProperty"},
        }};
    };

    struct SpotlightCameraLibrary
    {
        static constexpr std::string_view Name = "SpotlightCameraLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
