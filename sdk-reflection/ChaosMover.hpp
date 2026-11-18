#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosMover
{
    struct AsyncLocalOnlyInstantMovementEffect
    {
        static constexpr std::string_view Name = "AsyncLocalOnlyInstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCharacterAirExecutor
    {
        static constexpr std::string_view Name = "ChaosCharacterAirExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoveExecutorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SwingTorqueLimit = 0x48;
            static constexpr std::uintptr_t bShouldCharacterRemainUpright = 0x4C;
            static constexpr std::uintptr_t TargetHeightOverride = 0x50;
            static constexpr std::uintptr_t QueryRadiusOverride = 0x58;
            static constexpr std::uintptr_t FloorQueryRadiusFraction = 0x60;
            static constexpr std::uintptr_t FloorQueryRadiusOffset = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SwingTorqueLimit", 0x48, "FloatProperty"},
            {"bShouldCharacterRemainUpright", 0x4C, "BoolProperty"},
            {"TargetHeightOverride", 0x50, "OptionalProperty"},
            {"QueryRadiusOverride", 0x58, "OptionalProperty"},
            {"FloorQueryRadiusFraction", 0x60, "FloatProperty"},
            {"FloorQueryRadiusOffset", 0x64, "FloatProperty"},
        }};
    };

    struct ChaosCharacterAirSource
    {
        static constexpr std::string_view Name = "ChaosCharacterAirSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AirControlPercentage = 0x48;
            static constexpr std::uintptr_t FallingDeceleration = 0x4C;
            static constexpr std::uintptr_t FallingLateralFriction = 0x50;
            static constexpr std::uintptr_t FallingAngularFriction = 0x54;
            static constexpr std::uintptr_t OverTerminalSpeedFallingDeceleration = 0x58;
            static constexpr std::uintptr_t TerminalMovementPlaneSpeed = 0x5C;
            static constexpr std::uintptr_t bShouldClampTerminalVerticalSpeed = 0x60;
            static constexpr std::uintptr_t VerticalFallingDeceleration = 0x64;
            static constexpr std::uintptr_t TerminalVerticalSpeed = 0x68;
            static constexpr std::uintptr_t bAlwaysClampRequestedVelocityToMaxSpeed = 0x6C;
            static constexpr std::uintptr_t bShouldApplyAngularVelocityToTarget = 0x6D;
            static constexpr std::uintptr_t bIgnoreGravity = 0x6E;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AirControlPercentage", 0x48, "FloatProperty"},
            {"FallingDeceleration", 0x4C, "FloatProperty"},
            {"FallingLateralFriction", 0x50, "FloatProperty"},
            {"FallingAngularFriction", 0x54, "FloatProperty"},
            {"OverTerminalSpeedFallingDeceleration", 0x58, "FloatProperty"},
            {"TerminalMovementPlaneSpeed", 0x5C, "FloatProperty"},
            {"bShouldClampTerminalVerticalSpeed", 0x60, "BoolProperty"},
            {"VerticalFallingDeceleration", 0x64, "FloatProperty"},
            {"TerminalVerticalSpeed", 0x68, "FloatProperty"},
            {"bAlwaysClampRequestedVelocityToMaxSpeed", 0x6C, "BoolProperty"},
            {"bShouldApplyAngularVelocityToTarget", 0x6D, "BoolProperty"},
            {"bIgnoreGravity", 0x6E, "BoolProperty"},
        }};
    };

    struct ChaosCharacterApplyVelocityEffect
    {
        static constexpr std::string_view Name = "ChaosCharacterApplyVelocityEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityOrImpulseToApply = 0x8;
            static constexpr std::uintptr_t Mode = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VelocityOrImpulseToApply", 0x8, "StructProperty"},
            {"Mode", 0x20, "EnumProperty"},
        }};
    };

    struct ChaosCharacterConstraintInterface
    {
        static constexpr std::string_view Name = "ChaosCharacterConstraintInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCharacterCrouchCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterCrouchCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t bCancelOnModeChange = 0x48;
            static constexpr std::uintptr_t CapsuleHalfHeight = 0x4C;
            static constexpr std::uintptr_t CapsuleRadius = 0x54;
            static constexpr std::uintptr_t CapsuleGroundClearance = 0x5C;
            static constexpr std::uintptr_t MaxSpeed = 0x64;
            static constexpr std::uintptr_t Acceleration = 0x6C;
            static constexpr std::uintptr_t TransitionToCrouchedMode = 0x74;
            static constexpr std::uintptr_t TransitionToUncrouchedMode = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCancelOnModeChange", 0x48, "BoolProperty"},
            {"CapsuleHalfHeight", 0x4C, "OptionalProperty"},
            {"CapsuleRadius", 0x54, "OptionalProperty"},
            {"CapsuleGroundClearance", 0x5C, "OptionalProperty"},
            {"MaxSpeed", 0x64, "OptionalProperty"},
            {"Acceleration", 0x6C, "OptionalProperty"},
            {"TransitionToCrouchedMode", 0x74, "OptionalProperty"},
            {"TransitionToUncrouchedMode", 0x78, "OptionalProperty"},
        }};
    };

    struct ChaosCharacterFallingCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterFallingCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionToFallingMode = 0x48;
            static constexpr std::uintptr_t MaxUnsupportedTimeBeforeFalling = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransitionToFallingMode", 0x48, "NameProperty"},
            {"MaxUnsupportedTimeBeforeFalling", 0x4C, "FloatProperty"},
        }};
    };

    struct ChaosCharacterFloorInterface
    {
        static constexpr std::string_view Name = "ChaosCharacterFloorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCharacterFlyingSource
    {
        static constexpr std::string_view Name = "ChaosCharacterFlyingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCharacterJumpCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterJumpCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpUpwardsSpeed = 0x48;
            static constexpr std::uintptr_t FractionalGroundReactionImpulse = 0x4C;
            static constexpr std::uintptr_t TransitionToMode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JumpUpwardsSpeed", 0x48, "FloatProperty"},
            {"FractionalGroundReactionImpulse", 0x4C, "FloatProperty"},
            {"TransitionToMode", 0x50, "NameProperty"},
        }};
    };

    struct ChaosCharacterLandingCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterLandingCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t FloorDistanceTolerance = 0x48;
            static constexpr std::uintptr_t FractionalLandingImpulse = 0x4C;
            static constexpr std::uintptr_t TransitionToGroundMode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FloorDistanceTolerance", 0x48, "FloatProperty"},
            {"FractionalLandingImpulse", 0x4C, "FloatProperty"},
            {"TransitionToGroundMode", 0x50, "NameProperty"},
        }};
    };

    struct ChaosCharacterLaunchCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterLaunchCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionToMode = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransitionToMode", 0x48, "NameProperty"},
        }};
    };

    struct ChaosCharacterMovementMode
    {
        static constexpr std::string_view Name = "ChaosCharacterMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t RadialForceLimit = 0xA8;
            static constexpr std::uintptr_t TwistTorqueLimit = 0xAC;
            static constexpr std::uintptr_t SwingTorqueLimit = 0xB0;
            static constexpr std::uintptr_t bShouldCharacterRemainUpright = 0xB4;
            static constexpr std::uintptr_t TargetHeightOverride = 0xB8;
            static constexpr std::uintptr_t QueryRadiusOverride = 0xC0;
            static constexpr std::uintptr_t FrictionOverrideMode = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RadialForceLimit", 0xA8, "FloatProperty"},
            {"TwistTorqueLimit", 0xAC, "FloatProperty"},
            {"SwingTorqueLimit", 0xB0, "FloatProperty"},
            {"bShouldCharacterRemainUpright", 0xB4, "BoolProperty"},
            {"TargetHeightOverride", 0xB8, "OptionalProperty"},
            {"QueryRadiusOverride", 0xC0, "OptionalProperty"},
            {"FrictionOverrideMode", 0xC8, "EnumProperty"},
        }};
    };

    struct ChaosCharacterMoverComponent
    {
        static constexpr std::string_view Name = "ChaosCharacterMoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CharacterMoverComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLandedDelegate = 0x720;
            static constexpr std::uintptr_t OnJumped = 0x730;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnLandedDelegate", 0x720, "MulticastInlineDelegateProperty"},
            {"OnJumped", 0x730, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "CancelMovementSettingsOverrides",
            "Launch",
            "OverrideMovementSettings",
            "TryGetLastWaterResult",
        }};
    };

    struct ChaosCharacterOrientationInterface
    {
        static constexpr std::string_view Name = "ChaosCharacterOrientationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCharacterSimpleWalkingSource
    {
        static constexpr std::string_view Name = "ChaosCharacterSimpleWalkingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bMaintainHorizontalGroundVelocity = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bMaintainHorizontalGroundVelocity", 0x48, "BoolProperty"},
        }};
    };

    struct ChaosCharacterSmoothWalkingSource
    {
        static constexpr std::string_view Name = "ChaosCharacterSmoothWalkingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCharacterSimpleWalkingSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0x68;
            static constexpr std::uintptr_t Deceleration = 0x6C;
            static constexpr std::uintptr_t DirectionalAccelerationFactor = 0x70;
            static constexpr std::uintptr_t TurningStrength = 0x74;
            static constexpr std::uintptr_t AccelerationSmoothingTime = 0x78;
            static constexpr std::uintptr_t DecelerationSmoothingTime = 0x7C;
            static constexpr std::uintptr_t AccelerationSmoothingCompensation = 0x80;
            static constexpr std::uintptr_t DecelerationSmoothingCompensation = 0x84;
            static constexpr std::uintptr_t VelocityDeadzoneThreshold = 0x88;
            static constexpr std::uintptr_t AccelerationDeadzoneThreshold = 0x8C;
            static constexpr std::uintptr_t OutsideInfluenceSmoothingTime = 0x90;
            static constexpr std::uintptr_t FacingSmoothingTime = 0x94;
            static constexpr std::uintptr_t bSmoothFacingWithDoubleSpring = 0x98;
            static constexpr std::uintptr_t FacingDeadzoneThreshold = 0x9C;
            static constexpr std::uintptr_t AngularVelocityDeadzoneThreshold = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Acceleration", 0x68, "FloatProperty"},
            {"Deceleration", 0x6C, "FloatProperty"},
            {"DirectionalAccelerationFactor", 0x70, "FloatProperty"},
            {"TurningStrength", 0x74, "FloatProperty"},
            {"AccelerationSmoothingTime", 0x78, "FloatProperty"},
            {"DecelerationSmoothingTime", 0x7C, "FloatProperty"},
            {"AccelerationSmoothingCompensation", 0x80, "FloatProperty"},
            {"DecelerationSmoothingCompensation", 0x84, "FloatProperty"},
            {"VelocityDeadzoneThreshold", 0x88, "FloatProperty"},
            {"AccelerationDeadzoneThreshold", 0x8C, "FloatProperty"},
            {"OutsideInfluenceSmoothingTime", 0x90, "FloatProperty"},
            {"FacingSmoothingTime", 0x94, "FloatProperty"},
            {"bSmoothFacingWithDoubleSpring", 0x98, "BoolProperty"},
            {"FacingDeadzoneThreshold", 0x9C, "FloatProperty"},
            {"AngularVelocityDeadzoneThreshold", 0xA0, "FloatProperty"},
        }};
    };

    struct ChaosCharacterSwimmingSource
    {
        static constexpr std::string_view Name = "ChaosCharacterSwimmingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SwimmingIdealImmersionDepth = 0x48;
            static constexpr std::uintptr_t SurfaceSwimmingWaterControlSettings = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SwimmingIdealImmersionDepth", 0x48, "FloatProperty"},
            {"SurfaceSwimmingWaterControlSettings", 0x4C, "StructProperty"},
        }};
    };

    struct ChaosCharacterWalkingExecutor
    {
        static constexpr std::string_view Name = "ChaosCharacterWalkingExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoveExecutorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RadialForceLimit = 0x48;
            static constexpr std::uintptr_t TwistTorqueLimit = 0x4C;
            static constexpr std::uintptr_t SwingTorqueLimit = 0x50;
            static constexpr std::uintptr_t GroundDamping = 0x54;
            static constexpr std::uintptr_t FrictionForceLimit = 0x58;
            static constexpr std::uintptr_t FractionalRadialForceLimitScaling = 0x5C;
            static constexpr std::uintptr_t FractionalGroundReaction = 0x60;
            static constexpr std::uintptr_t bShouldCharacterRemainUpright = 0x64;
            static constexpr std::uintptr_t TargetHeightOverride = 0x68;
            static constexpr std::uintptr_t QueryRadiusOverride = 0x70;
            static constexpr std::uintptr_t FractionalDownwardVelocityToTarget = 0x78;
            static constexpr std::uintptr_t bShouldApplyAngularVelocityToTarget = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RadialForceLimit", 0x48, "FloatProperty"},
            {"TwistTorqueLimit", 0x4C, "FloatProperty"},
            {"SwingTorqueLimit", 0x50, "FloatProperty"},
            {"GroundDamping", 0x54, "FloatProperty"},
            {"FrictionForceLimit", 0x58, "FloatProperty"},
            {"FractionalRadialForceLimitScaling", 0x5C, "FloatProperty"},
            {"FractionalGroundReaction", 0x60, "FloatProperty"},
            {"bShouldCharacterRemainUpright", 0x64, "BoolProperty"},
            {"TargetHeightOverride", 0x68, "OptionalProperty"},
            {"QueryRadiusOverride", 0x70, "OptionalProperty"},
            {"FractionalDownwardVelocityToTarget", 0x78, "FloatProperty"},
            {"bShouldApplyAngularVelocityToTarget", 0x7C, "BoolProperty"},
        }};
    };

    struct ChaosCharacterWalkingSource
    {
        static constexpr std::string_view Name = "ChaosCharacterWalkingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bMaintainHorizontalGroundVelocity = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bMaintainHorizontalGroundVelocity", 0x48, "BoolProperty"},
        }};
    };

    struct ChaosCharacterWaterCheck
    {
        static constexpr std::string_view Name = "ChaosCharacterWaterCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterModeStartImmersionDepth = 0x48;
            static constexpr std::uintptr_t WaterModeStopImmersionDepth = 0x4C;
            static constexpr std::uintptr_t WaterModeName = 0x50;
            static constexpr std::uintptr_t GroundModeName = 0x54;
            static constexpr std::uintptr_t AirModeName = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WaterModeStartImmersionDepth", 0x48, "FloatProperty"},
            {"WaterModeStopImmersionDepth", 0x4C, "FloatProperty"},
            {"WaterModeName", 0x50, "NameProperty"},
            {"GroundModeName", 0x54, "NameProperty"},
            {"AirModeName", 0x58, "NameProperty"},
        }};
    };

    struct ChaosCompositeMovementMode
    {
        static constexpr std::string_view Name = "ChaosCompositeMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};
    };

    struct ChaosEllipticalMovementPathPattern
    {
        static constexpr std::string_view Name = "ChaosEllipticalMovementPathPattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosPathedMovementPatternBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RadiusX = 0x58;
            static constexpr std::uintptr_t RadiusY = 0x5C;
            static constexpr std::uintptr_t OriginAngle = 0x60;
            static constexpr std::uintptr_t UsableArcAngle = 0x64;
            static constexpr std::uintptr_t EllipsePlaneRotation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RadiusX", 0x58, "FloatProperty"},
            {"RadiusY", 0x5C, "FloatProperty"},
            {"OriginAngle", 0x60, "FloatProperty"},
            {"UsableArcAngle", 0x64, "FloatProperty"},
            {"EllipsePlaneRotation", 0x68, "StructProperty"},
        }};
    };

    struct ChaosFallingMode
    {
        static constexpr std::string_view Name = "ChaosFallingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCompositeMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};
    };

    struct ChaosFlyingMode
    {
        static constexpr std::string_view Name = "ChaosFlyingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCompositeMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};
    };

    struct ChaosGroundMovementUtils
    {
        static constexpr std::string_view Name = "ChaosGroundMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ComputeLocalGroundVelocity_Internal",
            "ComputeRequestedMove",
        }};
    };

    struct ChaosKinematicActuationInterface
    {
        static constexpr std::string_view Name = "ChaosKinematicActuationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosKinematicAirExecutor
    {
        static constexpr std::string_view Name = "ChaosKinematicAirExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoveExecutorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetHeightOverride = 0x48;
            static constexpr std::uintptr_t QueryRadiusOverride = 0x50;
            static constexpr std::uintptr_t FloorQueryRadiusFraction = 0x58;
            static constexpr std::uintptr_t FloorQueryRadiusOffset = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetHeightOverride", 0x48, "OptionalProperty"},
            {"QueryRadiusOverride", 0x50, "OptionalProperty"},
            {"FloorQueryRadiusFraction", 0x58, "FloatProperty"},
            {"FloorQueryRadiusOffset", 0x5C, "FloatProperty"},
        }};
    };

    struct ChaosKinematicWalkingExecutor
    {
        static constexpr std::string_view Name = "ChaosKinematicWalkingExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoveExecutorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetHeightOverride = 0x48;
            static constexpr std::uintptr_t QueryRadiusOverride = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetHeightOverride", 0x48, "OptionalProperty"},
            {"QueryRadiusOverride", 0x50, "OptionalProperty"},
        }};
    };

    struct ChaosLayeredMoveSource
    {
        static constexpr std::string_view Name = "ChaosLayeredMoveSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMoverSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LayeredMove = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LayeredMove", 0x40, "StructProperty"},
        }};
    };

    struct ChaosMotionParametersInterface
    {
        static constexpr std::string_view Name = "ChaosMotionParametersInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ClearAccelerationOverride",
            "ClearMaxSpeedOverride",
            "GetAcceleration",
            "GetMaxSpeed",
            "OverrideAcceleration",
            "OverrideMaxSpeed",
        }};
    };

    struct ChaosMoveExecutorBase
    {
        static constexpr std::string_view Name = "ChaosMoveExecutorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosMovementActuationInterface
    {
        static constexpr std::string_view Name = "ChaosMovementActuationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosMovementBasis
    {
        static constexpr std::string_view Name = "ChaosMovementBasis";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BasisLocation = 0x8;
            static constexpr std::uintptr_t BasisRotation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BasisLocation", 0x8, "StructProperty"},
            {"BasisRotation", 0x20, "StructProperty"},
        }};
    };

    struct ChaosMovementMode
    {
        static constexpr std::string_view Name = "ChaosMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t IgnoredCollisionMode = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IgnoredCollisionMode", 0x70, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSimulation",
        }};
    };

    struct ChaosMovementModeTransition
    {
        static constexpr std::string_view Name = "ChaosMovementModeTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedSettingsClasses = 0x28;
            static constexpr std::uintptr_t bAllowModeReentry = 0x38;
            static constexpr std::uintptr_t bFirstSubStepOnly = 0x38;
            static constexpr std::uintptr_t bSupportsAsync = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SharedSettingsClasses", 0x28, "ArrayProperty"},
            {"bAllowModeReentry", 0x38, "BoolProperty"},
            {"bFirstSubStepOnly", 0x38, "BoolProperty"},
            {"bSupportsAsync", 0x38, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSimulation",
            "GetSimulation_Mutable",
        }};
    };

    struct ChaosMovementSettingsOverrides
    {
        static constexpr std::string_view Name = "ChaosMovementSettingsOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeName = 0x8;
            static constexpr std::uintptr_t MaxSpeedOverride = 0xC;
            static constexpr std::uintptr_t AccelerationOverride = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModeName", 0x8, "NameProperty"},
            {"MaxSpeedOverride", 0xC, "FloatProperty"},
            {"AccelerationOverride", 0x10, "FloatProperty"},
        }};
    };

    struct ChaosMovementSettingsOverridesRemover
    {
        static constexpr std::string_view Name = "ChaosMovementSettingsOverridesRemover";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModeName", 0x8, "NameProperty"},
        }};
    };

    struct ChaosMoverBackend
    {
        static constexpr std::string_view Name = "ChaosMoverBackend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x40;
            static constexpr std::uintptr_t NullMovementMode = 0x68;
            static constexpr std::uintptr_t ImmediateModeTransition = 0x70;
            static constexpr std::uintptr_t Simulation = 0x78;
            static constexpr std::uintptr_t UpdatedObjectOverride = 0x6C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NetworkPhysicsComponent", 0x40, "ObjectProperty"},
            {"NullMovementMode", 0x68, "ObjectProperty"},
            {"ImmediateModeTransition", 0x70, "ObjectProperty"},
            {"Simulation", 0x78, "ObjectProperty"},
            {"UpdatedObjectOverride", 0x6C8, "InterfaceProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "HandleOwningPawnControllerChanged_Server",
            "HandleUpdatedComponentPhysicsStateChanged",
        }};
    };

    struct ChaosMoverBackendComponent
    {
        static constexpr std::string_view Name = "ChaosMoverBackendComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingUpdatedObjectOverride = 0xC8;
            static constexpr std::uintptr_t InnerBackendClass = 0xD8;
            static constexpr std::uintptr_t InnerBackend = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PendingUpdatedObjectOverride", 0xC8, "InterfaceProperty"},
            {"InnerBackendClass", 0xD8, "ClassProperty"},
            {"InnerBackend", 0xE0, "ObjectProperty"},
        }};
    };

    struct ChaosMoverBlueprintLibrary
    {
        static constexpr std::string_view Name = "ChaosMoverBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "IsNetworkingInstantMovementEffectsWithSimActions",
            "IsNetworkingMovesWithSimActions",
            "K2_QueueInstantMovementEffect_Authority",
            "K2_QueueLayeredMove_Authority",
            "K2_ScheduleInstantMovementEffect_Authority",
            "K2_ScheduleLayeredMove_Authority",
            "QueueLayeredMoveInstance_Authority",
            "ScheduleLayeredMoveInstance_Authority",
        }};
    };

    struct ChaosMoverCrouchInputs
    {
        static constexpr std::string_view Name = "ChaosMoverCrouchInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bWantsToCrouch = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWantsToCrouch", 0x8, "BoolProperty"},
        }};
    };

    struct ChaosMoverFinalizeTickFunction
    {
        static constexpr std::string_view Name = "ChaosMoverFinalizeTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct ChaosMoverGroundSimState
    {
        static constexpr std::string_view Name = "ChaosMoverGroundSimState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalVelocity = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalVelocity", 0x8, "StructProperty"},
        }};
    };

    struct ChaosMoverInstantMovementEffectAction
    {
        static constexpr std::string_view Name = "ChaosMoverInstantMovementEffectAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetworkPhysicsActionPayload";
        struct Offsets
        {
            static constexpr std::uintptr_t Effect = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Effect", 0x20, "StructProperty"},
        }};
    };

    struct ChaosMoverLaunchInputs
    {
        static constexpr std::string_view Name = "ChaosMoverLaunchInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LaunchVelocityOrImpulse = 0x8;
            static constexpr std::uintptr_t Mode = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LaunchVelocityOrImpulse", 0x8, "StructProperty"},
            {"Mode", 0x20, "EnumProperty"},
        }};
    };

    struct ChaosMoverLayeredMoveAction
    {
        static constexpr std::string_view Name = "ChaosMoverLayeredMoveAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetworkPhysicsActionPayload";
        struct Offsets
        {
            static constexpr std::uintptr_t Move = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Move", 0x20, "StructProperty"},
        }};
    };

    struct ChaosMoverLayeredMoveInstanceAction
    {
        static constexpr std::string_view Name = "ChaosMoverLayeredMoveInstanceAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetworkPhysicsActionPayload";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveLogicClass = 0x20;
            static constexpr std::uintptr_t InstancedData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MoveLogicClass", 0x20, "ClassProperty"},
            {"InstancedData", 0x28, "StructProperty"},
        }};
    };

    struct ChaosMoverPredictedTrajectoryData
    {
        static constexpr std::string_view Name = "ChaosMoverPredictedTrajectoryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseTransform = 0x10;
            static constexpr std::uintptr_t Deltas = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseTransform", 0x10, "StructProperty"},
            {"Deltas", 0x70, "ArrayProperty"},
        }};
    };

    struct ChaosMoverProduceInputTickFunction
    {
        static constexpr std::string_view Name = "ChaosMoverProduceInputTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct ChaosMoverRequestedMoveInputs
    {
        static constexpr std::string_view Name = "ChaosMoverRequestedMoveInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestedVelocity = 0x8;
            static constexpr std::uintptr_t bForceMaxSpeed = 0x20;
            static constexpr std::uintptr_t bUseAcceleration = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequestedVelocity", 0x8, "StructProperty"},
            {"bForceMaxSpeed", 0x20, "BoolProperty"},
            {"bUseAcceleration", 0x21, "BoolProperty"},
        }};
    };

    struct ChaosMoverSimulation
    {
        static constexpr std::string_view Name = "ChaosMoverSimulation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MoverSimulation";
        struct Offsets
        {
            static constexpr std::uintptr_t Blackboard = 0x28;
            static constexpr std::uintptr_t RollbackBlackboard = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Blackboard", 0x28, "ObjectProperty"},
            {"RollbackBlackboard", 0x30, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "CancelModifierFromHandle",
            "GetDebugSimData",
            "GetLocalSimInput",
            "GetLocalSimInput_Mutable",
            "HasGameplayTag",
            "K2_QueueInstantMovementEffect",
            "K2_QueueLayeredMove",
            "K2_QueueMovementModifier",
        }};
    };

    struct ChaosMoverSimulationDefaultInputs
    {
        static constexpr std::string_view Name = "ChaosMoverSimulationDefaultInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UpDir = 0xB8;
            static constexpr std::uintptr_t Gravity = 0xD0;
            static constexpr std::uintptr_t bIsGeneratingInputsLocally = 0xE8;
            static constexpr std::uintptr_t bIsRemotelyControlled = 0xE9;
            static constexpr std::uintptr_t PhysicsObjectGravity = 0x110;
            static constexpr std::uintptr_t PawnCollisionHalfHeight = 0x114;
            static constexpr std::uintptr_t PawnCollisionRadius = 0x118;
            static constexpr std::uintptr_t PrimaryVisualComponentRelativeTransform = 0x120;
            static constexpr std::uintptr_t CollisionChannel = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UpDir", 0xB8, "StructProperty"},
            {"Gravity", 0xD0, "StructProperty"},
            {"bIsGeneratingInputsLocally", 0xE8, "BoolProperty"},
            {"bIsRemotelyControlled", 0xE9, "BoolProperty"},
            {"PhysicsObjectGravity", 0x110, "FloatProperty"},
            {"PawnCollisionHalfHeight", 0x114, "FloatProperty"},
            {"PawnCollisionRadius", 0x118, "FloatProperty"},
            {"PrimaryVisualComponentRelativeTransform", 0x120, "StructProperty"},
            {"CollisionChannel", 0x180, "ByteProperty"},
        }};
    };

    struct ChaosMoverSimulationEventsDebugData
    {
        static constexpr std::string_view Name = "ChaosMoverSimulationEventsDebugData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Events = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Events", 0x8, "ArrayProperty"},
        }};
    };

    struct ChaosMoverSimulationTickInterface
    {
        static constexpr std::string_view Name = "ChaosMoverSimulationTickInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosMoverSourceBase
    {
        static constexpr std::string_view Name = "ChaosMoverSourceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosMoverSubsystem
    {
        static constexpr std::string_view Name = "ChaosMoverSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosMoverTimeStepDebugData
    {
        static constexpr std::string_view Name = "ChaosMoverTimeStepDebugData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsResimulating = 0x8;
            static constexpr std::uintptr_t bIsFirstResimFrame = 0x9;
            static constexpr std::uintptr_t TimeStep = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsResimulating", 0x8, "BoolProperty"},
            {"bIsFirstResimFrame", 0x9, "BoolProperty"},
            {"TimeStep", 0x10, "StructProperty"},
        }};
    };

    struct ChaosMoverTrajectoryPredictionInputs
    {
        static constexpr std::string_view Name = "ChaosMoverTrajectoryPredictionInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NumPredictionSteps = 0x8;
            static constexpr std::uintptr_t SecondsPerStep = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumPredictionSteps", 0x8, "IntProperty"},
            {"SecondsPerStep", 0xC, "FloatProperty"},
        }};
    };

    struct ChaosMutablePathedMovementProperties
    {
        static constexpr std::string_view Name = "ChaosMutablePathedMovementProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bWantsToPlay = 0x0;
            static constexpr std::uintptr_t bWantsReversePlayback = 0x1;
            static constexpr std::uintptr_t bWantsLoopingPlayback = 0x2;
            static constexpr std::uintptr_t bWantsOneWayPlayback = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bWantsToPlay", 0x0, "BoolProperty"},
            {"bWantsReversePlayback", 0x1, "BoolProperty"},
            {"bWantsLoopingPlayback", 0x2, "BoolProperty"},
            {"bWantsOneWayPlayback", 0x3, "BoolProperty"},
        }};
    };

    struct ChaosNetInstantMovementEffect
    {
        static constexpr std::string_view Name = "ChaosNetInstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IssuanceServerFrame = 0x0;
            static constexpr std::uintptr_t ExecutionServerFrame = 0x4;
            static constexpr std::uintptr_t UniqueID = 0x8;
            static constexpr std::uintptr_t bShouldRollBack = 0x9;
            static constexpr std::uintptr_t Effect = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IssuanceServerFrame", 0x0, "IntProperty"},
            {"ExecutionServerFrame", 0x4, "IntProperty"},
            {"UniqueID", 0x8, "ByteProperty"},
            {"bShouldRollBack", 0x9, "BoolProperty"},
            {"Effect", 0x10, "StructProperty"},
        }};
    };

    struct ChaosNetInstantMovementEffectsQueue
    {
        static constexpr std::string_view Name = "ChaosNetInstantMovementEffectsQueue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Effects = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Effects", 0x8, "ArrayProperty"},
        }};
    };

    struct ChaosNetLayeredMove
    {
        static constexpr std::string_view Name = "ChaosNetLayeredMove";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IssuanceServerFrame = 0x0;
            static constexpr std::uintptr_t ExecutionServerFrame = 0x4;
            static constexpr std::uintptr_t UniqueID = 0x8;
            static constexpr std::uintptr_t bShouldRollBack = 0x9;
            static constexpr std::uintptr_t Move = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IssuanceServerFrame", 0x0, "IntProperty"},
            {"ExecutionServerFrame", 0x4, "IntProperty"},
            {"UniqueID", 0x8, "ByteProperty"},
            {"bShouldRollBack", 0x9, "BoolProperty"},
            {"Move", 0x10, "StructProperty"},
        }};
    };

    struct ChaosNetLayeredMoveInstance
    {
        static constexpr std::string_view Name = "ChaosNetLayeredMoveInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IssuanceServerFrame = 0x0;
            static constexpr std::uintptr_t ExecutionServerFrame = 0x4;
            static constexpr std::uintptr_t UniqueID = 0x8;
            static constexpr std::uintptr_t bShouldRollBack = 0x9;
            static constexpr std::uintptr_t MoveLogicClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IssuanceServerFrame", 0x0, "IntProperty"},
            {"ExecutionServerFrame", 0x4, "IntProperty"},
            {"UniqueID", 0x8, "ByteProperty"},
            {"bShouldRollBack", 0x9, "BoolProperty"},
            {"MoveLogicClass", 0x10, "ClassProperty"},
        }};
    };

    struct ChaosNetLayeredMoveInstancesQueue
    {
        static constexpr std::string_view Name = "ChaosNetLayeredMoveInstancesQueue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Moves = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Moves", 0x8, "ArrayProperty"},
        }};
    };

    struct ChaosNetLayeredMovesQueue
    {
        static constexpr std::string_view Name = "ChaosNetLayeredMovesQueue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Moves = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Moves", 0x8, "ArrayProperty"},
        }};
    };

    struct ChaosPathedMovementControllerComponent
    {
        static constexpr std::string_view Name = "ChaosPathedMovementControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPathedMovementStarted = 0xD0;
            static constexpr std::uintptr_t OnPathedMovementStopped = 0xE0;
            static constexpr std::uintptr_t OnPathedMovementBounced = 0xF0;
            static constexpr std::uintptr_t OnPathedMovementReversePlaybackChanged = 0x100;
            static constexpr std::uintptr_t OnPathedMovementLoopingPlaybackChanged = 0x110;
            static constexpr std::uintptr_t OnPathedMovementOneWayPlaybackChanged = 0x120;
            static constexpr std::uintptr_t InitialProperties = 0x130;
            static constexpr std::uintptr_t bDisplayProgressPreviewMesh = 0x134;
            static constexpr std::uintptr_t PreviewMeshOverallPathProgress = 0x138;
            static constexpr std::uintptr_t PreviewMeshMaterial = 0x140;
            static constexpr std::uintptr_t DebugDrawComp = 0x148;
            static constexpr std::uintptr_t MoverComponent = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnPathedMovementStarted", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnPathedMovementStopped", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnPathedMovementBounced", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnPathedMovementReversePlaybackChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"OnPathedMovementLoopingPlaybackChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"OnPathedMovementOneWayPlaybackChanged", 0x120, "MulticastInlineDelegateProperty"},
            {"InitialProperties", 0x130, "StructProperty"},
            {"bDisplayProgressPreviewMesh", 0x134, "BoolProperty"},
            {"PreviewMeshOverallPathProgress", 0x138, "FloatProperty"},
            {"PreviewMeshMaterial", 0x140, "ObjectProperty"},
            {"DebugDrawComp", 0x148, "ObjectProperty"},
            {"MoverComponent", 0x1A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "IsLoopingPlayback",
            "IsOneWayPlayback",
            "IsPlayingPath",
            "IsReversePlayback",
            "OnPostFinalize",
            "OnPostSimEventReceived",
            "RequestLoopingPlayback",
            "RequestOneWayPlayback",
            "RequestReversePlayback",
            "RequestStartPlayingPath",
            "RequestStopPlayingPath",
            "WantsLoopingPlayback",
            "WantsOneWayPlayback",
            "WantsPlayingPath",
            "WantsReversePlayback",
        }};
    };

    struct ChaosPathedMovementDebugDrawComponent
    {
        static constexpr std::string_view Name = "ChaosPathedMovementDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProgressPreviewMeshComp = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProgressPreviewMeshComp", 0x610, "ObjectProperty"},
        }};
    };

    struct ChaosPathedMovementDebugDrawInterface
    {
        static constexpr std::string_view Name = "ChaosPathedMovementDebugDrawInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetPreviewMeshOverallPathProgress",
            "GetProgressPreviewMeshMaterial",
            "ShouldDisplayProgressPreviewMesh",
        }};
    };

    struct ChaosPathedMovementInputs
    {
        static constexpr std::string_view Name = "ChaosPathedMovementInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementStartFrame = 0x8;
            static constexpr std::uintptr_t LastChangeFrame = 0xC;
            static constexpr std::uintptr_t Props = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovementStartFrame", 0x8, "IntProperty"},
            {"LastChangeFrame", 0xC, "IntProperty"},
            {"Props", 0x10, "StructProperty"},
        }};
    };

    struct ChaosPathedMovementMode
    {
        static constexpr std::string_view Name = "ChaosPathedMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseJointConstraint = 0x98;
            static constexpr std::uintptr_t JointConstraintProperties = 0xA0;
            static constexpr std::uintptr_t OneWayPlaybackDuration = 0x200;
            static constexpr std::uintptr_t PathPatterns = 0x208;
            static constexpr std::uintptr_t Easing = 0x218;
            static constexpr std::uintptr_t CustomEasingCurve = 0x220;
            static constexpr std::uintptr_t bDebugDrawAggregatePath = 0x551;
            static constexpr std::uintptr_t bAllowPatternDebugDrawing = 0x552;
            static constexpr std::uintptr_t PathDebugDrawColor = 0x554;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bUseJointConstraint", 0x98, "BoolProperty"},
            {"JointConstraintProperties", 0xA0, "StructProperty"},
            {"OneWayPlaybackDuration", 0x200, "FloatProperty"},
            {"PathPatterns", 0x208, "ArrayProperty"},
            {"Easing", 0x218, "EnumProperty"},
            {"CustomEasingCurve", 0x220, "ObjectProperty"},
            {"bDebugDrawAggregatePath", 0x551, "BoolProperty"},
            {"bAllowPatternDebugDrawing", 0x552, "BoolProperty"},
            {"PathDebugDrawColor", 0x554, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_FindPattern",
            "SetOneWayTripDuration_BeginPlayOnly",
        }};
    };

    struct ChaosPathedMovementModeDebugData
    {
        static constexpr std::string_view Name = "ChaosPathedMovementModeDebugData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousServerFrame = 0x8;
            static constexpr std::uintptr_t ServerFrame = 0xC;
            static constexpr std::uintptr_t PreSimMoveState = 0x10;
            static constexpr std::uintptr_t PostSimMoveState = 0x40;
            static constexpr std::uintptr_t PreviousWorldTranslation = 0x70;
            static constexpr std::uintptr_t PreviousWorldRotation = 0x88;
            static constexpr std::uintptr_t NewWorldTranslation = 0xA0;
            static constexpr std::uintptr_t NewWorldRotation = 0xB8;
            static constexpr std::uintptr_t bPlaybackStartedThisFrame = 0xD0;
            static constexpr std::uintptr_t bPlaybackStoppedThisFrame = 0xD1;
            static constexpr std::uintptr_t bPlaybackBouncedThisFrame = 0xD2;
            static constexpr std::uintptr_t bPlaybackReachedEndThisFrame = 0xD3;
            static constexpr std::uintptr_t bPlaybackReverseChangedThisFrame = 0xD4;
            static constexpr std::uintptr_t bPlaybackLoopingChangedThisFrame = 0xD5;
            static constexpr std::uintptr_t bPlaybackOneWayChangedThisFrame = 0xD6;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PreviousServerFrame", 0x8, "IntProperty"},
            {"ServerFrame", 0xC, "IntProperty"},
            {"PreSimMoveState", 0x10, "StructProperty"},
            {"PostSimMoveState", 0x40, "StructProperty"},
            {"PreviousWorldTranslation", 0x70, "StructProperty"},
            {"PreviousWorldRotation", 0x88, "StructProperty"},
            {"NewWorldTranslation", 0xA0, "StructProperty"},
            {"NewWorldRotation", 0xB8, "StructProperty"},
            {"bPlaybackStartedThisFrame", 0xD0, "BoolProperty"},
            {"bPlaybackStoppedThisFrame", 0xD1, "BoolProperty"},
            {"bPlaybackBouncedThisFrame", 0xD2, "BoolProperty"},
            {"bPlaybackReachedEndThisFrame", 0xD3, "BoolProperty"},
            {"bPlaybackReverseChangedThisFrame", 0xD4, "BoolProperty"},
            {"bPlaybackLoopingChangedThisFrame", 0xD5, "BoolProperty"},
            {"bPlaybackOneWayChangedThisFrame", 0xD6, "BoolProperty"},
        }};
    };

    struct ChaosPathedMovementModeInterface
    {
        static constexpr std::string_view Name = "ChaosPathedMovementModeInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosPathedMovementPatternBase
    {
        static constexpr std::string_view Name = "ChaosPathedMovementPatternBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationMasks = 0x28;
            static constexpr std::uintptr_t RotationMasks = 0x29;
            static constexpr std::uintptr_t ScaleMasks = 0x2A;
            static constexpr std::uintptr_t bStartAfterPreviousPattern = 0x2B;
            static constexpr std::uintptr_t StartAtPathProgress = 0x2C;
            static constexpr std::uintptr_t EndAtPathProgress = 0x30;
            static constexpr std::uintptr_t LoopOffset = 0x34;
            static constexpr std::uintptr_t NumLoopsPerPath = 0x38;
            static constexpr std::uintptr_t IsOneWay = 0x3C;
            static constexpr std::uintptr_t bBounceAtEnds = 0x3D;
            static constexpr std::uintptr_t bOrientComponentToPath = 0x3E;
            static constexpr std::uintptr_t Easing = 0x3F;
            static constexpr std::uintptr_t CustomEasingCurve = 0x40;
            static constexpr std::uintptr_t bDebugDrawPattern = 0x48;
            static constexpr std::uintptr_t PatternDebugDrawColor = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"TranslationMasks", 0x28, "ByteProperty"},
            {"RotationMasks", 0x29, "ByteProperty"},
            {"ScaleMasks", 0x2A, "ByteProperty"},
            {"bStartAfterPreviousPattern", 0x2B, "BoolProperty"},
            {"StartAtPathProgress", 0x2C, "FloatProperty"},
            {"EndAtPathProgress", 0x30, "FloatProperty"},
            {"LoopOffset", 0x34, "FloatProperty"},
            {"NumLoopsPerPath", 0x38, "IntProperty"},
            {"IsOneWay", 0x3C, "BoolProperty"},
            {"bBounceAtEnds", 0x3D, "BoolProperty"},
            {"bOrientComponentToPath", 0x3E, "BoolProperty"},
            {"Easing", 0x3F, "EnumProperty"},
            {"CustomEasingCurve", 0x40, "ObjectProperty"},
            {"bDebugDrawPattern", 0x48, "BoolProperty"},
            {"PatternDebugDrawColor", 0x4C, "StructProperty"},
        }};
    };

    struct ChaosPathedMovementReachedEndTransition
    {
        static constexpr std::string_view Name = "ChaosPathedMovementReachedEndTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosMovementModeTransition";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionToMode = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransitionToMode", 0x48, "NameProperty"},
        }};
    };

    struct ChaosPathedMovementState
    {
        static constexpr std::string_view Name = "ChaosPathedMovementState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LastChangePathProgress = 0x8;
            static constexpr std::uintptr_t LastChangeTime = 0x10;
            static constexpr std::uintptr_t LatestMovementStartFrame = 0x20;
            static constexpr std::uintptr_t bIsPathProgressionIncreasing = 0x24;
            static constexpr std::uintptr_t bHasFinished = 0x25;
            static constexpr std::uintptr_t PropertiesInEffect = 0x26;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LastChangePathProgress", 0x8, "FloatProperty"},
            {"LastChangeTime", 0x10, "StructProperty"},
            {"LatestMovementStartFrame", 0x20, "IntProperty"},
            {"bIsPathProgressionIncreasing", 0x24, "BoolProperty"},
            {"bHasFinished", 0x25, "BoolProperty"},
            {"PropertiesInEffect", 0x26, "StructProperty"},
        }};
    };

    struct ChaosPointMovementPathPattern
    {
        static constexpr std::string_view Name = "ChaosPointMovementPathPattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosPathedMovementPatternBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PathPoints = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PathPoints", 0x58, "ArrayProperty"},
        }};
    };

    struct ChaosPointMovementPathPoint
    {
        static constexpr std::string_view Name = "ChaosPointMovementPathPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Basis = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t RotationBasis = 0x20;
            static constexpr std::uintptr_t Rotation = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Basis", 0x0, "EnumProperty"},
            {"Location", 0x8, "StructProperty"},
            {"RotationBasis", 0x20, "EnumProperty"},
            {"Rotation", 0x28, "StructProperty"},
        }};
    };

    struct ChaosScheduledInstantMovementEffect
    {
        static constexpr std::string_view Name = "ChaosScheduledInstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldRollBack = 0x0;
            static constexpr std::uintptr_t ScheduledEffect = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldRollBack", 0x0, "BoolProperty"},
            {"ScheduledEffect", 0x8, "StructProperty"},
        }};
    };

    struct ChaosScheduledLayeredMove
    {
        static constexpr std::string_view Name = "ChaosScheduledLayeredMove";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldRollBack = 0x0;
            static constexpr std::uintptr_t ScheduledLayeredMove = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldRollBack", 0x0, "BoolProperty"},
            {"ScheduledLayeredMove", 0x8, "StructProperty"},
        }};
    };

    struct ChaosSimpleWalkingMode
    {
        static constexpr std::string_view Name = "ChaosSimpleWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosWalkingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GenerateWalkMove",
        }};
    };

    struct ChaosSmoothWalkingMode
    {
        static constexpr std::string_view Name = "ChaosSmoothWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosSimpleWalkingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0xA0;
            static constexpr std::uintptr_t Deceleration = 0xA4;
            static constexpr std::uintptr_t DirectionalAccelerationFactor = 0xA8;
            static constexpr std::uintptr_t TurningStrength = 0xAC;
            static constexpr std::uintptr_t AccelerationSmoothingTime = 0xB0;
            static constexpr std::uintptr_t DecelerationSmoothingTime = 0xB4;
            static constexpr std::uintptr_t AccelerationSmoothingCompensation = 0xB8;
            static constexpr std::uintptr_t DecelerationSmoothingCompensation = 0xBC;
            static constexpr std::uintptr_t VelocityDeadzoneThreshold = 0xC0;
            static constexpr std::uintptr_t AccelerationDeadzoneThreshold = 0xC4;
            static constexpr std::uintptr_t OutsideInfluenceSmoothingTime = 0xC8;
            static constexpr std::uintptr_t FacingSmoothingTime = 0xCC;
            static constexpr std::uintptr_t bSmoothFacingWithDoubleSpring = 0xD0;
            static constexpr std::uintptr_t FacingDeadzoneThreshold = 0xD4;
            static constexpr std::uintptr_t AngularVelocityDeadzoneThreshold = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Acceleration", 0xA0, "FloatProperty"},
            {"Deceleration", 0xA4, "FloatProperty"},
            {"DirectionalAccelerationFactor", 0xA8, "FloatProperty"},
            {"TurningStrength", 0xAC, "FloatProperty"},
            {"AccelerationSmoothingTime", 0xB0, "FloatProperty"},
            {"DecelerationSmoothingTime", 0xB4, "FloatProperty"},
            {"AccelerationSmoothingCompensation", 0xB8, "FloatProperty"},
            {"DecelerationSmoothingCompensation", 0xBC, "FloatProperty"},
            {"VelocityDeadzoneThreshold", 0xC0, "FloatProperty"},
            {"AccelerationDeadzoneThreshold", 0xC4, "FloatProperty"},
            {"OutsideInfluenceSmoothingTime", 0xC8, "FloatProperty"},
            {"FacingSmoothingTime", 0xCC, "FloatProperty"},
            {"bSmoothFacingWithDoubleSpring", 0xD0, "BoolProperty"},
            {"FacingDeadzoneThreshold", 0xD4, "FloatProperty"},
            {"AngularVelocityDeadzoneThreshold", 0xD8, "FloatProperty"},
        }};
    };

    struct ChaosSmoothWalkingState
    {
        static constexpr std::string_view Name = "ChaosSmoothWalkingState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpringVelocity = 0x8;
            static constexpr std::uintptr_t SpringAcceleration = 0x20;
            static constexpr std::uintptr_t IntermediateVelocity = 0x38;
            static constexpr std::uintptr_t IntermediateFacing = 0x50;
            static constexpr std::uintptr_t IntermediateAngularVelocity = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpringVelocity", 0x8, "StructProperty"},
            {"SpringAcceleration", 0x20, "StructProperty"},
            {"IntermediateVelocity", 0x38, "StructProperty"},
            {"IntermediateFacing", 0x50, "StructProperty"},
            {"IntermediateAngularVelocity", 0x70, "StructProperty"},
        }};
    };

    struct ChaosSplineMovementPathPattern
    {
        static constexpr std::string_view Name = "ChaosSplineMovementPathPattern";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosPathedMovementPatternBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0x58;
            static constexpr std::uintptr_t UpperBound = 0x5C;
            static constexpr std::uintptr_t bOffsetsModifyDuration = 0x60;
            static constexpr std::uintptr_t bApplySplineScaling = 0x61;
            static constexpr std::uintptr_t SplineComponentRef = 0x68;
            static constexpr std::uintptr_t SplineComp = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LowerBound", 0x58, "FloatProperty"},
            {"UpperBound", 0x5C, "FloatProperty"},
            {"bOffsetsModifyDuration", 0x60, "BoolProperty"},
            {"bApplySplineScaling", 0x61, "BoolProperty"},
            {"SplineComponentRef", 0x68, "StructProperty"},
            {"SplineComp", 0x90, "ObjectProperty"},
        }};
    };

    struct ChaosSplinePathPatternPointData
    {
        static constexpr std::string_view Name = "ChaosSplinePathPatternPointData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SplinePointKey = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplinePointKey", 0x0, "FloatProperty"},
        }};
    };

    struct ChaosStanceModifier
    {
        static constexpr std::string_view Name = "ChaosStanceModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovementModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bCancelOnModeChange = 0x21;
            static constexpr std::uintptr_t ModifiedCapsuleHalfHeight = 0x24;
            static constexpr std::uintptr_t ModifiedCapsuleRadius = 0x28;
            static constexpr std::uintptr_t ModifiedCapsuleGroundClearance = 0x2C;
            static constexpr std::uintptr_t DefaultCapsuleHalfHeight = 0x30;
            static constexpr std::uintptr_t DefaultCapsuleRadius = 0x34;
            static constexpr std::uintptr_t DefaultCapsuleGroundClearance = 0x38;
            static constexpr std::uintptr_t MaxSpeedOverride = 0x3C;
            static constexpr std::uintptr_t AccelerationOverride = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bCancelOnModeChange", 0x21, "BoolProperty"},
            {"ModifiedCapsuleHalfHeight", 0x24, "FloatProperty"},
            {"ModifiedCapsuleRadius", 0x28, "FloatProperty"},
            {"ModifiedCapsuleGroundClearance", 0x2C, "FloatProperty"},
            {"DefaultCapsuleHalfHeight", 0x30, "FloatProperty"},
            {"DefaultCapsuleRadius", 0x34, "FloatProperty"},
            {"DefaultCapsuleGroundClearance", 0x38, "FloatProperty"},
            {"MaxSpeedOverride", 0x3C, "OptionalProperty"},
            {"AccelerationOverride", 0x44, "OptionalProperty"},
        }};
    };

    struct ChaosSwimmingMode
    {
        static constexpr std::string_view Name = "ChaosSwimmingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCompositeMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};
    };

    struct ChaosWalkingMode
    {
        static constexpr std::string_view Name = "ChaosWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCompositeMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSource = 0x80;
            static constexpr std::uintptr_t MoveExecutor = 0x88;
            static constexpr std::uintptr_t NextModeName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MoveSource", 0x80, "ObjectProperty"},
            {"MoveExecutor", 0x88, "ObjectProperty"},
            {"NextModeName", 0x90, "NameProperty"},
        }};
    };

    struct ChaosWaterResultData
    {
        static constexpr std::string_view Name = "ChaosWaterResultData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterResult = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaterResult", 0x8, "StructProperty"},
        }};
    };

    struct DebugTeleportToInstantMovementEffect
    {
        static constexpr std::string_view Name = "DebugTeleportToInstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetworkChaosMoverInputData
    {
        static constexpr std::string_view Name = "NetworkChaosMoverInputData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetworkPhysicsData";
        struct Offsets
        {
            static constexpr std::uintptr_t InputCmdContext = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputCmdContext", 0x30, "StructProperty"},
        }};
    };

    struct NetworkChaosMoverStateData
    {
        static constexpr std::string_view Name = "NetworkChaosMoverStateData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetworkPhysicsData";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncState = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncState", 0x30, "StructProperty"},
        }};
    };

    struct NetworkPhysicsDebugData
    {
        static constexpr std::string_view Name = "NetworkPhysicsDebugData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocallyControlled = 0x8;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x9;
            static constexpr std::uintptr_t NetworkPhysicsTickOffset = 0xC;
            static constexpr std::uintptr_t LatestReceivedStateFrame = 0x10;
            static constexpr std::uintptr_t ForwardPredictionTime = 0x14;
            static constexpr std::uintptr_t CurrentSimProxyInputDecayAtRuntime = 0x18;
            static constexpr std::uintptr_t CurrentInputDecay = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsLocallyControlled", 0x8, "BoolProperty"},
            {"PhysicsReplicationMode", 0x9, "EnumProperty"},
            {"NetworkPhysicsTickOffset", 0xC, "IntProperty"},
            {"LatestReceivedStateFrame", 0x10, "IntProperty"},
            {"ForwardPredictionTime", 0x14, "FloatProperty"},
            {"CurrentSimProxyInputDecayAtRuntime", 0x18, "FloatProperty"},
            {"CurrentInputDecay", 0x1C, "FloatProperty"},
        }};
    };

    struct PathedMovementBouncedEventData
    {
        static constexpr std::string_view Name = "PathedMovementBouncedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct PathedMovementInReverseChangedEventData
    {
        static constexpr std::string_view Name = "PathedMovementInReverseChangedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct PathedMovementLoopingChangedEventData
    {
        static constexpr std::string_view Name = "PathedMovementLoopingChangedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct PathedMovementOneWayChangedEventData
    {
        static constexpr std::string_view Name = "PathedMovementOneWayChangedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct PathedMovementStartedEventData
    {
        static constexpr std::string_view Name = "PathedMovementStartedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct PathedMovementStoppedEventData
    {
        static constexpr std::string_view Name = "PathedMovementStoppedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t bReEmitOnResim = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x48, "StructProperty"},
            {"bReEmitOnResim", 0x58, "BoolProperty"},
        }};
    };

    struct RequestedMoveParams
    {
        static constexpr std::string_view Name = "RequestedMoveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldToGravityQuat = 0x0;
            static constexpr std::uintptr_t PriorOrientation = 0x20;
            static constexpr std::uintptr_t PriorVelocity = 0x38;
            static constexpr std::uintptr_t RequestedVelocity = 0x50;
            static constexpr std::uintptr_t GroundNormal = 0x68;
            static constexpr std::uintptr_t TurningRate = 0x80;
            static constexpr std::uintptr_t MaxSpeed = 0x84;
            static constexpr std::uintptr_t Acceleration = 0x88;
            static constexpr std::uintptr_t Deceleration = 0x8C;
            static constexpr std::uintptr_t DeltaSeconds = 0x90;
            static constexpr std::uintptr_t bRequestedMoveWithMaxSpeed = 0x94;
            static constexpr std::uintptr_t bShouldComputeAcceleration = 0x95;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"WorldToGravityQuat", 0x0, "StructProperty"},
            {"PriorOrientation", 0x20, "StructProperty"},
            {"PriorVelocity", 0x38, "StructProperty"},
            {"RequestedVelocity", 0x50, "StructProperty"},
            {"GroundNormal", 0x68, "StructProperty"},
            {"TurningRate", 0x80, "FloatProperty"},
            {"MaxSpeed", 0x84, "FloatProperty"},
            {"Acceleration", 0x88, "FloatProperty"},
            {"Deceleration", 0x8C, "FloatProperty"},
            {"DeltaSeconds", 0x90, "FloatProperty"},
            {"bRequestedMoveWithMaxSpeed", 0x94, "BoolProperty"},
            {"bShouldComputeAcceleration", 0x95, "BoolProperty"},
        }};
    };

    struct SharedChaosCharacterMovementSettings
    {
        static constexpr std::string_view Name = "SharedChaosCharacterMovementSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Deceleration = 0x30;
            static constexpr std::uintptr_t Acceleration = 0x34;
            static constexpr std::uintptr_t TurningRate = 0x38;
            static constexpr std::uintptr_t TurningBoost = 0x3C;
            static constexpr std::uintptr_t MaxSpeed = 0x40;
            static constexpr std::uintptr_t bUseAccelerationForVelocityMove = 0x44;
            static constexpr std::uintptr_t GroundFriction = 0x48;
            static constexpr std::uintptr_t bUseSeparateBrakingFriction = 0x4C;
            static constexpr std::uintptr_t BrakingFriction = 0x50;
            static constexpr std::uintptr_t BrakingFrictionFactor = 0x54;
            static constexpr std::uintptr_t MaxStepHeight = 0x58;
            static constexpr std::uintptr_t DefaultFallingMode = 0x5C;
            static constexpr std::uintptr_t MaxWalkableSlopeAngle = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Deceleration", 0x30, "FloatProperty"},
            {"Acceleration", 0x34, "FloatProperty"},
            {"TurningRate", 0x38, "FloatProperty"},
            {"TurningBoost", 0x3C, "FloatProperty"},
            {"MaxSpeed", 0x40, "FloatProperty"},
            {"bUseAccelerationForVelocityMove", 0x44, "BoolProperty"},
            {"GroundFriction", 0x48, "FloatProperty"},
            {"bUseSeparateBrakingFriction", 0x4C, "BoolProperty"},
            {"BrakingFriction", 0x50, "FloatProperty"},
            {"BrakingFrictionFactor", 0x54, "FloatProperty"},
            {"MaxStepHeight", 0x58, "FloatProperty"},
            {"DefaultFallingMode", 0x5C, "NameProperty"},
            {"MaxWalkableSlopeAngle", 0x60, "FloatProperty"},
        }};
    };

    struct StanceModifiedEventData
    {
        static constexpr std::string_view Name = "StanceModifiedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t OldStance = 0x60;
            static constexpr std::uintptr_t NewStance = 0x61;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OldStance", 0x60, "EnumProperty"},
            {"NewStance", 0x61, "EnumProperty"},
        }};
    };

    struct SwimmingSettings
    {
        static constexpr std::string_view Name = "SwimmingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeedUp = 0x0;
            static constexpr std::uintptr_t MaxSpeedDown = 0x4;
            static constexpr std::uintptr_t WaterVelocityDepthForMax = 0x8;
            static constexpr std::uintptr_t WaterVelocityMinMultiplier = 0xC;
            static constexpr std::uintptr_t MaxWaterForce = 0x10;
            static constexpr std::uintptr_t WaterForceMultiplier = 0x14;
            static constexpr std::uintptr_t WaterForceSecondMultiplier = 0x18;
            static constexpr std::uintptr_t BobbingMaxForce = 0x1C;
            static constexpr std::uintptr_t BobbingIdealDepthTolerance = 0x20;
            static constexpr std::uintptr_t BobbingFrictionDown = 0x24;
            static constexpr std::uintptr_t BobbingExpDragDown = 0x28;
            static constexpr std::uintptr_t BobbingFrictionDownSubmerged = 0x2C;
            static constexpr std::uintptr_t BobbingExpDragDownSubmerged = 0x30;
            static constexpr std::uintptr_t BobbingFrictionUp = 0x34;
            static constexpr std::uintptr_t BobbingExpDragUp = 0x38;
            static constexpr std::uintptr_t BobbingFrictionMultiplier = 0x3C;
            static constexpr std::uintptr_t BobbingExpDragMultiplier = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"MaxSpeedUp", 0x0, "FloatProperty"},
            {"MaxSpeedDown", 0x4, "FloatProperty"},
            {"WaterVelocityDepthForMax", 0x8, "FloatProperty"},
            {"WaterVelocityMinMultiplier", 0xC, "FloatProperty"},
            {"MaxWaterForce", 0x10, "FloatProperty"},
            {"WaterForceMultiplier", 0x14, "FloatProperty"},
            {"WaterForceSecondMultiplier", 0x18, "FloatProperty"},
            {"BobbingMaxForce", 0x1C, "FloatProperty"},
            {"BobbingIdealDepthTolerance", 0x20, "FloatProperty"},
            {"BobbingFrictionDown", 0x24, "FloatProperty"},
            {"BobbingExpDragDown", 0x28, "FloatProperty"},
            {"BobbingFrictionDownSubmerged", 0x2C, "FloatProperty"},
            {"BobbingExpDragDownSubmerged", 0x30, "FloatProperty"},
            {"BobbingFrictionUp", 0x34, "FloatProperty"},
            {"BobbingExpDragUp", 0x38, "FloatProperty"},
            {"BobbingFrictionMultiplier", 0x3C, "FloatProperty"},
            {"BobbingExpDragMultiplier", 0x40, "FloatProperty"},
        }};
    };

}
