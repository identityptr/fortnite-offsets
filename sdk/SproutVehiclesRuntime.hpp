#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutVehiclesRuntime
{
    struct JunoVehicleAnimInstance_Jackal
    {
        static constexpr std::string_view Name = "JunoVehicleAnimInstance_Jackal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t JackalVehicle = 0x510;
            static constexpr std::uintptr_t bIsSprinting = 0x518;
            static constexpr std::uintptr_t LocomotionCardinalDirection = 0x519;
            static constexpr std::uintptr_t RunForwardAlpha = 0x51C;
            static constexpr std::uintptr_t LeanYaw = 0x520;
            static constexpr std::uintptr_t bIsMoving = 0x524;
            static constexpr std::uintptr_t bInAir = 0x525;
            static constexpr std::uintptr_t bIsVehicleJumping = 0x526;
            static constexpr std::uintptr_t bIsBoosting = 0x527;
            static constexpr std::uintptr_t bIsOnSlope = 0x528;
            static constexpr std::uintptr_t bPlayMovingFast = 0x529;
            static constexpr std::uintptr_t bPlayDriveSouth = 0x52A;
            static constexpr std::uintptr_t bIdleToMovementStartTransition = 0x52B;
            static constexpr std::uintptr_t bMovementLoopToMovementStopTransition = 0x52C;
            static constexpr std::uintptr_t bLocomotionPoseToJumpTransitionAndNotBoosting = 0x52D;
            static constexpr std::uintptr_t bJumpToLocomotionPoseTransition = 0x52E;
            static constexpr std::uintptr_t bIdleToMovementLoopTransition = 0x52F;
            static constexpr std::uintptr_t bMovementLoopToPivotTransition = 0x530;
            static constexpr std::uintptr_t bMovementLoopToIdleTransition = 0x531;
            static constexpr std::uintptr_t bJumpApexToJumpFallTransition = 0x532;
            static constexpr std::uintptr_t bDefaultToJumpStartTransition = 0x533;
            static constexpr std::uintptr_t SlopeCheckPitchThresholdDegrees = 0x534;
            static constexpr std::uintptr_t SlopeCheckYawThresholdDegrees = 0x538;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x53C;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"JackalVehicle", 0x510, "ObjectProperty"},
            {"bIsSprinting", 0x518, "BoolProperty"},
            {"LocomotionCardinalDirection", 0x519, "EnumProperty"},
            {"RunForwardAlpha", 0x51C, "FloatProperty"},
            {"LeanYaw", 0x520, "FloatProperty"},
            {"bIsMoving", 0x524, "BoolProperty"},
            {"bInAir", 0x525, "BoolProperty"},
            {"bIsVehicleJumping", 0x526, "BoolProperty"},
            {"bIsBoosting", 0x527, "BoolProperty"},
            {"bIsOnSlope", 0x528, "BoolProperty"},
            {"bPlayMovingFast", 0x529, "BoolProperty"},
            {"bPlayDriveSouth", 0x52A, "BoolProperty"},
            {"bIdleToMovementStartTransition", 0x52B, "BoolProperty"},
            {"bMovementLoopToMovementStopTransition", 0x52C, "BoolProperty"},
            {"bLocomotionPoseToJumpTransitionAndNotBoosting", 0x52D, "BoolProperty"},
            {"bJumpToLocomotionPoseTransition", 0x52E, "BoolProperty"},
            {"bIdleToMovementLoopTransition", 0x52F, "BoolProperty"},
            {"bMovementLoopToPivotTransition", 0x530, "BoolProperty"},
            {"bMovementLoopToIdleTransition", 0x531, "BoolProperty"},
            {"bJumpApexToJumpFallTransition", 0x532, "BoolProperty"},
            {"bDefaultToJumpStartTransition", 0x533, "BoolProperty"},
            {"SlopeCheckPitchThresholdDegrees", 0x534, "FloatProperty"},
            {"SlopeCheckYawThresholdDegrees", 0x538, "FloatProperty"},
            {"bIsPlayingEmote", 0x53C, "BoolProperty"},
        }};
    };

    struct JunoVehicleLayerAnimInstance_Jackal
    {
        static constexpr std::string_view Name = "JunoVehicleLayerAnimInstance_Jackal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t JackalVehicle = 0x480;
            static constexpr std::uintptr_t AimYaw = 0x488;
            static constexpr std::uintptr_t AimPitch = 0x48C;
            static constexpr std::uintptr_t LeanYaw = 0x490;
            static constexpr std::uintptr_t SteerAngle = 0x494;
            static constexpr std::uintptr_t bIsMoving = 0x498;
            static constexpr std::uintptr_t bIsMovingForward = 0x498;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x498;
            static constexpr std::uintptr_t bIsReversing = 0x498;
            static constexpr std::uintptr_t bIsSprinting = 0x498;
            static constexpr std::uintptr_t bLocomotionPoseToJumpTransitionAndNotOnWater = 0x498;
            static constexpr std::uintptr_t EmoteHoverboardPosition = 0x4A0;
            static constexpr std::uintptr_t EmoteHoverboardRotation = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"JackalVehicle", 0x480, "ObjectProperty"},
            {"AimYaw", 0x488, "FloatProperty"},
            {"AimPitch", 0x48C, "FloatProperty"},
            {"LeanYaw", 0x490, "FloatProperty"},
            {"SteerAngle", 0x494, "FloatProperty"},
            {"bIsMoving", 0x498, "BoolProperty"},
            {"bIsMovingForward", 0x498, "BoolProperty"},
            {"bIsPlayingEmote", 0x498, "BoolProperty"},
            {"bIsReversing", 0x498, "BoolProperty"},
            {"bIsSprinting", 0x498, "BoolProperty"},
            {"bLocomotionPoseToJumpTransitionAndNotOnWater", 0x498, "BoolProperty"},
            {"EmoteHoverboardPosition", 0x4A0, "StructProperty"},
            {"EmoteHoverboardRotation", 0x4B8, "StructProperty"},
        }};
    };

    struct SproutVehicle_InteractionOverrideComponent
    {
        static constexpr std::string_view Name = "SproutVehicle_InteractionOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleInteractionOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bPrimaryInteractionAvailable = 0xD0;
            static constexpr std::uintptr_t bSecondaryInteractionAvailable = 0xD1;
            static constexpr std::uintptr_t SecondaryInteractionText = 0xD8;
            static constexpr std::uintptr_t SecondaryInteractionSubText = 0xE8;
            static constexpr std::uintptr_t OnServerSecondaryInteraction = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bPrimaryInteractionAvailable", 0xD0, "BoolProperty"},
            {"bSecondaryInteractionAvailable", 0xD1, "BoolProperty"},
            {"SecondaryInteractionText", 0xD8, "TextProperty"},
            {"SecondaryInteractionSubText", 0xE8, "TextProperty"},
            {"OnServerSecondaryInteraction", 0xF8, "MulticastInlineDelegateProperty"},
        }};
    };

}
