#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Mover
{
    struct AirMovementUtils
    {
        static constexpr std::string_view Name = "AirMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ComputeControlledFreeMove",
            "IsValidLandingSpot",
            "TestFallingMoveAlongHitSurface",
            "TryMoveToFallAlongSurface",
        }};
    };

    struct ApplyVelocityEffect
    {
        static constexpr std::string_view Name = "ApplyVelocityEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityToApply = 0x8;
            static constexpr std::uintptr_t bAdditiveVelocity = 0x20;
            static constexpr std::uintptr_t ForceMovementMode = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VelocityToApply", 0x8, "StructProperty"},
            {"bAdditiveVelocity", 0x20, "BoolProperty"},
            {"ForceMovementMode", 0x24, "NameProperty"},
        }};
    };

    struct AsyncFallingMode
    {
        static constexpr std::string_view Name = "AsyncFallingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bCancelVerticalSpeedOnLanding = 0x70;
            static constexpr std::uintptr_t AirControlPercentage = 0x74;
            static constexpr std::uintptr_t FallingDeceleration = 0x78;
            static constexpr std::uintptr_t OverTerminalSpeedFallingDeceleration = 0x7C;
            static constexpr std::uintptr_t TerminalMovementPlaneSpeed = 0x80;
            static constexpr std::uintptr_t bShouldClampTerminalVerticalSpeed = 0x84;
            static constexpr std::uintptr_t VerticalFallingDeceleration = 0x88;
            static constexpr std::uintptr_t TerminalVerticalSpeed = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCancelVerticalSpeedOnLanding", 0x70, "BoolProperty"},
            {"AirControlPercentage", 0x74, "FloatProperty"},
            {"FallingDeceleration", 0x78, "FloatProperty"},
            {"OverTerminalSpeedFallingDeceleration", 0x7C, "FloatProperty"},
            {"TerminalMovementPlaneSpeed", 0x80, "FloatProperty"},
            {"bShouldClampTerminalVerticalSpeed", 0x84, "BoolProperty"},
            {"VerticalFallingDeceleration", 0x88, "FloatProperty"},
            {"TerminalVerticalSpeed", 0x8C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProcessLanded",
        }};
    };

    struct AsyncFlyingMode
    {
        static constexpr std::string_view Name = "AsyncFlyingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bRespectDistanceOverWalkableSurfaces = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRespectDistanceOverWalkableSurfaces", 0x70, "BoolProperty"},
        }};
    };

    struct AsyncMovementUtils
    {
        static constexpr std::string_view Name = "AsyncMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "TestDepenetratingMove",
            "TestSlidingMoveAlongHitSurface",
        }};
    };

    struct AsyncNavWalkingMode
    {
        static constexpr std::string_view Name = "AsyncNavWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bSweepWhileNavWalking = 0x70;
            static constexpr std::uintptr_t bProjectNavMeshWalking = 0x71;
            static constexpr std::uintptr_t NavMeshProjectionHeightScaleUp = 0x74;
            static constexpr std::uintptr_t NavMeshProjectionHeightScaleDown = 0x78;
            static constexpr std::uintptr_t NavMeshProjectionInterval = 0x7C;
            static constexpr std::uintptr_t NavMeshProjectionInterpSpeed = 0x80;
            static constexpr std::uintptr_t ProjectNavMeshToGeometryBehavior = 0x84;
            static constexpr std::uintptr_t BehaviorOffNavMesh = 0x85;
            static constexpr std::uintptr_t bSlideAlongNavMeshEdge = 0x86;
            static constexpr std::uintptr_t NavMeshProjectionTimer = 0x88;
            static constexpr std::uintptr_t bProjectNavMeshOnBothWorldChannels = 0xC8;
            static constexpr std::uintptr_t TurnGenerator = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bSweepWhileNavWalking", 0x70, "BoolProperty"},
            {"bProjectNavMeshWalking", 0x71, "BoolProperty"},
            {"NavMeshProjectionHeightScaleUp", 0x74, "FloatProperty"},
            {"NavMeshProjectionHeightScaleDown", 0x78, "FloatProperty"},
            {"NavMeshProjectionInterval", 0x7C, "FloatProperty"},
            {"NavMeshProjectionInterpSpeed", 0x80, "FloatProperty"},
            {"ProjectNavMeshToGeometryBehavior", 0x84, "EnumProperty"},
            {"BehaviorOffNavMesh", 0x85, "EnumProperty"},
            {"bSlideAlongNavMeshEdge", 0x86, "BoolProperty"},
            {"NavMeshProjectionTimer", 0x88, "FloatProperty"},
            {"bProjectNavMeshOnBothWorldChannels", 0xC8, "BoolProperty"},
            {"TurnGenerator", 0xD0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTurnGenerator",
            "SetTurnGeneratorClass",
        }};
    };

    struct AsyncTeleportEffect
    {
        static constexpr std::string_view Name = "AsyncTeleportEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TeleportEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLocation = 0x8;
            static constexpr std::uintptr_t bUseActorRotation = 0x20;
            static constexpr std::uintptr_t TargetRotation = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetLocation", 0x8, "StructProperty"},
            {"bUseActorRotation", 0x20, "BoolProperty"},
            {"TargetRotation", 0x28, "StructProperty"},
        }};
    };

    struct AsyncWalkingMode
    {
        static constexpr std::string_view Name = "AsyncWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t FloorCheckPolicy = 0x70;
            static constexpr std::uintptr_t TurnGenerator = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FloorCheckPolicy", 0x70, "EnumProperty"},
            {"TurnGenerator", 0x78, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTurnGenerator",
            "SetTurnGeneratorClass",
        }};
    };

    struct BaseMovementMode
    {
        static constexpr std::string_view Name = "BaseMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedSettingsClasses = 0x28;
            static constexpr std::uintptr_t Transitions = 0x38;
            static constexpr std::uintptr_t GameplayTags = 0x48;
            static constexpr std::uintptr_t bSupportsAsync = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SharedSettingsClasses", 0x28, "ArrayProperty"},
            {"Transitions", 0x38, "ArrayProperty"},
            {"GameplayTags", 0x48, "StructProperty"},
            {"bSupportsAsync", 0x68, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GenerateMove",
            "K2_GetMoverComponent",
            "K2_OnActivated",
            "K2_OnDeactivated",
            "K2_OnRegistered",
            "K2_OnUnregistered",
            "SimulationTick",
        }};
    };

    struct BaseMovementModeTransition
    {
        static constexpr std::string_view Name = "BaseMovementModeTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "Evaluate",
            "K2_GetMoverComponent",
            "K2_OnRegistered",
            "K2_OnUnregistered",
            "Trigger",
        }};
    };

    struct BasedMovementUtils
    {
        static constexpr std::string_view Name = "BasedMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "GetMovementBaseTransform",
            "GetMovementBaseVelocity",
            "GetMovementBaseVelocityAtPoint",
            "IsADynamicBase",
            "IsBaseSimulatingPhysics",
            "TransformBasedDirectionToWorld",
            "TransformBasedLocationToWorld",
            "TransformBasedRotatorToWorld",
            "TransformDirectionToLocal",
            "TransformDirectionToWorld",
            "TransformLocationToLocal",
            "TransformLocationToWorld",
            "TransformRotatorToLocal",
            "TransformRotatorToWorld",
            "TransformWorldDirectionToBased",
            "TransformWorldLocationToBased",
            "TransformWorldRotatorToBased",
        }};
    };

    struct BlueprintableTurnGenerator
    {
        static constexpr std::string_view Name = "BlueprintableTurnGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CharacterDefaultInputs
    {
        static constexpr std::string_view Name = "CharacterDefaultInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveInputType = 0x8;
            static constexpr std::uintptr_t MoveInput = 0x10;
            static constexpr std::uintptr_t OrientationIntent = 0x28;
            static constexpr std::uintptr_t ControlRotation = 0x40;
            static constexpr std::uintptr_t SuggestedMovementMode = 0x58;
            static constexpr std::uintptr_t bUsingMovementBase = 0x5C;
            static constexpr std::uintptr_t MovementBase = 0x60;
            static constexpr std::uintptr_t MovementBaseBoneName = 0x68;
            static constexpr std::uintptr_t bIsJumpJustPressed = 0x6C;
            static constexpr std::uintptr_t bIsJumpPressed = 0x6D;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MoveInputType", 0x8, "EnumProperty"},
            {"MoveInput", 0x10, "StructProperty"},
            {"OrientationIntent", 0x28, "StructProperty"},
            {"ControlRotation", 0x40, "StructProperty"},
            {"SuggestedMovementMode", 0x58, "NameProperty"},
            {"bUsingMovementBase", 0x5C, "BoolProperty"},
            {"MovementBase", 0x60, "ObjectProperty"},
            {"MovementBaseBoneName", 0x68, "NameProperty"},
            {"bIsJumpJustPressed", 0x6C, "BoolProperty"},
            {"bIsJumpPressed", 0x6D, "BoolProperty"},
        }};
    };

    struct CharacterMoverComponent
    {
        static constexpr std::string_view Name = "CharacterMoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MoverComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStanceChanged = 0x6D0;
            static constexpr std::uintptr_t OnLanded = 0x6E0;
            static constexpr std::uintptr_t bHandleJump = 0x6F2;
            static constexpr std::uintptr_t bHandleStanceChanges = 0x6F2;
            static constexpr std::uintptr_t bWantsToCrouch = 0x6F2;
            static constexpr std::uintptr_t SyncedMontageState = 0x6F8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnStanceChanged", 0x6D0, "MulticastInlineDelegateProperty"},
            {"OnLanded", 0x6E0, "MulticastInlineDelegateProperty"},
            {"bHandleJump", 0x6F2, "BoolProperty"},
            {"bHandleStanceChanges", 0x6F2, "BoolProperty"},
            {"bWantsToCrouch", 0x6F2, "BoolProperty"},
            {"SyncedMontageState", 0x6F8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 19> FunctionNames{{
            "CanActorJump",
            "CanCrouch",
            "Crouch",
            "GetCrouchIntent",
            "GetHandleJump",
            "GetHandleStanceChanges",
            "IsAirborne",
            "IsCrouching",
            "IsFalling",
            "IsFlying",
            "IsOnGround",
            "IsSlopeSliding",
            "IsSwimming",
            "Jump",
            "OnMoverPostFinalize",
            "OnMoverPreSimulationTick",
            "SetHandleJump",
            "SetHandleStanceChanges",
            "UnCrouch",
        }};
    };

    struct CommonLegacyMovementSettings
    {
        static constexpr std::string_view Name = "CommonLegacyMovementSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldRemainVertical = 0x30;
            static constexpr std::uintptr_t GroundMovementModeName = 0x34;
            static constexpr std::uintptr_t AirMovementModeName = 0x38;
            static constexpr std::uintptr_t SwimmingMovementModeName = 0x3C;
            static constexpr std::uintptr_t MaxWalkSlopeCosine = 0x40;
            static constexpr std::uintptr_t FloorSweepDistance = 0x44;
            static constexpr std::uintptr_t bUseFlatBaseForFloorChecks = 0x48;
            static constexpr std::uintptr_t PerchRadiusThreshold = 0x4C;
            static constexpr std::uintptr_t MaxStepHeight = 0x50;
            static constexpr std::uintptr_t MaxSpeed = 0x54;
            static constexpr std::uintptr_t bUseAccelerationForVelocityMove = 0x58;
            static constexpr std::uintptr_t GroundFriction = 0x5C;
            static constexpr std::uintptr_t bUseSeparateBrakingFriction = 0x60;
            static constexpr std::uintptr_t BrakingFriction = 0x64;
            static constexpr std::uintptr_t BrakingFrictionFactor = 0x68;
            static constexpr std::uintptr_t Deceleration = 0x6C;
            static constexpr std::uintptr_t Acceleration = 0x70;
            static constexpr std::uintptr_t TurningRate = 0x74;
            static constexpr std::uintptr_t TurningBoost = 0x78;
            static constexpr std::uintptr_t bIgnoreBaseRotation = 0x7C;
            static constexpr std::uintptr_t bIgnoreBaseAttachedActors = 0x7D;
            static constexpr std::uintptr_t JumpUpwardsSpeed = 0x80;
            static constexpr std::uintptr_t SwimmingStartImmersionDepth = 0x84;
            static constexpr std::uintptr_t SwimmingIdealImmersionDepth = 0x88;
            static constexpr std::uintptr_t SwimmingStopImmersionDepth = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"bShouldRemainVertical", 0x30, "BoolProperty"},
            {"GroundMovementModeName", 0x34, "NameProperty"},
            {"AirMovementModeName", 0x38, "NameProperty"},
            {"SwimmingMovementModeName", 0x3C, "NameProperty"},
            {"MaxWalkSlopeCosine", 0x40, "FloatProperty"},
            {"FloorSweepDistance", 0x44, "FloatProperty"},
            {"bUseFlatBaseForFloorChecks", 0x48, "BoolProperty"},
            {"PerchRadiusThreshold", 0x4C, "FloatProperty"},
            {"MaxStepHeight", 0x50, "FloatProperty"},
            {"MaxSpeed", 0x54, "FloatProperty"},
            {"bUseAccelerationForVelocityMove", 0x58, "BoolProperty"},
            {"GroundFriction", 0x5C, "FloatProperty"},
            {"bUseSeparateBrakingFriction", 0x60, "BoolProperty"},
            {"BrakingFriction", 0x64, "FloatProperty"},
            {"BrakingFrictionFactor", 0x68, "FloatProperty"},
            {"Deceleration", 0x6C, "FloatProperty"},
            {"Acceleration", 0x70, "FloatProperty"},
            {"TurningRate", 0x74, "FloatProperty"},
            {"TurningBoost", 0x78, "FloatProperty"},
            {"bIgnoreBaseRotation", 0x7C, "BoolProperty"},
            {"bIgnoreBaseAttachedActors", 0x7D, "BoolProperty"},
            {"JumpUpwardsSpeed", 0x80, "FloatProperty"},
            {"SwimmingStartImmersionDepth", 0x84, "FloatProperty"},
            {"SwimmingIdealImmersionDepth", 0x88, "FloatProperty"},
            {"SwimmingStopImmersionDepth", 0x8C, "FloatProperty"},
        }};
    };

    struct ComputeCombinedVelocityParams
    {
        static constexpr std::string_view Name = "ComputeCombinedVelocityParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltaSeconds = 0x0;
            static constexpr std::uintptr_t InitialVelocity = 0x8;
            static constexpr std::uintptr_t MoveDirectionIntent = 0x20;
            static constexpr std::uintptr_t MaxSpeed = 0x38;
            static constexpr std::uintptr_t TurningBoost = 0x3C;
            static constexpr std::uintptr_t Friction = 0x40;
            static constexpr std::uintptr_t Deceleration = 0x44;
            static constexpr std::uintptr_t Acceleration = 0x48;
            static constexpr std::uintptr_t ExternalAcceleration = 0x50;
            static constexpr std::uintptr_t OverallMaxSpeed = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DeltaSeconds", 0x0, "FloatProperty"},
            {"InitialVelocity", 0x8, "StructProperty"},
            {"MoveDirectionIntent", 0x20, "StructProperty"},
            {"MaxSpeed", 0x38, "FloatProperty"},
            {"TurningBoost", 0x3C, "FloatProperty"},
            {"Friction", 0x40, "FloatProperty"},
            {"Deceleration", 0x44, "FloatProperty"},
            {"Acceleration", 0x48, "FloatProperty"},
            {"ExternalAcceleration", 0x50, "StructProperty"},
            {"OverallMaxSpeed", 0x68, "FloatProperty"},
        }};
    };

    struct ComputeVelocityParams
    {
        static constexpr std::string_view Name = "ComputeVelocityParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltaSeconds = 0x0;
            static constexpr std::uintptr_t InitialVelocity = 0x8;
            static constexpr std::uintptr_t MoveDirectionIntent = 0x20;
            static constexpr std::uintptr_t MaxSpeed = 0x38;
            static constexpr std::uintptr_t TurningBoost = 0x3C;
            static constexpr std::uintptr_t Friction = 0x40;
            static constexpr std::uintptr_t Deceleration = 0x44;
            static constexpr std::uintptr_t Acceleration = 0x48;
            static constexpr std::uintptr_t MoveInput = 0x50;
            static constexpr std::uintptr_t MoveInputType = 0x68;
            static constexpr std::uintptr_t bUseAccelerationForVelocityMove = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"DeltaSeconds", 0x0, "FloatProperty"},
            {"InitialVelocity", 0x8, "StructProperty"},
            {"MoveDirectionIntent", 0x20, "StructProperty"},
            {"MaxSpeed", 0x38, "FloatProperty"},
            {"TurningBoost", 0x3C, "FloatProperty"},
            {"Friction", 0x40, "FloatProperty"},
            {"Deceleration", 0x44, "FloatProperty"},
            {"Acceleration", 0x48, "FloatProperty"},
            {"MoveInput", 0x50, "StructProperty"},
            {"MoveInputType", 0x68, "EnumProperty"},
            {"bUseAccelerationForVelocityMove", 0x69, "BoolProperty"},
        }};
    };

    struct ExactDampedTurnGenerator
    {
        static constexpr std::string_view Name = "ExactDampedTurnGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HalfLifeSeconds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HalfLifeSeconds", 0x30, "FloatProperty"},
        }};
    };

    struct FallingMode
    {
        static constexpr std::string_view Name = "FallingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bCancelVerticalSpeedOnLanding = 0x70;
            static constexpr std::uintptr_t AirControlPercentage = 0x74;
            static constexpr std::uintptr_t FallingDeceleration = 0x78;
            static constexpr std::uintptr_t FallingLateralFriction = 0x7C;
            static constexpr std::uintptr_t OverTerminalSpeedFallingDeceleration = 0x80;
            static constexpr std::uintptr_t TerminalMovementPlaneSpeed = 0x84;
            static constexpr std::uintptr_t bShouldClampTerminalVerticalSpeed = 0x88;
            static constexpr std::uintptr_t VerticalFallingDeceleration = 0x8C;
            static constexpr std::uintptr_t TerminalVerticalSpeed = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bCancelVerticalSpeedOnLanding", 0x70, "BoolProperty"},
            {"AirControlPercentage", 0x74, "FloatProperty"},
            {"FallingDeceleration", 0x78, "FloatProperty"},
            {"FallingLateralFriction", 0x7C, "FloatProperty"},
            {"OverTerminalSpeedFallingDeceleration", 0x80, "FloatProperty"},
            {"TerminalMovementPlaneSpeed", 0x84, "FloatProperty"},
            {"bShouldClampTerminalVerticalSpeed", 0x88, "BoolProperty"},
            {"VerticalFallingDeceleration", 0x8C, "FloatProperty"},
            {"TerminalVerticalSpeed", 0x90, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProcessLanded",
        }};
    };

    struct FloorCheckResult
    {
        static constexpr std::string_view Name = "FloorCheckResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlockingHit = 0x0;
            static constexpr std::uintptr_t bLineTrace = 0x0;
            static constexpr std::uintptr_t bWalkableFloor = 0x0;
            static constexpr std::uintptr_t LineDist = 0x4;
            static constexpr std::uintptr_t FloorDist = 0x8;
            static constexpr std::uintptr_t HitResult = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bBlockingHit", 0x0, "BoolProperty"},
            {"bLineTrace", 0x0, "BoolProperty"},
            {"bWalkableFloor", 0x0, "BoolProperty"},
            {"LineDist", 0x4, "FloatProperty"},
            {"FloorDist", 0x8, "FloatProperty"},
            {"HitResult", 0x10, "StructProperty"},
        }};
    };

    struct FloorCheckSettings
    {
        static constexpr std::string_view Name = "FloorCheckSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FloorSweepDistance = 0x0;
            static constexpr std::uintptr_t MaxWalkSlopeCosine = 0x4;
            static constexpr std::uintptr_t bUseFlatBaseForFloorChecks = 0x8;
            static constexpr std::uintptr_t PerchRadiusThreshold = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FloorSweepDistance", 0x0, "FloatProperty"},
            {"MaxWalkSlopeCosine", 0x4, "FloatProperty"},
            {"bUseFlatBaseForFloorChecks", 0x8, "BoolProperty"},
            {"PerchRadiusThreshold", 0xC, "FloatProperty"},
        }};
    };

    struct FloorQueryUtils
    {
        static constexpr std::string_view Name = "FloorQueryUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "IsHitSurfaceWalkable",
            "TryFindFloor",
        }};
    };

    struct FloorResultData
    {
        static constexpr std::string_view Name = "FloorResultData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FloorResult = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloorResult", 0x8, "StructProperty"},
        }};
    };

    struct FlyingMode
    {
        static constexpr std::string_view Name = "FlyingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bRespectDistanceOverWalkableSurfaces = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRespectDistanceOverWalkableSurfaces", 0x70, "BoolProperty"},
        }};
    };

    struct FreeMoveParams
    {
        static constexpr std::string_view Name = "FreeMoveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveInputType = 0x0;
            static constexpr std::uintptr_t MoveInput = 0x8;
            static constexpr std::uintptr_t OrientationIntent = 0x20;
            static constexpr std::uintptr_t PriorVelocity = 0x38;
            static constexpr std::uintptr_t PriorOrientation = 0x50;
            static constexpr std::uintptr_t MaxSpeed = 0x68;
            static constexpr std::uintptr_t Acceleration = 0x6C;
            static constexpr std::uintptr_t Deceleration = 0x70;
            static constexpr std::uintptr_t TurningBoost = 0x74;
            static constexpr std::uintptr_t TurningRate = 0x78;
            static constexpr std::uintptr_t DeltaSeconds = 0x7C;
            static constexpr std::uintptr_t Friction = 0x80;
            static constexpr std::uintptr_t WorldToGravityQuat = 0x90;
            static constexpr std::uintptr_t bUseAccelerationForVelocityMove = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"MoveInputType", 0x0, "EnumProperty"},
            {"MoveInput", 0x8, "StructProperty"},
            {"OrientationIntent", 0x20, "StructProperty"},
            {"PriorVelocity", 0x38, "StructProperty"},
            {"PriorOrientation", 0x50, "StructProperty"},
            {"MaxSpeed", 0x68, "FloatProperty"},
            {"Acceleration", 0x6C, "FloatProperty"},
            {"Deceleration", 0x70, "FloatProperty"},
            {"TurningBoost", 0x74, "FloatProperty"},
            {"TurningRate", 0x78, "FloatProperty"},
            {"DeltaSeconds", 0x7C, "FloatProperty"},
            {"Friction", 0x80, "FloatProperty"},
            {"WorldToGravityQuat", 0x90, "StructProperty"},
            {"bUseAccelerationForVelocityMove", 0xB0, "BoolProperty"},
        }};
    };

    struct GroundMoveParams
    {
        static constexpr std::string_view Name = "GroundMoveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveInputType = 0x0;
            static constexpr std::uintptr_t MoveInput = 0x8;
            static constexpr std::uintptr_t OrientationIntent = 0x20;
            static constexpr std::uintptr_t PriorVelocity = 0x38;
            static constexpr std::uintptr_t PriorOrientation = 0x50;
            static constexpr std::uintptr_t MaxSpeed = 0x68;
            static constexpr std::uintptr_t Acceleration = 0x6C;
            static constexpr std::uintptr_t Deceleration = 0x70;
            static constexpr std::uintptr_t Friction = 0x74;
            static constexpr std::uintptr_t TurningRate = 0x78;
            static constexpr std::uintptr_t TurningBoost = 0x7C;
            static constexpr std::uintptr_t GroundNormal = 0x80;
            static constexpr std::uintptr_t DeltaSeconds = 0x98;
            static constexpr std::uintptr_t UpDirection = 0xA0;
            static constexpr std::uintptr_t WorldToGravityQuat = 0xC0;
            static constexpr std::uintptr_t bUseAccelerationForVelocityMove = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"MoveInputType", 0x0, "EnumProperty"},
            {"MoveInput", 0x8, "StructProperty"},
            {"OrientationIntent", 0x20, "StructProperty"},
            {"PriorVelocity", 0x38, "StructProperty"},
            {"PriorOrientation", 0x50, "StructProperty"},
            {"MaxSpeed", 0x68, "FloatProperty"},
            {"Acceleration", 0x6C, "FloatProperty"},
            {"Deceleration", 0x70, "FloatProperty"},
            {"Friction", 0x74, "FloatProperty"},
            {"TurningRate", 0x78, "FloatProperty"},
            {"TurningBoost", 0x7C, "FloatProperty"},
            {"GroundNormal", 0x80, "StructProperty"},
            {"DeltaSeconds", 0x98, "FloatProperty"},
            {"UpDirection", 0xA0, "StructProperty"},
            {"WorldToGravityQuat", 0xC0, "StructProperty"},
            {"bUseAccelerationForVelocityMove", 0xE0, "BoolProperty"},
        }};
    };

    struct GroundMovementUtils
    {
        static constexpr std::string_view Name = "GroundMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "CanStepUpOnHitSurface",
            "ComputeControlledGroundMove",
            "ComputeDeflectedMoveOntoRamp",
            "TestGroundedMoveAlongHitSurface",
            "TestMoveToAdjustToFloor",
            "TestMoveToKeepMinHeightAboveFloor",
            "TryWalkToSlideAlongSurface",
        }};
    };

    struct ImmediateMovementModeTransition
    {
        static constexpr std::string_view Name = "ImmediateMovementModeTransition";
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
    };

    struct InstantMovementEffect
    {
        static constexpr std::string_view Name = "InstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JumpImpulseEffect
    {
        static constexpr std::string_view Name = "JumpImpulseEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t UpwardsSpeed = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpwardsSpeed", 0x8, "FloatProperty"},
        }};
    };

    struct JumpedEventData
    {
        static constexpr std::string_view Name = "JumpedEventData";
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

    struct KinematicActorSimulation
    {
        static constexpr std::string_view Name = "KinematicActorSimulation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MoverSimulation";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeFSM = 0x158;
            static constexpr std::uintptr_t MoverComp = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModeFSM", 0x158, "ObjectProperty"},
            {"MoverComp", 0x160, "ObjectProperty"},
        }};
    };

    struct LandedEventData
    {
        static constexpr std::string_view Name = "LandedEventData";
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

    struct LaunchMoveActivationParams
    {
        static constexpr std::string_view Name = "LaunchMoveActivationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveActivationParams";
        struct Offsets
        {
            static constexpr std::uintptr_t LaunchVelocity = 0x8;
            static constexpr std::uintptr_t ForceMovementMode = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LaunchVelocity", 0x8, "StructProperty"},
            {"ForceMovementMode", 0x20, "NameProperty"},
        }};
    };

    struct LaunchMoveData
    {
        static constexpr std::string_view Name = "LaunchMoveData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveInstancedData";
        struct Offsets
        {
            static constexpr std::uintptr_t LaunchVelocity = 0x18;
            static constexpr std::uintptr_t ForceMovementMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LaunchVelocity", 0x18, "StructProperty"},
            {"ForceMovementMode", 0x30, "NameProperty"},
        }};
    };

    struct LaunchMoveLogic
    {
        static constexpr std::string_view Name = "LaunchMoveLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LayeredMoveLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t LaunchVelocity = 0x70;
            static constexpr std::uintptr_t ForceMovementMode = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LaunchVelocity", 0x70, "StructProperty"},
            {"ForceMovementMode", 0x88, "NameProperty"},
        }};
    };

    struct LayeredMoveActivationParams
    {
        static constexpr std::string_view Name = "LayeredMoveActivationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationMs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DurationMs", 0x0, "DoubleProperty"},
        }};
    };

    struct LayeredMoveBase
    {
        static constexpr std::string_view Name = "LayeredMoveBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MixMode = 0x8;
            static constexpr std::uintptr_t Priority = 0x9;
            static constexpr std::uintptr_t DurationMs = 0xC;
            static constexpr std::uintptr_t StartSimTimeMs = 0x10;
            static constexpr std::uintptr_t FinishVelocitySettings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MixMode", 0x8, "EnumProperty"},
            {"Priority", 0x9, "ByteProperty"},
            {"DurationMs", 0xC, "FloatProperty"},
            {"StartSimTimeMs", 0x10, "DoubleProperty"},
            {"FinishVelocitySettings", 0x18, "StructProperty"},
        }};
    };

    struct LayeredMoveFinishVelocitySettings
    {
        static constexpr std::string_view Name = "LayeredMoveFinishVelocitySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetVelocity = 0x0;
            static constexpr std::uintptr_t ClampVelocity = 0x18;
            static constexpr std::uintptr_t FinishVelocityMode = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SetVelocity", 0x0, "StructProperty"},
            {"ClampVelocity", 0x18, "FloatProperty"},
            {"FinishVelocityMode", 0x1C, "EnumProperty"},
        }};
    };

    struct LayeredMoveGroup
    {
        static constexpr std::string_view Name = "LayeredMoveGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResidualVelocity = 0x0;
            static constexpr std::uintptr_t Debug_ActiveMoves = 0x38;
            static constexpr std::uintptr_t ResidualClamping = 0x58;
            static constexpr std::uintptr_t bApplyResidualVelocity = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ResidualVelocity", 0x0, "StructProperty"},
            {"Debug_ActiveMoves", 0x38, "ArrayProperty"},
            {"ResidualClamping", 0x58, "FloatProperty"},
            {"bApplyResidualVelocity", 0x5C, "BoolProperty"},
        }};
    };

    struct LayeredMoveInstance
    {
        static constexpr std::string_view Name = "LayeredMoveInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveLogicClassType = 0x10;
            static constexpr std::uintptr_t MoveLogic = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MoveLogicClassType", 0x10, "ClassProperty"},
            {"MoveLogic", 0x18, "ObjectProperty"},
        }};
    };

    struct LayeredMoveInstanceGroup
    {
        static constexpr std::string_view Name = "LayeredMoveInstanceGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResidualClamping = 0x20;
            static constexpr std::uintptr_t bApplyResidualVelocity = 0x24;
            static constexpr std::uintptr_t ResidualVelocity = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResidualClamping", 0x20, "FloatProperty"},
            {"bApplyResidualVelocity", 0x24, "BoolProperty"},
            {"ResidualVelocity", 0x28, "StructProperty"},
        }};
    };

    struct LayeredMoveInstancedData
    {
        static constexpr std::string_view Name = "LayeredMoveInstancedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationMs = 0x8;
            static constexpr std::uintptr_t StartSimTimeMs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DurationMs", 0x8, "DoubleProperty"},
            {"StartSimTimeMs", 0x10, "DoubleProperty"},
        }};
    };

    struct LayeredMoveLogic
    {
        static constexpr std::string_view Name = "LayeredMoveLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultDurationMs = 0x28;
            static constexpr std::uintptr_t MixMode = 0x30;
            static constexpr std::uintptr_t Priority = 0x31;
            static constexpr std::uintptr_t FinishVelocitySettings = 0x38;
            static constexpr std::uintptr_t InstancedDataStructType = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultDurationMs", 0x28, "DoubleProperty"},
            {"MixMode", 0x30, "EnumProperty"},
            {"Priority", 0x31, "ByteProperty"},
            {"FinishVelocitySettings", 0x38, "StructProperty"},
            {"InstancedDataStructType", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GenerateMove",
            "GenerateMove_Async",
            "IsFinished",
            "K2_GetActiveMoveData",
            "K2_SetActiveMoveData",
            "OnEnd",
            "OnEnd_Async",
            "OnStart",
            "OnStart_Async",
        }};
    };

    struct LayeredMove_AnimRootMotion
    {
        static constexpr std::string_view Name = "LayeredMove_AnimRootMotion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMove_MontageStateProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MontageState", 0x38, "StructProperty"},
        }};
    };

    struct LayeredMove_AnimRootMotionConsumer
    {
        static constexpr std::string_view Name = "LayeredMove_AnimRootMotionConsumer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMove_MontageStateProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MontageState", 0x38, "StructProperty"},
        }};
    };

    struct LayeredMove_AnimRootMotion_SimDriven
    {
        static constexpr std::string_view Name = "LayeredMove_AnimRootMotion_SimDriven";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMove_AnimRootMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t StartMoverTime = 0x58;
            static constexpr std::uintptr_t bShouldBlendOut = 0x68;
            static constexpr std::uintptr_t bIsFinished = 0x69;
            static constexpr std::uintptr_t BlendOutServerFrame = 0x6C;
            static constexpr std::uintptr_t FinishServerFrame = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartMoverTime", 0x58, "StructProperty"},
            {"bShouldBlendOut", 0x68, "BoolProperty"},
            {"bIsFinished", 0x69, "BoolProperty"},
            {"BlendOutServerFrame", 0x6C, "IntProperty"},
            {"FinishServerFrame", 0x70, "IntProperty"},
        }};
    };

    struct LayeredMove_JumpImpulseOverDuration
    {
        static constexpr std::string_view Name = "LayeredMove_JumpImpulseOverDuration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UpwardsSpeed = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpwardsSpeed", 0x38, "FloatProperty"},
        }};
    };

    struct LayeredMove_JumpTo
    {
        static constexpr std::string_view Name = "LayeredMove_JumpTo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpDistance = 0x38;
            static constexpr std::uintptr_t JumpHeight = 0x3C;
            static constexpr std::uintptr_t bUseActorRotation = 0x40;
            static constexpr std::uintptr_t JumpRotation = 0x48;
            static constexpr std::uintptr_t PathOffsetCurve = 0x60;
            static constexpr std::uintptr_t TimeMappingCurve = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"JumpDistance", 0x38, "FloatProperty"},
            {"JumpHeight", 0x3C, "FloatProperty"},
            {"bUseActorRotation", 0x40, "BoolProperty"},
            {"JumpRotation", 0x48, "StructProperty"},
            {"PathOffsetCurve", 0x60, "ObjectProperty"},
            {"TimeMappingCurve", 0x68, "ObjectProperty"},
        }};
    };

    struct LayeredMove_Launch
    {
        static constexpr std::string_view Name = "LayeredMove_Launch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LaunchVelocity = 0x38;
            static constexpr std::uintptr_t ForceMovementMode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LaunchVelocity", 0x38, "StructProperty"},
            {"ForceMovementMode", 0x50, "NameProperty"},
        }};
    };

    struct LayeredMove_LinearVelocity
    {
        static constexpr std::string_view Name = "LayeredMove_LinearVelocity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Velocity = 0x38;
            static constexpr std::uintptr_t MagnitudeOverTime = 0x50;
            static constexpr std::uintptr_t SettingsFlags = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Velocity", 0x38, "StructProperty"},
            {"MagnitudeOverTime", 0x50, "ObjectProperty"},
            {"SettingsFlags", 0x58, "ByteProperty"},
        }};
    };

    struct LayeredMove_MontageStateProvider
    {
        static constexpr std::string_view Name = "LayeredMove_MontageStateProvider";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MixMode = 0x8;
            static constexpr std::uintptr_t Priority = 0x9;
            static constexpr std::uintptr_t DurationMs = 0xC;
            static constexpr std::uintptr_t StartSimTimeMs = 0x10;
            static constexpr std::uintptr_t FinishVelocitySettings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MixMode", 0x8, "EnumProperty"},
            {"Priority", 0x9, "ByteProperty"},
            {"DurationMs", 0xC, "FloatProperty"},
            {"StartSimTimeMs", 0x10, "DoubleProperty"},
            {"FinishVelocitySettings", 0x18, "StructProperty"},
        }};
    };

    struct LayeredMove_MoveTo
    {
        static constexpr std::string_view Name = "LayeredMove_MoveTo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartLocation = 0x38;
            static constexpr std::uintptr_t TargetLocation = 0x50;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x68;
            static constexpr std::uintptr_t PathOffsetCurve = 0x70;
            static constexpr std::uintptr_t TimeMappingCurve = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartLocation", 0x38, "StructProperty"},
            {"TargetLocation", 0x50, "StructProperty"},
            {"bRestrictSpeedToExpected", 0x68, "BoolProperty"},
            {"PathOffsetCurve", 0x70, "ObjectProperty"},
            {"TimeMappingCurve", 0x78, "ObjectProperty"},
        }};
    };

    struct LayeredMove_MoveToDynamic
    {
        static constexpr std::string_view Name = "LayeredMove_MoveToDynamic";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMove_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationActor = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocationActor", 0x80, "ObjectProperty"},
        }};
    };

    struct LayeredMove_MultiJump
    {
        static constexpr std::string_view Name = "LayeredMove_MultiJump";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumInAirJumps = 0x38;
            static constexpr std::uintptr_t UpwardsSpeed = 0x3C;
            static constexpr std::uintptr_t JumpsInAirRemaining = 0x40;
            static constexpr std::uintptr_t TimeOfLastJumpMS = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaximumInAirJumps", 0x38, "IntProperty"},
            {"UpwardsSpeed", 0x3C, "FloatProperty"},
            {"JumpsInAirRemaining", 0x40, "IntProperty"},
            {"TimeOfLastJumpMS", 0x48, "DoubleProperty"},
        }};
    };

    struct LayeredMove_RadialImpulse
    {
        static constexpr std::string_view Name = "LayeredMove_RadialImpulse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x38;
            static constexpr std::uintptr_t LocationActor = 0x50;
            static constexpr std::uintptr_t Radius = 0x58;
            static constexpr std::uintptr_t Magnitude = 0x5C;
            static constexpr std::uintptr_t bIsPush = 0x60;
            static constexpr std::uintptr_t bNoVerticalVelocity = 0x61;
            static constexpr std::uintptr_t DistanceFalloff = 0x68;
            static constexpr std::uintptr_t MagnitudeOverTime = 0x70;
            static constexpr std::uintptr_t bUseFixedWorldDirection = 0x78;
            static constexpr std::uintptr_t FixedWorldDirection = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Location", 0x38, "StructProperty"},
            {"LocationActor", 0x50, "ObjectProperty"},
            {"Radius", 0x58, "FloatProperty"},
            {"Magnitude", 0x5C, "FloatProperty"},
            {"bIsPush", 0x60, "BoolProperty"},
            {"bNoVerticalVelocity", 0x61, "BoolProperty"},
            {"DistanceFalloff", 0x68, "ObjectProperty"},
            {"MagnitudeOverTime", 0x70, "ObjectProperty"},
            {"bUseFixedWorldDirection", 0x78, "BoolProperty"},
            {"FixedWorldDirection", 0x80, "StructProperty"},
        }};
    };

    struct LayeredMove_RootMotionAttribute
    {
        static constexpr std::string_view Name = "LayeredMove_RootMotionAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConstrainWorldRotToMovementPlane = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bConstrainWorldRotToMovementPlane", 0x38, "BoolProperty"},
        }};
    };

    struct LinearTurnGenerator
    {
        static constexpr std::string_view Name = "LinearTurnGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HeadingRate = 0x30;
            static constexpr std::uintptr_t PitchRate = 0x34;
            static constexpr std::uintptr_t RollRate = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HeadingRate", 0x30, "FloatProperty"},
            {"PitchRate", 0x34, "FloatProperty"},
            {"RollRate", 0x38, "FloatProperty"},
        }};
    };

    struct LinearVelocityMoveActivationParams
    {
        static constexpr std::string_view Name = "LinearVelocityMoveActivationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveActivationParams";
        struct Offsets
        {
            static constexpr std::uintptr_t Velocity = 0x8;
            static constexpr std::uintptr_t SettingsFlags = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Velocity", 0x8, "StructProperty"},
            {"SettingsFlags", 0x20, "ByteProperty"},
        }};
    };

    struct LinearVelocityMoveData
    {
        static constexpr std::string_view Name = "LinearVelocityMoveData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LayeredMoveInstancedData";
        struct Offsets
        {
            static constexpr std::uintptr_t Velocity = 0x18;
            static constexpr std::uintptr_t SettingsFlags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Velocity", 0x18, "StructProperty"},
            {"SettingsFlags", 0x30, "ByteProperty"},
        }};
    };

    struct LinearVelocityMoveLogic
    {
        static constexpr std::string_view Name = "LinearVelocityMoveLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LayeredMoveLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultDurationMs = 0x28;
            static constexpr std::uintptr_t MixMode = 0x30;
            static constexpr std::uintptr_t Priority = 0x31;
            static constexpr std::uintptr_t FinishVelocitySettings = 0x38;
            static constexpr std::uintptr_t InstancedDataStructType = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultDurationMs", 0x28, "DoubleProperty"},
            {"MixMode", 0x30, "EnumProperty"},
            {"Priority", 0x31, "ByteProperty"},
            {"FinishVelocitySettings", 0x38, "StructProperty"},
            {"InstancedDataStructType", 0x58, "ObjectProperty"},
        }};
    };

    struct ModeChangeParams
    {
        static constexpr std::string_view Name = "ModeChangeParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredModeName = 0x0;
            static constexpr std::uintptr_t bShouldReenter = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DesiredModeName", 0x0, "NameProperty"},
            {"bShouldReenter", 0x4, "BoolProperty"},
        }};
    };

    struct ModeRegistrationParams
    {
        static constexpr std::string_view Name = "ModeRegistrationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeName = 0x0;
            static constexpr std::uintptr_t ModeObject = 0x8;
            static constexpr std::uintptr_t bIsTheDefaultMode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModeName", 0x0, "NameProperty"},
            {"ModeObject", 0x8, "ObjectProperty"},
            {"bIsTheDefaultMode", 0x10, "BoolProperty"},
        }};
    };

    struct MotionWarpingMoverAdapter
    {
        static constexpr std::string_view Name = "MotionWarpingMoverAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingBaseAdapter";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetMoverComp = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetMoverComp", 0x38, "ObjectProperty"},
        }};
    };

    struct MovementModeChangedEventData
    {
        static constexpr std::string_view Name = "MovementModeChangedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousModeName = 0x60;
            static constexpr std::uintptr_t NewModeName = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousModeName", 0x60, "NameProperty"},
            {"NewModeName", 0x64, "NameProperty"},
        }};
    };

    struct MovementModeStateMachine
    {
        static constexpr std::string_view Name = "MovementModeStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Modes = 0x40;
            static constexpr std::uintptr_t QueuedModeTransition = 0x60;
            static constexpr std::uintptr_t Simulation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Modes", 0x40, "MapProperty"},
            {"QueuedModeTransition", 0x60, "ObjectProperty"},
            {"Simulation", 0x68, "ObjectProperty"},
        }};
    };

    struct MovementModeTickEndState
    {
        static constexpr std::string_view Name = "MovementModeTickEndState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RemainingMs = 0x0;
            static constexpr std::uintptr_t NextModeName = 0x4;
            static constexpr std::uintptr_t bEndedWithNoChanges = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RemainingMs", 0x0, "FloatProperty"},
            {"NextModeName", 0x4, "NameProperty"},
            {"bEndedWithNoChanges", 0x8, "BoolProperty"},
        }};
    };

    struct MovementModifierBase
    {
        static constexpr std::string_view Name = "MovementModifierBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationMs = 0x8;
            static constexpr std::uintptr_t StartSimTimeMs = 0x10;
            static constexpr std::uintptr_t LocalModifierHandle = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DurationMs", 0x8, "FloatProperty"},
            {"StartSimTimeMs", 0x10, "DoubleProperty"},
            {"LocalModifierHandle", 0x18, "StructProperty"},
        }};
    };

    struct MovementModifierGroup
    {
        static constexpr std::string_view Name = "MovementModifierGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementModifierHandle
    {
        static constexpr std::string_view Name = "MovementModifierHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementModifierInstance
    {
        static constexpr std::string_view Name = "MovementModifierInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Logic = 0x10;
            static constexpr std::uintptr_t LogicClass = 0x18;
            static constexpr std::uintptr_t Handle = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Logic", 0x10, "ObjectProperty"},
            {"LogicClass", 0x18, "ClassProperty"},
            {"Handle", 0x20, "StructProperty"},
        }};
    };

    struct MovementModifierInstanceGroup
    {
        static constexpr std::string_view Name = "MovementModifierInstanceGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementModifierInstancedData
    {
        static constexpr std::string_view Name = "MovementModifierInstancedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartSimTimeMs = 0x8;
            static constexpr std::uintptr_t DurationMs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartSimTimeMs", 0x8, "DoubleProperty"},
            {"DurationMs", 0x10, "DoubleProperty"},
        }};
    };

    struct MovementModifierLogic
    {
        static constexpr std::string_view Name = "MovementModifierLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedDataStructType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstancedDataStructType", 0x28, "ObjectProperty"},
        }};
    };

    struct MovementRecord
    {
        static constexpr std::string_view Name = "MovementRecord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementRecordUtils
    {
        static constexpr std::string_view Name = "MovementRecordUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "K2_GetRelevantMoveDelta",
            "K2_GetRelevantVelocity",
            "K2_GetTotalMoveDelta",
            "K2_SetDeltaSeconds",
        }};
    };

    struct MovementSettingsInterface
    {
        static constexpr std::string_view Name = "MovementSettingsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementSubstep
    {
        static constexpr std::string_view Name = "MovementSubstep";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovementUtils
    {
        static constexpr std::string_view Name = "MovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 29> FunctionNames{{
            "ApplyAngularVelocity",
            "ApplyAngularVelocityToQuat",
            "ApplyAngularVelocityToRotator",
            "ApplyGravityToOrientationIntent",
            "CanEscapeGravity",
            "ComputeAngularVelocity",
            "ComputeAngularVelocityDegrees",
            "ComputeCombinedVelocity",
            "ComputeDirectionIntent",
            "ComputeSlideDelta",
            "ComputeVelocity",
            "ComputeVelocityFromGravity",
            "ComputeVelocityFromPositions",
            "ConstrainToPlane",
            "DeduceUpDirectionFromGravity",
            "FindTeleportSpot",
            "GetGravityVerticalComponent",
            "GetMovingComponentSet",
            "IsAngularVelocityZero",
            "IsExceedingMaxSpeed",
            "ProjectToGravityFloor",
            "TestEncroachment",
            "TestEncroachmentAndAdjust",
            "TryMoveToSlideAlongSurface",
            "TryMoveToSlideAlongSurfaceNoMovementRecord",
            "TrySafeMoveAndSlideUpdatedComponent",
            "TrySafeMoveAndSlideUpdatedComponentNoMovementRecord",
            "TrySafeMoveUpdatedComponent",
            "TrySafeMoveUpdatedComponentNoMovementRecord",
        }};
    };

    struct MoverAIInputs
    {
        static constexpr std::string_view Name = "MoverAIInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RVOVelocityDelta = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RVOVelocityDelta", 0x8, "StructProperty"},
        }};
    };

    struct MoverAnimMontageState
    {
        static constexpr std::string_view Name = "MoverAnimMontageState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Montage = 0x0;
            static constexpr std::uintptr_t Debug_MontageName = 0x8;
            static constexpr std::uintptr_t StartingMontagePosition = 0xC;
            static constexpr std::uintptr_t PlayRate = 0x10;
            static constexpr std::uintptr_t CurrentPosition = 0x14;
            static constexpr std::uintptr_t BlendOutTimeSeconds = 0x18;
            static constexpr std::uintptr_t bEnableAutoBlendOut = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Montage", 0x0, "ObjectProperty"},
            {"Debug_MontageName", 0x8, "NameProperty"},
            {"StartingMontagePosition", 0xC, "FloatProperty"},
            {"PlayRate", 0x10, "FloatProperty"},
            {"CurrentPosition", 0x14, "FloatProperty"},
            {"BlendOutTimeSeconds", 0x18, "FloatProperty"},
            {"bEnableAutoBlendOut", 0x1C, "BoolProperty"},
        }};
    };

    struct MoverAuxStateContext
    {
        static constexpr std::string_view Name = "MoverAuxStateContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AuxStateCollection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AuxStateCollection", 0x0, "StructProperty"},
        }};
    };

    struct MoverBackendLiaisonInterface
    {
        static constexpr std::string_view Name = "MoverBackendLiaisonInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverBlackboard
    {
        static constexpr std::string_view Name = "MoverBlackboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverComponent
    {
        static constexpr std::string_view Name = "MoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPreSimulationTick = 0xD0;
            static constexpr std::uintptr_t OnPostMovement = 0xE0;
            static constexpr std::uintptr_t OnPostSimulationTick = 0xF0;
            static constexpr std::uintptr_t OnPostSimulationRollback = 0x100;
            static constexpr std::uintptr_t OnMovementModeChanged = 0x110;
            static constexpr std::uintptr_t OnTeleportSucceeded = 0x120;
            static constexpr std::uintptr_t OnTeleportFailed = 0x130;
            static constexpr std::uintptr_t OnBasedMovementApplied = 0x140;
            static constexpr std::uintptr_t OnGameplayTagAdded = 0x150;
            static constexpr std::uintptr_t OnGameplayTagRemoved = 0x160;
            static constexpr std::uintptr_t OnPostFinalize = 0x170;
            static constexpr std::uintptr_t BackendClass = 0x198;
            static constexpr std::uintptr_t MovementModes = 0x1A0;
            static constexpr std::uintptr_t StartingMovementMode = 0x1B0;
            static constexpr std::uintptr_t Transitions = 0x1B8;
            static constexpr std::uintptr_t PersistentSyncStateDataTypes = 0x1C8;
            static constexpr std::uintptr_t InputProducer = 0x1D8;
            static constexpr std::uintptr_t bGatherInputFromAllInputProducerComponents = 0x1E0;
            static constexpr std::uintptr_t InputProducers = 0x1E8;
            static constexpr std::uintptr_t UpdatedComponent = 0x220;
            static constexpr std::uintptr_t UpdatedCompAsPrimitive = 0x228;
            static constexpr std::uintptr_t PrimaryVisualComponent = 0x230;
            static constexpr std::uintptr_t BackendLiaisonComp = 0x550;
            static constexpr std::uintptr_t SimBlackboard = 0x598;
            static constexpr std::uintptr_t Simulation = 0x5A0;
            static constexpr std::uintptr_t RollbackBlackboardExternalWrapper = 0x5A8;
            static constexpr std::uintptr_t MovesAwaitingSimulation = 0x5B0;
            static constexpr std::uintptr_t ModifierLogicAwaitingSimulation = 0x5C0;
            static constexpr std::uintptr_t SharedSettings = 0x5D0;
            static constexpr std::uintptr_t GravityAccelOverride = 0x5E0;
            static constexpr std::uintptr_t PlanarConstraint = 0x5F8;
            static constexpr std::uintptr_t SmoothingMode = 0x630;
            static constexpr std::uintptr_t bAcceptExternalMovement = 0x631;
            static constexpr std::uintptr_t bSyncInputsForSimProxy = 0x631;
            static constexpr std::uintptr_t bWarnOnExternalMovement = 0x631;
            static constexpr std::uintptr_t bHasUpDirectionOverride = 0x632;
            static constexpr std::uintptr_t UpDirectionOverride = 0x638;
            static constexpr std::uintptr_t bHasGravityOverride = 0x650;
            static constexpr std::uintptr_t bUseDeferredGroupMovement = 0x651;
            static constexpr std::uintptr_t WorldToGravityTransform = 0x660;
            static constexpr std::uintptr_t GravityToWorldTransform = 0x680;
            static constexpr std::uintptr_t bSupportsKinematicBasedMovement = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"OnPreSimulationTick", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnPostMovement", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnPostSimulationTick", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnPostSimulationRollback", 0x100, "MulticastInlineDelegateProperty"},
            {"OnMovementModeChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"OnTeleportSucceeded", 0x120, "MulticastInlineDelegateProperty"},
            {"OnTeleportFailed", 0x130, "MulticastInlineDelegateProperty"},
            {"OnBasedMovementApplied", 0x140, "MulticastInlineDelegateProperty"},
            {"OnGameplayTagAdded", 0x150, "MulticastInlineDelegateProperty"},
            {"OnGameplayTagRemoved", 0x160, "MulticastInlineDelegateProperty"},
            {"OnPostFinalize", 0x170, "MulticastInlineDelegateProperty"},
            {"BackendClass", 0x198, "ClassProperty"},
            {"MovementModes", 0x1A0, "MapProperty"},
            {"StartingMovementMode", 0x1B0, "NameProperty"},
            {"Transitions", 0x1B8, "ArrayProperty"},
            {"PersistentSyncStateDataTypes", 0x1C8, "ArrayProperty"},
            {"InputProducer", 0x1D8, "ObjectProperty"},
            {"bGatherInputFromAllInputProducerComponents", 0x1E0, "BoolProperty"},
            {"InputProducers", 0x1E8, "ArrayProperty"},
            {"UpdatedComponent", 0x220, "ObjectProperty"},
            {"UpdatedCompAsPrimitive", 0x228, "ObjectProperty"},
            {"PrimaryVisualComponent", 0x230, "ObjectProperty"},
            {"BackendLiaisonComp", 0x550, "InterfaceProperty"},
            {"SimBlackboard", 0x598, "ObjectProperty"},
            {"Simulation", 0x5A0, "ObjectProperty"},
            {"RollbackBlackboardExternalWrapper", 0x5A8, "StructProperty"},
            {"MovesAwaitingSimulation", 0x5B0, "ArrayProperty"},
            {"ModifierLogicAwaitingSimulation", 0x5C0, "ArrayProperty"},
            {"SharedSettings", 0x5D0, "ArrayProperty"},
            {"GravityAccelOverride", 0x5E0, "StructProperty"},
            {"PlanarConstraint", 0x5F8, "StructProperty"},
            {"SmoothingMode", 0x630, "EnumProperty"},
            {"bAcceptExternalMovement", 0x631, "BoolProperty"},
            {"bSyncInputsForSimProxy", 0x631, "BoolProperty"},
            {"bWarnOnExternalMovement", 0x631, "BoolProperty"},
            {"bHasUpDirectionOverride", 0x632, "BoolProperty"},
            {"UpDirectionOverride", 0x638, "StructProperty"},
            {"bHasGravityOverride", 0x650, "BoolProperty"},
            {"bUseDeferredGroupMovement", 0x651, "BoolProperty"},
            {"WorldToGravityTransform", 0x660, "StructProperty"},
            {"GravityToWorldTransform", 0x680, "StructProperty"},
            {"bSupportsKinematicBasedMovement", 0x6B0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 73> FunctionNames{{
            "AddGameplayTag",
            "AddGameplayTags",
            "AddMovementModeFromClass",
            "AddMovementModeFromObject",
            "CancelFeaturesWithTag",
            "CancelModifierFromHandle",
            "FindMovementMode",
            "FindMovementModeByName",
            "FindSharedSettings_BP",
            "FindSharedSettings_Mutable_BP",
            "GetAngularVelocity",
            "GetBaseVisualComponentTransform",
            "GetCurrentMovementModeTime",
            "GetFutureTrajectory",
            "GetGameplayTags",
            "GetGravityAcceleration",
            "GetLastInputCmd",
            "GetLastTimeStep",
            "GetMovementBase",
            "GetMovementBaseBoneName",
            "GetMovementIntent",
            "GetMovementMode",
            "GetMovementModeName",
            "GetNextMovementModeName",
            "GetOperationalMode",
            "GetPlanarConstraint",
            "GetPredictedTrajectory",
            "GetPrimaryVisualComponent",
            "GetSimBlackboard",
            "GetSyncState",
            "GetTargetOrientation",
            "GetUpDirection",
            "GetUpdatedComponent",
            "GetVelocity",
            "HandleImpact",
            "HasFeaturesWithTag",
            "HasGameplayTag",
            "HasGameplayTagInState",
            "HasValidCachedInputCmd",
            "HasValidCachedState",
            "IsBackendAsync",
            "IsModifierActiveOrQueued",
            "IsUsingDeferredGroupMovement",
            "K2_CancelModifier",
            "K2_FindActiveLayeredMove",
            "K2_FindMovementModifier",
            "K2_QueueInstantMovementEffect",
            "K2_QueueLayeredMove",
            "K2_QueueLayeredMoveActivationWithContext",
            "K2_QueueModeChange",
            "K2_QueueMovementModifier",
            "K2_RegisterModifier",
            "K2_RegisterMove",
            "K2_RegisterMoves",
            "K2_ScheduleInstantMovementEffect",
            "K2_UnregisterModifier",
            "K2_UnregisterMove",
            "OnBeginOverlap",
            "PhysicsVolumeChanged",
            "QueueLayeredMoveActivation",
            "QueueNextMode",
            "RemoveGameplayTag",
            "RemoveGameplayTags",
            "RemoveMovementMode",
            "SetBaseVisualComponentTransform",
            "SetGravityOverride",
            "SetOperationalMode",
            "SetPlanarConstraint",
            "SetPrimaryVisualComponent",
            "SetUpDirectionOverride",
            "SetUpdatedComponent",
            "SetUseDeferredGroupMovement",
            "TryGetFloorCheckHitResult",
        }};
    };

    struct MoverDataCollection
    {
        static constexpr std::string_view Name = "MoverDataCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverDataCollectionLibrary
    {
        static constexpr std::string_view Name = "MoverDataCollectionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ClearDataFromCollection",
            "K2_AddDataToCollection",
            "K2_GetDataFromCollection",
        }};
    };

    struct MoverDataModelBlueprintLibrary
    {
        static constexpr std::string_view Name = "MoverDataModelBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetAngularVelocityDegreesFromSyncState",
            "GetLocationFromSyncState",
            "GetMoveDirectionIntentFromInputs",
            "GetMoveDirectionIntentFromSyncState",
            "GetOrientationFromSyncState",
            "GetVelocityFromSyncState",
            "SetDirectionalInput",
            "SetVelocityInput",
        }};
    };

    struct MoverDataPersistence
    {
        static constexpr std::string_view Name = "MoverDataPersistence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredType = 0x0;
            static constexpr std::uintptr_t bCopyFromPriorFrame = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredType", 0x0, "ObjectProperty"},
            {"bCopyFromPriorFrame", 0x8, "BoolProperty"},
        }};
    };

    struct MoverDataStructBase
    {
        static constexpr std::string_view Name = "MoverDataStructBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverDebugComponent
    {
        static constexpr std::string_view Name = "MoverDebugComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LookaheadSeconds = 0xC0;
            static constexpr std::uintptr_t LookaheadSamplesPerSecond = 0xC4;
            static constexpr std::uintptr_t bShowTrajectory = 0xC8;
            static constexpr std::uintptr_t bShowTrail = 0xC9;
            static constexpr std::uintptr_t bShowCorrections = 0xCA;
            static constexpr std::uintptr_t HistoryTrackingSeconds = 0xCC;
            static constexpr std::uintptr_t HistorySamplesPerSecond = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LookaheadSeconds", 0xC0, "FloatProperty"},
            {"LookaheadSamplesPerSecond", 0xC4, "IntProperty"},
            {"bShowTrajectory", 0xC8, "BoolProperty"},
            {"bShowTrail", 0xC9, "BoolProperty"},
            {"bShowCorrections", 0xCA, "BoolProperty"},
            {"HistoryTrackingSeconds", 0xCC, "FloatProperty"},
            {"HistorySamplesPerSecond", 0xD0, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetPastTrajectory",
            "OnHistoryTrackingRollback",
            "OnMovementSimRollback",
            "OnMovementSimTick",
            "SetHistoryTracking",
        }};
    };

    struct MoverDefaultSyncState
    {
        static constexpr std::string_view Name = "MoverDefaultSyncState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t orientation = 0x20;
            static constexpr std::uintptr_t Velocity = 0x38;
            static constexpr std::uintptr_t AngularVelocityDegrees = 0x50;
            static constexpr std::uintptr_t MoveDirectionIntent = 0x68;
            static constexpr std::uintptr_t MovementBase = 0x80;
            static constexpr std::uintptr_t MovementBaseBoneName = 0x88;
            static constexpr std::uintptr_t MovementBasePos = 0x90;
            static constexpr std::uintptr_t MovementBaseQuat = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Location", 0x8, "StructProperty"},
            {"orientation", 0x20, "StructProperty"},
            {"Velocity", 0x38, "StructProperty"},
            {"AngularVelocityDegrees", 0x50, "StructProperty"},
            {"MoveDirectionIntent", 0x68, "StructProperty"},
            {"MovementBase", 0x80, "WeakObjectProperty"},
            {"MovementBaseBoneName", 0x88, "NameProperty"},
            {"MovementBasePos", 0x90, "StructProperty"},
            {"MovementBaseQuat", 0xB0, "StructProperty"},
        }};
    };

    struct MoverDeveloperSettings
    {
        static constexpr std::string_view Name = "MoverDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettingsBackedByCVars";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxTimesToRefundSubstep = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxTimesToRefundSubstep", 0x30, "IntProperty"},
        }};
    };

    struct MoverDictionaryData
    {
        static constexpr std::string_view Name = "MoverDictionaryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolValues = 0x8;
            static constexpr std::uintptr_t IntValues = 0x18;
            static constexpr std::uintptr_t FloatValues = 0x28;
            static constexpr std::uintptr_t VectorValues = 0x38;
            static constexpr std::uintptr_t RotatorValues = 0x48;
            static constexpr std::uintptr_t NameValues = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoolValues", 0x8, "MapProperty"},
            {"IntValues", 0x18, "MapProperty"},
            {"FloatValues", 0x28, "MapProperty"},
            {"VectorValues", 0x38, "MapProperty"},
            {"RotatorValues", 0x48, "MapProperty"},
            {"NameValues", 0x58, "MapProperty"},
        }};
    };

    struct MoverDynamicBasedMovementTickFunction
    {
        static constexpr std::string_view Name = "MoverDynamicBasedMovementTickFunction";
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

    struct MoverEventContext
    {
        static constexpr std::string_view Name = "MoverEventContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTimeMs = 0x0;
            static constexpr std::uintptr_t ServerFrame = 0x8;
            static constexpr std::uintptr_t bIsCausedByRollback = 0xC;
            static constexpr std::uintptr_t bIsDuringResimulation = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EventTimeMs", 0x0, "DoubleProperty"},
            {"ServerFrame", 0x8, "IntProperty"},
            {"bIsCausedByRollback", 0xC, "BoolProperty"},
            {"bIsDuringResimulation", 0xC, "BoolProperty"},
        }};
    };

    struct MoverGameplayTagChangeEventData
    {
        static constexpr std::string_view Name = "MoverGameplayTagChangeEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x60;
            static constexpr std::uintptr_t bWasAdded = 0x64;
            static constexpr std::uintptr_t bIsExternalTag = 0x65;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x60, "StructProperty"},
            {"bWasAdded", 0x64, "BoolProperty"},
            {"bIsExternalTag", 0x65, "BoolProperty"},
        }};
    };

    struct MoverInputCmdContext
    {
        static constexpr std::string_view Name = "MoverInputCmdContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputCollection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputCollection", 0x0, "StructProperty"},
        }};
    };

    struct MoverInputContainerDataStruct
    {
        static constexpr std::string_view Name = "MoverInputContainerDataStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverInputProducerInterface
    {
        static constexpr std::string_view Name = "MoverInputProducerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProduceInput",
        }};
    };

    struct MoverInstanceHandle
    {
        static constexpr std::string_view Name = "MoverInstanceHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "UInt64Property"},
        }};
    };

    struct MoverMotionWarpingInputs
    {
        static constexpr std::string_view Name = "MoverMotionWarpingInputs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WarpTargets = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WarpTargets", 0x8, "ArrayProperty"},
        }};
    };

    struct MoverNetworkPredictionLiaisonComponent
    {
        static constexpr std::string_view Name = "MoverNetworkPredictionLiaisonComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetworkPredictionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Simulation = 0xE88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Simulation", 0xE88, "ObjectProperty"},
        }};
    };

    struct MoverObjectInterface
    {
        static constexpr std::string_view Name = "MoverObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverOnImpactParams
    {
        static constexpr std::string_view Name = "MoverOnImpactParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeName = 0x0;
            static constexpr std::uintptr_t HitResult = 0x8;
            static constexpr std::uintptr_t AttemptedMoveDelta = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovementModeName", 0x0, "NameProperty"},
            {"HitResult", 0x8, "StructProperty"},
            {"AttemptedMoveDelta", 0x100, "StructProperty"},
        }};
    };

    struct MoverPredictTrajectoryParams
    {
        static constexpr std::string_view Name = "MoverPredictTrajectoryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumPredictionSamples = 0x0;
            static constexpr std::uintptr_t SecondsPerSample = 0x4;
            static constexpr std::uintptr_t bUseVisualComponentRoot = 0x8;
            static constexpr std::uintptr_t bDisableGravity = 0x9;
            static constexpr std::uintptr_t OptionalStartTime = 0x10;
            static constexpr std::uintptr_t OptionalStartSyncState = 0x28;
            static constexpr std::uintptr_t OptionalStartAuxState = 0x128;
            static constexpr std::uintptr_t OptionalInputCmds = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NumPredictionSamples", 0x0, "IntProperty"},
            {"SecondsPerSample", 0x4, "FloatProperty"},
            {"bUseVisualComponentRoot", 0x8, "BoolProperty"},
            {"bDisableGravity", 0x9, "BoolProperty"},
            {"OptionalStartTime", 0x10, "OptionalProperty"},
            {"OptionalStartSyncState", 0x28, "OptionalProperty"},
            {"OptionalStartAuxState", 0x128, "OptionalProperty"},
            {"OptionalInputCmds", 0x140, "ArrayProperty"},
        }};
    };

    struct MoverResolvedWarpTarget
    {
        static constexpr std::string_view Name = "MoverResolvedWarpTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Location", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
        }};
    };

    struct MoverSchedulingInfo
    {
        static constexpr std::string_view Name = "MoverSchedulingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerIssuanceTime = 0x0;
            static constexpr std::uintptr_t ServerExecutionTime = 0x10;
            static constexpr std::uintptr_t bIsFixedDt = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ServerIssuanceTime", 0x0, "StructProperty"},
            {"ServerExecutionTime", 0x10, "StructProperty"},
            {"bIsFixedDt", 0x20, "BoolProperty"},
        }};
    };

    struct MoverSimContext
    {
        static constexpr std::string_view Name = "MoverSimContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Simulation = 0x0;
            static constexpr std::uintptr_t Blackboard = 0x8;
            static constexpr std::uintptr_t SimulationOwner = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Simulation", 0x0, "ObjectProperty"},
            {"Blackboard", 0x8, "StructProperty"},
            {"SimulationOwner", 0x18, "ObjectProperty"},
        }};
    };

    struct MoverSimDrivenMontageData
    {
        static constexpr std::string_view Name = "MoverSimDrivenMontageData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageStates = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MontageStates", 0x8, "ArrayProperty"},
        }};
    };

    struct MoverSimDrivenMontageEntry
    {
        static constexpr std::string_view Name = "MoverSimDrivenMontageEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Montage = 0x0;
            static constexpr std::uintptr_t Debug_MontageName = 0x8;
            static constexpr std::uintptr_t CurrentPosition = 0xC;
            static constexpr std::uintptr_t PlayRate = 0x10;
            static constexpr std::uintptr_t FrameSimTimeMs = 0x14;
            static constexpr std::uintptr_t StartSimTimeMs = 0x18;
            static constexpr std::uintptr_t BlendOutSimTimeMs = 0x1C;
            static constexpr std::uintptr_t FinishSimTimeMs = 0x20;
            static constexpr std::uintptr_t bShouldBlendOut = 0x24;
            static constexpr std::uintptr_t BlendOutTimeSeconds = 0x28;
            static constexpr std::uintptr_t bIsFinished = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Montage", 0x0, "ObjectProperty"},
            {"Debug_MontageName", 0x8, "NameProperty"},
            {"CurrentPosition", 0xC, "FloatProperty"},
            {"PlayRate", 0x10, "FloatProperty"},
            {"FrameSimTimeMs", 0x14, "FloatProperty"},
            {"StartSimTimeMs", 0x18, "FloatProperty"},
            {"BlendOutSimTimeMs", 0x1C, "FloatProperty"},
            {"FinishSimTimeMs", 0x20, "FloatProperty"},
            {"bShouldBlendOut", 0x24, "BoolProperty"},
            {"BlendOutTimeSeconds", 0x28, "FloatProperty"},
            {"bIsFinished", 0x2C, "BoolProperty"},
        }};
    };

    struct MoverSimEventGameThreadContext
    {
        static constexpr std::string_view Name = "MoverSimEventGameThreadContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MoverSimulation
    {
        static constexpr std::string_view Name = "MoverSimulation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Blackboard = 0x28;
            static constexpr std::uintptr_t RollbackBlackboard = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Blackboard", 0x28, "ObjectProperty"},
            {"RollbackBlackboard", 0x30, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "AttemptTeleport",
            "GetBlackboard",
            "GetBlackboard_Mutable",
            "GetNextModeName",
            "GetRollbackBlackboardPredictionWrapper",
            "GetRollbackBlackboardSimWrapper",
            "QueueNextMode",
            "RegisterMovementMode",
            "UnregisterMovementMode",
        }};
    };

    struct MoverSimulationEventData
    {
        static constexpr std::string_view Name = "MoverSimulationEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
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

    struct MoverStandaloneApplyStateTickFunction
    {
        static constexpr std::string_view Name = "MoverStandaloneApplyStateTickFunction";
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

    struct MoverStandaloneLiaisonComponent
    {
        static constexpr std::string_view Name = "MoverStandaloneLiaisonComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseAsyncProduceInput = 0xC8;
            static constexpr std::uintptr_t bUseAsyncMovementSimulationTick = 0xC9;
            static constexpr std::uintptr_t Simulation = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseAsyncProduceInput", 0xC8, "BoolProperty"},
            {"bUseAsyncMovementSimulationTick", 0xC9, "BoolProperty"},
            {"Simulation", 0xD8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddTickDependency",
            "GetEnableProduceInput",
            "GetUseAsyncMovementSimulationTick",
            "GetUseAsyncProduceInput",
            "OnControllerChanged",
            "SetEnableProduceInput",
            "SetUseAsyncMovementSimulationTick",
            "SetUseAsyncProduceInput",
        }};
    };

    struct MoverStandalonePreSimulateTickFunction
    {
        static constexpr std::string_view Name = "MoverStandalonePreSimulateTickFunction";
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

    struct MoverStandaloneProduceInputTickFunction
    {
        static constexpr std::string_view Name = "MoverStandaloneProduceInputTickFunction";
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

    struct MoverStandaloneSimulateMovementTickFunction
    {
        static constexpr std::string_view Name = "MoverStandaloneSimulateMovementTickFunction";
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

    struct MoverSyncState
    {
        static constexpr std::string_view Name = "MoverSyncState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementMode = 0x0;
            static constexpr std::uintptr_t LayeredMoves = 0x8;
            static constexpr std::uintptr_t LayeredMoveInstances = 0x68;
            static constexpr std::uintptr_t MovementModifiers = 0xB8;
            static constexpr std::uintptr_t InstancedMovementModifiers = 0xD8;
            static constexpr std::uintptr_t SyncStateCollection = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MovementMode", 0x0, "NameProperty"},
            {"LayeredMoves", 0x8, "StructProperty"},
            {"LayeredMoveInstances", 0x68, "StructProperty"},
            {"MovementModifiers", 0xB8, "StructProperty"},
            {"InstancedMovementModifiers", 0xD8, "StructProperty"},
            {"SyncStateCollection", 0xE8, "StructProperty"},
        }};
    };

    struct MoverTickEndData
    {
        static constexpr std::string_view Name = "MoverTickEndData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncState = 0x0;
            static constexpr std::uintptr_t AuxState = 0xF8;
            static constexpr std::uintptr_t MovementEndState = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SyncState", 0x0, "StructProperty"},
            {"AuxState", 0xF8, "StructProperty"},
            {"MovementEndState", 0x108, "StructProperty"},
        }};
    };

    struct MoverTickStartData
    {
        static constexpr std::string_view Name = "MoverTickStartData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputCmd = 0x0;
            static constexpr std::uintptr_t SyncState = 0x10;
            static constexpr std::uintptr_t AuxState = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputCmd", 0x0, "StructProperty"},
            {"SyncState", 0x10, "StructProperty"},
            {"AuxState", 0x108, "StructProperty"},
        }};
    };

    struct MoverTime
    {
        static constexpr std::string_view Name = "MoverTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameCount = 0x0;
            static constexpr std::uintptr_t TimeMS = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameCount", 0x0, "IntProperty"},
            {"TimeMS", 0x8, "DoubleProperty"},
        }};
    };

    struct MoverTimeStep
    {
        static constexpr std::string_view Name = "MoverTimeStep";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerFrame = 0x0;
            static constexpr std::uintptr_t BaseSimTimeMs = 0x8;
            static constexpr std::uintptr_t StepMs = 0x10;
            static constexpr std::uintptr_t bIsFirstResimFrame = 0x14;
            static constexpr std::uintptr_t bIsResimulating = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ServerFrame", 0x0, "IntProperty"},
            {"BaseSimTimeMs", 0x8, "DoubleProperty"},
            {"StepMs", 0x10, "FloatProperty"},
            {"bIsFirstResimFrame", 0x14, "BoolProperty"},
            {"bIsResimulating", 0x14, "BoolProperty"},
        }};
    };

    struct MoverTrajectoryPredictor
    {
        static constexpr std::string_view Name = "MoverTrajectoryPredictor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableGravity = 0x38;
            static constexpr std::uintptr_t MoverSamplingFrameRate = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisableGravity", 0x38, "BoolProperty"},
            {"MoverSamplingFrameRate", 0x3C, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Setup",
        }};
    };

    struct MoverUserDefinedDataStruct
    {
        static constexpr std::string_view Name = "MoverUserDefinedDataStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StructInstance = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StructInstance", 0x8, "StructProperty"},
        }};
    };

    struct MovingComponentSet
    {
        static constexpr std::string_view Name = "MovingComponentSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdatedComponent = 0x0;
            static constexpr std::uintptr_t UpdatedPrimitive = 0x8;
            static constexpr std::uintptr_t MoverComponent = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UpdatedComponent", 0x0, "WeakObjectProperty"},
            {"UpdatedPrimitive", 0x8, "WeakObjectProperty"},
            {"MoverComponent", 0x10, "WeakObjectProperty"},
        }};
    };

    struct NavMoverComponent
    {
        static constexpr std::string_view Name = "NavMoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavAgentProps = 0xD0;
            static constexpr std::uintptr_t MovementState = 0x100;
            static constexpr std::uintptr_t AvoidanceUID = 0x104;
            static constexpr std::uintptr_t AvoidanceGroup = 0x108;
            static constexpr std::uintptr_t GroupsToAvoid = 0x10C;
            static constexpr std::uintptr_t GroupsToIgnore = 0x110;
            static constexpr std::uintptr_t AvoidanceWeight = 0x114;
            static constexpr std::uintptr_t AvoidanceConsiderationRadius = 0x118;
            static constexpr std::uintptr_t NavMovementProperties = 0x11C;
            static constexpr std::uintptr_t MoverComponent = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NavAgentProps", 0xD0, "StructProperty"},
            {"MovementState", 0x100, "StructProperty"},
            {"AvoidanceUID", 0x104, "IntProperty"},
            {"AvoidanceGroup", 0x108, "StructProperty"},
            {"GroupsToAvoid", 0x10C, "StructProperty"},
            {"GroupsToIgnore", 0x110, "StructProperty"},
            {"AvoidanceWeight", 0x114, "FloatProperty"},
            {"AvoidanceConsiderationRadius", 0x118, "FloatProperty"},
            {"NavMovementProperties", 0x11C, "StructProperty"},
            {"MoverComponent", 0x178, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ConsumeNavMovementData",
            "GetMaxSpeedForNavMovement",
            "GetVelocityForNavMovement",
            "IsSwimming",
            "SetAvoidanceGroupMask",
            "SetGroupsToAvoidMask",
            "SetGroupsToIgnoreMask",
        }};
    };

    struct NavWalkingMode
    {
        static constexpr std::string_view Name = "NavWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t bSweepWhileNavWalking = 0x70;
            static constexpr std::uintptr_t bProjectNavMeshWalking = 0x71;
            static constexpr std::uintptr_t NavMeshProjectionHeightScaleUp = 0x74;
            static constexpr std::uintptr_t NavMeshProjectionHeightScaleDown = 0x78;
            static constexpr std::uintptr_t NavMeshProjectionInterval = 0x7C;
            static constexpr std::uintptr_t NavMeshProjectionInterpSpeed = 0x80;
            static constexpr std::uintptr_t ProjectNavMeshToGeometryBehavior = 0x84;
            static constexpr std::uintptr_t BehaviorOffNavMesh = 0x85;
            static constexpr std::uintptr_t bSlideAlongNavMeshEdge = 0x86;
            static constexpr std::uintptr_t NavMeshProjectionTimer = 0x88;
            static constexpr std::uintptr_t NavMoverComponent = 0xB0;
            static constexpr std::uintptr_t bProjectNavMeshOnBothWorldChannels = 0xC8;
            static constexpr std::uintptr_t TurnGenerator = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bSweepWhileNavWalking", 0x70, "BoolProperty"},
            {"bProjectNavMeshWalking", 0x71, "BoolProperty"},
            {"NavMeshProjectionHeightScaleUp", 0x74, "FloatProperty"},
            {"NavMeshProjectionHeightScaleDown", 0x78, "FloatProperty"},
            {"NavMeshProjectionInterval", 0x7C, "FloatProperty"},
            {"NavMeshProjectionInterpSpeed", 0x80, "FloatProperty"},
            {"ProjectNavMeshToGeometryBehavior", 0x84, "EnumProperty"},
            {"BehaviorOffNavMesh", 0x85, "EnumProperty"},
            {"bSlideAlongNavMeshEdge", 0x86, "BoolProperty"},
            {"NavMeshProjectionTimer", 0x88, "FloatProperty"},
            {"NavMoverComponent", 0xB0, "ObjectProperty"},
            {"bProjectNavMeshOnBothWorldChannels", 0xC8, "BoolProperty"},
            {"TurnGenerator", 0xD0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTurnGenerator",
            "SetTurnGeneratorClass",
        }};
    };

    struct NullMovementMode
    {
        static constexpr std::string_view Name = "NullMovementMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedSettingsClasses = 0x28;
            static constexpr std::uintptr_t Transitions = 0x38;
            static constexpr std::uintptr_t GameplayTags = 0x48;
            static constexpr std::uintptr_t bSupportsAsync = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SharedSettingsClasses", 0x28, "ArrayProperty"},
            {"Transitions", 0x38, "ArrayProperty"},
            {"GameplayTags", 0x48, "StructProperty"},
            {"bSupportsAsync", 0x68, "BoolProperty"},
        }};
    };

    struct PlanarConstraint
    {
        static constexpr std::string_view Name = "PlanarConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bConstrainToPlane = 0x0;
            static constexpr std::uintptr_t PlaneConstraintNormal = 0x8;
            static constexpr std::uintptr_t PlaneConstraintOrigin = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bConstrainToPlane", 0x0, "BoolProperty"},
            {"PlaneConstraintNormal", 0x8, "StructProperty"},
            {"PlaneConstraintOrigin", 0x20, "StructProperty"},
        }};
    };

    struct PlanarConstraintUtils
    {
        static constexpr std::string_view Name = "PlanarConstraintUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ConstrainDirectionToPlane",
            "ConstrainLocationToPlane",
            "ConstrainNormalToPlane",
            "SetPlanarConstraintEnabled",
            "SetPlanarConstraintNormal",
            "SetPlaneConstraintOrigin",
        }};
    };

    struct PlayMoverMontageCallbackProxy
    {
        static constexpr std::string_view Name = "PlayMoverMontageCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayMontageCallbackProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x28;
            static constexpr std::uintptr_t OnBlendOut = 0x38;
            static constexpr std::uintptr_t OnInterrupted = 0x48;
            static constexpr std::uintptr_t OnNotifyBegin = 0x58;
            static constexpr std::uintptr_t OnNotifyEnd = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnCompleted", 0x28, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x38, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0x48, "MulticastInlineDelegateProperty"},
            {"OnNotifyBegin", 0x58, "MulticastInlineDelegateProperty"},
            {"OnNotifyEnd", 0x68, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateProxyObjectForPlayMoverMontage",
            "OnMoverMontageEnded",
        }};
    };

    struct ProposedMove
    {
        static constexpr std::string_view Name = "ProposedMove";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreferredMode = 0x0;
            static constexpr std::uintptr_t DirectionIntent = 0x8;
            static constexpr std::uintptr_t LinearVelocity = 0x20;
            static constexpr std::uintptr_t AngularVelocityDegrees = 0x38;
            static constexpr std::uintptr_t bHasDirIntent = 0x50;
            static constexpr std::uintptr_t MixMode = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PreferredMode", 0x0, "NameProperty"},
            {"DirectionIntent", 0x8, "StructProperty"},
            {"LinearVelocity", 0x20, "StructProperty"},
            {"AngularVelocityDegrees", 0x38, "StructProperty"},
            {"bHasDirIntent", 0x50, "BoolProperty"},
            {"MixMode", 0x51, "EnumProperty"},
        }};
    };

    struct RelativeBaseInfo
    {
        static constexpr std::string_view Name = "RelativeBaseInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementBase = 0x0;
            static constexpr std::uintptr_t BoneName = 0x8;
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t Rotation = 0x30;
            static constexpr std::uintptr_t ContactLocalPosition = 0x50;
            static constexpr std::uintptr_t WorldspaceOffsetFromContactPos = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MovementBase", 0x0, "WeakObjectProperty"},
            {"BoneName", 0x8, "NameProperty"},
            {"Location", 0x10, "StructProperty"},
            {"Rotation", 0x30, "StructProperty"},
            {"ContactLocalPosition", 0x50, "StructProperty"},
            {"WorldspaceOffsetFromContactPos", 0x68, "StructProperty"},
        }};
    };

    struct RollbackBlackboard
    {
        static constexpr std::string_view Name = "RollbackBlackboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RollbackBlackboardExternalWrapper
    {
        static constexpr std::string_view Name = "RollbackBlackboardExternalWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Blackboard = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Blackboard", 0x0, "ObjectProperty"},
        }};
    };

    struct RollbackBlackboardLibrary
    {
        static constexpr std::string_view Name = "RollbackBlackboardLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RollbackBlackboardSimWrapper
    {
        static constexpr std::string_view Name = "RollbackBlackboardSimWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Blackboard = 0x0;
            static constexpr std::uintptr_t bInPredictiveMode = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Blackboard", 0x0, "ObjectProperty"},
            {"bInPredictiveMode", 0x8, "BoolProperty"},
        }};
    };

    struct ScheduledInstantMovementEffect
    {
        static constexpr std::string_view Name = "ScheduledInstantMovementEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScheduledLayeredMove
    {
        static constexpr std::string_view Name = "ScheduledLayeredMove";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleFlyingMode
    {
        static constexpr std::string_view Name = "SimpleFlyingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FlyingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeedOverride = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxSpeedOverride", 0x80, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GenerateFlyingMove",
        }};
    };

    struct SimpleSpringState
    {
        static constexpr std::string_view Name = "SimpleSpringState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverDataStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentAccel = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentAccel", 0x8, "StructProperty"},
        }};
    };

    struct SimpleSpringWalkingMode
    {
        static constexpr std::string_view Name = "SimpleSpringWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleWalkingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocitySmoothingTime = 0x90;
            static constexpr std::uintptr_t FacingSmoothingTime = 0x94;
            static constexpr std::uintptr_t VelocityDeadzoneThreshold = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VelocitySmoothingTime", 0x90, "FloatProperty"},
            {"FacingSmoothingTime", 0x94, "FloatProperty"},
            {"VelocityDeadzoneThreshold", 0x98, "FloatProperty"},
        }};
    };

    struct SimpleWalkingMode
    {
        static constexpr std::string_view Name = "SimpleWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WalkingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeedOverride = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxSpeedOverride", 0x88, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GenerateWalkMove",
        }};
    };

    struct SimulationTickParams
    {
        static constexpr std::string_view Name = "SimulationTickParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SimContext = 0x0;
            static constexpr std::uintptr_t SimBlackboard = 0x20;
            static constexpr std::uintptr_t StartState = 0x28;
            static constexpr std::uintptr_t TimeStep = 0x140;
            static constexpr std::uintptr_t ProposedMove = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SimContext", 0x0, "StructProperty"},
            {"SimBlackboard", 0x20, "ObjectProperty"},
            {"StartState", 0x28, "StructProperty"},
            {"TimeStep", 0x140, "StructProperty"},
            {"ProposedMove", 0x158, "StructProperty"},
        }};
    };

    struct SmoothWalkingMode
    {
        static constexpr std::string_view Name = "SmoothWalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleWalkingMode";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0x90;
            static constexpr std::uintptr_t Deceleration = 0x94;
            static constexpr std::uintptr_t DirectionalAccelerationFactor = 0x98;
            static constexpr std::uintptr_t TurningStrength = 0x9C;
            static constexpr std::uintptr_t AccelerationSmoothingTime = 0xA0;
            static constexpr std::uintptr_t DecelerationSmoothingTime = 0xA4;
            static constexpr std::uintptr_t AccelerationSmoothingCompensation = 0xA8;
            static constexpr std::uintptr_t DecelerationSmoothingCompensation = 0xAC;
            static constexpr std::uintptr_t VelocityDeadzoneThreshold = 0xB0;
            static constexpr std::uintptr_t AccelerationDeadzoneThreshold = 0xB4;
            static constexpr std::uintptr_t OutsideInfluenceSmoothingTime = 0xB8;
            static constexpr std::uintptr_t FacingSmoothingTime = 0xBC;
            static constexpr std::uintptr_t bSmoothFacingWithDoubleSpring = 0xC0;
            static constexpr std::uintptr_t FacingDeadzoneThreshold = 0xC4;
            static constexpr std::uintptr_t AngularVelocityDeadzoneThreshold = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Acceleration", 0x90, "FloatProperty"},
            {"Deceleration", 0x94, "FloatProperty"},
            {"DirectionalAccelerationFactor", 0x98, "FloatProperty"},
            {"TurningStrength", 0x9C, "FloatProperty"},
            {"AccelerationSmoothingTime", 0xA0, "FloatProperty"},
            {"DecelerationSmoothingTime", 0xA4, "FloatProperty"},
            {"AccelerationSmoothingCompensation", 0xA8, "FloatProperty"},
            {"DecelerationSmoothingCompensation", 0xAC, "FloatProperty"},
            {"VelocityDeadzoneThreshold", 0xB0, "FloatProperty"},
            {"AccelerationDeadzoneThreshold", 0xB4, "FloatProperty"},
            {"OutsideInfluenceSmoothingTime", 0xB8, "FloatProperty"},
            {"FacingSmoothingTime", 0xBC, "FloatProperty"},
            {"bSmoothFacingWithDoubleSpring", 0xC0, "BoolProperty"},
            {"FacingDeadzoneThreshold", 0xC4, "FloatProperty"},
            {"AngularVelocityDeadzoneThreshold", 0xC8, "FloatProperty"},
        }};
    };

    struct SmoothWalkingState
    {
        static constexpr std::string_view Name = "SmoothWalkingState";
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

    struct StanceModifier
    {
        static constexpr std::string_view Name = "StanceModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovementModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationMs = 0x8;
            static constexpr std::uintptr_t StartSimTimeMs = 0x10;
            static constexpr std::uintptr_t LocalModifierHandle = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DurationMs", 0x8, "FloatProperty"},
            {"StartSimTimeMs", 0x10, "DoubleProperty"},
            {"LocalModifierHandle", 0x18, "StructProperty"},
        }};
    };

    struct StanceSettings
    {
        static constexpr std::string_view Name = "StanceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CrouchingMaxAcceleration = 0x30;
            static constexpr std::uintptr_t CrouchingMaxSpeed = 0x34;
            static constexpr std::uintptr_t CrouchHalfHeight = 0x38;
            static constexpr std::uintptr_t CrouchedEyeHeight = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CrouchingMaxAcceleration", 0x30, "FloatProperty"},
            {"CrouchingMaxSpeed", 0x34, "FloatProperty"},
            {"CrouchHalfHeight", 0x38, "FloatProperty"},
            {"CrouchedEyeHeight", 0x3C, "FloatProperty"},
        }};
    };

    struct SwimmingControlSettings
    {
        static constexpr std::string_view Name = "SwimmingControlSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CancelCrouchImmersionDepth = 0x0;
            static constexpr std::uintptr_t DBNOSwimImmersionDepth = 0x4;
            static constexpr std::uintptr_t MaxAcceleration = 0x8;
            static constexpr std::uintptr_t MaxAccelerationSprinting = 0xC;
            static constexpr std::uintptr_t BrakingDeceleration = 0x10;
            static constexpr std::uintptr_t MaxNormalSpeed = 0x14;
            static constexpr std::uintptr_t MaxSprintSpeed = 0x18;
            static constexpr std::uintptr_t MinSprintJumpSpeed = 0x1C;
            static constexpr std::uintptr_t SprintJumpAirAccelAngleLimit = 0x20;
            static constexpr std::uintptr_t SprintRetriggerDelay = 0x24;
            static constexpr std::uintptr_t SprintDelayAfterFiring = 0x28;
            static constexpr std::uintptr_t MaxTargetingSpeed = 0x2C;
            static constexpr std::uintptr_t BackwardsSpeedMultiplier = 0x30;
            static constexpr std::uintptr_t BackwardsSpeedCosAngle = 0x34;
            static constexpr std::uintptr_t AngledSpeedMultiplier = 0x38;
            static constexpr std::uintptr_t AngledSpeedCosAngle = 0x3C;
            static constexpr std::uintptr_t Friction = 0x40;
            static constexpr std::uintptr_t FrictionSprinting = 0x44;
            static constexpr std::uintptr_t FrictionDirectionChangeDot = 0x48;
            static constexpr std::uintptr_t FrictionDirectionChangeMultiplier = 0x4C;
            static constexpr std::uintptr_t MaxSpeedUp = 0x50;
            static constexpr std::uintptr_t MaxSpeedDown = 0x54;
            static constexpr std::uintptr_t MaxHorizontalEntrySpeed = 0x58;
            static constexpr std::uintptr_t WaterForceMultiplier = 0x5C;
            static constexpr std::uintptr_t WaterForceSecondMultiplier = 0x60;
            static constexpr std::uintptr_t MaxWaterForce = 0x64;
            static constexpr std::uintptr_t WaterVelocityDepthForMax = 0x68;
            static constexpr std::uintptr_t WaterVelocityMinMultiplier = 0x6C;
            static constexpr std::uintptr_t WaterSimMaxTimeStep = 0x70;
            static constexpr std::uintptr_t WaterSimSubStepTime = 0x74;
            static constexpr std::uintptr_t BobbingMaxForce = 0x78;
            static constexpr std::uintptr_t BobbingIdealDepthTolerance = 0x7C;
            static constexpr std::uintptr_t BobbingFrictionDown = 0x80;
            static constexpr std::uintptr_t BobbingExpDragDown = 0x84;
            static constexpr std::uintptr_t BobbingFrictionDownSubmerged = 0x88;
            static constexpr std::uintptr_t BobbingExpDragDownSubmerged = 0x8C;
            static constexpr std::uintptr_t BobbingFrictionUp = 0x90;
            static constexpr std::uintptr_t BobbingExpDragUp = 0x94;
            static constexpr std::uintptr_t BobbingFrictionMultiplier = 0x98;
            static constexpr std::uintptr_t BobbingExpDragMultiplier = 0x9C;
            static constexpr std::uintptr_t BoostDragMultiplier = 0xA0;
            static constexpr std::uintptr_t JumpMultiplier = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"CancelCrouchImmersionDepth", 0x0, "FloatProperty"},
            {"DBNOSwimImmersionDepth", 0x4, "FloatProperty"},
            {"MaxAcceleration", 0x8, "FloatProperty"},
            {"MaxAccelerationSprinting", 0xC, "FloatProperty"},
            {"BrakingDeceleration", 0x10, "FloatProperty"},
            {"MaxNormalSpeed", 0x14, "FloatProperty"},
            {"MaxSprintSpeed", 0x18, "FloatProperty"},
            {"MinSprintJumpSpeed", 0x1C, "FloatProperty"},
            {"SprintJumpAirAccelAngleLimit", 0x20, "FloatProperty"},
            {"SprintRetriggerDelay", 0x24, "FloatProperty"},
            {"SprintDelayAfterFiring", 0x28, "FloatProperty"},
            {"MaxTargetingSpeed", 0x2C, "FloatProperty"},
            {"BackwardsSpeedMultiplier", 0x30, "FloatProperty"},
            {"BackwardsSpeedCosAngle", 0x34, "FloatProperty"},
            {"AngledSpeedMultiplier", 0x38, "FloatProperty"},
            {"AngledSpeedCosAngle", 0x3C, "FloatProperty"},
            {"Friction", 0x40, "FloatProperty"},
            {"FrictionSprinting", 0x44, "FloatProperty"},
            {"FrictionDirectionChangeDot", 0x48, "FloatProperty"},
            {"FrictionDirectionChangeMultiplier", 0x4C, "FloatProperty"},
            {"MaxSpeedUp", 0x50, "FloatProperty"},
            {"MaxSpeedDown", 0x54, "FloatProperty"},
            {"MaxHorizontalEntrySpeed", 0x58, "FloatProperty"},
            {"WaterForceMultiplier", 0x5C, "FloatProperty"},
            {"WaterForceSecondMultiplier", 0x60, "FloatProperty"},
            {"MaxWaterForce", 0x64, "FloatProperty"},
            {"WaterVelocityDepthForMax", 0x68, "FloatProperty"},
            {"WaterVelocityMinMultiplier", 0x6C, "FloatProperty"},
            {"WaterSimMaxTimeStep", 0x70, "FloatProperty"},
            {"WaterSimSubStepTime", 0x74, "FloatProperty"},
            {"BobbingMaxForce", 0x78, "FloatProperty"},
            {"BobbingIdealDepthTolerance", 0x7C, "FloatProperty"},
            {"BobbingFrictionDown", 0x80, "FloatProperty"},
            {"BobbingExpDragDown", 0x84, "FloatProperty"},
            {"BobbingFrictionDownSubmerged", 0x88, "FloatProperty"},
            {"BobbingExpDragDownSubmerged", 0x8C, "FloatProperty"},
            {"BobbingFrictionUp", 0x90, "FloatProperty"},
            {"BobbingExpDragUp", 0x94, "FloatProperty"},
            {"BobbingFrictionMultiplier", 0x98, "FloatProperty"},
            {"BobbingExpDragMultiplier", 0x9C, "FloatProperty"},
            {"BoostDragMultiplier", 0xA0, "FloatProperty"},
            {"JumpMultiplier", 0xA4, "FloatProperty"},
        }};
    };

    struct SwimmingMode
    {
        static constexpr std::string_view Name = "SwimmingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceSwimmingWaterControlSettings = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SurfaceSwimmingWaterControlSettings", 0x70, "StructProperty"},
        }};
    };

    struct TeleportEffect
    {
        static constexpr std::string_view Name = "TeleportEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstantMovementEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLocation = 0x8;
            static constexpr std::uintptr_t bUseActorRotation = 0x20;
            static constexpr std::uintptr_t TargetRotation = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetLocation", 0x8, "StructProperty"},
            {"bUseActorRotation", 0x20, "BoolProperty"},
            {"TargetRotation", 0x28, "StructProperty"},
        }};
    };

    struct TeleportFailedEventData
    {
        static constexpr std::string_view Name = "TeleportFailedEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t FromLocation = 0x60;
            static constexpr std::uintptr_t FromRotation = 0x80;
            static constexpr std::uintptr_t ToLocation = 0xA0;
            static constexpr std::uintptr_t ToRotation = 0xC0;
            static constexpr std::uintptr_t TeleportFailureReason = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FromLocation", 0x60, "StructProperty"},
            {"FromRotation", 0x80, "StructProperty"},
            {"ToLocation", 0xA0, "StructProperty"},
            {"ToRotation", 0xC0, "StructProperty"},
            {"TeleportFailureReason", 0xE0, "EnumProperty"},
        }};
    };

    struct TeleportSucceededEventData
    {
        static constexpr std::string_view Name = "TeleportSucceededEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MoverSimulationEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t FromLocation = 0x60;
            static constexpr std::uintptr_t FromRotation = 0x80;
            static constexpr std::uintptr_t ToLocation = 0xA0;
            static constexpr std::uintptr_t ToRotation = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FromLocation", 0x60, "StructProperty"},
            {"FromRotation", 0x80, "StructProperty"},
            {"ToLocation", 0xA0, "StructProperty"},
            {"ToRotation", 0xC0, "StructProperty"},
        }};
    };

    struct TrajectorySampleInfo
    {
        static constexpr std::string_view Name = "TrajectorySampleInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t LinearVelocity = 0x60;
            static constexpr std::uintptr_t InstantaneousAcceleration = 0x78;
            static constexpr std::uintptr_t AngularVelocity = 0x90;
            static constexpr std::uintptr_t SimTimeMs = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"LinearVelocity", 0x60, "StructProperty"},
            {"InstantaneousAcceleration", 0x78, "StructProperty"},
            {"AngularVelocity", 0x90, "StructProperty"},
            {"SimTimeMs", 0xA8, "DoubleProperty"},
        }};
    };

    struct TransitionEvalResult
    {
        static constexpr std::string_view Name = "TransitionEvalResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NextMode = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NextMode", 0x0, "NameProperty"},
        }};
    };

    struct TurnGeneratorInterface
    {
        static constexpr std::string_view Name = "TurnGeneratorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTurn",
        }};
    };

    struct UpdateWaterSplineDataParams
    {
        static constexpr std::string_view Name = "UpdateWaterSplineDataParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetImmersionDepth = 0x0;
            static constexpr std::uintptr_t WaterVelocityDepthForMax = 0x4;
            static constexpr std::uintptr_t WaterVelocityMinMultiplier = 0x8;
            static constexpr std::uintptr_t PlayerVelocity = 0x10;
            static constexpr std::uintptr_t PlayerLocation = 0x28;
            static constexpr std::uintptr_t CapsuleHalfHeight = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetImmersionDepth", 0x0, "FloatProperty"},
            {"WaterVelocityDepthForMax", 0x4, "FloatProperty"},
            {"WaterVelocityMinMultiplier", 0x8, "FloatProperty"},
            {"PlayerVelocity", 0x10, "StructProperty"},
            {"PlayerLocation", 0x28, "StructProperty"},
            {"CapsuleHalfHeight", 0x40, "FloatProperty"},
        }};
    };

    struct WalkingMode
    {
        static constexpr std::string_view Name = "WalkingMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMovementMode";
        struct Offsets
        {
            static constexpr std::uintptr_t FloorCheckPolicy = 0x70;
            static constexpr std::uintptr_t TurnGenerator = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FloorCheckPolicy", 0x70, "EnumProperty"},
            {"TurnGenerator", 0x78, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTurnGenerator",
            "SetTurnGeneratorClass",
        }};
    };

    struct WaterCheckResult
    {
        static constexpr std::string_view Name = "WaterCheckResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bSwimmableVolume = 0x0;
            static constexpr std::uintptr_t HitResult = 0x8;
            static constexpr std::uintptr_t WaterSplineData = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSwimmableVolume", 0x0, "BoolProperty"},
            {"HitResult", 0x8, "StructProperty"},
            {"WaterSplineData", 0x100, "StructProperty"},
        }};
    };

    struct WaterFlowSplineData
    {
        static constexpr std::string_view Name = "WaterFlowSplineData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterMoveParams
    {
        static constexpr std::string_view Name = "WaterMoveParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveInputType = 0x0;
            static constexpr std::uintptr_t MoveInput = 0x8;
            static constexpr std::uintptr_t OrientationIntent = 0x20;
            static constexpr std::uintptr_t PriorVelocity = 0x38;
            static constexpr std::uintptr_t PriorOrientation = 0x50;
            static constexpr std::uintptr_t MaxSpeed = 0x68;
            static constexpr std::uintptr_t Acceleration = 0x6C;
            static constexpr std::uintptr_t Deceleration = 0x70;
            static constexpr std::uintptr_t Friction = 0x74;
            static constexpr std::uintptr_t TurningRate = 0x78;
            static constexpr std::uintptr_t TurningBoost = 0x7C;
            static constexpr std::uintptr_t DeltaSeconds = 0x80;
            static constexpr std::uintptr_t MoveAcceleration = 0x88;
            static constexpr std::uintptr_t MoveSpeed = 0xA0;
            static constexpr std::uintptr_t WorldToGravityQuat = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MoveInputType", 0x0, "EnumProperty"},
            {"MoveInput", 0x8, "StructProperty"},
            {"OrientationIntent", 0x20, "StructProperty"},
            {"PriorVelocity", 0x38, "StructProperty"},
            {"PriorOrientation", 0x50, "StructProperty"},
            {"MaxSpeed", 0x68, "FloatProperty"},
            {"Acceleration", 0x6C, "FloatProperty"},
            {"Deceleration", 0x70, "FloatProperty"},
            {"Friction", 0x74, "FloatProperty"},
            {"TurningRate", 0x78, "FloatProperty"},
            {"TurningBoost", 0x7C, "FloatProperty"},
            {"DeltaSeconds", 0x80, "FloatProperty"},
            {"MoveAcceleration", 0x88, "StructProperty"},
            {"MoveSpeed", 0xA0, "FloatProperty"},
            {"WorldToGravityQuat", 0xB0, "StructProperty"},
        }};
    };

    struct WaterMovementUtils
    {
        static constexpr std::string_view Name = "WaterMovementUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ComputeControlledWaterMove",
            "UpdateWaterSplineData",
        }};
    };

}
