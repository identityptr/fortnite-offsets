#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IKRig
{
    struct AnimNode_IKRig
    {
        static constexpr std::string_view Name = "AnimNode_IKRig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_CustomProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x58;
            static constexpr std::uintptr_t RigDefinitionAsset = 0x68;
            static constexpr std::uintptr_t Goals = 0x70;
            static constexpr std::uintptr_t bStartFromRefPose = 0x80;
            static constexpr std::uintptr_t AlphaInputType = 0x81;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x82;
            static constexpr std::uintptr_t Alpha = 0x84;
            static constexpr std::uintptr_t AlphaScaleBias = 0x88;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x90;
            static constexpr std::uintptr_t AlphaCurveName = 0xD8;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0xDC;
            static constexpr std::uintptr_t GoalCreators = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Source", 0x58, "StructProperty"},
            {"RigDefinitionAsset", 0x68, "ObjectProperty"},
            {"Goals", 0x70, "ArrayProperty"},
            {"bStartFromRefPose", 0x80, "BoolProperty"},
            {"AlphaInputType", 0x81, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x82, "BoolProperty"},
            {"Alpha", 0x84, "FloatProperty"},
            {"AlphaScaleBias", 0x88, "StructProperty"},
            {"AlphaBoolBlend", 0x90, "StructProperty"},
            {"AlphaCurveName", 0xD8, "NameProperty"},
            {"AlphaScaleBiasClamp", 0xDC, "StructProperty"},
            {"GoalCreators", 0x208, "ArrayProperty"},
        }};
    };

    struct AnimNode_RetargetPoseFromMesh
    {
        static constexpr std::string_view Name = "AnimNode_RetargetPoseFromMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_CustomProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x58;
            static constexpr std::uintptr_t RetargetFrom = 0x68;
            static constexpr std::uintptr_t SourceMeshComponent = 0x6C;
            static constexpr std::uintptr_t IKRetargeterAsset = 0x78;
            static constexpr std::uintptr_t CustomRetargetProfile = 0x80;
            static constexpr std::uintptr_t bUseCustomOverrideSets = 0x158;
            static constexpr std::uintptr_t OverrideSetsToApply = 0x160;
            static constexpr std::uintptr_t LODThreshold = 0x170;
            static constexpr std::uintptr_t LODThresholdForIK = 0x174;
            static constexpr std::uintptr_t bSuppressWarnings = 0x178;
            static constexpr std::uintptr_t bUseAttachedParent = 0x179;
            static constexpr std::uintptr_t RuntimeVariables = 0x180;
            static constexpr std::uintptr_t BoundCurveValues = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Source", 0x58, "StructProperty"},
            {"RetargetFrom", 0x68, "EnumProperty"},
            {"SourceMeshComponent", 0x6C, "WeakObjectProperty"},
            {"IKRetargeterAsset", 0x78, "ObjectProperty"},
            {"CustomRetargetProfile", 0x80, "StructProperty"},
            {"bUseCustomOverrideSets", 0x158, "BoolProperty"},
            {"OverrideSetsToApply", 0x160, "ArrayProperty"},
            {"LODThreshold", 0x170, "IntProperty"},
            {"LODThresholdForIK", 0x174, "IntProperty"},
            {"bSuppressWarnings", 0x178, "BoolProperty"},
            {"bUseAttachedParent", 0x179, "BoolProperty"},
            {"RuntimeVariables", 0x180, "StructProperty"},
            {"BoundCurveValues", 0x190, "MapProperty"},
        }};
    };

    struct BoneChain
    {
        static constexpr std::string_view Name = "BoneChain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainName = 0x0;
            static constexpr std::uintptr_t StartBone = 0x4;
            static constexpr std::uintptr_t EndBone = 0x10;
            static constexpr std::uintptr_t IKGoalName = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChainName", 0x0, "NameProperty"},
            {"StartBone", 0x4, "StructProperty"},
            {"EndBone", 0x10, "StructProperty"},
            {"IKGoalName", 0x1C, "NameProperty"},
        }};
    };

    struct BoneNamePair
    {
        static constexpr std::string_view Name = "BoneNamePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0x0;
            static constexpr std::uintptr_t TargetBone = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceBone", 0x0, "NameProperty"},
            {"TargetBone", 0x4, "NameProperty"},
        }};
    };

    struct CurveRemapOp
    {
        static constexpr std::string_view Name = "CurveRemapOp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurvesToRemap = 0x30;
            static constexpr std::uintptr_t bCopyAllSourceCurves = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurvesToRemap", 0x30, "ArrayProperty"},
            {"bCopyAllSourceCurves", 0x40, "BoolProperty"},
        }};
    };

    struct CurveRemapPair
    {
        static constexpr std::string_view Name = "CurveRemapPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceCurve = 0x0;
            static constexpr std::uintptr_t TargetCurve = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceCurve", 0x0, "NameProperty"},
            {"TargetCurve", 0x4, "NameProperty"},
        }};
    };

    struct FilterBoneData
    {
        static constexpr std::string_view Name = "FilterBoneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetBone = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetBone", 0x0, "StructProperty"},
        }};
    };

    struct FloorConstraintChainSettings
    {
        static constexpr std::string_view Name = "FloorConstraintChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSkeletonProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x8;
            static constexpr std::uintptr_t EnableFloorConstraint = 0xC;
            static constexpr std::uintptr_t Alpha = 0x10;
            static constexpr std::uintptr_t MaintainHeightOffset = 0x18;
            static constexpr std::uintptr_t bUseFoot = 0x20;
            static constexpr std::uintptr_t bUseToes = 0x21;
            static constexpr std::uintptr_t Foot = 0x28;
            static constexpr std::uintptr_t Toes = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TargetChainName", 0x8, "NameProperty"},
            {"EnableFloorConstraint", 0xC, "BoolProperty"},
            {"Alpha", 0x10, "DoubleProperty"},
            {"MaintainHeightOffset", 0x18, "DoubleProperty"},
            {"bUseFoot", 0x20, "BoolProperty"},
            {"bUseToes", 0x21, "BoolProperty"},
            {"Foot", 0x28, "StructProperty"},
            {"Toes", 0x50, "StructProperty"},
        }};
    };

    struct FloorConstraintFootDefinition
    {
        static constexpr std::string_view Name = "FloorConstraintFootDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MedialOffset = 0x0;
            static constexpr std::uintptr_t LateralOffset = 0x8;
            static constexpr std::uintptr_t HeelOffset = 0x10;
            static constexpr std::uintptr_t ToeOffset = 0x18;
            static constexpr std::uintptr_t VerticalOffset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MedialOffset", 0x0, "DoubleProperty"},
            {"LateralOffset", 0x8, "DoubleProperty"},
            {"HeelOffset", 0x10, "DoubleProperty"},
            {"ToeOffset", 0x18, "DoubleProperty"},
            {"VerticalOffset", 0x20, "DoubleProperty"},
        }};
    };

    struct FloorConstraintToeDefinition
    {
        static constexpr std::string_view Name = "FloorConstraintToeDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ToeBone = 0x0;
            static constexpr std::uintptr_t Length = 0x10;
            static constexpr std::uintptr_t YawOffset = 0x18;
            static constexpr std::uintptr_t VerticalOffset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ToeBone", 0x0, "StructProperty"},
            {"Length", 0x10, "DoubleProperty"},
            {"YawOffset", 0x18, "DoubleProperty"},
            {"VerticalOffset", 0x20, "DoubleProperty"},
        }};
    };

    struct FloorConstraintToesDefinition
    {
        static constexpr std::string_view Name = "FloorConstraintToesDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Alpha = 0x0;
            static constexpr std::uintptr_t Responsiveness = 0x8;
            static constexpr std::uintptr_t CutoffFrequency = 0xC;
            static constexpr std::uintptr_t VelocityCutoffFrequency = 0x10;
            static constexpr std::uintptr_t AllToes = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Alpha", 0x0, "DoubleProperty"},
            {"Responsiveness", 0x8, "FloatProperty"},
            {"CutoffFrequency", 0xC, "FloatProperty"},
            {"VelocityCutoffFrequency", 0x10, "FloatProperty"},
            {"AllToes", 0x18, "ArrayProperty"},
        }};
    };

    struct GoalBone
    {
        static constexpr std::string_view Name = "GoalBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKGoalCreatorInterface
    {
        static constexpr std::string_view Name = "IKGoalCreatorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddIKGoals",
        }};
    };

    struct IKRetargetAdditivePoseController
    {
        static constexpr std::string_view Name = "IKRetargetAdditivePoseController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetAdditivePoseOp
    {
        static constexpr std::string_view Name = "IKRetargetAdditivePoseOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x20, "StructProperty"},
        }};
    };

    struct IKRetargetAdditivePoseOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetAdditivePoseOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseToApply = 0x20;
            static constexpr std::uintptr_t Alpha = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PoseToApply", 0x20, "NameProperty"},
            {"Alpha", 0x24, "FloatProperty"},
        }};
    };

    struct IKRetargetAlignPoleVectorController
    {
        static constexpr std::string_view Name = "IKRetargetAlignPoleVectorController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetAlignPoleVectorOp
    {
        static constexpr std::string_view Name = "IKRetargetAlignPoleVectorOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
            static constexpr std::uintptr_t ChainMapping = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x18, "StructProperty"},
            {"ChainMapping", 0x58, "StructProperty"},
        }};
    };

    struct IKRetargetAlignPoleVectorOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetAlignPoleVectorOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IKRigAsset = 0x20;
            static constexpr std::uintptr_t ChainsToAlign = 0x28;
            static constexpr std::uintptr_t Alpha = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IKRigAsset", 0x20, "ObjectProperty"},
            {"ChainsToAlign", 0x28, "ArrayProperty"},
            {"Alpha", 0x38, "DoubleProperty"},
        }};
    };

    struct IKRetargetBlendToSourceChainSettings
    {
        static constexpr std::string_view Name = "IKRetargetBlendToSourceChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t BlendToSource = 0x8;
            static constexpr std::uintptr_t TranslationAlpha = 0x10;
            static constexpr std::uintptr_t RotationAlpha = 0x18;
            static constexpr std::uintptr_t TranslationPerAxisAlpha = 0x20;
            static constexpr std::uintptr_t ApplyPelvisOffset = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"BlendToSource", 0x8, "DoubleProperty"},
            {"TranslationAlpha", 0x10, "DoubleProperty"},
            {"RotationAlpha", 0x18, "DoubleProperty"},
            {"TranslationPerAxisAlpha", 0x20, "StructProperty"},
            {"ApplyPelvisOffset", 0x38, "DoubleProperty"},
        }};
    };

    struct IKRetargetBlendToSourceController
    {
        static constexpr std::string_view Name = "IKRetargetBlendToSourceController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetBlendToSourceOp
    {
        static constexpr std::string_view Name = "IKRetargetBlendToSourceOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetBlendToSourceOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetBlendToSourceOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chains = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t DebugDrawSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Chains", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "DoubleProperty"},
            {"DebugDrawSize", 0x38, "DoubleProperty"},
        }};
    };

    struct IKRetargetCopyBasePoseController
    {
        static constexpr std::string_view Name = "IKRetargetCopyBasePoseController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddBoneToExclude",
            "GetBonesToExclude",
            "GetCopyFromStart",
            "GetSettings",
            "ResetBonesToExclude",
            "SetCopyFromStart",
            "SetSettings",
        }};
    };

    struct IKRetargetCopyBasePoseOp
    {
        static constexpr std::string_view Name = "IKRetargetCopyBasePoseOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetCopyBasePoseOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetCopyBasePoseOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bCopyBasePose = 0x20;
            static constexpr std::uintptr_t CopyFromStart = 0x24;
            static constexpr std::uintptr_t BonesToExclude = 0x30;
            static constexpr std::uintptr_t CopyBasePoseRoot = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bCopyBasePose", 0x20, "BoolProperty"},
            {"CopyFromStart", 0x24, "StructProperty"},
            {"BonesToExclude", 0x30, "ArrayProperty"},
            {"CopyBasePoseRoot", 0x40, "NameProperty"},
        }};
    };

    struct IKRetargetCurveRemapController
    {
        static constexpr std::string_view Name = "IKRetargetCurveRemapController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetCurveRemapOp
    {
        static constexpr std::string_view Name = "IKRetargetCurveRemapOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetCurvesOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x40, "StructProperty"},
        }};
    };

    struct IKRetargetCurveRemapOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetCurveRemapOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bCopyAllSourceCurves = 0x20;
            static constexpr std::uintptr_t bRemapCurves = 0x21;
            static constexpr std::uintptr_t CurvesToRemap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCopyAllSourceCurves", 0x20, "BoolProperty"},
            {"bRemapCurves", 0x21, "BoolProperty"},
            {"CurvesToRemap", 0x28, "ArrayProperty"},
        }};
    };

    struct IKRetargetCurvesOpBase
    {
        static constexpr std::string_view Name = "IKRetargetCurvesOpBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTakeInputCurvesFromSourceAnimInstance = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bTakeInputCurvesFromSourceAnimInstance", 0x38, "BoolProperty"},
        }};
    };

    struct IKRetargetFKChainsController
    {
        static constexpr std::string_view Name = "IKRetargetFKChainsController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetFKChainsOp
    {
        static constexpr std::string_view Name = "IKRetargetFKChainsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
            static constexpr std::uintptr_t ChainMapping = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x18, "StructProperty"},
            {"ChainMapping", 0xB8, "StructProperty"},
        }};
    };

    struct IKRetargetFKChainsOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetFKChainsOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IKRigAsset = 0x20;
            static constexpr std::uintptr_t ChainsToRetarget = 0x28;
            static constexpr std::uintptr_t bDrawChainLines = 0x38;
            static constexpr std::uintptr_t bDrawSingleBoneChains = 0x39;
            static constexpr std::uintptr_t ChainDrawThickness = 0x40;
            static constexpr std::uintptr_t ChainDrawSize = 0x48;
            static constexpr std::uintptr_t ChainMapping = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IKRigAsset", 0x20, "ObjectProperty"},
            {"ChainsToRetarget", 0x28, "ArrayProperty"},
            {"bDrawChainLines", 0x38, "BoolProperty"},
            {"bDrawSingleBoneChains", 0x39, "BoolProperty"},
            {"ChainDrawThickness", 0x40, "DoubleProperty"},
            {"ChainDrawSize", 0x48, "DoubleProperty"},
            {"ChainMapping", 0x50, "StructProperty"},
        }};
    };

    struct IKRetargetFilterBoneController
    {
        static constexpr std::string_view Name = "IKRetargetFilterBoneController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddBoneToFilter",
            "ClearBonesToFilter",
            "GetAllBonesToFilter",
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetFilterBoneOp
    {
        static constexpr std::string_view Name = "IKRetargetFilterBoneOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetFilterBoneOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetFilterBoneOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BonesToFilter = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t FilterSettings = 0x38;
            static constexpr std::uintptr_t bResetPlayback = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BonesToFilter", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "DoubleProperty"},
            {"FilterSettings", 0x38, "StructProperty"},
            {"bResetPlayback", 0x50, "BoolProperty"},
        }};
    };

    struct IKRetargetFloorConstraintController
    {
        static constexpr std::string_view Name = "IKRetargetFloorConstraintController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetFloorConstraintOp
    {
        static constexpr std::string_view Name = "IKRetargetFloorConstraintOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetFloorConstraintOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetFloorConstraintOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainsToAffect = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t HeightFalloffOffset = 0x38;
            static constexpr std::uintptr_t HeightFalloffDistance = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChainsToAffect", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "DoubleProperty"},
            {"HeightFalloffOffset", 0x38, "DoubleProperty"},
            {"HeightFalloffDistance", 0x40, "DoubleProperty"},
        }};
    };

    struct IKRetargetGlobalSettings
    {
        static constexpr std::string_view Name = "IKRetargetGlobalSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

    struct IKRetargetIKChainsController
    {
        static constexpr std::string_view Name = "IKRetargetIKChainsController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetIKChainsOp
    {
        static constexpr std::string_view Name = "IKRetargetIKChainsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetIKChainsOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetIKChainsOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainsToRetarget = 0x20;
            static constexpr std::uintptr_t bDrawFinalGoals = 0x30;
            static constexpr std::uintptr_t bDrawSourceLocations = 0x31;
            static constexpr std::uintptr_t GoalDrawSize = 0x38;
            static constexpr std::uintptr_t GoalDrawThickness = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChainsToRetarget", 0x20, "ArrayProperty"},
            {"bDrawFinalGoals", 0x30, "BoolProperty"},
            {"bDrawSourceLocations", 0x31, "BoolProperty"},
            {"GoalDrawSize", 0x38, "DoubleProperty"},
            {"GoalDrawThickness", 0x40, "DoubleProperty"},
        }};
    };

    struct IKRetargetOffsetGoalsChainSettings
    {
        static constexpr std::string_view Name = "IKRetargetOffsetGoalsChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t Alpha = 0x8;
            static constexpr std::uintptr_t GlobalTranslationOffset = 0x10;
            static constexpr std::uintptr_t LocalTranslationOffset = 0x28;
            static constexpr std::uintptr_t GlobalRotationOffset = 0x40;
            static constexpr std::uintptr_t LocalRotationOffset = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"Alpha", 0x8, "DoubleProperty"},
            {"GlobalTranslationOffset", 0x10, "StructProperty"},
            {"LocalTranslationOffset", 0x28, "StructProperty"},
            {"GlobalRotationOffset", 0x40, "StructProperty"},
            {"LocalRotationOffset", 0x58, "StructProperty"},
        }};
    };

    struct IKRetargetOffsetGoalsController
    {
        static constexpr std::string_view Name = "IKRetargetOffsetGoalsController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetOffsetGoalsOp
    {
        static constexpr std::string_view Name = "IKRetargetOffsetGoalsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetOffsetGoalsOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetOffsetGoalsOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chains = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t TranslationAlpha = 0x38;
            static constexpr std::uintptr_t RotationAlpha = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Chains", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "DoubleProperty"},
            {"TranslationAlpha", 0x38, "DoubleProperty"},
            {"RotationAlpha", 0x40, "DoubleProperty"},
        }};
    };

    struct IKRetargetOpBase
    {
        static constexpr std::string_view Name = "IKRetargetOpBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t ParentOpName = 0xC;
            static constexpr std::uintptr_t bIsEnabled = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"ParentOpName", 0xC, "NameProperty"},
            {"bIsEnabled", 0x10, "BoolProperty"},
        }};
    };

    struct IKRetargetOpControllerBase
    {
        static constexpr std::string_view Name = "IKRetargetOpControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRetargetOpSettingsBase
    {
        static constexpr std::string_view Name = "IKRetargetOpSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSkeletonProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x8;
            static constexpr std::uintptr_t LODThreshold = 0xC;
            static constexpr std::uintptr_t bDebugDraw = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x8, "BoolProperty"},
            {"LODThreshold", 0xC, "IntProperty"},
            {"bDebugDraw", 0x10, "BoolProperty"},
        }};
    };

    struct IKRetargetOpSkeletonProvider
    {
        static constexpr std::string_view Name = "IKRetargetOpSkeletonProvider";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRetargetPelvisMotionController
    {
        static constexpr std::string_view Name = "IKRetargetPelvisMotionController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetSettings",
            "GetSourcePelvisBone",
            "GetTargetPelvisBone",
            "SetSettings",
            "SetSourcePelvisBone",
            "SetTargetPelvisBone",
        }};
    };

    struct IKRetargetPelvisMotionOp
    {
        static constexpr std::string_view Name = "IKRetargetPelvisMotionOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetPelvisMotionOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetPelvisMotionOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePelvisBone = 0x20;
            static constexpr std::uintptr_t TargetPelvisBone = 0x2C;
            static constexpr std::uintptr_t BlendToAbsoluteOffset = 0x38;
            static constexpr std::uintptr_t FloorConstraintWeight = 0x50;
            static constexpr std::uintptr_t SourceCrotchOffset = 0x58;
            static constexpr std::uintptr_t TargetCrotchOffset = 0x60;
            static constexpr std::uintptr_t bUseGroundFalloff = 0x68;
            static constexpr std::uintptr_t GroundFalloffHeightPercent = 0x70;
            static constexpr std::uintptr_t RotationAlpha = 0x78;
            static constexpr std::uintptr_t RotationOffsetLocal = 0x80;
            static constexpr std::uintptr_t RotationOffsetGlobal = 0x98;
            static constexpr std::uintptr_t TranslationAlpha = 0xB0;
            static constexpr std::uintptr_t TranslationOffsetLocal = 0xB8;
            static constexpr std::uintptr_t TranslationOffsetGlobal = 0xD0;
            static constexpr std::uintptr_t BlendToSourceTranslation = 0xE8;
            static constexpr std::uintptr_t BlendToSourceTranslationWeights = 0xF0;
            static constexpr std::uintptr_t ScaleHorizontal = 0x108;
            static constexpr std::uintptr_t ScaleVertical = 0x110;
            static constexpr std::uintptr_t AffectIKHorizontal = 0x118;
            static constexpr std::uintptr_t AffectIKVertical = 0x120;
            static constexpr std::uintptr_t DebugDrawSize = 0x128;
            static constexpr std::uintptr_t DebugDrawThickness = 0x130;
            static constexpr std::uintptr_t TranslationOffset = 0x138;
            static constexpr std::uintptr_t RotationOffset = 0x150;
            static constexpr std::uintptr_t bEnableDebugDraw = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"SourcePelvisBone", 0x20, "StructProperty"},
            {"TargetPelvisBone", 0x2C, "StructProperty"},
            {"BlendToAbsoluteOffset", 0x38, "StructProperty"},
            {"FloorConstraintWeight", 0x50, "DoubleProperty"},
            {"SourceCrotchOffset", 0x58, "DoubleProperty"},
            {"TargetCrotchOffset", 0x60, "DoubleProperty"},
            {"bUseGroundFalloff", 0x68, "BoolProperty"},
            {"GroundFalloffHeightPercent", 0x70, "DoubleProperty"},
            {"RotationAlpha", 0x78, "DoubleProperty"},
            {"RotationOffsetLocal", 0x80, "StructProperty"},
            {"RotationOffsetGlobal", 0x98, "StructProperty"},
            {"TranslationAlpha", 0xB0, "DoubleProperty"},
            {"TranslationOffsetLocal", 0xB8, "StructProperty"},
            {"TranslationOffsetGlobal", 0xD0, "StructProperty"},
            {"BlendToSourceTranslation", 0xE8, "DoubleProperty"},
            {"BlendToSourceTranslationWeights", 0xF0, "StructProperty"},
            {"ScaleHorizontal", 0x108, "DoubleProperty"},
            {"ScaleVertical", 0x110, "DoubleProperty"},
            {"AffectIKHorizontal", 0x118, "DoubleProperty"},
            {"AffectIKVertical", 0x120, "DoubleProperty"},
            {"DebugDrawSize", 0x128, "DoubleProperty"},
            {"DebugDrawThickness", 0x130, "DoubleProperty"},
            {"TranslationOffset", 0x138, "StructProperty"},
            {"RotationOffset", 0x150, "StructProperty"},
            {"bEnableDebugDraw", 0x168, "BoolProperty"},
        }};
    };

    struct IKRetargetPinBoneController
    {
        static constexpr std::string_view Name = "IKRetargetPinBoneController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "ClearAllBonePairs",
            "GetAllBonePairs",
            "GetSettings",
            "SetBonePair",
            "SetSettings",
        }};
    };

    struct IKRetargetPinBoneOp
    {
        static constexpr std::string_view Name = "IKRetargetPinBoneOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x20, "StructProperty"},
        }};
    };

    struct IKRetargetPinBoneOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetPinBoneOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BonesToPin = 0x20;
            static constexpr std::uintptr_t SkeletonToCopyFrom = 0x30;
            static constexpr std::uintptr_t bCopyTranslation = 0x31;
            static constexpr std::uintptr_t TranslationMode = 0x32;
            static constexpr std::uintptr_t bCopyRotation = 0x33;
            static constexpr std::uintptr_t RotationMode = 0x34;
            static constexpr std::uintptr_t bCopyScale = 0x35;
            static constexpr std::uintptr_t bPropagateToChildren = 0x36;
            static constexpr std::uintptr_t GlobalOffset = 0x40;
            static constexpr std::uintptr_t LocalOffset = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BonesToPin", 0x20, "ArrayProperty"},
            {"SkeletonToCopyFrom", 0x30, "EnumProperty"},
            {"bCopyTranslation", 0x31, "BoolProperty"},
            {"TranslationMode", 0x32, "EnumProperty"},
            {"bCopyRotation", 0x33, "BoolProperty"},
            {"RotationMode", 0x34, "EnumProperty"},
            {"bCopyScale", 0x35, "BoolProperty"},
            {"bPropagateToChildren", 0x36, "BoolProperty"},
            {"GlobalOffset", 0x40, "StructProperty"},
            {"LocalOffset", 0xA0, "StructProperty"},
        }};
    };

    struct IKRetargetPose
    {
        static constexpr std::string_view Name = "IKRetargetPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTranslationOffset = 0x0;
            static constexpr std::uintptr_t BoneRotationOffsets = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootTranslationOffset", 0x0, "StructProperty"},
            {"BoneRotationOffsets", 0x18, "MapProperty"},
        }};
    };

    struct IKRetargetPoseController
    {
        static constexpr std::string_view Name = "IKRetargetPoseController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetPoseOp
    {
        static constexpr std::string_view Name = "IKRetargetPoseOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetPoseOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetPoseOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideSourcePose = 0x20;
            static constexpr std::uintptr_t SourcePoseToUse = 0x24;
            static constexpr std::uintptr_t bOverrideTargetPose = 0x28;
            static constexpr std::uintptr_t TargetPoseToUse = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideSourcePose", 0x20, "BoolProperty"},
            {"SourcePoseToUse", 0x24, "NameProperty"},
            {"bOverrideTargetPose", 0x28, "BoolProperty"},
            {"TargetPoseToUse", 0x2C, "NameProperty"},
        }};
    };

    struct IKRetargetProcessor
    {
        static constexpr std::string_view Name = "IKRetargetProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRetargetRootMotionController
    {
        static constexpr std::string_view Name = "IKRetargetRootMotionController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetSettings",
            "GetSourceRootBone",
            "GetTargetPelvisBone",
            "GetTargetRootBone",
            "SetSettings",
            "SetSourceRootBone",
            "SetTargetPelvisBone",
            "SetTargetRootBone",
        }};
    };

    struct IKRetargetRootMotionOp
    {
        static constexpr std::string_view Name = "IKRetargetRootMotionOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x20, "StructProperty"},
        }};
    };

    struct IKRetargetRootMotionOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetRootMotionOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceRoot = 0x20;
            static constexpr std::uintptr_t TargetRoot = 0x2C;
            static constexpr std::uintptr_t RootMotionSource = 0x38;
            static constexpr std::uintptr_t TargetPelvis = 0x3C;
            static constexpr std::uintptr_t bRotateWithPelvis = 0x48;
            static constexpr std::uintptr_t RootHeightSource = 0x49;
            static constexpr std::uintptr_t GlobalOffset = 0x50;
            static constexpr std::uintptr_t bMaintainOffsetFromPelvis = 0xB0;
            static constexpr std::uintptr_t bPropagateToNonRetargetedChildren = 0xB1;
            static constexpr std::uintptr_t SourceRootBone = 0xB4;
            static constexpr std::uintptr_t TargetRootBone = 0xB8;
            static constexpr std::uintptr_t TargetPelvisBone = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SourceRoot", 0x20, "StructProperty"},
            {"TargetRoot", 0x2C, "StructProperty"},
            {"RootMotionSource", 0x38, "EnumProperty"},
            {"TargetPelvis", 0x3C, "StructProperty"},
            {"bRotateWithPelvis", 0x48, "BoolProperty"},
            {"RootHeightSource", 0x49, "EnumProperty"},
            {"GlobalOffset", 0x50, "StructProperty"},
            {"bMaintainOffsetFromPelvis", 0xB0, "BoolProperty"},
            {"bPropagateToNonRetargetedChildren", 0xB1, "BoolProperty"},
            {"SourceRootBone", 0xB4, "NameProperty"},
            {"TargetRootBone", 0xB8, "NameProperty"},
            {"TargetPelvisBone", 0xBC, "NameProperty"},
        }};
    };

    struct IKRetargetRunIKRigChainSettings
    {
        static constexpr std::string_view Name = "IKRetargetRunIKRigChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t bEnableIK = 0x4;
            static constexpr std::uintptr_t ChainPositionAlpha = 0x8;
            static constexpr std::uintptr_t ChainRotationAlpha = 0x10;
            static constexpr std::uintptr_t bOverrideGoalAlpha = 0x18;
            static constexpr std::uintptr_t FinalPositionAlpha = 0x20;
            static constexpr std::uintptr_t FinalRotationAlpha = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"bEnableIK", 0x4, "BoolProperty"},
            {"ChainPositionAlpha", 0x8, "DoubleProperty"},
            {"ChainRotationAlpha", 0x10, "DoubleProperty"},
            {"bOverrideGoalAlpha", 0x18, "BoolProperty"},
            {"FinalPositionAlpha", 0x20, "DoubleProperty"},
            {"FinalRotationAlpha", 0x28, "DoubleProperty"},
        }};
    };

    struct IKRetargetRunIKRigController
    {
        static constexpr std::string_view Name = "IKRetargetRunIKRigController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetRunIKRigOp
    {
        static constexpr std::string_view Name = "IKRetargetRunIKRigOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
            static constexpr std::uintptr_t ChainMapping = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x18, "StructProperty"},
            {"ChainMapping", 0x68, "StructProperty"},
        }};
    };

    struct IKRetargetRunIKRigOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetRunIKRigOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chains = 0x20;
            static constexpr std::uintptr_t IKRigAsset = 0x30;
            static constexpr std::uintptr_t bDrawGoals = 0x38;
            static constexpr std::uintptr_t bDrawGoalBoneLocations = 0x39;
            static constexpr std::uintptr_t GoalDrawSize = 0x40;
            static constexpr std::uintptr_t GoalDrawThickness = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Chains", 0x20, "ArrayProperty"},
            {"IKRigAsset", 0x30, "ObjectProperty"},
            {"bDrawGoals", 0x38, "BoolProperty"},
            {"bDrawGoalBoneLocations", 0x39, "BoolProperty"},
            {"GoalDrawSize", 0x40, "DoubleProperty"},
            {"GoalDrawThickness", 0x48, "DoubleProperty"},
        }};
    };

    struct IKRetargetScaleGoalsChainSettings
    {
        static constexpr std::string_view Name = "IKRetargetScaleGoalsChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t ScaleVertical = 0x8;
            static constexpr std::uintptr_t ScaleHorizontal = 0x10;
            static constexpr std::uintptr_t ScaleAlongChain = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"ScaleVertical", 0x8, "DoubleProperty"},
            {"ScaleHorizontal", 0x10, "DoubleProperty"},
            {"ScaleAlongChain", 0x18, "DoubleProperty"},
        }};
    };

    struct IKRetargetScaleGoalsController
    {
        static constexpr std::string_view Name = "IKRetargetScaleGoalsController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetScaleGoalsOp
    {
        static constexpr std::string_view Name = "IKRetargetScaleGoalsOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetScaleGoalsOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetScaleGoalsOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Chains = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Chains", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "DoubleProperty"},
        }};
    };

    struct IKRetargetScaleSourceController
    {
        static constexpr std::string_view Name = "IKRetargetScaleSourceController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetScaleSourceOp
    {
        static constexpr std::string_view Name = "IKRetargetScaleSourceOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetScaleSourceOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetScaleSourceOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceScaleFactor = 0x20;
            static constexpr std::uintptr_t ScalePivot = 0x28;
            static constexpr std::uintptr_t ScalePivotBone = 0x2C;
            static constexpr std::uintptr_t bProjectScalePivotToFloor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceScaleFactor", 0x20, "DoubleProperty"},
            {"ScalePivot", 0x28, "EnumProperty"},
            {"ScalePivotBone", 0x2C, "StructProperty"},
            {"bProjectScalePivotToFloor", 0x38, "BoolProperty"},
        }};
    };

    struct IKRetargetSpeedPlantingController
    {
        static constexpr std::string_view Name = "IKRetargetSpeedPlantingController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetSpeedPlantingOp
    {
        static constexpr std::string_view Name = "IKRetargetSpeedPlantingOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetSpeedPlantingOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetSpeedPlantingOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainsToSpeedPlant = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t SpeedThreshold = 0x38;
            static constexpr std::uintptr_t BlendMethod = 0x40;
            static constexpr std::uintptr_t MaxBlendSpeed = 0x48;
            static constexpr std::uintptr_t TimeToMaxSpeed = 0x50;
            static constexpr std::uintptr_t ArrivalSpeedGain = 0x58;
            static constexpr std::uintptr_t SpringStrength = 0x60;
            static constexpr std::uintptr_t Stiffness = 0x68;
            static constexpr std::uintptr_t DebugDrawSize = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ChainsToSpeedPlant", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "FloatProperty"},
            {"SpeedThreshold", 0x38, "DoubleProperty"},
            {"BlendMethod", 0x40, "EnumProperty"},
            {"MaxBlendSpeed", 0x48, "DoubleProperty"},
            {"TimeToMaxSpeed", 0x50, "DoubleProperty"},
            {"ArrivalSpeedGain", 0x58, "DoubleProperty"},
            {"SpringStrength", 0x60, "DoubleProperty"},
            {"Stiffness", 0x68, "DoubleProperty"},
            {"DebugDrawSize", 0x70, "DoubleProperty"},
        }};
    };

    struct IKRetargetStretchChainController
    {
        static constexpr std::string_view Name = "IKRetargetStretchChainController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetStretchChainOp
    {
        static constexpr std::string_view Name = "IKRetargetStretchChainOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
            static constexpr std::uintptr_t ChainMapping = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x18, "StructProperty"},
            {"ChainMapping", 0x50, "StructProperty"},
        }};
    };

    struct IKRetargetStretchChainOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetStretchChainOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IKRigAsset = 0x20;
            static constexpr std::uintptr_t ChainsToStretch = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IKRigAsset", 0x20, "ObjectProperty"},
            {"ChainsToStretch", 0x28, "ArrayProperty"},
        }};
    };

    struct IKRetargetStrideWarpingController
    {
        static constexpr std::string_view Name = "IKRetargetStrideWarpingController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetStrideWarpingOp
    {
        static constexpr std::string_view Name = "IKRetargetStrideWarpingOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetStrideWarpingOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetStrideWarpingOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainSettings = 0x20;
            static constexpr std::uintptr_t Alpha = 0x30;
            static constexpr std::uintptr_t DirectionSource = 0x34;
            static constexpr std::uintptr_t ForwardDirection = 0x38;
            static constexpr std::uintptr_t DirectionChain = 0x3C;
            static constexpr std::uintptr_t WarpForwards = 0x40;
            static constexpr std::uintptr_t SidewaysOffset = 0x48;
            static constexpr std::uintptr_t WarpSplay = 0x50;
            static constexpr std::uintptr_t DebugDrawSize = 0x58;
            static constexpr std::uintptr_t DebugDrawThickness = 0x60;
            static constexpr std::uintptr_t bEnableDebugDraw = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ChainSettings", 0x20, "ArrayProperty"},
            {"Alpha", 0x30, "FloatProperty"},
            {"DirectionSource", 0x34, "EnumProperty"},
            {"ForwardDirection", 0x38, "EnumProperty"},
            {"DirectionChain", 0x3C, "NameProperty"},
            {"WarpForwards", 0x40, "DoubleProperty"},
            {"SidewaysOffset", 0x48, "DoubleProperty"},
            {"WarpSplay", 0x50, "DoubleProperty"},
            {"DebugDrawSize", 0x58, "DoubleProperty"},
            {"DebugDrawThickness", 0x60, "DoubleProperty"},
            {"bEnableDebugDraw", 0x68, "BoolProperty"},
        }};
    };

    struct IKRetargetWeaponGoalOp
    {
        static constexpr std::string_view Name = "IKRetargetWeaponGoalOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct IKRetargetWeaponGoalsOpController
    {
        static constexpr std::string_view Name = "IKRetargetWeaponGoalsOpController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRetargetOpControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettings",
            "SetSettings",
        }};
    };

    struct IKRetargetWeaponGoalsOpSettings
    {
        static constexpr std::string_view Name = "IKRetargetWeaponGoalsOpSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRetargetOpSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftWeaponBone = 0x20;
            static constexpr std::uintptr_t RightWeaponBone = 0x2C;
            static constexpr std::uintptr_t LeftHandAttachBone = 0x38;
            static constexpr std::uintptr_t RightHandAttachBone = 0x44;
            static constexpr std::uintptr_t LeftHandBone = 0x50;
            static constexpr std::uintptr_t RightHandBone = 0x5C;
            static constexpr std::uintptr_t IKHandLeftBone = 0x68;
            static constexpr std::uintptr_t IKHandRightBone = 0x74;
            static constexpr std::uintptr_t IKHandGun = 0x80;
            static constexpr std::uintptr_t Alpha = 0x8C;
            static constexpr std::uintptr_t bEnableWeaponScale = 0x90;
            static constexpr std::uintptr_t WeaponScale = 0x98;
            static constexpr std::uintptr_t bSnapIKHandGun = 0xA0;
            static constexpr std::uintptr_t LeftRightHandIKAlpha = 0xA8;
            static constexpr std::uintptr_t LeftHandIKAlpha = 0xB0;
            static constexpr std::uintptr_t RightHandIKAlpha = 0xB8;
            static constexpr std::uintptr_t bSuppressMissingBoneWarnings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"LeftWeaponBone", 0x20, "StructProperty"},
            {"RightWeaponBone", 0x2C, "StructProperty"},
            {"LeftHandAttachBone", 0x38, "StructProperty"},
            {"RightHandAttachBone", 0x44, "StructProperty"},
            {"LeftHandBone", 0x50, "StructProperty"},
            {"RightHandBone", 0x5C, "StructProperty"},
            {"IKHandLeftBone", 0x68, "StructProperty"},
            {"IKHandRightBone", 0x74, "StructProperty"},
            {"IKHandGun", 0x80, "StructProperty"},
            {"Alpha", 0x8C, "FloatProperty"},
            {"bEnableWeaponScale", 0x90, "BoolProperty"},
            {"WeaponScale", 0x98, "DoubleProperty"},
            {"bSnapIKHandGun", 0xA0, "BoolProperty"},
            {"LeftRightHandIKAlpha", 0xA8, "DoubleProperty"},
            {"LeftHandIKAlpha", 0xB0, "DoubleProperty"},
            {"RightHandIKAlpha", 0xB8, "DoubleProperty"},
            {"bSuppressMissingBoneWarnings", 0xC0, "BoolProperty"},
        }};
    };

    struct IKRetargeter
    {
        static constexpr std::string_view Name = "IKRetargeter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x28;
            static constexpr std::uintptr_t SourceIKRigAsset = 0x30;
            static constexpr std::uintptr_t TargetIKRigAsset = 0x38;
            static constexpr std::uintptr_t RetargetOps = 0x40;
            static constexpr std::uintptr_t Profiles = 0x50;
            static constexpr std::uintptr_t CurrentProfile = 0x60;
            static constexpr std::uintptr_t OverrideSets = 0x68;
            static constexpr std::uintptr_t Variables = 0x90;
            static constexpr std::uintptr_t SourceRetargetPoses = 0xA0;
            static constexpr std::uintptr_t TargetRetargetPoses = 0xB0;
            static constexpr std::uintptr_t CurrentSourceRetargetPose = 0xC0;
            static constexpr std::uintptr_t CurrentTargetRetargetPose = 0xC4;
            static constexpr std::uintptr_t bRetargetRoot = 0xC8;
            static constexpr std::uintptr_t bRetargetFK = 0xC9;
            static constexpr std::uintptr_t bRetargetIK = 0xCA;
            static constexpr std::uintptr_t TargetActorOffset = 0xCC;
            static constexpr std::uintptr_t TargetActorScale = 0xD0;
            static constexpr std::uintptr_t RetargetPoses = 0xD8;
            static constexpr std::uintptr_t CurrentRetargetPose = 0xE8;
            static constexpr std::uintptr_t ChainMap = 0xF0;
            static constexpr std::uintptr_t ChainSettings = 0x110;
            static constexpr std::uintptr_t RootSettings = 0x120;
            static constexpr std::uintptr_t GlobalSettings = 0x128;
            static constexpr std::uintptr_t OpStack = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Version", 0x28, "IntProperty"},
            {"SourceIKRigAsset", 0x30, "ObjectProperty"},
            {"TargetIKRigAsset", 0x38, "ObjectProperty"},
            {"RetargetOps", 0x40, "ArrayProperty"},
            {"Profiles", 0x50, "MapProperty"},
            {"CurrentProfile", 0x60, "NameProperty"},
            {"OverrideSets", 0x68, "MapProperty"},
            {"Variables", 0x90, "StructProperty"},
            {"SourceRetargetPoses", 0xA0, "MapProperty"},
            {"TargetRetargetPoses", 0xB0, "MapProperty"},
            {"CurrentSourceRetargetPose", 0xC0, "NameProperty"},
            {"CurrentTargetRetargetPose", 0xC4, "NameProperty"},
            {"bRetargetRoot", 0xC8, "BoolProperty"},
            {"bRetargetFK", 0xC9, "BoolProperty"},
            {"bRetargetIK", 0xCA, "BoolProperty"},
            {"TargetActorOffset", 0xCC, "FloatProperty"},
            {"TargetActorScale", 0xD0, "FloatProperty"},
            {"RetargetPoses", 0xD8, "MapProperty"},
            {"CurrentRetargetPose", 0xE8, "NameProperty"},
            {"ChainMap", 0xF0, "StructProperty"},
            {"ChainSettings", 0x110, "ArrayProperty"},
            {"RootSettings", 0x120, "ObjectProperty"},
            {"GlobalSettings", 0x128, "ObjectProperty"},
            {"OpStack", 0x130, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "GetChainSettingsFromRetargetAsset",
            "GetChainSettingsFromRetargetProfile",
            "GetChainUsingGoalFromRetargetAsset",
            "GetGlobalSettingsFromRetargetAsset",
            "GetGlobalSettingsFromRetargetProfile",
            "GetRootSettingsFromRetargetAsset",
            "GetRootSettingsFromRetargetProfile",
            "HasSourceIKRig",
            "HasTargetIKRig",
            "SetChainFKSettingsInRetargetProfile",
            "SetChainIKSettingsInRetargetProfile",
            "SetChainSettingsInRetargetProfile",
            "SetChainSpeedPlantSettingsInRetargetProfile",
            "SetGlobalSettingsInRetargetProfile",
            "SetRootSettingsInRetargetProfile",
        }};
    };

    struct IKRigBodyMoverController
    {
        static constexpr std::string_view Name = "IKRigBodyMoverController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolverControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetGoalSettings",
            "GetSolverSettings",
            "SetGoalSettings",
            "SetSolverSettings",
        }};
    };

    struct IKRigBodyMoverGoalSettings
    {
        static constexpr std::string_view Name = "IKRigBodyMoverGoalSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigGoalSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x10;
            static constexpr std::uintptr_t InfluenceMultiplier = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneName", 0x10, "NameProperty"},
            {"InfluenceMultiplier", 0x14, "FloatProperty"},
        }};
    };

    struct IKRigBodyMoverSettings
    {
        static constexpr std::string_view Name = "IKRigBodyMoverSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x8;
            static constexpr std::uintptr_t PositionAlpha = 0xC;
            static constexpr std::uintptr_t PositionPositiveX = 0x10;
            static constexpr std::uintptr_t PositionNegativeX = 0x14;
            static constexpr std::uintptr_t PositionPositiveY = 0x18;
            static constexpr std::uintptr_t PositionNegativeY = 0x1C;
            static constexpr std::uintptr_t PositionPositiveZ = 0x20;
            static constexpr std::uintptr_t PositionNegativeZ = 0x24;
            static constexpr std::uintptr_t RotationAlpha = 0x28;
            static constexpr std::uintptr_t RotateXAlpha = 0x2C;
            static constexpr std::uintptr_t RotateYAlpha = 0x30;
            static constexpr std::uintptr_t RotateZAlpha = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"StartBone", 0x8, "NameProperty"},
            {"PositionAlpha", 0xC, "FloatProperty"},
            {"PositionPositiveX", 0x10, "FloatProperty"},
            {"PositionNegativeX", 0x14, "FloatProperty"},
            {"PositionPositiveY", 0x18, "FloatProperty"},
            {"PositionNegativeY", 0x1C, "FloatProperty"},
            {"PositionPositiveZ", 0x20, "FloatProperty"},
            {"PositionNegativeZ", 0x24, "FloatProperty"},
            {"RotationAlpha", 0x28, "FloatProperty"},
            {"RotateXAlpha", 0x2C, "FloatProperty"},
            {"RotateYAlpha", 0x30, "FloatProperty"},
            {"RotateZAlpha", 0x34, "FloatProperty"},
        }};
    };

    struct IKRigBodyMoverSolver
    {
        static constexpr std::string_view Name = "IKRigBodyMoverSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
            static constexpr std::uintptr_t AllGoalSettings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x10, "StructProperty"},
            {"AllGoalSettings", 0x48, "ArrayProperty"},
        }};
    };

    struct IKRigBoneSettingsBase
    {
        static constexpr std::string_view Name = "IKRigBoneSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bone", 0x8, "NameProperty"},
        }};
    };

    struct IKRigComponent
    {
        static constexpr std::string_view Name = "IKRigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ClearAllGoals",
            "SetIKRigGoal",
            "SetIKRigGoalPositionAndRotation",
            "SetIKRigGoalTransform",
        }};
    };

    struct IKRigDefinition
    {
        static constexpr std::string_view Name = "IKRigDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSkeletalMesh = 0x30;
            static constexpr std::uintptr_t skeleton = 0x50;
            static constexpr std::uintptr_t Goals = 0xC8;
            static constexpr std::uintptr_t SolverStack = 0xD8;
            static constexpr std::uintptr_t RetargetDefinition = 0xE8;
            static constexpr std::uintptr_t Solvers = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PreviewSkeletalMesh", 0x30, "SoftObjectProperty"},
            {"skeleton", 0x50, "StructProperty"},
            {"Goals", 0xC8, "ArrayProperty"},
            {"SolverStack", 0xD8, "ArrayProperty"},
            {"RetargetDefinition", 0xE8, "StructProperty"},
            {"Solvers", 0x100, "ArrayProperty"},
        }};
    };

    struct IKRigEffectorGoal
    {
        static constexpr std::string_view Name = "IKRigEffectorGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x28;
            static constexpr std::uintptr_t BoneName = 0x2C;
            static constexpr std::uintptr_t PositionAlpha = 0x30;
            static constexpr std::uintptr_t RotationAlpha = 0x34;
            static constexpr std::uintptr_t CurrentTransform = 0x40;
            static constexpr std::uintptr_t InitialTransform = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GoalName", 0x28, "NameProperty"},
            {"BoneName", 0x2C, "NameProperty"},
            {"PositionAlpha", 0x30, "FloatProperty"},
            {"RotationAlpha", 0x34, "FloatProperty"},
            {"CurrentTransform", 0x40, "StructProperty"},
            {"InitialTransform", 0xA0, "StructProperty"},
        }};
    };

    struct IKRigFBIKBoneSettings
    {
        static constexpr std::string_view Name = "IKRigFBIKBoneSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigBoneSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationStiffness = 0x10;
            static constexpr std::uintptr_t PositionStiffness = 0x14;
            static constexpr std::uintptr_t X = 0x18;
            static constexpr std::uintptr_t MinX = 0x1C;
            static constexpr std::uintptr_t MaxX = 0x20;
            static constexpr std::uintptr_t Y = 0x24;
            static constexpr std::uintptr_t MinY = 0x28;
            static constexpr std::uintptr_t MaxY = 0x2C;
            static constexpr std::uintptr_t Z = 0x30;
            static constexpr std::uintptr_t MinZ = 0x34;
            static constexpr std::uintptr_t MaxZ = 0x38;
            static constexpr std::uintptr_t bUsePreferredAngles = 0x3C;
            static constexpr std::uintptr_t PreferredAngles = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"RotationStiffness", 0x10, "FloatProperty"},
            {"PositionStiffness", 0x14, "FloatProperty"},
            {"X", 0x18, "EnumProperty"},
            {"MinX", 0x1C, "FloatProperty"},
            {"MaxX", 0x20, "FloatProperty"},
            {"Y", 0x24, "EnumProperty"},
            {"MinY", 0x28, "FloatProperty"},
            {"MaxY", 0x2C, "FloatProperty"},
            {"Z", 0x30, "EnumProperty"},
            {"MinZ", 0x34, "FloatProperty"},
            {"MaxZ", 0x38, "FloatProperty"},
            {"bUsePreferredAngles", 0x3C, "BoolProperty"},
            {"PreferredAngles", 0x40, "StructProperty"},
        }};
    };

    struct IKRigFBIKController
    {
        static constexpr std::string_view Name = "IKRigFBIKController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolverControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetBoneSettings",
            "GetGoalSettings",
            "GetSolverSettings",
            "SetBoneSettings",
            "SetGoalSettings",
            "SetSolverSettings",
        }};
    };

    struct IKRigFBIKGoalSettings
    {
        static constexpr std::string_view Name = "IKRigFBIKGoalSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigGoalSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x10;
            static constexpr std::uintptr_t ChainDepth = 0x14;
            static constexpr std::uintptr_t StrengthAlpha = 0x18;
            static constexpr std::uintptr_t PullChainAlpha = 0x1C;
            static constexpr std::uintptr_t PinRotation = 0x20;
            static constexpr std::uintptr_t IndexInSolver = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoneName", 0x10, "NameProperty"},
            {"ChainDepth", 0x14, "IntProperty"},
            {"StrengthAlpha", 0x18, "FloatProperty"},
            {"PullChainAlpha", 0x1C, "FloatProperty"},
            {"PinRotation", 0x20, "FloatProperty"},
            {"IndexInSolver", 0x24, "IntProperty"},
        }};
    };

    struct IKRigFBIKSettings
    {
        static constexpr std::string_view Name = "IKRigFBIKSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBone = 0x8;
            static constexpr std::uintptr_t Iterations = 0xC;
            static constexpr std::uintptr_t SubIterations = 0x10;
            static constexpr std::uintptr_t MassMultiplier = 0x14;
            static constexpr std::uintptr_t bAllowStretch = 0x18;
            static constexpr std::uintptr_t RootBehavior = 0x19;
            static constexpr std::uintptr_t PrePullRootSettings = 0x1C;
            static constexpr std::uintptr_t GlobalPullChainAlpha = 0x3C;
            static constexpr std::uintptr_t MaxAngle = 0x40;
            static constexpr std::uintptr_t OverRelaxation = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RootBone", 0x8, "NameProperty"},
            {"Iterations", 0xC, "IntProperty"},
            {"SubIterations", 0x10, "IntProperty"},
            {"MassMultiplier", 0x14, "FloatProperty"},
            {"bAllowStretch", 0x18, "BoolProperty"},
            {"RootBehavior", 0x19, "EnumProperty"},
            {"PrePullRootSettings", 0x1C, "StructProperty"},
            {"GlobalPullChainAlpha", 0x3C, "FloatProperty"},
            {"MaxAngle", 0x40, "FloatProperty"},
            {"OverRelaxation", 0x44, "FloatProperty"},
        }};
    };

    struct IKRigFBIKSolver
    {
        static constexpr std::string_view Name = "IKRigFBIKSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolver";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBone = 0x30;
            static constexpr std::uintptr_t Iterations = 0x34;
            static constexpr std::uintptr_t SubIterations = 0x38;
            static constexpr std::uintptr_t MassMultiplier = 0x3C;
            static constexpr std::uintptr_t bAllowStretch = 0x40;
            static constexpr std::uintptr_t RootBehavior = 0x41;
            static constexpr std::uintptr_t PrePullRootSettings = 0x44;
            static constexpr std::uintptr_t PullChainAlpha = 0x64;
            static constexpr std::uintptr_t MaxAngle = 0x68;
            static constexpr std::uintptr_t OverRelaxation = 0x6C;
            static constexpr std::uintptr_t Effectors = 0x70;
            static constexpr std::uintptr_t BoneSettings = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RootBone", 0x30, "NameProperty"},
            {"Iterations", 0x34, "IntProperty"},
            {"SubIterations", 0x38, "IntProperty"},
            {"MassMultiplier", 0x3C, "FloatProperty"},
            {"bAllowStretch", 0x40, "BoolProperty"},
            {"RootBehavior", 0x41, "EnumProperty"},
            {"PrePullRootSettings", 0x44, "StructProperty"},
            {"PullChainAlpha", 0x64, "FloatProperty"},
            {"MaxAngle", 0x68, "FloatProperty"},
            {"OverRelaxation", 0x6C, "FloatProperty"},
            {"Effectors", 0x70, "ArrayProperty"},
            {"BoneSettings", 0x80, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetBoneSettings",
            "GetEffectors",
        }};
    };

    struct IKRigFullBodyIKSolver
    {
        static constexpr std::string_view Name = "IKRigFullBodyIKSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
            static constexpr std::uintptr_t AllGoalSettings = 0x58;
            static constexpr std::uintptr_t AllBoneSettings = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Settings", 0x10, "StructProperty"},
            {"AllGoalSettings", 0x58, "ArrayProperty"},
            {"AllBoneSettings", 0x68, "ArrayProperty"},
        }};
    };

    struct IKRigGoal
    {
        static constexpr std::string_view Name = "IKRigGoal";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BoneName = 0x4;
            static constexpr std::uintptr_t TransformSource = 0x8;
            static constexpr std::uintptr_t SourceBone = 0xC;
            static constexpr std::uintptr_t Position = 0x18;
            static constexpr std::uintptr_t Rotation = 0x30;
            static constexpr std::uintptr_t PositionAlpha = 0x48;
            static constexpr std::uintptr_t RotationAlpha = 0x4C;
            static constexpr std::uintptr_t PositionSpace = 0x50;
            static constexpr std::uintptr_t RotationSpace = 0x51;
            static constexpr std::uintptr_t FinalBlendedPosition = 0x58;
            static constexpr std::uintptr_t FinalBlendedRotation = 0x70;
            static constexpr std::uintptr_t bEnabled = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BoneName", 0x4, "NameProperty"},
            {"TransformSource", 0x8, "EnumProperty"},
            {"SourceBone", 0xC, "StructProperty"},
            {"Position", 0x18, "StructProperty"},
            {"Rotation", 0x30, "StructProperty"},
            {"PositionAlpha", 0x48, "FloatProperty"},
            {"RotationAlpha", 0x4C, "FloatProperty"},
            {"PositionSpace", 0x50, "EnumProperty"},
            {"RotationSpace", 0x51, "EnumProperty"},
            {"FinalBlendedPosition", 0x58, "StructProperty"},
            {"FinalBlendedRotation", 0x70, "StructProperty"},
            {"bEnabled", 0x90, "BoolProperty"},
        }};
    };

    struct IKRigGoalContainer
    {
        static constexpr std::string_view Name = "IKRigGoalContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRigGoalInput
    {
        static constexpr std::string_view Name = "IKRigGoalInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t PositionAlpha = 0x70;
            static constexpr std::uintptr_t RotationAlpha = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GoalName", 0x0, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"PositionAlpha", 0x70, "DoubleProperty"},
            {"RotationAlpha", 0x78, "DoubleProperty"},
        }};
    };

    struct IKRigGoalSettingsBase
    {
        static constexpr std::string_view Name = "IKRigGoalSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Goal = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Goal", 0x8, "NameProperty"},
        }};
    };

    struct IKRigInputSkeleton
    {
        static constexpr std::string_view Name = "IKRigInputSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRigLimbSolver
    {
        static constexpr std::string_view Name = "IKRigLimbSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct IKRigLimbSolverController
    {
        static constexpr std::string_view Name = "IKRigLimbSolverController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolverControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSolverSettings",
            "SetSolverSettings",
        }};
    };

    struct IKRigLimbSolverSettings
    {
        static constexpr std::string_view Name = "IKRigLimbSolverSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LimbSolverSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x30;
            static constexpr std::uintptr_t GoalName = 0x34;
            static constexpr std::uintptr_t EndBone = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartBone", 0x30, "NameProperty"},
            {"GoalName", 0x34, "NameProperty"},
            {"EndBone", 0x38, "NameProperty"},
        }};
    };

    struct IKRigPoleSolver
    {
        static constexpr std::string_view Name = "IKRigPoleSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct IKRigPoleSolverController
    {
        static constexpr std::string_view Name = "IKRigPoleSolverController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolverControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSolverSettings",
            "SetSolverSettings",
        }};
    };

    struct IKRigPoleSolverSettings
    {
        static constexpr std::string_view Name = "IKRigPoleSolverSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x8;
            static constexpr std::uintptr_t EndBone = 0xC;
            static constexpr std::uintptr_t AimAtGoal = 0x10;
            static constexpr std::uintptr_t Alpha = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StartBone", 0x8, "NameProperty"},
            {"EndBone", 0xC, "NameProperty"},
            {"AimAtGoal", 0x10, "NameProperty"},
            {"Alpha", 0x14, "FloatProperty"},
        }};
    };

    struct IKRigProcessor
    {
        static constexpr std::string_view Name = "IKRigProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRigSetTransform
    {
        static constexpr std::string_view Name = "IKRigSetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct IKRigSetTransformController
    {
        static constexpr std::string_view Name = "IKRigSetTransformController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolverControllerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSolverSettings",
            "SetSolverSettings",
        }};
    };

    struct IKRigSetTransformSettings
    {
        static constexpr std::string_view Name = "IKRigSetTransformSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Goal = 0x8;
            static constexpr std::uintptr_t BoneToAffect = 0xC;
            static constexpr std::uintptr_t PositionAlpha = 0x10;
            static constexpr std::uintptr_t RotationAlpha = 0x14;
            static constexpr std::uintptr_t Alpha = 0x18;
            static constexpr std::uintptr_t bPropagateToChildren = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Goal", 0x8, "NameProperty"},
            {"BoneToAffect", 0xC, "NameProperty"},
            {"PositionAlpha", 0x10, "FloatProperty"},
            {"RotationAlpha", 0x14, "FloatProperty"},
            {"Alpha", 0x18, "FloatProperty"},
            {"bPropagateToChildren", 0x1C, "BoolProperty"},
        }};
    };

    struct IKRigSettingsBase
    {
        static constexpr std::string_view Name = "IKRigSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRigSkeleton
    {
        static constexpr std::string_view Name = "IKRigSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x0;
            static constexpr std::uintptr_t BoneNames = 0x8;
            static constexpr std::uintptr_t ParentIndices = 0x18;
            static constexpr std::uintptr_t ExcludedBones = 0x28;
            static constexpr std::uintptr_t CurrentPoseGlobal = 0x38;
            static constexpr std::uintptr_t CurrentPoseLocal = 0x48;
            static constexpr std::uintptr_t RefPoseGlobal = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SkeletalMesh", 0x0, "ObjectProperty"},
            {"BoneNames", 0x8, "ArrayProperty"},
            {"ParentIndices", 0x18, "ArrayProperty"},
            {"ExcludedBones", 0x28, "ArrayProperty"},
            {"CurrentPoseGlobal", 0x38, "ArrayProperty"},
            {"CurrentPoseLocal", 0x48, "ArrayProperty"},
            {"RefPoseGlobal", 0x58, "ArrayProperty"},
        }};
    };

    struct IKRigSolver
    {
        static constexpr std::string_view Name = "IKRigSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct IKRigSolverBase
    {
        static constexpr std::string_view Name = "IKRigSolverBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x8, "BoolProperty"},
        }};
    };

    struct IKRigSolverControllerBase
    {
        static constexpr std::string_view Name = "IKRigSolverControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetEnabled",
            "SetEnabled",
        }};
    };

    struct IKRigSolverSettingsBase
    {
        static constexpr std::string_view Name = "IKRigSolverSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSettingsBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRigStretchLimbBoneSettings
    {
        static constexpr std::string_view Name = "IKRigStretchLimbBoneSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigBoneSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SquashDirection = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SquashDirection", 0x10, "StructProperty"},
        }};
    };

    struct IKRigStretchLimbSettings
    {
        static constexpr std::string_view Name = "IKRigStretchLimbSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x8;
            static constexpr std::uintptr_t EndBone = 0xC;
            static constexpr std::uintptr_t Goal = 0x10;
            static constexpr std::uintptr_t bEnableStretching = 0x14;
            static constexpr std::uintptr_t MaximumStretchDistance = 0x18;
            static constexpr std::uintptr_t StretchStartPercent = 0x20;
            static constexpr std::uintptr_t RotationMode = 0x28;
            static constexpr std::uintptr_t RotateEndBoneWithGoal = 0x30;
            static constexpr std::uintptr_t Iterations = 0x38;
            static constexpr std::uintptr_t SquashMode = 0x3C;
            static constexpr std::uintptr_t SquashStrength = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StartBone", 0x8, "NameProperty"},
            {"EndBone", 0xC, "NameProperty"},
            {"Goal", 0x10, "NameProperty"},
            {"bEnableStretching", 0x14, "BoolProperty"},
            {"MaximumStretchDistance", 0x18, "DoubleProperty"},
            {"StretchStartPercent", 0x20, "DoubleProperty"},
            {"RotationMode", 0x28, "EnumProperty"},
            {"RotateEndBoneWithGoal", 0x30, "DoubleProperty"},
            {"Iterations", 0x38, "IntProperty"},
            {"SquashMode", 0x3C, "EnumProperty"},
            {"SquashStrength", 0x40, "DoubleProperty"},
        }};
    };

    struct IKRigStretchLimbSolver
    {
        static constexpr std::string_view Name = "IKRigStretchLimbSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x10;
            static constexpr std::uintptr_t AllBoneSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x10, "StructProperty"},
            {"AllBoneSettings", 0x58, "ArrayProperty"},
        }};
    };

    struct IKRigWorkData
    {
        static constexpr std::string_view Name = "IKRigWorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IKRig_BodyMover
    {
        static constexpr std::string_view Name = "IKRig_BodyMover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolver";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBone = 0x30;
            static constexpr std::uintptr_t PositionAlpha = 0x34;
            static constexpr std::uintptr_t PositionPositiveX = 0x38;
            static constexpr std::uintptr_t PositionNegativeX = 0x3C;
            static constexpr std::uintptr_t PositionPositiveY = 0x40;
            static constexpr std::uintptr_t PositionNegativeY = 0x44;
            static constexpr std::uintptr_t PositionPositiveZ = 0x48;
            static constexpr std::uintptr_t PositionNegativeZ = 0x4C;
            static constexpr std::uintptr_t RotationAlpha = 0x50;
            static constexpr std::uintptr_t RotateXAlpha = 0x54;
            static constexpr std::uintptr_t RotateYAlpha = 0x58;
            static constexpr std::uintptr_t RotateZAlpha = 0x5C;
            static constexpr std::uintptr_t Effectors = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"RootBone", 0x30, "NameProperty"},
            {"PositionAlpha", 0x34, "FloatProperty"},
            {"PositionPositiveX", 0x38, "FloatProperty"},
            {"PositionNegativeX", 0x3C, "FloatProperty"},
            {"PositionPositiveY", 0x40, "FloatProperty"},
            {"PositionNegativeY", 0x44, "FloatProperty"},
            {"PositionPositiveZ", 0x48, "FloatProperty"},
            {"PositionNegativeZ", 0x4C, "FloatProperty"},
            {"RotationAlpha", 0x50, "FloatProperty"},
            {"RotateXAlpha", 0x54, "FloatProperty"},
            {"RotateYAlpha", 0x58, "FloatProperty"},
            {"RotateZAlpha", 0x5C, "FloatProperty"},
            {"Effectors", 0x60, "ArrayProperty"},
        }};
    };

    struct IKRig_BodyMoverEffector
    {
        static constexpr std::string_view Name = "IKRig_BodyMoverEffector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x28;
            static constexpr std::uintptr_t BoneName = 0x2C;
            static constexpr std::uintptr_t InfluenceMultiplier = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GoalName", 0x28, "NameProperty"},
            {"BoneName", 0x2C, "NameProperty"},
            {"InfluenceMultiplier", 0x30, "FloatProperty"},
        }};
    };

    struct IKRig_FBIKBoneSettings
    {
        static constexpr std::string_view Name = "IKRig_FBIKBoneSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x28;
            static constexpr std::uintptr_t RotationStiffness = 0x2C;
            static constexpr std::uintptr_t PositionStiffness = 0x30;
            static constexpr std::uintptr_t X = 0x34;
            static constexpr std::uintptr_t MinX = 0x38;
            static constexpr std::uintptr_t MaxX = 0x3C;
            static constexpr std::uintptr_t Y = 0x40;
            static constexpr std::uintptr_t MinY = 0x44;
            static constexpr std::uintptr_t MaxY = 0x48;
            static constexpr std::uintptr_t Z = 0x4C;
            static constexpr std::uintptr_t MinZ = 0x50;
            static constexpr std::uintptr_t MaxZ = 0x54;
            static constexpr std::uintptr_t bUsePreferredAngles = 0x58;
            static constexpr std::uintptr_t PreferredAngles = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bone", 0x28, "NameProperty"},
            {"RotationStiffness", 0x2C, "FloatProperty"},
            {"PositionStiffness", 0x30, "FloatProperty"},
            {"X", 0x34, "EnumProperty"},
            {"MinX", 0x38, "FloatProperty"},
            {"MaxX", 0x3C, "FloatProperty"},
            {"Y", 0x40, "EnumProperty"},
            {"MinY", 0x44, "FloatProperty"},
            {"MaxY", 0x48, "FloatProperty"},
            {"Z", 0x4C, "EnumProperty"},
            {"MinZ", 0x50, "FloatProperty"},
            {"MaxZ", 0x54, "FloatProperty"},
            {"bUsePreferredAngles", 0x58, "BoolProperty"},
            {"PreferredAngles", 0x60, "StructProperty"},
        }};
    };

    struct IKRig_FBIKEffector
    {
        static constexpr std::string_view Name = "IKRig_FBIKEffector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x28;
            static constexpr std::uintptr_t BoneName = 0x2C;
            static constexpr std::uintptr_t ChainDepth = 0x30;
            static constexpr std::uintptr_t StrengthAlpha = 0x34;
            static constexpr std::uintptr_t PullChainAlpha = 0x38;
            static constexpr std::uintptr_t PinRotation = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GoalName", 0x28, "NameProperty"},
            {"BoneName", 0x2C, "NameProperty"},
            {"ChainDepth", 0x30, "IntProperty"},
            {"StrengthAlpha", 0x34, "FloatProperty"},
            {"PullChainAlpha", 0x38, "FloatProperty"},
            {"PinRotation", 0x3C, "FloatProperty"},
        }};
    };

    struct IKRig_LimbEffector
    {
        static constexpr std::string_view Name = "IKRig_LimbEffector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x28;
            static constexpr std::uintptr_t BoneName = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GoalName", 0x28, "NameProperty"},
            {"BoneName", 0x2C, "NameProperty"},
        }};
    };

    struct IKRig_LimbSolver
    {
        static constexpr std::string_view Name = "IKRig_LimbSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolver";
        struct Offsets
        {
            static constexpr std::uintptr_t RootName = 0x30;
            static constexpr std::uintptr_t ReachPrecision = 0x34;
            static constexpr std::uintptr_t HingeRotationAxis = 0x38;
            static constexpr std::uintptr_t MaxIterations = 0x3C;
            static constexpr std::uintptr_t bEnableLimit = 0x40;
            static constexpr std::uintptr_t MinRotationAngle = 0x44;
            static constexpr std::uintptr_t bAveragePull = 0x48;
            static constexpr std::uintptr_t PullDistribution = 0x4C;
            static constexpr std::uintptr_t ReachStepAlpha = 0x50;
            static constexpr std::uintptr_t bEnableTwistCorrection = 0x54;
            static constexpr std::uintptr_t EndBoneForwardAxis = 0x55;
            static constexpr std::uintptr_t Effector = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RootName", 0x30, "NameProperty"},
            {"ReachPrecision", 0x34, "FloatProperty"},
            {"HingeRotationAxis", 0x38, "ByteProperty"},
            {"MaxIterations", 0x3C, "IntProperty"},
            {"bEnableLimit", 0x40, "BoolProperty"},
            {"MinRotationAngle", 0x44, "FloatProperty"},
            {"bAveragePull", 0x48, "BoolProperty"},
            {"PullDistribution", 0x4C, "FloatProperty"},
            {"ReachStepAlpha", 0x50, "FloatProperty"},
            {"bEnableTwistCorrection", 0x54, "BoolProperty"},
            {"EndBoneForwardAxis", 0x55, "ByteProperty"},
            {"Effector", 0x58, "ObjectProperty"},
        }};
    };

    struct IKRig_PoleSolver
    {
        static constexpr std::string_view Name = "IKRig_PoleSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolver";
        struct Offsets
        {
            static constexpr std::uintptr_t RootName = 0x30;
            static constexpr std::uintptr_t EndName = 0x34;
            static constexpr std::uintptr_t Effector = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RootName", 0x30, "NameProperty"},
            {"EndName", 0x34, "NameProperty"},
            {"Effector", 0x38, "ObjectProperty"},
        }};
    };

    struct IKRig_PoleSolverEffector
    {
        static constexpr std::string_view Name = "IKRig_PoleSolverEffector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x28;
            static constexpr std::uintptr_t BoneName = 0x2C;
            static constexpr std::uintptr_t Alpha = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GoalName", 0x28, "NameProperty"},
            {"BoneName", 0x2C, "NameProperty"},
            {"Alpha", 0x30, "FloatProperty"},
        }};
    };

    struct IKRig_SetTransform
    {
        static constexpr std::string_view Name = "IKRig_SetTransform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IKRigSolver";
        struct Offsets
        {
            static constexpr std::uintptr_t Goal = 0x30;
            static constexpr std::uintptr_t RootBone = 0x34;
            static constexpr std::uintptr_t Effector = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Goal", 0x30, "NameProperty"},
            {"RootBone", 0x34, "NameProperty"},
            {"Effector", 0x38, "ObjectProperty"},
        }};
    };

    struct IKRig_SetTransformEffector
    {
        static constexpr std::string_view Name = "IKRig_SetTransformEffector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnablePosition = 0x28;
            static constexpr std::uintptr_t bEnableRotation = 0x29;
            static constexpr std::uintptr_t Alpha = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnablePosition", 0x28, "BoolProperty"},
            {"bEnableRotation", 0x29, "BoolProperty"},
            {"Alpha", 0x2C, "FloatProperty"},
        }};
    };

    struct LimbLink
    {
        static constexpr std::string_view Name = "LimbLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LimbSolver
    {
        static constexpr std::string_view Name = "LimbSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LimbSolverSettings
    {
        static constexpr std::string_view Name = "LimbSolverSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "IKRigSolverSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReachPrecision = 0x8;
            static constexpr std::uintptr_t HingeRotationAxis = 0xC;
            static constexpr std::uintptr_t MaxIterations = 0x10;
            static constexpr std::uintptr_t bEnableLimit = 0x14;
            static constexpr std::uintptr_t MinRotationAngle = 0x18;
            static constexpr std::uintptr_t bAveragePull = 0x1C;
            static constexpr std::uintptr_t PullDistribution = 0x20;
            static constexpr std::uintptr_t ReachStepAlpha = 0x24;
            static constexpr std::uintptr_t bEnableTwistCorrection = 0x28;
            static constexpr std::uintptr_t EndBoneForwardAxis = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ReachPrecision", 0x8, "FloatProperty"},
            {"HingeRotationAxis", 0xC, "ByteProperty"},
            {"MaxIterations", 0x10, "IntProperty"},
            {"bEnableLimit", 0x14, "BoolProperty"},
            {"MinRotationAngle", 0x18, "FloatProperty"},
            {"bAveragePull", 0x1C, "BoolProperty"},
            {"PullDistribution", 0x20, "FloatProperty"},
            {"ReachStepAlpha", 0x24, "FloatProperty"},
            {"bEnableTwistCorrection", 0x28, "BoolProperty"},
            {"EndBoneForwardAxis", 0x29, "ByteProperty"},
        }};
    };

    struct OneEuroFilterSettings
    {
        static constexpr std::string_view Name = "OneEuroFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Responsiveness = 0x0;
            static constexpr std::uintptr_t CutoffFrequency = 0x8;
            static constexpr std::uintptr_t VelocityCutoffFrequency = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Responsiveness", 0x0, "DoubleProperty"},
            {"CutoffFrequency", 0x8, "DoubleProperty"},
            {"VelocityCutoffFrequency", 0x10, "DoubleProperty"},
        }};
    };

    struct PinBoneData
    {
        static constexpr std::string_view Name = "PinBoneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToCopyFrom = 0x0;
            static constexpr std::uintptr_t BoneToCopyTo = 0xC;
            static constexpr std::uintptr_t BoneToPin = 0x160;
            static constexpr std::uintptr_t BoneToPinTo = 0x164;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoneToCopyFrom", 0x0, "StructProperty"},
            {"BoneToCopyTo", 0xC, "StructProperty"},
            {"BoneToPin", 0x160, "NameProperty"},
            {"BoneToPinTo", 0x164, "NameProperty"},
        }};
    };

    struct PinBoneOp
    {
        static constexpr std::string_view Name = "PinBoneOp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BonesToPin = 0x30;
            static constexpr std::uintptr_t PinTo = 0x40;
            static constexpr std::uintptr_t bCopyTranslation = 0x41;
            static constexpr std::uintptr_t bCopyRotation = 0x42;
            static constexpr std::uintptr_t bCopyScale = 0x43;
            static constexpr std::uintptr_t TranslationMode = 0x44;
            static constexpr std::uintptr_t RotationMode = 0x45;
            static constexpr std::uintptr_t GlobalOffset = 0x50;
            static constexpr std::uintptr_t LocalOffset = 0xB0;
            static constexpr std::uintptr_t bMaintainOffset = 0x110;
            static constexpr std::uintptr_t PinType = 0x111;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BonesToPin", 0x30, "ArrayProperty"},
            {"PinTo", 0x40, "EnumProperty"},
            {"bCopyTranslation", 0x41, "BoolProperty"},
            {"bCopyRotation", 0x42, "BoolProperty"},
            {"bCopyScale", 0x43, "BoolProperty"},
            {"TranslationMode", 0x44, "EnumProperty"},
            {"RotationMode", 0x45, "EnumProperty"},
            {"GlobalOffset", 0x50, "StructProperty"},
            {"LocalOffset", 0xB0, "StructProperty"},
            {"bMaintainOffset", 0x110, "BoolProperty"},
            {"PinType", 0x111, "EnumProperty"},
        }};
    };

    struct RetargetChainMapping
    {
        static constexpr std::string_view Name = "RetargetChainMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainMap = 0x0;
            static constexpr std::uintptr_t SourceIKRig = 0x10;
            static constexpr std::uintptr_t TargetIKRig = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChainMap", 0x0, "ArrayProperty"},
            {"SourceIKRig", 0x10, "ObjectProperty"},
            {"TargetIKRig", 0x18, "ObjectProperty"},
        }};
    };

    struct RetargetChainPair
    {
        static constexpr std::string_view Name = "RetargetChainPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t SourceChainName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"SourceChainName", 0x4, "NameProperty"},
        }};
    };

    struct RetargetChainSettings
    {
        static constexpr std::string_view Name = "RetargetChainSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceChain = 0x28;
            static constexpr std::uintptr_t TargetChain = 0x2C;
            static constexpr std::uintptr_t Settings = 0x30;
            static constexpr std::uintptr_t CopyPoseUsingFK = 0xE8;
            static constexpr std::uintptr_t RotationMode = 0xE9;
            static constexpr std::uintptr_t RotationAlpha = 0xEC;
            static constexpr std::uintptr_t TranslationMode = 0xF0;
            static constexpr std::uintptr_t TranslationAlpha = 0xF4;
            static constexpr std::uintptr_t DriveIKGoal = 0xF8;
            static constexpr std::uintptr_t BlendToSource = 0xFC;
            static constexpr std::uintptr_t BlendToSourceWeights = 0x100;
            static constexpr std::uintptr_t StaticOffset = 0x118;
            static constexpr std::uintptr_t StaticLocalOffset = 0x130;
            static constexpr std::uintptr_t StaticRotationOffset = 0x148;
            static constexpr std::uintptr_t Extension = 0x160;
            static constexpr std::uintptr_t UseSpeedCurveToPlantIK = 0x164;
            static constexpr std::uintptr_t SpeedCurveName = 0x168;
            static constexpr std::uintptr_t VelocityThreshold = 0x16C;
            static constexpr std::uintptr_t UnplantStiffness = 0x170;
            static constexpr std::uintptr_t UnplantCriticalDamping = 0x174;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"SourceChain", 0x28, "NameProperty"},
            {"TargetChain", 0x2C, "NameProperty"},
            {"Settings", 0x30, "StructProperty"},
            {"CopyPoseUsingFK", 0xE8, "BoolProperty"},
            {"RotationMode", 0xE9, "EnumProperty"},
            {"RotationAlpha", 0xEC, "FloatProperty"},
            {"TranslationMode", 0xF0, "EnumProperty"},
            {"TranslationAlpha", 0xF4, "FloatProperty"},
            {"DriveIKGoal", 0xF8, "BoolProperty"},
            {"BlendToSource", 0xFC, "FloatProperty"},
            {"BlendToSourceWeights", 0x100, "StructProperty"},
            {"StaticOffset", 0x118, "StructProperty"},
            {"StaticLocalOffset", 0x130, "StructProperty"},
            {"StaticRotationOffset", 0x148, "StructProperty"},
            {"Extension", 0x160, "FloatProperty"},
            {"UseSpeedCurveToPlantIK", 0x164, "BoolProperty"},
            {"SpeedCurveName", 0x168, "NameProperty"},
            {"VelocityThreshold", 0x16C, "FloatProperty"},
            {"UnplantStiffness", 0x170, "FloatProperty"},
            {"UnplantCriticalDamping", 0x174, "FloatProperty"},
        }};
    };

    struct RetargetDefinition
    {
        static constexpr std::string_view Name = "RetargetDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBone = 0x0;
            static constexpr std::uintptr_t PelvisBone = 0x4;
            static constexpr std::uintptr_t BoneChains = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RootBone", 0x0, "NameProperty"},
            {"PelvisBone", 0x4, "NameProperty"},
            {"BoneChains", 0x8, "ArrayProperty"},
        }};
    };

    struct RetargetFKChainSettings
    {
        static constexpr std::string_view Name = "RetargetFKChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t EnableFK = 0x4;
            static constexpr std::uintptr_t RotationMode = 0x5;
            static constexpr std::uintptr_t RotationAlpha = 0x8;
            static constexpr std::uintptr_t TranslationMode = 0x10;
            static constexpr std::uintptr_t TranslationAlpha = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"EnableFK", 0x4, "BoolProperty"},
            {"RotationMode", 0x5, "EnumProperty"},
            {"RotationAlpha", 0x8, "DoubleProperty"},
            {"TranslationMode", 0x10, "EnumProperty"},
            {"TranslationAlpha", 0x18, "DoubleProperty"},
        }};
    };

    struct RetargetGlobalSettings
    {
        static constexpr std::string_view Name = "RetargetGlobalSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRoot = 0x0;
            static constexpr std::uintptr_t bEnableFK = 0x1;
            static constexpr std::uintptr_t bEnableIK = 0x2;
            static constexpr std::uintptr_t bEnablePost = 0x3;
            static constexpr std::uintptr_t bCopyBasePose = 0x4;
            static constexpr std::uintptr_t CopyBasePoseRoot = 0x8;
            static constexpr std::uintptr_t SourceScaleFactor = 0xC;
            static constexpr std::uintptr_t bWarping = 0x10;
            static constexpr std::uintptr_t DirectionSource = 0x14;
            static constexpr std::uintptr_t ForwardDirection = 0x18;
            static constexpr std::uintptr_t DirectionChain = 0x1C;
            static constexpr std::uintptr_t WarpForwards = 0x20;
            static constexpr std::uintptr_t SidewaysOffset = 0x24;
            static constexpr std::uintptr_t WarpSplay = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bEnableRoot", 0x0, "BoolProperty"},
            {"bEnableFK", 0x1, "BoolProperty"},
            {"bEnableIK", 0x2, "BoolProperty"},
            {"bEnablePost", 0x3, "BoolProperty"},
            {"bCopyBasePose", 0x4, "BoolProperty"},
            {"CopyBasePoseRoot", 0x8, "NameProperty"},
            {"SourceScaleFactor", 0xC, "FloatProperty"},
            {"bWarping", 0x10, "BoolProperty"},
            {"DirectionSource", 0x14, "EnumProperty"},
            {"ForwardDirection", 0x18, "EnumProperty"},
            {"DirectionChain", 0x1C, "NameProperty"},
            {"WarpForwards", 0x20, "FloatProperty"},
            {"SidewaysOffset", 0x24, "FloatProperty"},
            {"WarpSplay", 0x28, "FloatProperty"},
        }};
    };

    struct RetargetIKChainSettings
    {
        static constexpr std::string_view Name = "RetargetIKChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t EnableIK = 0x4;
            static constexpr std::uintptr_t BlendToSource = 0x8;
            static constexpr std::uintptr_t BlendToSourceTranslation = 0x10;
            static constexpr std::uintptr_t BlendToSourceRotation = 0x18;
            static constexpr std::uintptr_t BlendToSourceWeights = 0x20;
            static constexpr std::uintptr_t ApplyPelvisOffsetToSourceGoals = 0x38;
            static constexpr std::uintptr_t StaticOffset = 0x40;
            static constexpr std::uintptr_t StaticLocalOffset = 0x58;
            static constexpr std::uintptr_t StaticRotationOffset = 0x70;
            static constexpr std::uintptr_t ScaleVertical = 0x88;
            static constexpr std::uintptr_t Extension = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"EnableIK", 0x4, "BoolProperty"},
            {"BlendToSource", 0x8, "DoubleProperty"},
            {"BlendToSourceTranslation", 0x10, "DoubleProperty"},
            {"BlendToSourceRotation", 0x18, "DoubleProperty"},
            {"BlendToSourceWeights", 0x20, "StructProperty"},
            {"ApplyPelvisOffsetToSourceGoals", 0x38, "BoolProperty"},
            {"StaticOffset", 0x40, "StructProperty"},
            {"StaticLocalOffset", 0x58, "StructProperty"},
            {"StaticRotationOffset", 0x70, "StructProperty"},
            {"ScaleVertical", 0x88, "DoubleProperty"},
            {"Extension", 0x90, "DoubleProperty"},
        }};
    };

    struct RetargetOpBase
    {
        static constexpr std::string_view Name = "RetargetOpBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct RetargetOpOverrides
    {
        static constexpr std::string_view Name = "RetargetOpOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OpName = 0x0;
            static constexpr std::uintptr_t PropertyOverrides = 0x8;
            static constexpr std::uintptr_t ScriptStruct = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OpName", 0x0, "NameProperty"},
            {"PropertyOverrides", 0x8, "ArrayProperty"},
            {"ScriptStruct", 0x18, "ObjectProperty"},
        }};
    };

    struct RetargetOpProfile
    {
        static constexpr std::string_view Name = "RetargetOpProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OpToApplySettingsTo = 0x0;
            static constexpr std::uintptr_t SettingsToApply = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OpToApplySettingsTo", 0x0, "NameProperty"},
            {"SettingsToApply", 0x8, "StructProperty"},
        }};
    };

    struct RetargetOpPropertyOverride
    {
        static constexpr std::string_view Name = "RetargetOpPropertyOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyPath = 0x0;
            static constexpr std::uintptr_t PropertyPathHash = 0x10;
            static constexpr std::uintptr_t ValueAsString = 0x18;
            static constexpr std::uintptr_t BoundVariableName = 0x28;
            static constexpr std::uintptr_t BoundCurveName = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PropertyPath", 0x0, "StrProperty"},
            {"PropertyPathHash", 0x10, "UInt32Property"},
            {"ValueAsString", 0x18, "StrProperty"},
            {"BoundVariableName", 0x28, "NameProperty"},
            {"BoundCurveName", 0x2C, "NameProperty"},
        }};
    };

    struct RetargetOpStack
    {
        static constexpr std::string_view Name = "RetargetOpStack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RetargetOps = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RetargetOps", 0x28, "ArrayProperty"},
        }};
    };

    struct RetargetOverrideSet
    {
        static constexpr std::string_view Name = "RetargetOverrideSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ParentName = 0x4;
            static constexpr std::uintptr_t OpOverrides = 0x8;
            static constexpr std::uintptr_t bActiveByDefault = 0x18;
            static constexpr std::uintptr_t DisplayOrder = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ParentName", 0x4, "NameProperty"},
            {"OpOverrides", 0x8, "ArrayProperty"},
            {"bActiveByDefault", 0x18, "BoolProperty"},
            {"DisplayOrder", 0x1C, "IntProperty"},
        }};
    };

    struct RetargetPoleVectorSettings
    {
        static constexpr std::string_view Name = "RetargetPoleVectorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t bEnabled = 0x4;
            static constexpr std::uintptr_t AlignAlpha = 0x8;
            static constexpr std::uintptr_t StaticAngularOffset = 0x10;
            static constexpr std::uintptr_t MaintainOffset = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"bEnabled", 0x4, "BoolProperty"},
            {"AlignAlpha", 0x8, "DoubleProperty"},
            {"StaticAngularOffset", 0x10, "DoubleProperty"},
            {"MaintainOffset", 0x18, "BoolProperty"},
        }};
    };

    struct RetargetProfile
    {
        static constexpr std::string_view Name = "RetargetProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RetargetOpProfiles = 0x0;
            static constexpr std::uintptr_t bApplyTargetRetargetPose = 0x10;
            static constexpr std::uintptr_t TargetRetargetPoseName = 0x14;
            static constexpr std::uintptr_t bApplySourceRetargetPose = 0x18;
            static constexpr std::uintptr_t SourceRetargetPoseName = 0x1C;
            static constexpr std::uintptr_t bForceAllIKOff = 0x20;
            static constexpr std::uintptr_t bApplyChainSettings = 0x21;
            static constexpr std::uintptr_t ChainSettings = 0x28;
            static constexpr std::uintptr_t bApplyRootSettings = 0x38;
            static constexpr std::uintptr_t RootSettings = 0x40;
            static constexpr std::uintptr_t bApplyGlobalSettings = 0xA8;
            static constexpr std::uintptr_t GlobalSettings = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RetargetOpProfiles", 0x0, "ArrayProperty"},
            {"bApplyTargetRetargetPose", 0x10, "BoolProperty"},
            {"TargetRetargetPoseName", 0x14, "NameProperty"},
            {"bApplySourceRetargetPose", 0x18, "BoolProperty"},
            {"SourceRetargetPoseName", 0x1C, "NameProperty"},
            {"bForceAllIKOff", 0x20, "BoolProperty"},
            {"bApplyChainSettings", 0x21, "BoolProperty"},
            {"ChainSettings", 0x28, "MapProperty"},
            {"bApplyRootSettings", 0x38, "BoolProperty"},
            {"RootSettings", 0x40, "StructProperty"},
            {"bApplyGlobalSettings", 0xA8, "BoolProperty"},
            {"GlobalSettings", 0xAC, "StructProperty"},
        }};
    };

    struct RetargetProfileLibrary
    {
        static constexpr std::string_view Name = "RetargetProfileLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CopyRetargetProfileFromRetargetAsset",
            "GetOpControllerFromRetargetProfile",
        }};
    };

    struct RetargetRootSettings
    {
        static constexpr std::string_view Name = "RetargetRootSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t RetargetRootTranslation = 0x90;
            static constexpr std::uintptr_t GlobalScaleHorizontal = 0x94;
            static constexpr std::uintptr_t GlobalScaleVertical = 0x98;
            static constexpr std::uintptr_t BlendToSource = 0xA0;
            static constexpr std::uintptr_t StaticOffset = 0xB8;
            static constexpr std::uintptr_t StaticRotationOffset = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Settings", 0x28, "StructProperty"},
            {"RetargetRootTranslation", 0x90, "BoolProperty"},
            {"GlobalScaleHorizontal", 0x94, "FloatProperty"},
            {"GlobalScaleVertical", 0x98, "FloatProperty"},
            {"BlendToSource", 0xA0, "StructProperty"},
            {"StaticOffset", 0xB8, "StructProperty"},
            {"StaticRotationOffset", 0xD0, "StructProperty"},
        }};
    };

    struct RetargetSpeedPlantingSettings
    {
        static constexpr std::string_view Name = "RetargetSpeedPlantingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t Alpha = 0x4;
            static constexpr std::uintptr_t SpeedCurveName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"Alpha", 0x4, "FloatProperty"},
            {"SpeedCurveName", 0x8, "NameProperty"},
        }};
    };

    struct RetargetStretchChainSettings
    {
        static constexpr std::string_view Name = "RetargetStretchChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t bEnabled = 0x4;
            static constexpr std::uintptr_t MatchSourceLength = 0x8;
            static constexpr std::uintptr_t ScaleChainLength = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"bEnabled", 0x4, "BoolProperty"},
            {"MatchSourceLength", 0x8, "DoubleProperty"},
            {"ScaleChainLength", 0x10, "DoubleProperty"},
        }};
    };

    struct RetargetStrideWarpChainSettings
    {
        static constexpr std::string_view Name = "RetargetStrideWarpChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetChainName = 0x0;
            static constexpr std::uintptr_t EnableStrideWarping = 0x4;
            static constexpr std::uintptr_t Alpha = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetChainName", 0x0, "NameProperty"},
            {"EnableStrideWarping", 0x4, "BoolProperty"},
            {"Alpha", 0x8, "FloatProperty"},
        }};
    };

    struct RetargetVariableContainer
    {
        static constexpr std::string_view Name = "RetargetVariableContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bag", 0x0, "StructProperty"},
        }};
    };

    struct RigUnit_IKRig
    {
        static constexpr std::string_view Name = "RigUnit_IKRig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t IKRigAsset = 0x10;
            static constexpr std::uintptr_t Goals = 0x18;
            static constexpr std::uintptr_t WorkData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IKRigAsset", 0x10, "ObjectProperty"},
            {"Goals", 0x18, "ArrayProperty"},
            {"WorkData", 0x28, "StructProperty"},
        }};
    };

    struct RootMotionGeneratorOp
    {
        static constexpr std::string_view Name = "RootMotionGeneratorOp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RetargetOpBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceRootBone = 0x30;
            static constexpr std::uintptr_t TargetRootBone = 0x34;
            static constexpr std::uintptr_t TargetPelvisBone = 0x38;
            static constexpr std::uintptr_t RootMotionSource = 0x3C;
            static constexpr std::uintptr_t RootHeightSource = 0x3D;
            static constexpr std::uintptr_t bPropagateToNonRetargetedChildren = 0x3E;
            static constexpr std::uintptr_t bMaintainOffsetFromPelvis = 0x3F;
            static constexpr std::uintptr_t bRotateWithPelvis = 0x40;
            static constexpr std::uintptr_t GlobalOffset = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SourceRootBone", 0x30, "NameProperty"},
            {"TargetRootBone", 0x34, "NameProperty"},
            {"TargetPelvisBone", 0x38, "NameProperty"},
            {"RootMotionSource", 0x3C, "EnumProperty"},
            {"RootHeightSource", 0x3D, "EnumProperty"},
            {"bPropagateToNonRetargetedChildren", 0x3E, "BoolProperty"},
            {"bMaintainOffsetFromPelvis", 0x3F, "BoolProperty"},
            {"bRotateWithPelvis", 0x40, "BoolProperty"},
            {"GlobalOffset", 0x50, "StructProperty"},
        }};
    };

    struct TargetChainFKSettings
    {
        static constexpr std::string_view Name = "TargetChainFKSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableFK = 0x0;
            static constexpr std::uintptr_t RotationMode = 0x1;
            static constexpr std::uintptr_t RotationAlpha = 0x4;
            static constexpr std::uintptr_t TranslationMode = 0x8;
            static constexpr std::uintptr_t TranslationAlpha = 0xC;
            static constexpr std::uintptr_t PoleVectorMatching = 0x10;
            static constexpr std::uintptr_t PoleVectorMaintainOffset = 0x14;
            static constexpr std::uintptr_t PoleVectorOffset = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EnableFK", 0x0, "BoolProperty"},
            {"RotationMode", 0x1, "EnumProperty"},
            {"RotationAlpha", 0x4, "FloatProperty"},
            {"TranslationMode", 0x8, "EnumProperty"},
            {"TranslationAlpha", 0xC, "FloatProperty"},
            {"PoleVectorMatching", 0x10, "FloatProperty"},
            {"PoleVectorMaintainOffset", 0x14, "BoolProperty"},
            {"PoleVectorOffset", 0x18, "FloatProperty"},
        }};
    };

    struct TargetChainIKSettings
    {
        static constexpr std::string_view Name = "TargetChainIKSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableIK = 0x0;
            static constexpr std::uintptr_t BlendToSource = 0x4;
            static constexpr std::uintptr_t BlendToSourceTranslation = 0x8;
            static constexpr std::uintptr_t BlendToSourceRotation = 0xC;
            static constexpr std::uintptr_t BlendToSourceWeights = 0x10;
            static constexpr std::uintptr_t StaticOffset = 0x28;
            static constexpr std::uintptr_t StaticLocalOffset = 0x40;
            static constexpr std::uintptr_t StaticRotationOffset = 0x58;
            static constexpr std::uintptr_t ScaleVertical = 0x70;
            static constexpr std::uintptr_t Extension = 0x74;
            static constexpr std::uintptr_t bAffectedByIKWarping = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"EnableIK", 0x0, "BoolProperty"},
            {"BlendToSource", 0x4, "FloatProperty"},
            {"BlendToSourceTranslation", 0x8, "FloatProperty"},
            {"BlendToSourceRotation", 0xC, "FloatProperty"},
            {"BlendToSourceWeights", 0x10, "StructProperty"},
            {"StaticOffset", 0x28, "StructProperty"},
            {"StaticLocalOffset", 0x40, "StructProperty"},
            {"StaticRotationOffset", 0x58, "StructProperty"},
            {"ScaleVertical", 0x70, "FloatProperty"},
            {"Extension", 0x74, "FloatProperty"},
            {"bAffectedByIKWarping", 0x78, "BoolProperty"},
        }};
    };

    struct TargetChainSettings
    {
        static constexpr std::string_view Name = "TargetChainSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FK = 0x0;
            static constexpr std::uintptr_t IK = 0x20;
            static constexpr std::uintptr_t SpeedPlanting = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FK", 0x0, "StructProperty"},
            {"IK", 0x20, "StructProperty"},
            {"SpeedPlanting", 0xA0, "StructProperty"},
        }};
    };

    struct TargetChainSpeedPlantSettings
    {
        static constexpr std::string_view Name = "TargetChainSpeedPlantSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableSpeedPlanting = 0x0;
            static constexpr std::uintptr_t SpeedCurveName = 0x4;
            static constexpr std::uintptr_t SpeedThreshold = 0x8;
            static constexpr std::uintptr_t UnplantStiffness = 0xC;
            static constexpr std::uintptr_t UnplantCriticalDamping = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EnableSpeedPlanting", 0x0, "BoolProperty"},
            {"SpeedCurveName", 0x4, "NameProperty"},
            {"SpeedThreshold", 0x8, "FloatProperty"},
            {"UnplantStiffness", 0xC, "FloatProperty"},
            {"UnplantCriticalDamping", 0x10, "FloatProperty"},
        }};
    };

    struct TargetRootSettings
    {
        static constexpr std::string_view Name = "TargetRootSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationAlpha = 0x0;
            static constexpr std::uintptr_t TranslationAlpha = 0x4;
            static constexpr std::uintptr_t BlendToSource = 0x8;
            static constexpr std::uintptr_t BlendToSourceWeights = 0x10;
            static constexpr std::uintptr_t ScaleHorizontal = 0x28;
            static constexpr std::uintptr_t ScaleVertical = 0x2C;
            static constexpr std::uintptr_t TranslationOffset = 0x30;
            static constexpr std::uintptr_t RotationOffset = 0x48;
            static constexpr std::uintptr_t AffectIKHorizontal = 0x60;
            static constexpr std::uintptr_t AffectIKVertical = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RotationAlpha", 0x0, "FloatProperty"},
            {"TranslationAlpha", 0x4, "FloatProperty"},
            {"BlendToSource", 0x8, "FloatProperty"},
            {"BlendToSourceWeights", 0x10, "StructProperty"},
            {"ScaleHorizontal", 0x28, "FloatProperty"},
            {"ScaleVertical", 0x2C, "FloatProperty"},
            {"TranslationOffset", 0x30, "StructProperty"},
            {"RotationOffset", 0x48, "StructProperty"},
            {"AffectIKHorizontal", 0x60, "FloatProperty"},
            {"AffectIKVertical", 0x64, "FloatProperty"},
        }};
    };

}
