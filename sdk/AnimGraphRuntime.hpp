#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimGraphRuntime
{
    struct AngularRangeLimit
    {
        static constexpr std::string_view Name = "AngularRangeLimit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitMin = 0x0;
            static constexpr std::uintptr_t LimitMax = 0x18;
            static constexpr std::uintptr_t bone = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LimitMin", 0x0, "StructProperty"},
            {"LimitMax", 0x18, "StructProperty"},
            {"bone", 0x30, "StructProperty"},
        }};
    };

    struct AnimExecutionContextLibrary
    {
        static constexpr std::string_view Name = "AnimExecutionContextLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "ConvertToComponentSpacePoseContext",
            "ConvertToInitializationContext",
            "ConvertToPoseContext",
            "ConvertToUpdateContext",
            "GetAnimInstance",
            "GetAnimNodeReference",
            "GetCurrentWeight",
            "GetDeltaTime",
            "IsActive",
        }};
    };

    struct AnimLegIKData
    {
        static constexpr std::string_view Name = "AnimLegIKData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimLegIKDefinition
    {
        static constexpr std::string_view Name = "AnimLegIKDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IKFootBone = 0x0;
            static constexpr std::uintptr_t FKFootBone = 0xC;
            static constexpr std::uintptr_t NumBonesInLimb = 0x18;
            static constexpr std::uintptr_t MinRotationAngle = 0x1C;
            static constexpr std::uintptr_t FootBoneForwardAxis = 0x20;
            static constexpr std::uintptr_t HingeRotationAxis = 0x21;
            static constexpr std::uintptr_t bEnableRotationLimit = 0x22;
            static constexpr std::uintptr_t bEnableKneeTwistCorrection = 0x23;
            static constexpr std::uintptr_t TwistOffsetCurveName = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"IKFootBone", 0x0, "StructProperty"},
            {"FKFootBone", 0xC, "StructProperty"},
            {"NumBonesInLimb", 0x18, "IntProperty"},
            {"MinRotationAngle", 0x1C, "FloatProperty"},
            {"FootBoneForwardAxis", 0x20, "ByteProperty"},
            {"HingeRotationAxis", 0x21, "ByteProperty"},
            {"bEnableRotationLimit", 0x22, "BoolProperty"},
            {"bEnableKneeTwistCorrection", 0x23, "BoolProperty"},
            {"TwistOffsetCurveName", 0x24, "NameProperty"},
        }};
    };

    struct AnimNodeRigidBodyLibrary
    {
        static constexpr std::string_view Name = "AnimNodeRigidBodyLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ConvertToRigidBodyAnimNode",
            "ConvertToRigidBodyAnimNodePure",
            "SetOverridePhysicsAsset",
        }};
    };

    struct AnimNode_AimOffsetLookAt
    {
        static constexpr std::string_view Name = "AnimNode_AimOffsetLookAt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpacePlayer";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x140;
            static constexpr std::uintptr_t LODThreshold = 0x150;
            static constexpr std::uintptr_t SourceSocketName = 0x154;
            static constexpr std::uintptr_t PivotSocketName = 0x158;
            static constexpr std::uintptr_t LookAtLocation = 0x160;
            static constexpr std::uintptr_t SocketAxis = 0x178;
            static constexpr std::uintptr_t Alpha = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BasePose", 0x140, "StructProperty"},
            {"LODThreshold", 0x150, "IntProperty"},
            {"SourceSocketName", 0x154, "NameProperty"},
            {"PivotSocketName", 0x158, "NameProperty"},
            {"LookAtLocation", 0x160, "StructProperty"},
            {"SocketAxis", 0x178, "StructProperty"},
            {"Alpha", 0x190, "FloatProperty"},
        }};
    };

    struct AnimNode_AnimDynamics
    {
        static constexpr std::string_view Name = "AnimNode_AnimDynamics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearDampingOverride = 0xC8;
            static constexpr std::uintptr_t AngularDampingOverride = 0xCC;
            static constexpr std::uintptr_t RelativeSpaceBone = 0x1F0;
            static constexpr std::uintptr_t BoundBone = 0x1FC;
            static constexpr std::uintptr_t ChainEnd = 0x208;
            static constexpr std::uintptr_t PhysicsBodyDefinitions = 0x218;
            static constexpr std::uintptr_t GravityScale = 0x228;
            static constexpr std::uintptr_t GravityOverride = 0x230;
            static constexpr std::uintptr_t LinearSpringConstant = 0x248;
            static constexpr std::uintptr_t AngularSpringConstant = 0x24C;
            static constexpr std::uintptr_t WorldSpaceMinimumScale = 0x250;
            static constexpr std::uintptr_t WindScale = 0x254;
            static constexpr std::uintptr_t ComponentLinearAccScale = 0x258;
            static constexpr std::uintptr_t ComponentLinearVelScale = 0x270;
            static constexpr std::uintptr_t ComponentAppliedLinearAccClamp = 0x288;
            static constexpr std::uintptr_t SimSpaceSettings = 0x2A0;
            static constexpr std::uintptr_t AngularBiasOverride = 0x2C8;
            static constexpr std::uintptr_t NumSolverIterationsPreUpdate = 0x2CC;
            static constexpr std::uintptr_t NumSolverIterationsPostUpdate = 0x2D0;
            static constexpr std::uintptr_t SphericalLimits = 0x2D8;
            static constexpr std::uintptr_t ExternalForce = 0x2E8;
            static constexpr std::uintptr_t PlanarLimits = 0x300;
            static constexpr std::uintptr_t SimulationSpace = 0x310;
            static constexpr std::uintptr_t bDoEval = 0x313;
            static constexpr std::uintptr_t bDoUpdate = 0x313;
            static constexpr std::uintptr_t bEnableWind = 0x313;
            static constexpr std::uintptr_t bOverrideAngularBias = 0x313;
            static constexpr std::uintptr_t bOverrideAngularDamping = 0x313;
            static constexpr std::uintptr_t bOverrideLinearDamping = 0x313;
            static constexpr std::uintptr_t bUsePlanarLimit = 0x313;
            static constexpr std::uintptr_t bUseSphericalLimits = 0x313;
            static constexpr std::uintptr_t bAngularSpring = 0x314;
            static constexpr std::uintptr_t bChain = 0x314;
            static constexpr std::uintptr_t bGravityOverrideInSimSpace = 0x314;
            static constexpr std::uintptr_t bLinearSpring = 0x314;
            static constexpr std::uintptr_t bUseGravityOverride = 0x314;
            static constexpr std::uintptr_t RetargetingSettings = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"LinearDampingOverride", 0xC8, "FloatProperty"},
            {"AngularDampingOverride", 0xCC, "FloatProperty"},
            {"RelativeSpaceBone", 0x1F0, "StructProperty"},
            {"BoundBone", 0x1FC, "StructProperty"},
            {"ChainEnd", 0x208, "StructProperty"},
            {"PhysicsBodyDefinitions", 0x218, "ArrayProperty"},
            {"GravityScale", 0x228, "FloatProperty"},
            {"GravityOverride", 0x230, "StructProperty"},
            {"LinearSpringConstant", 0x248, "FloatProperty"},
            {"AngularSpringConstant", 0x24C, "FloatProperty"},
            {"WorldSpaceMinimumScale", 0x250, "FloatProperty"},
            {"WindScale", 0x254, "FloatProperty"},
            {"ComponentLinearAccScale", 0x258, "StructProperty"},
            {"ComponentLinearVelScale", 0x270, "StructProperty"},
            {"ComponentAppliedLinearAccClamp", 0x288, "StructProperty"},
            {"SimSpaceSettings", 0x2A0, "StructProperty"},
            {"AngularBiasOverride", 0x2C8, "FloatProperty"},
            {"NumSolverIterationsPreUpdate", 0x2CC, "IntProperty"},
            {"NumSolverIterationsPostUpdate", 0x2D0, "IntProperty"},
            {"SphericalLimits", 0x2D8, "ArrayProperty"},
            {"ExternalForce", 0x2E8, "StructProperty"},
            {"PlanarLimits", 0x300, "ArrayProperty"},
            {"SimulationSpace", 0x310, "EnumProperty"},
            {"bDoEval", 0x313, "BoolProperty"},
            {"bDoUpdate", 0x313, "BoolProperty"},
            {"bEnableWind", 0x313, "BoolProperty"},
            {"bOverrideAngularBias", 0x313, "BoolProperty"},
            {"bOverrideAngularDamping", 0x313, "BoolProperty"},
            {"bOverrideLinearDamping", 0x313, "BoolProperty"},
            {"bUsePlanarLimit", 0x313, "BoolProperty"},
            {"bUseSphericalLimits", 0x313, "BoolProperty"},
            {"bAngularSpring", 0x314, "BoolProperty"},
            {"bChain", 0x314, "BoolProperty"},
            {"bGravityOverrideInSimSpace", 0x314, "BoolProperty"},
            {"bLinearSpring", 0x314, "BoolProperty"},
            {"bUseGravityOverride", 0x314, "BoolProperty"},
            {"RetargetingSettings", 0x320, "StructProperty"},
        }};
    };

    struct AnimNode_ApplyAdditive
    {
        static constexpr std::string_view Name = "AnimNode_ApplyAdditive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0x10;
            static constexpr std::uintptr_t Additive = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t AlphaScaleBias = 0x34;
            static constexpr std::uintptr_t LODThreshold = 0x3C;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x40;
            static constexpr std::uintptr_t AlphaCurveName = 0x88;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0x8C;
            static constexpr std::uintptr_t AlphaInputType = 0xC0;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"base", 0x10, "StructProperty"},
            {"Additive", 0x20, "StructProperty"},
            {"Alpha", 0x30, "FloatProperty"},
            {"AlphaScaleBias", 0x34, "StructProperty"},
            {"LODThreshold", 0x3C, "IntProperty"},
            {"AlphaBoolBlend", 0x40, "StructProperty"},
            {"AlphaCurveName", 0x88, "NameProperty"},
            {"AlphaScaleBiasClamp", 0x8C, "StructProperty"},
            {"AlphaInputType", 0xC0, "EnumProperty"},
            {"bAlphaBoolEnabled", 0xC1, "BoolProperty"},
        }};
    };

    struct AnimNode_ApplyLimits
    {
        static constexpr std::string_view Name = "AnimNode_ApplyLimits";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AngularRangeLimits = 0xC8;
            static constexpr std::uintptr_t AngularOffsets = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AngularRangeLimits", 0xC8, "ArrayProperty"},
            {"AngularOffsets", 0xD8, "ArrayProperty"},
        }};
    };

    struct AnimNode_BlendBoneByChannel
    {
        static constexpr std::string_view Name = "AnimNode_BlendBoneByChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t BoneDefinitions = 0x30;
            static constexpr std::uintptr_t Alpha = 0x50;
            static constexpr std::uintptr_t AlphaScaleBias = 0x58;
            static constexpr std::uintptr_t TransformsSpace = 0x60;
            static constexpr std::uintptr_t LODThreshold = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"BoneDefinitions", 0x30, "ArrayProperty"},
            {"Alpha", 0x50, "FloatProperty"},
            {"AlphaScaleBias", 0x58, "StructProperty"},
            {"TransformsSpace", 0x60, "ByteProperty"},
            {"LODThreshold", 0x64, "IntProperty"},
        }};
    };

    struct AnimNode_BlendListBase
    {
        static constexpr std::string_view Name = "AnimNode_BlendListBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendPose", 0x10, "ArrayProperty"},
            {"LODThreshold", 0x50, "IntProperty"},
        }};
    };

    struct AnimNode_BlendListByBool
    {
        static constexpr std::string_view Name = "AnimNode_BlendListByBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendListBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendPose", 0x10, "ArrayProperty"},
            {"LODThreshold", 0x50, "IntProperty"},
        }};
    };

    struct AnimNode_BlendListByEnum
    {
        static constexpr std::string_view Name = "AnimNode_BlendListByEnum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendListBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendPose", 0x10, "ArrayProperty"},
            {"LODThreshold", 0x50, "IntProperty"},
        }};
    };

    struct AnimNode_BlendListByInt
    {
        static constexpr std::string_view Name = "AnimNode_BlendListByInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendListBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendPose", 0x10, "ArrayProperty"},
            {"LODThreshold", 0x50, "IntProperty"},
        }};
    };

    struct AnimNode_BlendSpaceEvaluator
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpaceEvaluator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpacePlayer";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalizedTime = 0x78;
            static constexpr std::uintptr_t bTeleportToNormalizedTime = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NormalizedTime", 0x78, "FloatProperty"},
            {"bTeleportToNormalizedTime", 0x7C, "BoolProperty"},
        }};
    };

    struct AnimNode_BlendSpaceGraph
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpaceGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpaceGraphBase";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x10;
            static constexpr std::uintptr_t Y = 0x14;
            static constexpr std::uintptr_t GroupName = 0x18;
            static constexpr std::uintptr_t GroupRole = 0x1C;
            static constexpr std::uintptr_t BlendSpace = 0x20;
            static constexpr std::uintptr_t SamplePoseLinks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"X", 0x10, "FloatProperty"},
            {"Y", 0x14, "FloatProperty"},
            {"GroupName", 0x18, "NameProperty"},
            {"GroupRole", 0x1C, "ByteProperty"},
            {"BlendSpace", 0x20, "ObjectProperty"},
            {"SamplePoseLinks", 0x28, "ArrayProperty"},
        }};
    };

    struct AnimNode_BlendSpaceGraphBase
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpaceGraphBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x10;
            static constexpr std::uintptr_t Y = 0x14;
            static constexpr std::uintptr_t GroupName = 0x18;
            static constexpr std::uintptr_t GroupRole = 0x1C;
            static constexpr std::uintptr_t BlendSpace = 0x20;
            static constexpr std::uintptr_t SamplePoseLinks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"X", 0x10, "FloatProperty"},
            {"Y", 0x14, "FloatProperty"},
            {"GroupName", 0x18, "NameProperty"},
            {"GroupRole", 0x1C, "ByteProperty"},
            {"BlendSpace", 0x20, "ObjectProperty"},
            {"SamplePoseLinks", 0x28, "ArrayProperty"},
        }};
    };

    struct AnimNode_BlendSpacePlayer
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpacePlayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpacePlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendSpace = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendSpace", 0x70, "ObjectProperty"},
        }};
    };

    struct AnimNode_BlendSpacePlayerBase
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpacePlayerBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_AssetPlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousBlendSpace = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviousBlendSpace", 0x68, "ObjectProperty"},
        }};
    };

    struct AnimNode_BlendSpacePlayer_Standalone
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpacePlayer_Standalone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpacePlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupName = 0x70;
            static constexpr std::uintptr_t GroupRole = 0x74;
            static constexpr std::uintptr_t bOverridePositionWhenJoiningSyncGroupAsLeader = 0x75;
            static constexpr std::uintptr_t Method = 0x76;
            static constexpr std::uintptr_t bIgnoreForRelevancyTest = 0x77;
            static constexpr std::uintptr_t X = 0x78;
            static constexpr std::uintptr_t Y = 0x7C;
            static constexpr std::uintptr_t PlayRate = 0x80;
            static constexpr std::uintptr_t bLoop = 0x84;
            static constexpr std::uintptr_t bResetPlayTimeWhenBlendSpaceChanges = 0x85;
            static constexpr std::uintptr_t StartPosition = 0x88;
            static constexpr std::uintptr_t BlendSpace = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GroupName", 0x70, "NameProperty"},
            {"GroupRole", 0x74, "ByteProperty"},
            {"bOverridePositionWhenJoiningSyncGroupAsLeader", 0x75, "BoolProperty"},
            {"Method", 0x76, "EnumProperty"},
            {"bIgnoreForRelevancyTest", 0x77, "BoolProperty"},
            {"X", 0x78, "FloatProperty"},
            {"Y", 0x7C, "FloatProperty"},
            {"PlayRate", 0x80, "FloatProperty"},
            {"bLoop", 0x84, "BoolProperty"},
            {"bResetPlayTimeWhenBlendSpaceChanges", 0x85, "BoolProperty"},
            {"StartPosition", 0x88, "FloatProperty"},
            {"BlendSpace", 0x90, "ObjectProperty"},
        }};
    };

    struct AnimNode_BlendSpaceSampleResult
    {
        static constexpr std::string_view Name = "AnimNode_BlendSpaceSampleResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Root";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x10, "StructProperty"},
        }};
    };

    struct AnimNode_BoneDrivenController
    {
        static constexpr std::string_view Name = "AnimNode_BoneDrivenController";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0xC8;
            static constexpr std::uintptr_t DrivingCurve = 0xD8;
            static constexpr std::uintptr_t Multiplier = 0xE0;
            static constexpr std::uintptr_t RangeMin = 0xE8;
            static constexpr std::uintptr_t RangeMax = 0xF0;
            static constexpr std::uintptr_t RemappedMin = 0xF8;
            static constexpr std::uintptr_t RemappedMax = 0x100;
            static constexpr std::uintptr_t ParameterName = 0x108;
            static constexpr std::uintptr_t TargetBone = 0x10C;
            static constexpr std::uintptr_t DestinationMode = 0x118;
            static constexpr std::uintptr_t ModificationMode = 0x119;
            static constexpr std::uintptr_t SourceComponent = 0x11A;
            static constexpr std::uintptr_t bAffectTargetRotationX = 0x11B;
            static constexpr std::uintptr_t bAffectTargetRotationY = 0x11B;
            static constexpr std::uintptr_t bAffectTargetRotationZ = 0x11B;
            static constexpr std::uintptr_t bAffectTargetScaleX = 0x11B;
            static constexpr std::uintptr_t bAffectTargetTranslationX = 0x11B;
            static constexpr std::uintptr_t bAffectTargetTranslationY = 0x11B;
            static constexpr std::uintptr_t bAffectTargetTranslationZ = 0x11B;
            static constexpr std::uintptr_t bUseRange = 0x11B;
            static constexpr std::uintptr_t bAffectTargetScaleY = 0x11C;
            static constexpr std::uintptr_t bAffectTargetScaleZ = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"SourceBone", 0xC8, "StructProperty"},
            {"DrivingCurve", 0xD8, "ObjectProperty"},
            {"Multiplier", 0xE0, "FloatProperty"},
            {"RangeMin", 0xE8, "DoubleProperty"},
            {"RangeMax", 0xF0, "DoubleProperty"},
            {"RemappedMin", 0xF8, "DoubleProperty"},
            {"RemappedMax", 0x100, "DoubleProperty"},
            {"ParameterName", 0x108, "NameProperty"},
            {"TargetBone", 0x10C, "StructProperty"},
            {"DestinationMode", 0x118, "EnumProperty"},
            {"ModificationMode", 0x119, "EnumProperty"},
            {"SourceComponent", 0x11A, "ByteProperty"},
            {"bAffectTargetRotationX", 0x11B, "BoolProperty"},
            {"bAffectTargetRotationY", 0x11B, "BoolProperty"},
            {"bAffectTargetRotationZ", 0x11B, "BoolProperty"},
            {"bAffectTargetScaleX", 0x11B, "BoolProperty"},
            {"bAffectTargetTranslationX", 0x11B, "BoolProperty"},
            {"bAffectTargetTranslationY", 0x11B, "BoolProperty"},
            {"bAffectTargetTranslationZ", 0x11B, "BoolProperty"},
            {"bUseRange", 0x11B, "BoolProperty"},
            {"bAffectTargetScaleY", 0x11C, "BoolProperty"},
            {"bAffectTargetScaleZ", 0x11C, "BoolProperty"},
        }};
    };

    struct AnimNode_CCDIK
    {
        static constexpr std::string_view Name = "AnimNode_CCDIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectorLocation = 0xC8;
            static constexpr std::uintptr_t EffectorLocationSpace = 0xE0;
            static constexpr std::uintptr_t EffectorTarget = 0xF0;
            static constexpr std::uintptr_t TipBone = 0x170;
            static constexpr std::uintptr_t RootBone = 0x17C;
            static constexpr std::uintptr_t Precision = 0x188;
            static constexpr std::uintptr_t MaxIterations = 0x18C;
            static constexpr std::uintptr_t bStartFromTail = 0x190;
            static constexpr std::uintptr_t bEnableRotationLimit = 0x191;
            static constexpr std::uintptr_t RotationLimitPerJoints = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EffectorLocation", 0xC8, "StructProperty"},
            {"EffectorLocationSpace", 0xE0, "ByteProperty"},
            {"EffectorTarget", 0xF0, "StructProperty"},
            {"TipBone", 0x170, "StructProperty"},
            {"RootBone", 0x17C, "StructProperty"},
            {"Precision", 0x188, "FloatProperty"},
            {"MaxIterations", 0x18C, "IntProperty"},
            {"bStartFromTail", 0x190, "BoolProperty"},
            {"bEnableRotationLimit", 0x191, "BoolProperty"},
            {"RotationLimitPerJoints", 0x198, "ArrayProperty"},
        }};
    };

    struct AnimNode_CallFunction
    {
        static constexpr std::string_view Name = "AnimNode_CallFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t CallSite = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x10, "StructProperty"},
            {"CallSite", 0x34, "EnumProperty"},
        }};
    };

    struct AnimNode_Constraint
    {
        static constexpr std::string_view Name = "AnimNode_Constraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToModify = 0xC8;
            static constexpr std::uintptr_t ConstraintSetup = 0xD8;
            static constexpr std::uintptr_t ConstraintWeights = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoneToModify", 0xC8, "StructProperty"},
            {"ConstraintSetup", 0xD8, "ArrayProperty"},
            {"ConstraintWeights", 0xE8, "ArrayProperty"},
        }};
    };

    struct AnimNode_CopyBone
    {
        static constexpr std::string_view Name = "AnimNode_CopyBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0xC8;
            static constexpr std::uintptr_t TargetBone = 0xD4;
            static constexpr std::uintptr_t bCopyTranslation = 0xE0;
            static constexpr std::uintptr_t bCopyRotation = 0xE1;
            static constexpr std::uintptr_t bCopyScale = 0xE2;
            static constexpr std::uintptr_t ControlSpace = 0xE3;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourceBone", 0xC8, "StructProperty"},
            {"TargetBone", 0xD4, "StructProperty"},
            {"bCopyTranslation", 0xE0, "BoolProperty"},
            {"bCopyRotation", 0xE1, "BoolProperty"},
            {"bCopyScale", 0xE2, "BoolProperty"},
            {"ControlSpace", 0xE3, "ByteProperty"},
        }};
    };

    struct AnimNode_CopyBoneDelta
    {
        static constexpr std::string_view Name = "AnimNode_CopyBoneDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0xC8;
            static constexpr std::uintptr_t TargetBone = 0xD4;
            static constexpr std::uintptr_t bCopyTranslation = 0xE0;
            static constexpr std::uintptr_t bCopyRotation = 0xE1;
            static constexpr std::uintptr_t bCopyScale = 0xE2;
            static constexpr std::uintptr_t CopyMode = 0xE3;
            static constexpr std::uintptr_t TranslationMultiplier = 0xE4;
            static constexpr std::uintptr_t RotationMultiplier = 0xE8;
            static constexpr std::uintptr_t ScaleMultiplier = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SourceBone", 0xC8, "StructProperty"},
            {"TargetBone", 0xD4, "StructProperty"},
            {"bCopyTranslation", 0xE0, "BoolProperty"},
            {"bCopyRotation", 0xE1, "BoolProperty"},
            {"bCopyScale", 0xE2, "BoolProperty"},
            {"CopyMode", 0xE3, "EnumProperty"},
            {"TranslationMultiplier", 0xE4, "FloatProperty"},
            {"RotationMultiplier", 0xE8, "FloatProperty"},
            {"ScaleMultiplier", 0xEC, "FloatProperty"},
        }};
    };

    struct AnimNode_CopyPoseFromMesh
    {
        static constexpr std::string_view Name = "AnimNode_CopyPoseFromMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMeshComponent = 0x10;
            static constexpr std::uintptr_t bCopyCurves = 0x18;
            static constexpr std::uintptr_t bUseAttachedParent = 0x18;
            static constexpr std::uintptr_t bCopyCustomAttributes = 0x19;
            static constexpr std::uintptr_t bUseMeshPose = 0x1A;
            static constexpr std::uintptr_t RootBoneToCopy = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourceMeshComponent", 0x10, "WeakObjectProperty"},
            {"bCopyCurves", 0x18, "BoolProperty"},
            {"bUseAttachedParent", 0x18, "BoolProperty"},
            {"bCopyCustomAttributes", 0x19, "BoolProperty"},
            {"bUseMeshPose", 0x1A, "BoolProperty"},
            {"RootBoneToCopy", 0x1C, "NameProperty"},
        }};
    };

    struct AnimNode_CurveSource
    {
        static constexpr std::string_view Name = "AnimNode_CurveSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePose = 0x10;
            static constexpr std::uintptr_t SourceBinding = 0x20;
            static constexpr std::uintptr_t Alpha = 0x24;
            static constexpr std::uintptr_t CurveSource = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourcePose", 0x10, "StructProperty"},
            {"SourceBinding", 0x20, "NameProperty"},
            {"Alpha", 0x24, "FloatProperty"},
            {"CurveSource", 0x28, "InterfaceProperty"},
        }};
    };

    struct AnimNode_Fabrik
    {
        static constexpr std::string_view Name = "AnimNode_Fabrik";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectorTransform = 0xD0;
            static constexpr std::uintptr_t EffectorTarget = 0x130;
            static constexpr std::uintptr_t TipBone = 0x1B0;
            static constexpr std::uintptr_t RootBone = 0x1BC;
            static constexpr std::uintptr_t Precision = 0x1C8;
            static constexpr std::uintptr_t MaxIterations = 0x1CC;
            static constexpr std::uintptr_t EffectorTransformSpace = 0x1D0;
            static constexpr std::uintptr_t EffectorRotationSource = 0x1D1;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EffectorTransform", 0xD0, "StructProperty"},
            {"EffectorTarget", 0x130, "StructProperty"},
            {"TipBone", 0x1B0, "StructProperty"},
            {"RootBone", 0x1BC, "StructProperty"},
            {"Precision", 0x1C8, "FloatProperty"},
            {"MaxIterations", 0x1CC, "IntProperty"},
            {"EffectorTransformSpace", 0x1D0, "ByteProperty"},
            {"EffectorRotationSource", 0x1D1, "ByteProperty"},
        }};
    };

    struct AnimNode_HandIKRetargeting
    {
        static constexpr std::string_view Name = "AnimNode_HandIKRetargeting";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RightHandFK = 0xC8;
            static constexpr std::uintptr_t LeftHandFK = 0xD4;
            static constexpr std::uintptr_t RightHandIK = 0xE0;
            static constexpr std::uintptr_t LeftHandIK = 0xEC;
            static constexpr std::uintptr_t IKBonesToMove = 0xF8;
            static constexpr std::uintptr_t PerAxisAlpha = 0x108;
            static constexpr std::uintptr_t HandFKWeight = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RightHandFK", 0xC8, "StructProperty"},
            {"LeftHandFK", 0xD4, "StructProperty"},
            {"RightHandIK", 0xE0, "StructProperty"},
            {"LeftHandIK", 0xEC, "StructProperty"},
            {"IKBonesToMove", 0xF8, "ArrayProperty"},
            {"PerAxisAlpha", 0x108, "StructProperty"},
            {"HandFKWeight", 0x120, "FloatProperty"},
        }};
    };

    struct AnimNode_LayeredBoneBlend
    {
        static constexpr std::string_view Name = "AnimNode_LayeredBoneBlend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x10;
            static constexpr std::uintptr_t BlendPoses = 0x20;
            static constexpr std::uintptr_t BlendMode = 0x30;
            static constexpr std::uintptr_t BlendMasks = 0x38;
            static constexpr std::uintptr_t LayerSetup = 0x48;
            static constexpr std::uintptr_t BlendWeights = 0x58;
            static constexpr std::uintptr_t PerBoneBlendWeights = 0x88;
            static constexpr std::uintptr_t SkeletonGuid = 0xB8;
            static constexpr std::uintptr_t VirtualBoneGuid = 0xC8;
            static constexpr std::uintptr_t LODThreshold = 0xDC;
            static constexpr std::uintptr_t bMeshSpaceRotationBlend = 0xE0;
            static constexpr std::uintptr_t bRootSpaceRotationBlend = 0xE1;
            static constexpr std::uintptr_t bMeshSpaceScaleBlend = 0xE2;
            static constexpr std::uintptr_t CurveBlendOption = 0xE3;
            static constexpr std::uintptr_t bBlendRootMotionBasedOnRootBone = 0xE4;
            static constexpr std::uintptr_t bUpdateBasePoseFirst = 0xE5;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"BasePose", 0x10, "StructProperty"},
            {"BlendPoses", 0x20, "ArrayProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
            {"BlendMasks", 0x38, "ArrayProperty"},
            {"LayerSetup", 0x48, "ArrayProperty"},
            {"BlendWeights", 0x58, "ArrayProperty"},
            {"PerBoneBlendWeights", 0x88, "ArrayProperty"},
            {"SkeletonGuid", 0xB8, "StructProperty"},
            {"VirtualBoneGuid", 0xC8, "StructProperty"},
            {"LODThreshold", 0xDC, "IntProperty"},
            {"bMeshSpaceRotationBlend", 0xE0, "BoolProperty"},
            {"bRootSpaceRotationBlend", 0xE1, "BoolProperty"},
            {"bMeshSpaceScaleBlend", 0xE2, "BoolProperty"},
            {"CurveBlendOption", 0xE3, "ByteProperty"},
            {"bBlendRootMotionBasedOnRootBone", 0xE4, "BoolProperty"},
            {"bUpdateBasePoseFirst", 0xE5, "BoolProperty"},
        }};
    };

    struct AnimNode_LegIK
    {
        static constexpr std::string_view Name = "AnimNode_LegIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReachPrecision = 0xC8;
            static constexpr std::uintptr_t MaxIterations = 0xCC;
            static constexpr std::uintptr_t SoftPercentLength = 0xD0;
            static constexpr std::uintptr_t SoftAlpha = 0xD4;
            static constexpr std::uintptr_t LegsDefinition = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ReachPrecision", 0xC8, "FloatProperty"},
            {"MaxIterations", 0xCC, "IntProperty"},
            {"SoftPercentLength", 0xD0, "FloatProperty"},
            {"SoftAlpha", 0xD4, "FloatProperty"},
            {"LegsDefinition", 0xD8, "ArrayProperty"},
        }};
    };

    struct AnimNode_LookAt
    {
        static constexpr std::string_view Name = "AnimNode_LookAt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToModify = 0xC8;
            static constexpr std::uintptr_t LookAtTarget = 0xE0;
            static constexpr std::uintptr_t LookAtLocation = 0x160;
            static constexpr std::uintptr_t LookAt_Axis = 0x178;
            static constexpr std::uintptr_t bUseLookUpAxis = 0x198;
            static constexpr std::uintptr_t InterpolationType = 0x199;
            static constexpr std::uintptr_t LookUp_Axis = 0x1A0;
            static constexpr std::uintptr_t LookAtClamp = 0x1C0;
            static constexpr std::uintptr_t InterpolationTime = 0x1C4;
            static constexpr std::uintptr_t InterpolationTriggerThreashold = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BoneToModify", 0xC8, "StructProperty"},
            {"LookAtTarget", 0xE0, "StructProperty"},
            {"LookAtLocation", 0x160, "StructProperty"},
            {"LookAt_Axis", 0x178, "StructProperty"},
            {"bUseLookUpAxis", 0x198, "BoolProperty"},
            {"InterpolationType", 0x199, "ByteProperty"},
            {"LookUp_Axis", 0x1A0, "StructProperty"},
            {"LookAtClamp", 0x1C0, "FloatProperty"},
            {"InterpolationTime", 0x1C4, "FloatProperty"},
            {"InterpolationTriggerThreashold", 0x1C8, "FloatProperty"},
        }};
    };

    struct AnimNode_MakeDynamicAdditive
    {
        static constexpr std::string_view Name = "AnimNode_MakeDynamicAdditive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0x10;
            static constexpr std::uintptr_t Additive = 0x20;
            static constexpr std::uintptr_t bMeshSpaceAdditive = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"base", 0x10, "StructProperty"},
            {"Additive", 0x20, "StructProperty"},
            {"bMeshSpaceAdditive", 0x30, "BoolProperty"},
        }};
    };

    struct AnimNode_MeshSpaceRefPose
    {
        static constexpr std::string_view Name = "AnimNode_MeshSpaceRefPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNode_Mirror
    {
        static constexpr std::string_view Name = "AnimNode_Mirror";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_MirrorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x10, "StructProperty"},
        }};
    };

    struct AnimNode_MirrorBase
    {
        static constexpr std::string_view Name = "AnimNode_MirrorBase";
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

    struct AnimNode_Mirror_Standalone
    {
        static constexpr std::string_view Name = "AnimNode_Mirror_Standalone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_MirrorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bMirror = 0x78;
            static constexpr std::uintptr_t MirrorDataTable = 0x80;
            static constexpr std::uintptr_t BlendTime = 0x88;
            static constexpr std::uintptr_t BlendType = 0x8C;
            static constexpr std::uintptr_t bResetChild = 0x8D;
            static constexpr std::uintptr_t bBoneMirroring = 0x8E;
            static constexpr std::uintptr_t bCurveMirroring = 0x8F;
            static constexpr std::uintptr_t bAttributeMirroring = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bMirror", 0x78, "BoolProperty"},
            {"MirrorDataTable", 0x80, "ObjectProperty"},
            {"BlendTime", 0x88, "FloatProperty"},
            {"BlendType", 0x8C, "EnumProperty"},
            {"bResetChild", 0x8D, "BoolProperty"},
            {"bBoneMirroring", 0x8E, "BoolProperty"},
            {"bCurveMirroring", 0x8F, "BoolProperty"},
            {"bAttributeMirroring", 0x90, "BoolProperty"},
        }};
    };

    struct AnimNode_ModifyBone
    {
        static constexpr std::string_view Name = "AnimNode_ModifyBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToModify = 0xC8;
            static constexpr std::uintptr_t Translation = 0xD8;
            static constexpr std::uintptr_t Rotation = 0xF0;
            static constexpr std::uintptr_t Scale = 0x108;
            static constexpr std::uintptr_t TranslationMode = 0x120;
            static constexpr std::uintptr_t RotationMode = 0x121;
            static constexpr std::uintptr_t ScaleMode = 0x122;
            static constexpr std::uintptr_t TranslationSpace = 0x123;
            static constexpr std::uintptr_t RotationSpace = 0x124;
            static constexpr std::uintptr_t ScaleSpace = 0x125;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BoneToModify", 0xC8, "StructProperty"},
            {"Translation", 0xD8, "StructProperty"},
            {"Rotation", 0xF0, "StructProperty"},
            {"Scale", 0x108, "StructProperty"},
            {"TranslationMode", 0x120, "ByteProperty"},
            {"RotationMode", 0x121, "ByteProperty"},
            {"ScaleMode", 0x122, "ByteProperty"},
            {"TranslationSpace", 0x123, "ByteProperty"},
            {"RotationSpace", 0x124, "ByteProperty"},
            {"ScaleSpace", 0x125, "ByteProperty"},
        }};
    };

    struct AnimNode_ModifyCurve
    {
        static constexpr std::string_view Name = "AnimNode_ModifyCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePose = 0x10;
            static constexpr std::uintptr_t CurveMap = 0x20;
            static constexpr std::uintptr_t CurveValues = 0x30;
            static constexpr std::uintptr_t CurveNames = 0x40;
            static constexpr std::uintptr_t Alpha = 0x70;
            static constexpr std::uintptr_t ApplyMode = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourcePose", 0x10, "StructProperty"},
            {"CurveMap", 0x20, "MapProperty"},
            {"CurveValues", 0x30, "ArrayProperty"},
            {"CurveNames", 0x40, "ArrayProperty"},
            {"Alpha", 0x70, "FloatProperty"},
            {"ApplyMode", 0x74, "EnumProperty"},
        }};
    };

    struct AnimNode_MultiWayBlend
    {
        static constexpr std::string_view Name = "AnimNode_MultiWayBlend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Poses = 0x10;
            static constexpr std::uintptr_t DesiredAlphas = 0x20;
            static constexpr std::uintptr_t AlphaScaleBias = 0x40;
            static constexpr std::uintptr_t bAdditiveNode = 0x48;
            static constexpr std::uintptr_t bNormalizeAlpha = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Poses", 0x10, "ArrayProperty"},
            {"DesiredAlphas", 0x20, "ArrayProperty"},
            {"AlphaScaleBias", 0x40, "StructProperty"},
            {"bAdditiveNode", 0x48, "BoolProperty"},
            {"bNormalizeAlpha", 0x49, "BoolProperty"},
        }};
    };

    struct AnimNode_ObserveBone
    {
        static constexpr std::string_view Name = "AnimNode_ObserveBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToObserve = 0xC8;
            static constexpr std::uintptr_t DisplaySpace = 0xD4;
            static constexpr std::uintptr_t bRelativeToRefPose = 0xD5;
            static constexpr std::uintptr_t Translation = 0xD8;
            static constexpr std::uintptr_t Rotation = 0xF0;
            static constexpr std::uintptr_t Scale = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoneToObserve", 0xC8, "StructProperty"},
            {"DisplaySpace", 0xD4, "ByteProperty"},
            {"bRelativeToRefPose", 0xD5, "BoolProperty"},
            {"Translation", 0xD8, "StructProperty"},
            {"Rotation", 0xF0, "StructProperty"},
            {"Scale", 0x108, "StructProperty"},
        }};
    };

    struct AnimNode_PoseBlendNode
    {
        static constexpr std::string_view Name = "AnimNode_PoseBlendNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_PoseHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePose = 0xA8;
            static constexpr std::uintptr_t BlendOption = 0xB8;
            static constexpr std::uintptr_t CustomCurve = 0xC0;
            static constexpr std::uintptr_t bIgnorePoseAssetSourceAnimationCurves = 0xC8;
            static constexpr std::uintptr_t LODThreshold = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourcePose", 0xA8, "StructProperty"},
            {"BlendOption", 0xB8, "EnumProperty"},
            {"CustomCurve", 0xC0, "ObjectProperty"},
            {"bIgnorePoseAssetSourceAnimationCurves", 0xC8, "BoolProperty"},
            {"LODThreshold", 0xCC, "IntProperty"},
        }};
    };

    struct AnimNode_PoseByName
    {
        static constexpr std::string_view Name = "AnimNode_PoseByName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_PoseHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseName = 0xA8;
            static constexpr std::uintptr_t PoseWeight = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PoseName", 0xA8, "NameProperty"},
            {"PoseWeight", 0xAC, "FloatProperty"},
        }};
    };

    struct AnimNode_PoseDriver
    {
        static constexpr std::string_view Name = "AnimNode_PoseDriver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_PoseHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePose = 0xA8;
            static constexpr std::uintptr_t SourceBones = 0xB8;
            static constexpr std::uintptr_t EvalSpaceBone = 0xC8;
            static constexpr std::uintptr_t bEvalFromRefPose = 0xD4;
            static constexpr std::uintptr_t OnlyDriveBones = 0xD8;
            static constexpr std::uintptr_t PoseTargets = 0xE8;
            static constexpr std::uintptr_t RBFParams = 0xF8;
            static constexpr std::uintptr_t DriveSource = 0x130;
            static constexpr std::uintptr_t DriveOutput = 0x131;
            static constexpr std::uintptr_t LODThreshold = 0x174;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SourcePose", 0xA8, "StructProperty"},
            {"SourceBones", 0xB8, "ArrayProperty"},
            {"EvalSpaceBone", 0xC8, "StructProperty"},
            {"bEvalFromRefPose", 0xD4, "BoolProperty"},
            {"OnlyDriveBones", 0xD8, "ArrayProperty"},
            {"PoseTargets", 0xE8, "ArrayProperty"},
            {"RBFParams", 0xF8, "StructProperty"},
            {"DriveSource", 0x130, "EnumProperty"},
            {"DriveOutput", 0x131, "EnumProperty"},
            {"LODThreshold", 0x174, "IntProperty"},
        }};
    };

    struct AnimNode_PoseHandler
    {
        static constexpr std::string_view Name = "AnimNode_PoseHandler";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_AssetPlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseAsset = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PoseAsset", 0x40, "ObjectProperty"},
        }};
    };

    struct AnimNode_PoseSnapshot
    {
        static constexpr std::string_view Name = "AnimNode_PoseSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SnapshotName = 0x10;
            static constexpr std::uintptr_t Snapshot = 0x18;
            static constexpr std::uintptr_t Mode = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SnapshotName", 0x10, "NameProperty"},
            {"Snapshot", 0x18, "StructProperty"},
            {"Mode", 0x48, "EnumProperty"},
        }};
    };

    struct AnimNode_RandomPlayer
    {
        static constexpr std::string_view Name = "AnimNode_RandomPlayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_AssetPlayerRelevancyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t BlendWeight = 0x70;
            static constexpr std::uintptr_t bShuffleMode = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"BlendWeight", 0x70, "FloatProperty"},
            {"bShuffleMode", 0x74, "BoolProperty"},
        }};
    };

    struct AnimNode_RefPose
    {
        static constexpr std::string_view Name = "AnimNode_RefPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNode_RemoveCurve
    {
        static constexpr std::string_view Name = "AnimNode_RemoveCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePose = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x20;
            static constexpr std::uintptr_t RemoveMode = 0x21;
            static constexpr std::uintptr_t Curves = 0x28;
            static constexpr std::uintptr_t bAffectMorphTargetCurves = 0x38;
            static constexpr std::uintptr_t bAffectMaterialCurves = 0x39;
            static constexpr std::uintptr_t bAffectRegularCurves = 0x3A;
            static constexpr std::uintptr_t MorphTargetCurveNames = 0x40;
            static constexpr std::uintptr_t MaterialCurveNames = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SourcePose", 0x10, "StructProperty"},
            {"bEnabled", 0x20, "BoolProperty"},
            {"RemoveMode", 0x21, "EnumProperty"},
            {"Curves", 0x28, "SetProperty"},
            {"bAffectMorphTargetCurves", 0x38, "BoolProperty"},
            {"bAffectMaterialCurves", 0x39, "BoolProperty"},
            {"bAffectRegularCurves", 0x3A, "BoolProperty"},
            {"MorphTargetCurveNames", 0x40, "ArrayProperty"},
            {"MaterialCurveNames", 0x50, "ArrayProperty"},
        }};
    };

    struct AnimNode_ResetRoot
    {
        static constexpr std::string_view Name = "AnimNode_ResetRoot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x20;
            static constexpr std::uintptr_t ActualAlpha = 0x24;
            static constexpr std::uintptr_t AlphaInputType = 0x28;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x29;
            static constexpr std::uintptr_t Alpha = 0x2C;
            static constexpr std::uintptr_t AlphaScaleBias = 0x30;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x38;
            static constexpr std::uintptr_t AlphaCurveName = 0x80;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ComponentPose", 0x10, "StructProperty"},
            {"LODThreshold", 0x20, "IntProperty"},
            {"ActualAlpha", 0x24, "FloatProperty"},
            {"AlphaInputType", 0x28, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x29, "BoolProperty"},
            {"Alpha", 0x2C, "FloatProperty"},
            {"AlphaScaleBias", 0x30, "StructProperty"},
            {"AlphaBoolBlend", 0x38, "StructProperty"},
            {"AlphaCurveName", 0x80, "NameProperty"},
            {"AlphaScaleBiasClamp", 0x84, "StructProperty"},
        }};
    };

    struct AnimNode_RigidBody
    {
        static constexpr std::string_view Name = "AnimNode_RigidBody";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePhysicsAsset = 0xC8;
            static constexpr std::uintptr_t bDefaultToSkeletalMeshPhysicsAsset = 0xD0;
            static constexpr std::uintptr_t bUseDefaultAsSimulated = 0xD1;
            static constexpr std::uintptr_t bUseLocalLODThresholdOnly = 0x208;
            static constexpr std::uintptr_t OverrideWorldGravity = 0x210;
            static constexpr std::uintptr_t ExternalForce = 0x228;
            static constexpr std::uintptr_t ComponentLinearAccScale = 0x240;
            static constexpr std::uintptr_t ComponentLinearVelScale = 0x258;
            static constexpr std::uintptr_t ComponentAppliedLinearAccClamp = 0x270;
            static constexpr std::uintptr_t SimSpaceSettings = 0x288;
            static constexpr std::uintptr_t CachedBoundsScale = 0x2F0;
            static constexpr std::uintptr_t BaseBoneRef = 0x2F4;
            static constexpr std::uintptr_t OverlapChannel = 0x300;
            static constexpr std::uintptr_t SimulationSpace = 0x301;
            static constexpr std::uintptr_t bForceDisableCollisionBetweenConstraintBodies = 0x302;
            static constexpr std::uintptr_t bUseExternalClothCollision = 0x303;
            static constexpr std::uintptr_t bAllowPoseScalePropagation = 0x305;
            static constexpr std::uintptr_t bClampLinearTranslationLimitToRefPose = 0x305;
            static constexpr std::uintptr_t bEnableWorldGeometry = 0x305;
            static constexpr std::uintptr_t bFreezeIncomingPoseOnStart = 0x305;
            static constexpr std::uintptr_t bOverrideWorldGravity = 0x305;
            static constexpr std::uintptr_t bTransferBoneVelocities = 0x305;
            static constexpr std::uintptr_t WorldSpaceMinimumScale = 0x308;
            static constexpr std::uintptr_t EvaluationResetTime = 0x30C;
            static constexpr std::uintptr_t BoundsVelocityMultiplier = 0x310;
            static constexpr std::uintptr_t MaxVelocityBoundsExpansion = 0x314;
            static constexpr std::uintptr_t bAllowCCD = 0x318;
            static constexpr std::uintptr_t SimulationTiming = 0x31A;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"OverridePhysicsAsset", 0xC8, "ObjectProperty"},
            {"bDefaultToSkeletalMeshPhysicsAsset", 0xD0, "BoolProperty"},
            {"bUseDefaultAsSimulated", 0xD1, "BoolProperty"},
            {"bUseLocalLODThresholdOnly", 0x208, "BoolProperty"},
            {"OverrideWorldGravity", 0x210, "StructProperty"},
            {"ExternalForce", 0x228, "StructProperty"},
            {"ComponentLinearAccScale", 0x240, "StructProperty"},
            {"ComponentLinearVelScale", 0x258, "StructProperty"},
            {"ComponentAppliedLinearAccClamp", 0x270, "StructProperty"},
            {"SimSpaceSettings", 0x288, "StructProperty"},
            {"CachedBoundsScale", 0x2F0, "FloatProperty"},
            {"BaseBoneRef", 0x2F4, "StructProperty"},
            {"OverlapChannel", 0x300, "ByteProperty"},
            {"SimulationSpace", 0x301, "EnumProperty"},
            {"bForceDisableCollisionBetweenConstraintBodies", 0x302, "BoolProperty"},
            {"bUseExternalClothCollision", 0x303, "BoolProperty"},
            {"bAllowPoseScalePropagation", 0x305, "BoolProperty"},
            {"bClampLinearTranslationLimitToRefPose", 0x305, "BoolProperty"},
            {"bEnableWorldGeometry", 0x305, "BoolProperty"},
            {"bFreezeIncomingPoseOnStart", 0x305, "BoolProperty"},
            {"bOverrideWorldGravity", 0x305, "BoolProperty"},
            {"bTransferBoneVelocities", 0x305, "BoolProperty"},
            {"WorldSpaceMinimumScale", 0x308, "FloatProperty"},
            {"EvaluationResetTime", 0x30C, "FloatProperty"},
            {"BoundsVelocityMultiplier", 0x310, "FloatProperty"},
            {"MaxVelocityBoundsExpansion", 0x314, "FloatProperty"},
            {"bAllowCCD", 0x318, "BoolProperty"},
            {"SimulationTiming", 0x31A, "EnumProperty"},
        }};
    };

    struct AnimNode_RotateRootBone
    {
        static constexpr std::string_view Name = "AnimNode_RotateRootBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x10;
            static constexpr std::uintptr_t Pitch = 0x20;
            static constexpr std::uintptr_t Yaw = 0x24;
            static constexpr std::uintptr_t PitchScaleBiasClamp = 0x28;
            static constexpr std::uintptr_t YawScaleBiasClamp = 0x58;
            static constexpr std::uintptr_t MeshToComponent = 0x88;
            static constexpr std::uintptr_t bRotateRootMotionAttribute = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BasePose", 0x10, "StructProperty"},
            {"Pitch", 0x20, "FloatProperty"},
            {"Yaw", 0x24, "FloatProperty"},
            {"PitchScaleBiasClamp", 0x28, "StructProperty"},
            {"YawScaleBiasClamp", 0x58, "StructProperty"},
            {"MeshToComponent", 0x88, "StructProperty"},
            {"bRotateRootMotionAttribute", 0xA0, "BoolProperty"},
        }};
    };

    struct AnimNode_RotationMultiplier
    {
        static constexpr std::string_view Name = "AnimNode_RotationMultiplier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetBone = 0xC8;
            static constexpr std::uintptr_t SourceBone = 0xD4;
            static constexpr std::uintptr_t Multiplier = 0xE0;
            static constexpr std::uintptr_t RotationAxisToRefer = 0xE4;
            static constexpr std::uintptr_t bIsAdditive = 0xE5;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetBone", 0xC8, "StructProperty"},
            {"SourceBone", 0xD4, "StructProperty"},
            {"Multiplier", 0xE0, "FloatProperty"},
            {"RotationAxisToRefer", 0xE4, "ByteProperty"},
            {"bIsAdditive", 0xE5, "BoolProperty"},
        }};
    };

    struct AnimNode_RotationOffsetBlendSpace
    {
        static constexpr std::string_view Name = "AnimNode_RotationOffsetBlendSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpacePlayer";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x78;
            static constexpr std::uintptr_t bApplyAdditiveInRootSpace = 0x88;
            static constexpr std::uintptr_t LODThreshold = 0x8C;
            static constexpr std::uintptr_t Alpha = 0x90;
            static constexpr std::uintptr_t AlphaScaleBias = 0x94;
            static constexpr std::uintptr_t AlphaBoolBlend = 0xA0;
            static constexpr std::uintptr_t AlphaCurveName = 0xE8;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0xEC;
            static constexpr std::uintptr_t AlphaInputType = 0x120;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x121;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BasePose", 0x78, "StructProperty"},
            {"bApplyAdditiveInRootSpace", 0x88, "BoolProperty"},
            {"LODThreshold", 0x8C, "IntProperty"},
            {"Alpha", 0x90, "FloatProperty"},
            {"AlphaScaleBias", 0x94, "StructProperty"},
            {"AlphaBoolBlend", 0xA0, "StructProperty"},
            {"AlphaCurveName", 0xE8, "NameProperty"},
            {"AlphaScaleBiasClamp", 0xEC, "StructProperty"},
            {"AlphaInputType", 0x120, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x121, "BoolProperty"},
        }};
    };

    struct AnimNode_RotationOffsetBlendSpaceGraph
    {
        static constexpr std::string_view Name = "AnimNode_RotationOffsetBlendSpaceGraph";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendSpaceGraphBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x60;
            static constexpr std::uintptr_t bApplyAdditiveInRootSpace = 0x70;
            static constexpr std::uintptr_t LODThreshold = 0x74;
            static constexpr std::uintptr_t Alpha = 0x78;
            static constexpr std::uintptr_t AlphaScaleBias = 0x7C;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x88;
            static constexpr std::uintptr_t AlphaCurveName = 0xD0;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0xD4;
            static constexpr std::uintptr_t AlphaInputType = 0x108;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x109;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BasePose", 0x60, "StructProperty"},
            {"bApplyAdditiveInRootSpace", 0x70, "BoolProperty"},
            {"LODThreshold", 0x74, "IntProperty"},
            {"Alpha", 0x78, "FloatProperty"},
            {"AlphaScaleBias", 0x7C, "StructProperty"},
            {"AlphaBoolBlend", 0x88, "StructProperty"},
            {"AlphaCurveName", 0xD0, "NameProperty"},
            {"AlphaScaleBiasClamp", 0xD4, "StructProperty"},
            {"AlphaInputType", 0x108, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x109, "BoolProperty"},
        }};
    };

    struct AnimNode_ScaleChainLength
    {
        static constexpr std::string_view Name = "AnimNode_ScaleChainLength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPose = 0x10;
            static constexpr std::uintptr_t DefaultChainLength = 0x20;
            static constexpr std::uintptr_t ChainStartBone = 0x24;
            static constexpr std::uintptr_t ChainEndBone = 0x30;
            static constexpr std::uintptr_t TargetLocation = 0x40;
            static constexpr std::uintptr_t Alpha = 0x58;
            static constexpr std::uintptr_t AlphaScaleBias = 0x60;
            static constexpr std::uintptr_t ChainInitialLength = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InputPose", 0x10, "StructProperty"},
            {"DefaultChainLength", 0x20, "FloatProperty"},
            {"ChainStartBone", 0x24, "StructProperty"},
            {"ChainEndBone", 0x30, "StructProperty"},
            {"TargetLocation", 0x40, "StructProperty"},
            {"Alpha", 0x58, "FloatProperty"},
            {"AlphaScaleBias", 0x60, "StructProperty"},
            {"ChainInitialLength", 0x68, "EnumProperty"},
        }};
    };

    struct AnimNode_SequenceEvaluator
    {
        static constexpr std::string_view Name = "AnimNode_SequenceEvaluator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SequenceEvaluatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendWeight = 0x28;
            static constexpr std::uintptr_t InternalTimeAccumulator = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendWeight", 0x28, "FloatProperty"},
            {"InternalTimeAccumulator", 0x2C, "FloatProperty"},
        }};
    };

    struct AnimNode_SequenceEvaluatorBase
    {
        static constexpr std::string_view Name = "AnimNode_SequenceEvaluatorBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_AssetPlayerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendWeight = 0x28;
            static constexpr std::uintptr_t InternalTimeAccumulator = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendWeight", 0x28, "FloatProperty"},
            {"InternalTimeAccumulator", 0x2C, "FloatProperty"},
        }};
    };

    struct AnimNode_SequenceEvaluator_Standalone
    {
        static constexpr std::string_view Name = "AnimNode_SequenceEvaluator_Standalone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SequenceEvaluatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupName = 0x48;
            static constexpr std::uintptr_t GroupRole = 0x4C;
            static constexpr std::uintptr_t Method = 0x4D;
            static constexpr std::uintptr_t bIgnoreForRelevancyTest = 0x4E;
            static constexpr std::uintptr_t Sequence = 0x50;
            static constexpr std::uintptr_t ExplicitTime = 0x58;
            static constexpr std::uintptr_t bUseExplicitFrame = 0x5C;
            static constexpr std::uintptr_t ExplicitFrame = 0x60;
            static constexpr std::uintptr_t bShouldLoop = 0x64;
            static constexpr std::uintptr_t bTeleportToExplicitTime = 0x65;
            static constexpr std::uintptr_t ReinitializationBehavior = 0x66;
            static constexpr std::uintptr_t StartPosition = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GroupName", 0x48, "NameProperty"},
            {"GroupRole", 0x4C, "ByteProperty"},
            {"Method", 0x4D, "EnumProperty"},
            {"bIgnoreForRelevancyTest", 0x4E, "BoolProperty"},
            {"Sequence", 0x50, "ObjectProperty"},
            {"ExplicitTime", 0x58, "FloatProperty"},
            {"bUseExplicitFrame", 0x5C, "BoolProperty"},
            {"ExplicitFrame", 0x60, "IntProperty"},
            {"bShouldLoop", 0x64, "BoolProperty"},
            {"bTeleportToExplicitTime", 0x65, "BoolProperty"},
            {"ReinitializationBehavior", 0x66, "ByteProperty"},
            {"StartPosition", 0x68, "FloatProperty"},
        }};
    };

    struct AnimNode_SkeletalControlBase
    {
        static constexpr std::string_view Name = "AnimNode_SkeletalControlBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentPose = 0x10;
            static constexpr std::uintptr_t LODThreshold = 0x20;
            static constexpr std::uintptr_t ActualAlpha = 0x24;
            static constexpr std::uintptr_t AlphaInputType = 0x28;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x29;
            static constexpr std::uintptr_t Alpha = 0x2C;
            static constexpr std::uintptr_t AlphaScaleBias = 0x30;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x38;
            static constexpr std::uintptr_t AlphaCurveName = 0x80;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ComponentPose", 0x10, "StructProperty"},
            {"LODThreshold", 0x20, "IntProperty"},
            {"ActualAlpha", 0x24, "FloatProperty"},
            {"AlphaInputType", 0x28, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x29, "BoolProperty"},
            {"Alpha", 0x2C, "FloatProperty"},
            {"AlphaScaleBias", 0x30, "StructProperty"},
            {"AlphaBoolBlend", 0x38, "StructProperty"},
            {"AlphaCurveName", 0x80, "NameProperty"},
            {"AlphaScaleBiasClamp", 0x84, "StructProperty"},
        }};
    };

    struct AnimNode_Slot
    {
        static constexpr std::string_view Name = "AnimNode_Slot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t SlotName = 0x20;
            static constexpr std::uintptr_t bAlwaysUpdateSourcePose = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x10, "StructProperty"},
            {"SlotName", 0x20, "NameProperty"},
            {"bAlwaysUpdateSourcePose", 0x24, "BoolProperty"},
        }};
    };

    struct AnimNode_SplineIK
    {
        static constexpr std::string_view Name = "AnimNode_SplineIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0xC8;
            static constexpr std::uintptr_t EndBone = 0xD4;
            static constexpr std::uintptr_t BoneAxis = 0xE0;
            static constexpr std::uintptr_t bAutoCalculateSpline = 0xE1;
            static constexpr std::uintptr_t PointCount = 0xE4;
            static constexpr std::uintptr_t ControlPoints = 0xE8;
            static constexpr std::uintptr_t Roll = 0xF8;
            static constexpr std::uintptr_t TwistStart = 0xFC;
            static constexpr std::uintptr_t TwistEnd = 0x100;
            static constexpr std::uintptr_t TwistBlend = 0x108;
            static constexpr std::uintptr_t Stretch = 0x138;
            static constexpr std::uintptr_t Offset = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"StartBone", 0xC8, "StructProperty"},
            {"EndBone", 0xD4, "StructProperty"},
            {"BoneAxis", 0xE0, "EnumProperty"},
            {"bAutoCalculateSpline", 0xE1, "BoolProperty"},
            {"PointCount", 0xE4, "IntProperty"},
            {"ControlPoints", 0xE8, "ArrayProperty"},
            {"Roll", 0xF8, "FloatProperty"},
            {"TwistStart", 0xFC, "FloatProperty"},
            {"TwistEnd", 0x100, "FloatProperty"},
            {"TwistBlend", 0x108, "StructProperty"},
            {"Stretch", 0x138, "FloatProperty"},
            {"Offset", 0x13C, "FloatProperty"},
        }};
    };

    struct AnimNode_SpringBone
    {
        static constexpr std::string_view Name = "AnimNode_SpringBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpringBone = 0xC8;
            static constexpr std::uintptr_t MaxDisplacement = 0xD8;
            static constexpr std::uintptr_t SpringStiffness = 0xE0;
            static constexpr std::uintptr_t SpringDamping = 0xE8;
            static constexpr std::uintptr_t ErrorResetThresh = 0xF0;
            static constexpr std::uintptr_t bLimitDisplacement = 0x164;
            static constexpr std::uintptr_t bRotateX = 0x164;
            static constexpr std::uintptr_t bRotateY = 0x164;
            static constexpr std::uintptr_t bRotateZ = 0x164;
            static constexpr std::uintptr_t bTranslateX = 0x164;
            static constexpr std::uintptr_t bTranslateY = 0x164;
            static constexpr std::uintptr_t bTranslateZ = 0x164;
            static constexpr std::uintptr_t bOverrideOwnerVelocity = 0x165;
            static constexpr std::uintptr_t OwnerVelocityOverride = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SpringBone", 0xC8, "StructProperty"},
            {"MaxDisplacement", 0xD8, "DoubleProperty"},
            {"SpringStiffness", 0xE0, "DoubleProperty"},
            {"SpringDamping", 0xE8, "DoubleProperty"},
            {"ErrorResetThresh", 0xF0, "DoubleProperty"},
            {"bLimitDisplacement", 0x164, "BoolProperty"},
            {"bRotateX", 0x164, "BoolProperty"},
            {"bRotateY", 0x164, "BoolProperty"},
            {"bRotateZ", 0x164, "BoolProperty"},
            {"bTranslateX", 0x164, "BoolProperty"},
            {"bTranslateY", 0x164, "BoolProperty"},
            {"bTranslateZ", 0x164, "BoolProperty"},
            {"bOverrideOwnerVelocity", 0x165, "BoolProperty"},
            {"OwnerVelocityOverride", 0x168, "StructProperty"},
        }};
    };

    struct AnimNode_Sync
    {
        static constexpr std::string_view Name = "AnimNode_Sync";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t GroupName = 0x20;
            static constexpr std::uintptr_t GroupRole = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x10, "StructProperty"},
            {"GroupName", 0x20, "NameProperty"},
            {"GroupRole", 0x24, "ByteProperty"},
        }};
    };

    struct AnimNode_Trail
    {
        static constexpr std::string_view Name = "AnimNode_Trail";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TrailBone = 0x130;
            static constexpr std::uintptr_t ChainLength = 0x13C;
            static constexpr std::uintptr_t ChainBoneAxis = 0x140;
            static constexpr std::uintptr_t bActorSpaceFakeVel = 0x141;
            static constexpr std::uintptr_t bInvertChainBoneAxis = 0x141;
            static constexpr std::uintptr_t bLimitRotation = 0x141;
            static constexpr std::uintptr_t bLimitStretch = 0x141;
            static constexpr std::uintptr_t bReorientParentToChild = 0x141;
            static constexpr std::uintptr_t bUsePlanarLimit = 0x141;
            static constexpr std::uintptr_t MaxDeltaTime = 0x144;
            static constexpr std::uintptr_t RelaxationSpeedScale = 0x148;
            static constexpr std::uintptr_t TrailRelaxationSpeed = 0x150;
            static constexpr std::uintptr_t RelaxationSpeedScaleInputProcessor = 0x198;
            static constexpr std::uintptr_t RotationLimits = 0x1C8;
            static constexpr std::uintptr_t RotationOffsets = 0x1D8;
            static constexpr std::uintptr_t PlanarLimits = 0x1E8;
            static constexpr std::uintptr_t StretchLimit = 0x1F8;
            static constexpr std::uintptr_t FakeVelocity = 0x200;
            static constexpr std::uintptr_t BaseJoint = 0x218;
            static constexpr std::uintptr_t LastBoneRotationAnimAlphaBlend = 0x224;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"TrailBone", 0x130, "StructProperty"},
            {"ChainLength", 0x13C, "IntProperty"},
            {"ChainBoneAxis", 0x140, "ByteProperty"},
            {"bActorSpaceFakeVel", 0x141, "BoolProperty"},
            {"bInvertChainBoneAxis", 0x141, "BoolProperty"},
            {"bLimitRotation", 0x141, "BoolProperty"},
            {"bLimitStretch", 0x141, "BoolProperty"},
            {"bReorientParentToChild", 0x141, "BoolProperty"},
            {"bUsePlanarLimit", 0x141, "BoolProperty"},
            {"MaxDeltaTime", 0x144, "FloatProperty"},
            {"RelaxationSpeedScale", 0x148, "FloatProperty"},
            {"TrailRelaxationSpeed", 0x150, "StructProperty"},
            {"RelaxationSpeedScaleInputProcessor", 0x198, "StructProperty"},
            {"RotationLimits", 0x1C8, "ArrayProperty"},
            {"RotationOffsets", 0x1D8, "ArrayProperty"},
            {"PlanarLimits", 0x1E8, "ArrayProperty"},
            {"StretchLimit", 0x1F8, "FloatProperty"},
            {"FakeVelocity", 0x200, "StructProperty"},
            {"BaseJoint", 0x218, "StructProperty"},
            {"LastBoneRotationAnimAlphaBlend", 0x224, "FloatProperty"},
        }};
    };

    struct AnimNode_TwistCorrectiveNode
    {
        static constexpr std::string_view Name = "AnimNode_TwistCorrectiveNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseFrame = 0xC8;
            static constexpr std::uintptr_t TwistFrame = 0xF8;
            static constexpr std::uintptr_t TwistPlaneNormalAxis = 0x128;
            static constexpr std::uintptr_t RangeMax = 0x148;
            static constexpr std::uintptr_t RemappedMin = 0x14C;
            static constexpr std::uintptr_t RemappedMax = 0x150;
            static constexpr std::uintptr_t CurveName = 0x154;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BaseFrame", 0xC8, "StructProperty"},
            {"TwistFrame", 0xF8, "StructProperty"},
            {"TwistPlaneNormalAxis", 0x128, "StructProperty"},
            {"RangeMax", 0x148, "FloatProperty"},
            {"RemappedMin", 0x14C, "FloatProperty"},
            {"RemappedMax", 0x150, "FloatProperty"},
            {"CurveName", 0x154, "NameProperty"},
        }};
    };

    struct AnimNode_TwoBoneIK
    {
        static constexpr std::string_view Name = "AnimNode_TwoBoneIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IKBone = 0xC8;
            static constexpr std::uintptr_t StartStretchRatio = 0xD8;
            static constexpr std::uintptr_t MaxStretchScale = 0xE0;
            static constexpr std::uintptr_t EffectorLocation = 0xE8;
            static constexpr std::uintptr_t EffectorTarget = 0x110;
            static constexpr std::uintptr_t JointTargetLocation = 0x190;
            static constexpr std::uintptr_t JointTarget = 0x1B0;
            static constexpr std::uintptr_t TwistAxis = 0x230;
            static constexpr std::uintptr_t EffectorLocationSpace = 0x250;
            static constexpr std::uintptr_t JointTargetLocationSpace = 0x251;
            static constexpr std::uintptr_t bAllowStretching = 0x252;
            static constexpr std::uintptr_t bAllowTwist = 0x252;
            static constexpr std::uintptr_t bMaintainEffectorRelRot = 0x252;
            static constexpr std::uintptr_t bTakeRotationFromEffectorSpace = 0x252;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"IKBone", 0xC8, "StructProperty"},
            {"StartStretchRatio", 0xD8, "DoubleProperty"},
            {"MaxStretchScale", 0xE0, "DoubleProperty"},
            {"EffectorLocation", 0xE8, "StructProperty"},
            {"EffectorTarget", 0x110, "StructProperty"},
            {"JointTargetLocation", 0x190, "StructProperty"},
            {"JointTarget", 0x1B0, "StructProperty"},
            {"TwistAxis", 0x230, "StructProperty"},
            {"EffectorLocationSpace", 0x250, "ByteProperty"},
            {"JointTargetLocationSpace", 0x251, "ByteProperty"},
            {"bAllowStretching", 0x252, "BoolProperty"},
            {"bAllowTwist", 0x252, "BoolProperty"},
            {"bMaintainEffectorRelRot", 0x252, "BoolProperty"},
            {"bTakeRotationFromEffectorSpace", 0x252, "BoolProperty"},
        }};
    };

    struct AnimNode_TwoWayBlend
    {
        static constexpr std::string_view Name = "AnimNode_TwoWayBlend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
            static constexpr std::uintptr_t B = 0x20;
            static constexpr std::uintptr_t AlphaInputType = 0x30;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x31;
            static constexpr std::uintptr_t bAlwaysUpdateChildren = 0x31;
            static constexpr std::uintptr_t bResetChildOnActivation = 0x31;
            static constexpr std::uintptr_t Alpha = 0x34;
            static constexpr std::uintptr_t AlphaScaleBias = 0x38;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x40;
            static constexpr std::uintptr_t AlphaCurveName = 0x88;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"A", 0x10, "StructProperty"},
            {"B", 0x20, "StructProperty"},
            {"AlphaInputType", 0x30, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x31, "BoolProperty"},
            {"bAlwaysUpdateChildren", 0x31, "BoolProperty"},
            {"bResetChildOnActivation", 0x31, "BoolProperty"},
            {"Alpha", 0x34, "FloatProperty"},
            {"AlphaScaleBias", 0x38, "StructProperty"},
            {"AlphaBoolBlend", 0x40, "StructProperty"},
            {"AlphaCurveName", 0x88, "NameProperty"},
            {"AlphaScaleBiasClamp", 0x8C, "StructProperty"},
        }};
    };

    struct AnimNotify_PlayMontageNotify
    {
        static constexpr std::string_view Name = "AnimNotify_PlayMontageNotify";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyName", 0x38, "NameProperty"},
        }};
    };

    struct AnimNotify_PlayMontageNotifyWindow
    {
        static constexpr std::string_view Name = "AnimNotify_PlayMontageNotifyWindow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyName", 0x30, "NameProperty"},
        }};
    };

    struct AnimPhysBodyDefinition
    {
        static constexpr std::string_view Name = "AnimPhysBodyDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundBone = 0x0;
            static constexpr std::uintptr_t BoxExtents = 0x10;
            static constexpr std::uintptr_t LocalJointOffset = 0x28;
            static constexpr std::uintptr_t ConstraintSetup = 0x40;
            static constexpr std::uintptr_t CollisionType = 0xC8;
            static constexpr std::uintptr_t SphereCollisionRadius = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoundBone", 0x0, "StructProperty"},
            {"BoxExtents", 0x10, "StructProperty"},
            {"LocalJointOffset", 0x28, "StructProperty"},
            {"ConstraintSetup", 0x40, "StructProperty"},
            {"CollisionType", 0xC8, "EnumProperty"},
            {"SphereCollisionRadius", 0xCC, "FloatProperty"},
        }};
    };

    struct AnimPhysConstraintSetup
    {
        static constexpr std::string_view Name = "AnimPhysConstraintSetup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearXLimitType = 0x0;
            static constexpr std::uintptr_t LinearYLimitType = 0x1;
            static constexpr std::uintptr_t LinearZLimitType = 0x2;
            static constexpr std::uintptr_t LinearAxesMin = 0x8;
            static constexpr std::uintptr_t LinearAxesMax = 0x20;
            static constexpr std::uintptr_t AngularConstraintType = 0x38;
            static constexpr std::uintptr_t TwistAxis = 0x39;
            static constexpr std::uintptr_t AngularTargetAxis = 0x3A;
            static constexpr std::uintptr_t ConeAngle = 0x3C;
            static constexpr std::uintptr_t AngularLimitsMin = 0x40;
            static constexpr std::uintptr_t AngularLimitsMax = 0x58;
            static constexpr std::uintptr_t AngularTarget = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LinearXLimitType", 0x0, "EnumProperty"},
            {"LinearYLimitType", 0x1, "EnumProperty"},
            {"LinearZLimitType", 0x2, "EnumProperty"},
            {"LinearAxesMin", 0x8, "StructProperty"},
            {"LinearAxesMax", 0x20, "StructProperty"},
            {"AngularConstraintType", 0x38, "EnumProperty"},
            {"TwistAxis", 0x39, "EnumProperty"},
            {"AngularTargetAxis", 0x3A, "EnumProperty"},
            {"ConeAngle", 0x3C, "FloatProperty"},
            {"AngularLimitsMin", 0x40, "StructProperty"},
            {"AngularLimitsMax", 0x58, "StructProperty"},
            {"AngularTarget", 0x70, "StructProperty"},
        }};
    };

    struct AnimPhysPlanarLimit
    {
        static constexpr std::string_view Name = "AnimPhysPlanarLimit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingBone = 0x0;
            static constexpr std::uintptr_t PlaneTransform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DrivingBone", 0x0, "StructProperty"},
            {"PlaneTransform", 0x10, "StructProperty"},
        }};
    };

    struct AnimPhysSimSpaceSettings
    {
        static constexpr std::string_view Name = "AnimPhysSimSpaceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SimSpaceAngularAlpha = 0x0;
            static constexpr std::uintptr_t MaxAngularVelocity = 0x4;
            static constexpr std::uintptr_t MaxAngularAcceleration = 0x8;
            static constexpr std::uintptr_t ExternalAngularVelocity = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SimSpaceAngularAlpha", 0x0, "FloatProperty"},
            {"MaxAngularVelocity", 0x4, "FloatProperty"},
            {"MaxAngularAcceleration", 0x8, "FloatProperty"},
            {"ExternalAngularVelocity", 0x10, "StructProperty"},
        }};
    };

    struct AnimPhysSphericalLimit
    {
        static constexpr std::string_view Name = "AnimPhysSphericalLimit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingBone = 0x0;
            static constexpr std::uintptr_t SphereLocalOffset = 0x10;
            static constexpr std::uintptr_t LimitRadius = 0x28;
            static constexpr std::uintptr_t LimitType = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DrivingBone", 0x0, "StructProperty"},
            {"SphereLocalOffset", 0x10, "StructProperty"},
            {"LimitRadius", 0x28, "FloatProperty"},
            {"LimitType", 0x2C, "EnumProperty"},
        }};
    };

    struct AnimSequencerInstance
    {
        static constexpr std::string_view Name = "AnimSequencerInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSkeleton = 0x28;
            static constexpr std::uintptr_t RootMotionMode = 0x30;
            static constexpr std::uintptr_t bPropagateNotifiesToLinkedInstances = 0x31;
            static constexpr std::uintptr_t bReceiveNotifiesFromLinkedInstances = 0x31;
            static constexpr std::uintptr_t bUseMainInstanceMontageEvaluationData = 0x31;
            static constexpr std::uintptr_t bUseMultiThreadedAnimationUpdate = 0x31;
            static constexpr std::uintptr_t bUsingCopyPoseFromMesh = 0x31;
            static constexpr std::uintptr_t bQueueMontageEvents = 0x32;
            static constexpr std::uintptr_t OnMontageBlendingOut = 0x38;
            static constexpr std::uintptr_t OnMontageBlendedIn = 0x48;
            static constexpr std::uintptr_t OnMontageStarted = 0x58;
            static constexpr std::uintptr_t OnMontageEnded = 0x68;
            static constexpr std::uintptr_t OnAllMontageInstancesEnded = 0x78;
            static constexpr std::uintptr_t OnMontageSectionChanged = 0x88;
            static constexpr std::uintptr_t SlotGroupInertializationRequestDataMap = 0xB8;
            static constexpr std::uintptr_t NotifyQueue = 0x110;
            static constexpr std::uintptr_t ActiveAnimNotifyState = 0x148;
            static constexpr std::uintptr_t ActiveAnimNotifyEventReference = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CurrentSkeleton", 0x28, "ObjectProperty"},
            {"RootMotionMode", 0x30, "ByteProperty"},
            {"bPropagateNotifiesToLinkedInstances", 0x31, "BoolProperty"},
            {"bReceiveNotifiesFromLinkedInstances", 0x31, "BoolProperty"},
            {"bUseMainInstanceMontageEvaluationData", 0x31, "BoolProperty"},
            {"bUseMultiThreadedAnimationUpdate", 0x31, "BoolProperty"},
            {"bUsingCopyPoseFromMesh", 0x31, "BoolProperty"},
            {"bQueueMontageEvents", 0x32, "BoolProperty"},
            {"OnMontageBlendingOut", 0x38, "MulticastInlineDelegateProperty"},
            {"OnMontageBlendedIn", 0x48, "MulticastInlineDelegateProperty"},
            {"OnMontageStarted", 0x58, "MulticastInlineDelegateProperty"},
            {"OnMontageEnded", 0x68, "MulticastInlineDelegateProperty"},
            {"OnAllMontageInstancesEnded", 0x78, "MulticastInlineDelegateProperty"},
            {"OnMontageSectionChanged", 0x88, "MulticastInlineDelegateProperty"},
            {"SlotGroupInertializationRequestDataMap", 0xB8, "MapProperty"},
            {"NotifyQueue", 0x110, "StructProperty"},
            {"ActiveAnimNotifyState", 0x148, "ArrayProperty"},
            {"ActiveAnimNotifyEventReference", 0x158, "ArrayProperty"},
        }};
    };

    struct AnimSequencerInstanceProxy
    {
        static constexpr std::string_view Name = "AnimSequencerInstanceProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotGroupInertializationRequestDataMap = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotGroupInertializationRequestDataMap", 0x3F0, "MapProperty"},
        }};
    };

    struct AnimationStateMachineLibrary
    {
        static constexpr std::string_view Name = "AnimationStateMachineLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "ConvertToAnimationStateMachine",
            "ConvertToAnimationStateMachinePure",
            "ConvertToAnimationStateResult",
            "ConvertToAnimationStateResultPure",
            "GetRelevantAnimTimeRemaining",
            "GetRelevantAnimTimeRemainingFraction",
            "GetState",
            "IsStateBlendingIn",
            "IsStateBlendingOut",
            "SetState",
        }};
    };

    struct AnimationStateMachineReference
    {
        static constexpr std::string_view Name = "AnimationStateMachineReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimationStateResultReference
    {
        static constexpr std::string_view Name = "AnimationStateResultReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlendBoneByChannelEntry
    {
        static constexpr std::string_view Name = "BlendBoneByChannelEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0x0;
            static constexpr std::uintptr_t TargetBone = 0xC;
            static constexpr std::uintptr_t bBlendTranslation = 0x18;
            static constexpr std::uintptr_t bBlendRotation = 0x19;
            static constexpr std::uintptr_t bBlendScale = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceBone", 0x0, "StructProperty"},
            {"TargetBone", 0xC, "StructProperty"},
            {"bBlendTranslation", 0x18, "BoolProperty"},
            {"bBlendRotation", 0x19, "BoolProperty"},
            {"bBlendScale", 0x1A, "BoolProperty"},
        }};
    };

    struct BlendListBaseLibrary
    {
        static constexpr std::string_view Name = "BlendListBaseLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ConvertToBlendListBase",
            "ResetNode",
        }};
    };

    struct BlendListBaseReference
    {
        static constexpr std::string_view Name = "BlendListBaseReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlendSpaceLibrary
    {
        static constexpr std::string_view Name = "BlendSpaceLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "ConvertToBlendSpace",
            "ConvertToBlendSpacePure",
            "GetFilteredPosition",
            "GetPosition",
            "SnapToPosition",
        }};
    };

    struct BlendSpacePlayerLibrary
    {
        static constexpr std::string_view Name = "BlendSpacePlayerLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "ConvertToBlendSpacePlayer",
            "ConvertToBlendSpacePlayerPure",
            "GetAccumulatedTime",
            "GetBlendSpace",
            "GetLoop",
            "GetPlayRate",
            "GetPosition",
            "GetStartPosition",
            "SetAccumulatedTime",
            "SetBlendSpace",
            "SetBlendSpaceWithInertialBlending",
            "SetLoop",
            "SetPlayRate",
            "SetResetPlayTimeWhenBlendSpaceChanges",
            "ShouldResetPlayTimeWhenBlendSpaceChanges",
            "SnapToPosition",
        }};
    };

    struct BlendSpacePlayerReference
    {
        static constexpr std::string_view Name = "BlendSpacePlayerReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlendSpaceReference
    {
        static constexpr std::string_view Name = "BlendSpaceReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Constraint
    {
        static constexpr std::string_view Name = "Constraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetBone = 0x0;
            static constexpr std::uintptr_t OffsetOption = 0xC;
            static constexpr std::uintptr_t TransformType = 0xD;
            static constexpr std::uintptr_t PerAxis = 0xE;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetBone", 0x0, "StructProperty"},
            {"OffsetOption", 0xC, "EnumProperty"},
            {"TransformType", 0xD, "EnumProperty"},
            {"PerAxis", 0xE, "StructProperty"},
        }};
    };

    struct IKChain
    {
        static constexpr std::string_view Name = "IKChain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKChainLink
    {
        static constexpr std::string_view Name = "IKChainLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKFootPelvisPullDownSolver
    {
        static constexpr std::string_view Name = "IKFootPelvisPullDownSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PelvisAdjustmentInterp = 0x0;
            static constexpr std::uintptr_t PelvisAdjustmentInterpAlpha = 0x60;
            static constexpr std::uintptr_t PelvisAdjustmentMaxDistance = 0x68;
            static constexpr std::uintptr_t PelvisAdjustmentErrorTolerance = 0x70;
            static constexpr std::uintptr_t PelvisAdjustmentMaxIter = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PelvisAdjustmentInterp", 0x0, "StructProperty"},
            {"PelvisAdjustmentInterpAlpha", 0x60, "DoubleProperty"},
            {"PelvisAdjustmentMaxDistance", 0x68, "DoubleProperty"},
            {"PelvisAdjustmentErrorTolerance", 0x70, "DoubleProperty"},
            {"PelvisAdjustmentMaxIter", 0x78, "IntProperty"},
        }};
    };

    struct KismetAnimationLibrary
    {
        static constexpr std::string_view Name = "KismetAnimationLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "CalculateDirection",
            "K2_CalculateVelocityFromPositionHistory",
            "K2_CalculateVelocityFromSockets",
            "K2_DirectionBetweenSockets",
            "K2_DistanceBetweenTwoSocketsAndMapRange",
            "K2_EndProfilingTimer",
            "K2_LookAt",
            "K2_MakePerlinNoiseAndRemap",
            "K2_MakePerlinNoiseVectorAndRemap",
            "K2_StartProfilingTimer",
            "K2_TwoBoneIK",
        }};
    };

    struct LayeredBoneBlendLibrary
    {
        static constexpr std::string_view Name = "LayeredBoneBlendLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ConvertToLayeredBlendPerBonePure",
            "ConvertToLayeredBoneBlend",
            "GetNumPoses",
            "SetBlendMask",
        }};
    };

    struct LayeredBoneBlendReference
    {
        static constexpr std::string_view Name = "LayeredBoneBlendReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LinkedAnimGraphLibrary
    {
        static constexpr std::string_view Name = "LinkedAnimGraphLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ConvertToLinkedAnimGraph",
            "ConvertToLinkedAnimGraphPure",
            "GetLinkedAnimInstance",
            "HasLinkedAnimInstance",
        }};
    };

    struct LinkedAnimGraphReference
    {
        static constexpr std::string_view Name = "LinkedAnimGraphReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MirrorAnimLibrary
    {
        static constexpr std::string_view Name = "MirrorAnimLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ConvertToMirrorNode",
            "ConvertToMirrorNodePure",
            "GetMirror",
            "GetMirrorDataTable",
            "GetMirrorTransitionBlendTime",
            "SetMirror",
            "SetMirrorTransitionBlendTime",
        }};
    };

    struct MirrorAnimNodeReference
    {
        static constexpr std::string_view Name = "MirrorAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifyCurveAnimLibrary
    {
        static constexpr std::string_view Name = "ModifyCurveAnimLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ConvertToModifyCurveNode",
            "ConvertToModifyCurveNodePure",
            "GetAlpha",
            "GetApplyMode",
            "SetAlpha",
            "SetApplyMode",
            "SetCurveMap",
        }};
    };

    struct ModifyCurveAnimNodeReference
    {
        static constexpr std::string_view Name = "ModifyCurveAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayMontageCallbackProxy
    {
        static constexpr std::string_view Name = "PlayMontageCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "CreateProxyObjectForPlayMontage",
            "OnMontageBlendingOut",
            "OnMontageEnded",
            "OnNotifyBeginReceived",
            "OnNotifyEndReceived",
        }};
    };

    struct PoseDriverTarget
    {
        static constexpr std::string_view Name = "PoseDriverTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneTransforms = 0x0;
            static constexpr std::uintptr_t TargetRotation = 0x10;
            static constexpr std::uintptr_t TargetScale = 0x28;
            static constexpr std::uintptr_t DistanceMethod = 0x2C;
            static constexpr std::uintptr_t FunctionType = 0x2D;
            static constexpr std::uintptr_t bApplyCustomCurve = 0x2E;
            static constexpr std::uintptr_t CustomCurve = 0x30;
            static constexpr std::uintptr_t DrivenName = 0x70;
            static constexpr std::uintptr_t bIsHidden = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"BoneTransforms", 0x0, "ArrayProperty"},
            {"TargetRotation", 0x10, "StructProperty"},
            {"TargetScale", 0x28, "FloatProperty"},
            {"DistanceMethod", 0x2C, "EnumProperty"},
            {"FunctionType", 0x2D, "EnumProperty"},
            {"bApplyCustomCurve", 0x2E, "BoolProperty"},
            {"CustomCurve", 0x30, "StructProperty"},
            {"DrivenName", 0x70, "NameProperty"},
            {"bIsHidden", 0x78, "BoolProperty"},
        }};
    };

    struct PoseDriverTransform
    {
        static constexpr std::string_view Name = "PoseDriverTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTranslation = 0x0;
            static constexpr std::uintptr_t TargetRotation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetTranslation", 0x0, "StructProperty"},
            {"TargetRotation", 0x18, "StructProperty"},
        }};
    };

    struct PositionHistory
    {
        static constexpr std::string_view Name = "PositionHistory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Positions = 0x0;
            static constexpr std::uintptr_t Range = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Positions", 0x0, "ArrayProperty"},
            {"Range", 0x10, "FloatProperty"},
        }};
    };

    struct RBFEntry
    {
        static constexpr std::string_view Name = "RBFEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x0, "ArrayProperty"},
        }};
    };

    struct RBFParams
    {
        static constexpr std::string_view Name = "RBFParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetDimensions = 0x0;
            static constexpr std::uintptr_t SolverType = 0x4;
            static constexpr std::uintptr_t Radius = 0x8;
            static constexpr std::uintptr_t bAutomaticRadius = 0xC;
            static constexpr std::uintptr_t Function = 0xD;
            static constexpr std::uintptr_t DistanceMethod = 0xE;
            static constexpr std::uintptr_t TwistAxis = 0xF;
            static constexpr std::uintptr_t WeightThreshold = 0x10;
            static constexpr std::uintptr_t NormalizeMethod = 0x14;
            static constexpr std::uintptr_t MedianReference = 0x18;
            static constexpr std::uintptr_t MedianMin = 0x30;
            static constexpr std::uintptr_t MedianMax = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"TargetDimensions", 0x0, "IntProperty"},
            {"SolverType", 0x4, "EnumProperty"},
            {"Radius", 0x8, "FloatProperty"},
            {"bAutomaticRadius", 0xC, "BoolProperty"},
            {"Function", 0xD, "EnumProperty"},
            {"DistanceMethod", 0xE, "EnumProperty"},
            {"TwistAxis", 0xF, "ByteProperty"},
            {"WeightThreshold", 0x10, "FloatProperty"},
            {"NormalizeMethod", 0x14, "EnumProperty"},
            {"MedianReference", 0x18, "StructProperty"},
            {"MedianMin", 0x30, "FloatProperty"},
            {"MedianMax", 0x34, "FloatProperty"},
        }};
    };

    struct RBFTarget
    {
        static constexpr std::string_view Name = "RBFTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RBFEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleFactor = 0x10;
            static constexpr std::uintptr_t bApplyCustomCurve = 0x14;
            static constexpr std::uintptr_t CustomCurve = 0x18;
            static constexpr std::uintptr_t DistanceMethod = 0x58;
            static constexpr std::uintptr_t FunctionType = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ScaleFactor", 0x10, "FloatProperty"},
            {"bApplyCustomCurve", 0x14, "BoolProperty"},
            {"CustomCurve", 0x18, "StructProperty"},
            {"DistanceMethod", 0x58, "EnumProperty"},
            {"FunctionType", 0x59, "EnumProperty"},
        }};
    };

    struct RandomPlayerSequenceEntry
    {
        static constexpr std::string_view Name = "RandomPlayerSequenceEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t ChanceToPlay = 0x8;
            static constexpr std::uintptr_t MinLoopCount = 0xC;
            static constexpr std::uintptr_t MaxLoopCount = 0x10;
            static constexpr std::uintptr_t MinPlayrate = 0x14;
            static constexpr std::uintptr_t MaxPlayrate = 0x18;
            static constexpr std::uintptr_t BlendIn = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Sequence", 0x0, "ObjectProperty"},
            {"ChanceToPlay", 0x8, "FloatProperty"},
            {"MinLoopCount", 0xC, "IntProperty"},
            {"MaxLoopCount", 0x10, "IntProperty"},
            {"MinPlayrate", 0x14, "FloatProperty"},
            {"MaxPlayrate", 0x18, "FloatProperty"},
            {"BlendIn", 0x20, "StructProperty"},
        }};
    };

    struct ReferenceBoneFrame
    {
        static constexpr std::string_view Name = "ReferenceBoneFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Axis = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "StructProperty"},
            {"Axis", 0x10, "StructProperty"},
        }};
    };

    struct RigidBodyAnimNodeReference
    {
        static constexpr std::string_view Name = "RigidBodyAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RotationLimit
    {
        static constexpr std::string_view Name = "RotationLimit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitMin = 0x0;
            static constexpr std::uintptr_t LimitMax = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LimitMin", 0x0, "StructProperty"},
            {"LimitMax", 0x18, "StructProperty"},
        }};
    };

    struct RotationRetargetingInfo
    {
        static constexpr std::string_view Name = "RotationRetargetingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t Target = 0x70;
            static constexpr std::uintptr_t RotationComponent = 0xD0;
            static constexpr std::uintptr_t TwistAxis = 0xD8;
            static constexpr std::uintptr_t bUseAbsoluteAngle = 0xF0;
            static constexpr std::uintptr_t SourceMinimum = 0xF4;
            static constexpr std::uintptr_t SourceMaximum = 0xF8;
            static constexpr std::uintptr_t TargetMinimum = 0xFC;
            static constexpr std::uintptr_t TargetMaximum = 0x100;
            static constexpr std::uintptr_t EasingType = 0x104;
            static constexpr std::uintptr_t CustomCurve = 0x108;
            static constexpr std::uintptr_t bFlipEasing = 0x150;
            static constexpr std::uintptr_t EasingWeight = 0x154;
            static constexpr std::uintptr_t bClamp = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Source", 0x10, "StructProperty"},
            {"Target", 0x70, "StructProperty"},
            {"RotationComponent", 0xD0, "EnumProperty"},
            {"TwistAxis", 0xD8, "StructProperty"},
            {"bUseAbsoluteAngle", 0xF0, "BoolProperty"},
            {"SourceMinimum", 0xF4, "FloatProperty"},
            {"SourceMaximum", 0xF8, "FloatProperty"},
            {"TargetMinimum", 0xFC, "FloatProperty"},
            {"TargetMaximum", 0x100, "FloatProperty"},
            {"EasingType", 0x104, "EnumProperty"},
            {"CustomCurve", 0x108, "StructProperty"},
            {"bFlipEasing", 0x150, "BoolProperty"},
            {"EasingWeight", 0x154, "FloatProperty"},
            {"bClamp", 0x158, "BoolProperty"},
        }};
    };

    struct SequenceEvaluatorLibrary
    {
        static constexpr std::string_view Name = "SequenceEvaluatorLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "AdvanceTime",
            "ConvertToSequenceEvaluator",
            "ConvertToSequenceEvaluatorPure",
            "GetAccumulatedTime",
            "GetSequence",
            "SetExplicitFrame",
            "SetExplicitTime",
            "SetSequence",
            "SetSequenceWithInertialBlending",
        }};
    };

    struct SequenceEvaluatorReference
    {
        static constexpr std::string_view Name = "SequenceEvaluatorReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SequencePlayerLibrary
    {
        static constexpr std::string_view Name = "SequencePlayerLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "ComputePlayRateFromDuration",
            "ConvertToSequencePlayer",
            "ConvertToSequencePlayerPure",
            "GetAccumulatedTime",
            "GetLoopAnimation",
            "GetPlayRate",
            "GetSequence",
            "GetSequencePure",
            "GetStartPosition",
            "SetAccumulatedTime",
            "SetPlayRate",
            "SetSequence",
            "SetSequenceWithInertialBlending",
            "SetStartPosition",
        }};
    };

    struct SequencePlayerReference
    {
        static constexpr std::string_view Name = "SequencePlayerReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SequencerAnimationOverride
    {
        static constexpr std::string_view Name = "SequencerAnimationOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AllowsCinematicOverride",
            "GetSequencerAnimSlotNames",
        }};
    };

    struct SequencerAnimationSupport
    {
        static constexpr std::string_view Name = "SequencerAnimationSupport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimSpaceSettings
    {
        static constexpr std::string_view Name = "SimSpaceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldAlpha = 0x0;
            static constexpr std::uintptr_t VelocityScaleZ = 0x4;
            static constexpr std::uintptr_t DampingAlpha = 0x8;
            static constexpr std::uintptr_t MaxLinearVelocity = 0xC;
            static constexpr std::uintptr_t MaxAngularVelocity = 0x10;
            static constexpr std::uintptr_t MaxLinearAcceleration = 0x14;
            static constexpr std::uintptr_t MaxAngularAcceleration = 0x18;
            static constexpr std::uintptr_t ExternalLinearDragV = 0x20;
            static constexpr std::uintptr_t ExternalLinearVelocity = 0x38;
            static constexpr std::uintptr_t ExternalAngularVelocity = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WorldAlpha", 0x0, "FloatProperty"},
            {"VelocityScaleZ", 0x4, "FloatProperty"},
            {"DampingAlpha", 0x8, "FloatProperty"},
            {"MaxLinearVelocity", 0xC, "FloatProperty"},
            {"MaxAngularVelocity", 0x10, "FloatProperty"},
            {"MaxLinearAcceleration", 0x14, "FloatProperty"},
            {"MaxAngularAcceleration", 0x18, "FloatProperty"},
            {"ExternalLinearDragV", 0x20, "StructProperty"},
            {"ExternalLinearVelocity", 0x38, "StructProperty"},
            {"ExternalAngularVelocity", 0x50, "StructProperty"},
        }};
    };

    struct SkeletalControlLibrary
    {
        static constexpr std::string_view Name = "SkeletalControlLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ConvertToSkeletalControl",
            "ConvertToSkeletalControlPure",
            "GetAlpha",
            "SetAlpha",
        }};
    };

    struct SkeletalControlReference
    {
        static constexpr std::string_view Name = "SkeletalControlReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SplineIKCachedBoneData
    {
        static constexpr std::string_view Name = "SplineIKCachedBoneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t RefSkeletonIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "StructProperty"},
            {"RefSkeletonIndex", 0xC, "IntProperty"},
        }};
    };

    struct WarpingVectorValue
    {
        static constexpr std::string_view Name = "WarpingVectorValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Mode", 0x0, "EnumProperty"},
            {"Value", 0x8, "StructProperty"},
        }};
    };

}
