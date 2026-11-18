#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimationWarpingRuntime
{
    struct AnimNode_FootPlacement
    {
        static constexpr std::string_view Name = "AnimNode_FootPlacement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlantSpeedMode = 0xC8;
            static constexpr std::uintptr_t IKFootRootBone = 0xCC;
            static constexpr std::uintptr_t PelvisBone = 0xD8;
            static constexpr std::uintptr_t PelvisSettings = 0xE4;
            static constexpr std::uintptr_t LegDefinitions = 0x108;
            static constexpr std::uintptr_t PlantSettings = 0x118;
            static constexpr std::uintptr_t InterpolationSettings = 0x14C;
            static constexpr std::uintptr_t TraceSettings = 0x178;
            static constexpr std::uintptr_t BaseTranslationDelta = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlantSpeedMode", 0xC8, "EnumProperty"},
            {"IKFootRootBone", 0xCC, "StructProperty"},
            {"PelvisBone", 0xD8, "StructProperty"},
            {"PelvisSettings", 0xE4, "StructProperty"},
            {"LegDefinitions", 0x108, "ArrayProperty"},
            {"PlantSettings", 0x118, "StructProperty"},
            {"InterpolationSettings", 0x14C, "StructProperty"},
            {"TraceSettings", 0x178, "StructProperty"},
            {"BaseTranslationDelta", 0x190, "StructProperty"},
        }};
    };

    struct AnimNode_OffsetRootBone
    {
        static constexpr std::string_view Name = "AnimNode_OffsetRootBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x10, "StructProperty"},
        }};
    };

    struct AnimNode_OrientationWarping
    {
        static constexpr std::string_view Name = "AnimNode_OrientationWarping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xC8;
            static constexpr std::uintptr_t TargetTime = 0xCC;
            static constexpr std::uintptr_t OrientationAngle = 0xD0;
            static constexpr std::uintptr_t LocomotionAngle = 0xD4;
            static constexpr std::uintptr_t LocomotionDirection = 0xD8;
            static constexpr std::uintptr_t MinRootMotionSpeedThreshold = 0xF0;
            static constexpr std::uintptr_t LocomotionAngleDeltaThreshold = 0xF4;
            static constexpr std::uintptr_t SpineBones = 0xF8;
            static constexpr std::uintptr_t IKFootRootBone = 0x108;
            static constexpr std::uintptr_t IKFootBones = 0x118;
            static constexpr std::uintptr_t CurrentAnimAsset = 0x128;
            static constexpr std::uintptr_t CurrentAnimAssetTime = 0x130;
            static constexpr std::uintptr_t RotationAxis = 0x134;
            static constexpr std::uintptr_t DistributedBoneOrientationAlpha = 0x138;
            static constexpr std::uintptr_t RotationInterpSpeed = 0x13C;
            static constexpr std::uintptr_t CounterCompensateInterpSpeed = 0x140;
            static constexpr std::uintptr_t MaxCorrectionDegrees = 0x144;
            static constexpr std::uintptr_t MaxRootMotionDeltaToCompensateDegrees = 0x148;
            static constexpr std::uintptr_t bCounterCompenstateInterpolationByRootMotion = 0x14C;
            static constexpr std::uintptr_t bScaleByGlobalBlendWeight = 0x14D;
            static constexpr std::uintptr_t bUseManualRootMotionVelocity = 0x14E;
            static constexpr std::uintptr_t ManualRootMotionVelocity = 0x150;
            static constexpr std::uintptr_t WarpingSpace = 0x168;
            static constexpr std::uintptr_t WarpingSpaceTransform = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Mode", 0xC8, "EnumProperty"},
            {"TargetTime", 0xCC, "FloatProperty"},
            {"OrientationAngle", 0xD0, "FloatProperty"},
            {"LocomotionAngle", 0xD4, "FloatProperty"},
            {"LocomotionDirection", 0xD8, "StructProperty"},
            {"MinRootMotionSpeedThreshold", 0xF0, "FloatProperty"},
            {"LocomotionAngleDeltaThreshold", 0xF4, "FloatProperty"},
            {"SpineBones", 0xF8, "ArrayProperty"},
            {"IKFootRootBone", 0x108, "StructProperty"},
            {"IKFootBones", 0x118, "ArrayProperty"},
            {"CurrentAnimAsset", 0x128, "ObjectProperty"},
            {"CurrentAnimAssetTime", 0x130, "FloatProperty"},
            {"RotationAxis", 0x134, "ByteProperty"},
            {"DistributedBoneOrientationAlpha", 0x138, "FloatProperty"},
            {"RotationInterpSpeed", 0x13C, "FloatProperty"},
            {"CounterCompensateInterpSpeed", 0x140, "FloatProperty"},
            {"MaxCorrectionDegrees", 0x144, "FloatProperty"},
            {"MaxRootMotionDeltaToCompensateDegrees", 0x148, "FloatProperty"},
            {"bCounterCompenstateInterpolationByRootMotion", 0x14C, "BoolProperty"},
            {"bScaleByGlobalBlendWeight", 0x14D, "BoolProperty"},
            {"bUseManualRootMotionVelocity", 0x14E, "BoolProperty"},
            {"ManualRootMotionVelocity", 0x150, "StructProperty"},
            {"WarpingSpace", 0x168, "EnumProperty"},
            {"WarpingSpaceTransform", 0x170, "StructProperty"},
        }};
    };

    struct AnimNode_OverrideRootMotion
    {
        static constexpr std::string_view Name = "AnimNode_OverrideRootMotion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x10, "StructProperty"},
        }};
    };

    struct AnimNode_SlopeWarping
    {
        static constexpr std::string_view Name = "AnimNode_SlopeWarping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IKFootRootBone = 0xE0;
            static constexpr std::uintptr_t PelvisBone = 0xEC;
            static constexpr std::uintptr_t FeetDefinitions = 0xF8;
            static constexpr std::uintptr_t FeetData = 0x108;
            static constexpr std::uintptr_t PelvisOffsetInterpolator = 0x118;
            static constexpr std::uintptr_t GravityDir = 0x178;
            static constexpr std::uintptr_t CustomFloorOffset = 0x190;
            static constexpr std::uintptr_t CachedDeltaTime = 0x1A8;
            static constexpr std::uintptr_t TargetFloorNormalWorldSpace = 0x1B0;
            static constexpr std::uintptr_t FloorNormalInterpolator = 0x1C8;
            static constexpr std::uintptr_t TargetFloorOffsetLocalSpace = 0x228;
            static constexpr std::uintptr_t FloorOffsetInterpolator = 0x240;
            static constexpr std::uintptr_t MaxStepHeight = 0x2A0;
            static constexpr std::uintptr_t bFloorSmoothingInitialized = 0x2A4;
            static constexpr std::uintptr_t bKeepMeshInsideOfCapsule = 0x2A4;
            static constexpr std::uintptr_t bPullPelvisDown = 0x2A4;
            static constexpr std::uintptr_t bShowDebug = 0x2A4;
            static constexpr std::uintptr_t bUseCustomFloorOffset = 0x2A4;
            static constexpr std::uintptr_t bWasOnGround = 0x2A4;
            static constexpr std::uintptr_t ActorLocation = 0x2A8;
            static constexpr std::uintptr_t GravityDirCompSpace = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"IKFootRootBone", 0xE0, "StructProperty"},
            {"PelvisBone", 0xEC, "StructProperty"},
            {"FeetDefinitions", 0xF8, "ArrayProperty"},
            {"FeetData", 0x108, "ArrayProperty"},
            {"PelvisOffsetInterpolator", 0x118, "StructProperty"},
            {"GravityDir", 0x178, "StructProperty"},
            {"CustomFloorOffset", 0x190, "StructProperty"},
            {"CachedDeltaTime", 0x1A8, "FloatProperty"},
            {"TargetFloorNormalWorldSpace", 0x1B0, "StructProperty"},
            {"FloorNormalInterpolator", 0x1C8, "StructProperty"},
            {"TargetFloorOffsetLocalSpace", 0x228, "StructProperty"},
            {"FloorOffsetInterpolator", 0x240, "StructProperty"},
            {"MaxStepHeight", 0x2A0, "FloatProperty"},
            {"bFloorSmoothingInitialized", 0x2A4, "BoolProperty"},
            {"bKeepMeshInsideOfCapsule", 0x2A4, "BoolProperty"},
            {"bPullPelvisDown", 0x2A4, "BoolProperty"},
            {"bShowDebug", 0x2A4, "BoolProperty"},
            {"bUseCustomFloorOffset", 0x2A4, "BoolProperty"},
            {"bWasOnGround", 0x2A4, "BoolProperty"},
            {"ActorLocation", 0x2A8, "StructProperty"},
            {"GravityDirCompSpace", 0x2C0, "StructProperty"},
        }};
    };

    struct AnimNode_Steering
    {
        static constexpr std::string_view Name = "AnimNode_Steering";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetOrientation = 0xD0;
            static constexpr std::uintptr_t bMirrored = 0xF0;
            static constexpr std::uintptr_t ProceduralTargetTime = 0xF4;
            static constexpr std::uintptr_t TargetTime = 0xF8;
            static constexpr std::uintptr_t AnimatedTargetTime = 0xFC;
            static constexpr std::uintptr_t RootMotionThreshold = 0x100;
            static constexpr std::uintptr_t DisableSteeringBelowSpeed = 0x104;
            static constexpr std::uintptr_t DisableAdditiveBelowSpeed = 0x108;
            static constexpr std::uintptr_t MinScaleRatio = 0x10C;
            static constexpr std::uintptr_t MaxScaleRatio = 0x110;
            static constexpr std::uintptr_t MirrorDataTable = 0x118;
            static constexpr std::uintptr_t CurrentAnimAsset = 0x120;
            static constexpr std::uintptr_t CurrentAnimAssetTime = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TargetOrientation", 0xD0, "StructProperty"},
            {"bMirrored", 0xF0, "BoolProperty"},
            {"ProceduralTargetTime", 0xF4, "FloatProperty"},
            {"TargetTime", 0xF8, "FloatProperty"},
            {"AnimatedTargetTime", 0xFC, "FloatProperty"},
            {"RootMotionThreshold", 0x100, "FloatProperty"},
            {"DisableSteeringBelowSpeed", 0x104, "FloatProperty"},
            {"DisableAdditiveBelowSpeed", 0x108, "FloatProperty"},
            {"MinScaleRatio", 0x10C, "FloatProperty"},
            {"MaxScaleRatio", 0x110, "FloatProperty"},
            {"MirrorDataTable", 0x118, "ObjectProperty"},
            {"CurrentAnimAsset", 0x120, "ObjectProperty"},
            {"CurrentAnimAssetTime", 0x128, "FloatProperty"},
        }};
    };

    struct AnimNode_StrideWarping
    {
        static constexpr std::string_view Name = "AnimNode_StrideWarping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xC8;
            static constexpr std::uintptr_t StrideDirection = 0xD0;
            static constexpr std::uintptr_t StrideScale = 0xE8;
            static constexpr std::uintptr_t LocomotionSpeed = 0xEC;
            static constexpr std::uintptr_t MinRootMotionSpeedThreshold = 0xF0;
            static constexpr std::uintptr_t PelvisBone = 0xF4;
            static constexpr std::uintptr_t IKFootRootBone = 0x100;
            static constexpr std::uintptr_t FootDefinitions = 0x110;
            static constexpr std::uintptr_t StrideScaleModifier = 0x120;
            static constexpr std::uintptr_t FloorNormalDirection = 0x138;
            static constexpr std::uintptr_t GravityDirection = 0x158;
            static constexpr std::uintptr_t PelvisIKFootSolver = 0x178;
            static constexpr std::uintptr_t bOrientStrideDirectionUsingFloorNormal = 0x1F8;
            static constexpr std::uintptr_t bCompensateIKUsingFKThighRotation = 0x1F9;
            static constexpr std::uintptr_t bClampIKUsingFKLimits = 0x1FA;
            static constexpr std::uintptr_t bDisableIfMissingRootMotion = 0x1FB;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Mode", 0xC8, "EnumProperty"},
            {"StrideDirection", 0xD0, "StructProperty"},
            {"StrideScale", 0xE8, "FloatProperty"},
            {"LocomotionSpeed", 0xEC, "FloatProperty"},
            {"MinRootMotionSpeedThreshold", 0xF0, "FloatProperty"},
            {"PelvisBone", 0xF4, "StructProperty"},
            {"IKFootRootBone", 0x100, "StructProperty"},
            {"FootDefinitions", 0x110, "ArrayProperty"},
            {"StrideScaleModifier", 0x120, "StructProperty"},
            {"FloorNormalDirection", 0x138, "StructProperty"},
            {"GravityDirection", 0x158, "StructProperty"},
            {"PelvisIKFootSolver", 0x178, "StructProperty"},
            {"bOrientStrideDirectionUsingFloorNormal", 0x1F8, "BoolProperty"},
            {"bCompensateIKUsingFKThighRotation", 0x1F9, "BoolProperty"},
            {"bClampIKUsingFKLimits", 0x1FA, "BoolProperty"},
            {"bDisableIfMissingRootMotion", 0x1FB, "BoolProperty"},
        }};
    };

    struct AnimNode_WarpTest
    {
        static constexpr std::string_view Name = "AnimNode_WarpTest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t Transforms = 0x20;
            static constexpr std::uintptr_t SecondsToWait = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x10, "StructProperty"},
            {"Transforms", 0x20, "ArrayProperty"},
            {"SecondsToWait", 0x30, "FloatProperty"},
        }};
    };

    struct AnimationWarpingLibrary
    {
        static constexpr std::string_view Name = "AnimationWarpingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ApplyDeltaToOffsetRootBone",
            "ConvertToOffsetRootBoneNodePure",
            "GetCurveValueFromAnimation",
            "GetFloatValueFromCurve",
            "GetOffsetRootTransform",
            "GetVectorValueFromCurve",
        }};
    };

    struct FootPlacemenLegDefinition
    {
        static constexpr std::string_view Name = "FootPlacemenLegDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FKFootBone = 0x0;
            static constexpr std::uintptr_t IKFootBone = 0xC;
            static constexpr std::uintptr_t BallBone = 0x18;
            static constexpr std::uintptr_t NumBonesInLimb = 0x24;
            static constexpr std::uintptr_t SpeedCurveName = 0x28;
            static constexpr std::uintptr_t DisableLockCurveName = 0x2C;
            static constexpr std::uintptr_t DisableLegCurveName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FKFootBone", 0x0, "StructProperty"},
            {"IKFootBone", 0xC, "StructProperty"},
            {"BallBone", 0x18, "StructProperty"},
            {"NumBonesInLimb", 0x24, "IntProperty"},
            {"SpeedCurveName", 0x28, "NameProperty"},
            {"DisableLockCurveName", 0x2C, "NameProperty"},
            {"DisableLegCurveName", 0x30, "NameProperty"},
        }};
    };

    struct FootPlacementInterpolationSettings
    {
        static constexpr std::string_view Name = "FootPlacementInterpolationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UnplantLinearStiffness = 0x0;
            static constexpr std::uintptr_t UnplantLinearDamping = 0x4;
            static constexpr std::uintptr_t UnplantAngularStiffness = 0x8;
            static constexpr std::uintptr_t UnplantAngularDamping = 0xC;
            static constexpr std::uintptr_t SeparationStiffness = 0x10;
            static constexpr std::uintptr_t SeparationDamping = 0x14;
            static constexpr std::uintptr_t FloorLinearStiffness = 0x18;
            static constexpr std::uintptr_t FloorLinearDamping = 0x1C;
            static constexpr std::uintptr_t FloorAngularStiffness = 0x20;
            static constexpr std::uintptr_t FloorAngularDamping = 0x24;
            static constexpr std::uintptr_t bEnableFloorInterpolation = 0x28;
            static constexpr std::uintptr_t bSmoothRootBone = 0x29;
            static constexpr std::uintptr_t bEnableSeparationInterpolation = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"UnplantLinearStiffness", 0x0, "FloatProperty"},
            {"UnplantLinearDamping", 0x4, "FloatProperty"},
            {"UnplantAngularStiffness", 0x8, "FloatProperty"},
            {"UnplantAngularDamping", 0xC, "FloatProperty"},
            {"SeparationStiffness", 0x10, "FloatProperty"},
            {"SeparationDamping", 0x14, "FloatProperty"},
            {"FloorLinearStiffness", 0x18, "FloatProperty"},
            {"FloorLinearDamping", 0x1C, "FloatProperty"},
            {"FloorAngularStiffness", 0x20, "FloatProperty"},
            {"FloorAngularDamping", 0x24, "FloatProperty"},
            {"bEnableFloorInterpolation", 0x28, "BoolProperty"},
            {"bSmoothRootBone", 0x29, "BoolProperty"},
            {"bEnableSeparationInterpolation", 0x2A, "BoolProperty"},
        }};
    };

    struct FootPlacementPelvisSettings
    {
        static constexpr std::string_view Name = "FootPlacementPelvisSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxOffset = 0x0;
            static constexpr std::uintptr_t LinearStiffness = 0x4;
            static constexpr std::uintptr_t LinearDamping = 0x8;
            static constexpr std::uintptr_t HorizontalRebalancingWeight = 0xC;
            static constexpr std::uintptr_t MaxOffsetHorizontal = 0x10;
            static constexpr std::uintptr_t HeelLiftRatio = 0x14;
            static constexpr std::uintptr_t PelvisHeightMode = 0x18;
            static constexpr std::uintptr_t ActorMovementCompensationMode = 0x19;
            static constexpr std::uintptr_t bEnableInterpolation = 0x1A;
            static constexpr std::uintptr_t bDisablePelvisOffsetInAir = 0x1B;
            static constexpr std::uintptr_t DisablePelvisCurveName = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MaxOffset", 0x0, "FloatProperty"},
            {"LinearStiffness", 0x4, "FloatProperty"},
            {"LinearDamping", 0x8, "FloatProperty"},
            {"HorizontalRebalancingWeight", 0xC, "FloatProperty"},
            {"MaxOffsetHorizontal", 0x10, "FloatProperty"},
            {"HeelLiftRatio", 0x14, "FloatProperty"},
            {"PelvisHeightMode", 0x18, "EnumProperty"},
            {"ActorMovementCompensationMode", 0x19, "EnumProperty"},
            {"bEnableInterpolation", 0x1A, "BoolProperty"},
            {"bDisablePelvisOffsetInAir", 0x1B, "BoolProperty"},
            {"DisablePelvisCurveName", 0x1C, "NameProperty"},
        }};
    };

    struct FootPlacementPlantSettings
    {
        static constexpr std::string_view Name = "FootPlacementPlantSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedThreshold = 0x0;
            static constexpr std::uintptr_t DistanceToGround = 0x4;
            static constexpr std::uintptr_t LockType = 0x8;
            static constexpr std::uintptr_t UnplantRadius = 0xC;
            static constexpr std::uintptr_t ReplantRadiusRatio = 0x10;
            static constexpr std::uintptr_t UnplantAngle = 0x14;
            static constexpr std::uintptr_t ReplantAngleRatio = 0x18;
            static constexpr std::uintptr_t MaxExtensionRatio = 0x1C;
            static constexpr std::uintptr_t MinExtensionRatio = 0x20;
            static constexpr std::uintptr_t SeparatingDistance = 0x24;
            static constexpr std::uintptr_t UnalignmentSpeedThreshold = 0x28;
            static constexpr std::uintptr_t AnkleTwistReduction = 0x2C;
            static constexpr std::uintptr_t bReconstructWorldPlantFromVelocity = 0x30;
            static constexpr std::uintptr_t bAdjustHeelBeforePlanting = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SpeedThreshold", 0x0, "FloatProperty"},
            {"DistanceToGround", 0x4, "FloatProperty"},
            {"LockType", 0x8, "EnumProperty"},
            {"UnplantRadius", 0xC, "FloatProperty"},
            {"ReplantRadiusRatio", 0x10, "FloatProperty"},
            {"UnplantAngle", 0x14, "FloatProperty"},
            {"ReplantAngleRatio", 0x18, "FloatProperty"},
            {"MaxExtensionRatio", 0x1C, "FloatProperty"},
            {"MinExtensionRatio", 0x20, "FloatProperty"},
            {"SeparatingDistance", 0x24, "FloatProperty"},
            {"UnalignmentSpeedThreshold", 0x28, "FloatProperty"},
            {"AnkleTwistReduction", 0x2C, "FloatProperty"},
            {"bReconstructWorldPlantFromVelocity", 0x30, "BoolProperty"},
            {"bAdjustHeelBeforePlanting", 0x31, "BoolProperty"},
        }};
    };

    struct FootPlacementRootDefinition
    {
        static constexpr std::string_view Name = "FootPlacementRootDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PelvisBone = 0x0;
            static constexpr std::uintptr_t IKRootBone = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PelvisBone", 0x0, "StructProperty"},
            {"IKRootBone", 0xC, "StructProperty"},
        }};
    };

    struct FootPlacementTraceSettings
    {
        static constexpr std::string_view Name = "FootPlacementTraceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartOffset = 0x0;
            static constexpr std::uintptr_t EndOffset = 0x4;
            static constexpr std::uintptr_t SweepRadius = 0x8;
            static constexpr std::uintptr_t bDisableComplexTrace = 0xC;
            static constexpr std::uintptr_t ComplexTraceChannel = 0xD;
            static constexpr std::uintptr_t MaxGroundPenetration = 0x10;
            static constexpr std::uintptr_t SimpleTraceChannel = 0x14;
            static constexpr std::uintptr_t bEnabled = 0x15;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StartOffset", 0x0, "FloatProperty"},
            {"EndOffset", 0x4, "FloatProperty"},
            {"SweepRadius", 0x8, "FloatProperty"},
            {"bDisableComplexTrace", 0xC, "BoolProperty"},
            {"ComplexTraceChannel", 0xD, "ByteProperty"},
            {"MaxGroundPenetration", 0x10, "FloatProperty"},
            {"SimpleTraceChannel", 0x14, "ByteProperty"},
            {"bEnabled", 0x15, "BoolProperty"},
        }};
    };

    struct OffsetRootBoneAnimNodeReference
    {
        static constexpr std::string_view Name = "OffsetRootBoneAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlopeWarpingFootData
    {
        static constexpr std::string_view Name = "SlopeWarpingFootData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlopeWarpingFootDefinition
    {
        static constexpr std::string_view Name = "SlopeWarpingFootDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IKFootBone = 0x0;
            static constexpr std::uintptr_t FKFootBone = 0xC;
            static constexpr std::uintptr_t NumBonesInLimb = 0x18;
            static constexpr std::uintptr_t FootSize = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IKFootBone", 0x0, "StructProperty"},
            {"FKFootBone", 0xC, "StructProperty"},
            {"NumBonesInLimb", 0x18, "IntProperty"},
            {"FootSize", 0x1C, "FloatProperty"},
        }};
    };

    struct StrideWarpingFootDefinition
    {
        static constexpr std::string_view Name = "StrideWarpingFootDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IKFootBone = 0x0;
            static constexpr std::uintptr_t FKFootBone = 0xC;
            static constexpr std::uintptr_t ThighBone = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IKFootBone", 0x0, "StructProperty"},
            {"FKFootBone", 0xC, "StructProperty"},
            {"ThighBone", 0x18, "StructProperty"},
        }};
    };

}
