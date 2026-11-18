#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ControlRig
{
    struct AdditiveControlRig
    {
        static constexpr std::string_view Name = "AdditiveControlRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRig";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideAssets = 0x260;
            static constexpr std::uintptr_t ExecutionType = 0x271;
            static constexpr std::uintptr_t HierarchySettings = 0x278;
            static constexpr std::uintptr_t ControlCustomizations = 0x2A0;
            static constexpr std::uintptr_t DynamicHierarchy = 0x2B0;
            static constexpr std::uintptr_t ShapeLibraries = 0x2B8;
            static constexpr std::uintptr_t ShapeLibraryNameMap = 0x2C8;
            static constexpr std::uintptr_t RigVMExtendedExecuteContext = 0x2F0;
            static constexpr std::uintptr_t DataSourceRegistry = 0x558;
            static constexpr std::uintptr_t Influences = 0x610;
            static constexpr std::uintptr_t ExternalVariableDataAssetLinks = 0x678;
            static constexpr std::uintptr_t OnControlSelected_BP = 0x760;
            static constexpr std::uintptr_t bIsAdditive = 0x790;
            static constexpr std::uintptr_t RigModuleSettings = 0x828;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OverrideAssets", 0x260, "ArrayProperty"},
            {"ExecutionType", 0x271, "EnumProperty"},
            {"HierarchySettings", 0x278, "StructProperty"},
            {"ControlCustomizations", 0x2A0, "MapProperty"},
            {"DynamicHierarchy", 0x2B0, "ObjectProperty"},
            {"ShapeLibraries", 0x2B8, "ArrayProperty"},
            {"ShapeLibraryNameMap", 0x2C8, "MapProperty"},
            {"RigVMExtendedExecuteContext", 0x2F0, "StructProperty"},
            {"DataSourceRegistry", 0x558, "ObjectProperty"},
            {"Influences", 0x610, "StructProperty"},
            {"ExternalVariableDataAssetLinks", 0x678, "MapProperty"},
            {"OnControlSelected_BP", 0x760, "MulticastSparseDelegateProperty"},
            {"bIsAdditive", 0x790, "BoolProperty"},
            {"RigModuleSettings", 0x828, "StructProperty"},
        }};
    };

    struct AimTarget
    {
        static constexpr std::string_view Name = "AimTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t AlignVector = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Weight", 0x0, "FloatProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"AlignVector", 0x70, "StructProperty"},
        }};
    };

    struct AnimNodeControlRigLibrary
    {
        static constexpr std::string_view Name = "AnimNodeControlRigLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ConvertToControlRig",
            "ConvertToControlRigPure",
            "SetControlRigClass",
        }};
    };

    struct AnimNode_ControlRig
    {
        static constexpr std::string_view Name = "AnimNode_ControlRig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_ControlRigBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRigAssetReference = 0x168;
            static constexpr std::uintptr_t DefaultControlRigAssetReference = 0x178;
            static constexpr std::uintptr_t ControlRigClass = 0x188;
            static constexpr std::uintptr_t DefaultControlRigClass = 0x190;
            static constexpr std::uintptr_t ControlRig = 0x198;
            static constexpr std::uintptr_t ControlRigPerClass = 0x1A0;
            static constexpr std::uintptr_t Alpha = 0x1B0;
            static constexpr std::uintptr_t AlphaInputType = 0x1B4;
            static constexpr std::uintptr_t bAlphaBoolEnabled = 0x1B5;
            static constexpr std::uintptr_t bSetRefPoseFromSkeleton = 0x1B5;
            static constexpr std::uintptr_t AlphaScaleBias = 0x1B8;
            static constexpr std::uintptr_t AlphaBoolBlend = 0x1C0;
            static constexpr std::uintptr_t AlphaCurveName = 0x208;
            static constexpr std::uintptr_t AlphaScaleBiasClamp = 0x20C;
            static constexpr std::uintptr_t InputMapping = 0x240;
            static constexpr std::uintptr_t OutputMapping = 0x250;
            static constexpr std::uintptr_t LODThreshold = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ControlRigAssetReference", 0x168, "StructProperty"},
            {"DefaultControlRigAssetReference", 0x178, "StructProperty"},
            {"ControlRigClass", 0x188, "ClassProperty"},
            {"DefaultControlRigClass", 0x190, "ClassProperty"},
            {"ControlRig", 0x198, "ObjectProperty"},
            {"ControlRigPerClass", 0x1A0, "MapProperty"},
            {"Alpha", 0x1B0, "FloatProperty"},
            {"AlphaInputType", 0x1B4, "EnumProperty"},
            {"bAlphaBoolEnabled", 0x1B5, "BoolProperty"},
            {"bSetRefPoseFromSkeleton", 0x1B5, "BoolProperty"},
            {"AlphaScaleBias", 0x1B8, "StructProperty"},
            {"AlphaBoolBlend", 0x1C0, "StructProperty"},
            {"AlphaCurveName", 0x208, "NameProperty"},
            {"AlphaScaleBiasClamp", 0x20C, "StructProperty"},
            {"InputMapping", 0x240, "MapProperty"},
            {"OutputMapping", 0x250, "MapProperty"},
            {"LODThreshold", 0x260, "IntProperty"},
        }};
    };

    struct AnimNode_ControlRigBase
    {
        static constexpr std::string_view Name = "AnimNode_ControlRigBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_CustomProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x58;
            static constexpr std::uintptr_t bResetInputPoseToInitial = 0x68;
            static constexpr std::uintptr_t bTransferInputPose = 0x69;
            static constexpr std::uintptr_t bTransferInputCurves = 0x6A;
            static constexpr std::uintptr_t bTransferPoseInGlobalSpace = 0x6B;
            static constexpr std::uintptr_t InputBonesToTransfer = 0x70;
            static constexpr std::uintptr_t OutputBonesToTransfer = 0x80;
            static constexpr std::uintptr_t AssetUserData = 0x90;
            static constexpr std::uintptr_t NodeMappingContainer = 0xA0;
            static constexpr std::uintptr_t InputSettings = 0xA8;
            static constexpr std::uintptr_t OutputSettings = 0xAA;
            static constexpr std::uintptr_t bExecute = 0xAC;
            static constexpr std::uintptr_t EventQueue = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Source", 0x58, "StructProperty"},
            {"bResetInputPoseToInitial", 0x68, "BoolProperty"},
            {"bTransferInputPose", 0x69, "BoolProperty"},
            {"bTransferInputCurves", 0x6A, "BoolProperty"},
            {"bTransferPoseInGlobalSpace", 0x6B, "BoolProperty"},
            {"InputBonesToTransfer", 0x70, "ArrayProperty"},
            {"OutputBonesToTransfer", 0x80, "ArrayProperty"},
            {"AssetUserData", 0x90, "ArrayProperty"},
            {"NodeMappingContainer", 0xA0, "WeakObjectProperty"},
            {"InputSettings", 0xA8, "StructProperty"},
            {"OutputSettings", 0xAA, "StructProperty"},
            {"bExecute", 0xAC, "BoolProperty"},
            {"EventQueue", 0xB8, "ArrayProperty"},
        }};
    };

    struct AnimNode_ControlRigInputPose
    {
        static constexpr std::string_view Name = "AnimNode_ControlRigInputPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPose = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputPose", 0x10, "StructProperty"},
        }};
    };

    struct AnimNode_ControlRig_ExternalSource
    {
        static constexpr std::string_view Name = "AnimNode_ControlRig_ExternalSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_ControlRigBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRig = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlRig", 0x168, "WeakObjectProperty"},
        }};
    };

    struct AnimationHierarchy
    {
        static constexpr std::string_view Name = "AnimationHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NodeHierarchyWithUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t UserData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserData", 0x38, "ArrayProperty"},
        }};
    };

    struct BlendTarget
    {
        static constexpr std::string_view Name = "BlendTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t Weight = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"Weight", 0x60, "FloatProperty"},
        }};
    };

    struct CRSimContainer
    {
        static constexpr std::string_view Name = "CRSimContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeStep = 0x8;
            static constexpr std::uintptr_t AccumulatedTime = 0xC;
            static constexpr std::uintptr_t TimeLeftForStep = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TimeStep", 0x8, "FloatProperty"},
            {"AccumulatedTime", 0xC, "FloatProperty"},
            {"TimeLeftForStep", 0x10, "FloatProperty"},
        }};
    };

    struct CRSimLinearSpring
    {
        static constexpr std::string_view Name = "CRSimLinearSpring";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectA = 0x0;
            static constexpr std::uintptr_t SubjectB = 0x4;
            static constexpr std::uintptr_t Coefficient = 0x8;
            static constexpr std::uintptr_t Equilibrium = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubjectA", 0x0, "IntProperty"},
            {"SubjectB", 0x4, "IntProperty"},
            {"Coefficient", 0x8, "FloatProperty"},
            {"Equilibrium", 0xC, "FloatProperty"},
        }};
    };

    struct CRSimPointConstraint
    {
        static constexpr std::string_view Name = "CRSimPointConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t SubjectA = 0x4;
            static constexpr std::uintptr_t SubjectB = 0x8;
            static constexpr std::uintptr_t DataA = 0x10;
            static constexpr std::uintptr_t DataB = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"SubjectA", 0x4, "IntProperty"},
            {"SubjectB", 0x8, "IntProperty"},
            {"DataA", 0x10, "StructProperty"},
            {"DataB", 0x28, "StructProperty"},
        }};
    };

    struct CRSimPointContainer
    {
        static constexpr std::string_view Name = "CRSimPointContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CRSimContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x18;
            static constexpr std::uintptr_t Springs = 0x28;
            static constexpr std::uintptr_t Forces = 0x38;
            static constexpr std::uintptr_t CollisionVolumes = 0x48;
            static constexpr std::uintptr_t Constraints = 0x58;
            static constexpr std::uintptr_t PreviousStep = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Points", 0x18, "ArrayProperty"},
            {"Springs", 0x28, "ArrayProperty"},
            {"Forces", 0x38, "ArrayProperty"},
            {"CollisionVolumes", 0x48, "ArrayProperty"},
            {"Constraints", 0x58, "ArrayProperty"},
            {"PreviousStep", 0x68, "ArrayProperty"},
        }};
    };

    struct CRSimPointForce
    {
        static constexpr std::string_view Name = "CRSimPointForce";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceType = 0x0;
            static constexpr std::uintptr_t Vector = 0x8;
            static constexpr std::uintptr_t Coefficient = 0x20;
            static constexpr std::uintptr_t bNormalize = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ForceType", 0x0, "EnumProperty"},
            {"Vector", 0x8, "StructProperty"},
            {"Coefficient", 0x20, "FloatProperty"},
            {"bNormalize", 0x24, "BoolProperty"},
        }};
    };

    struct CRSimSoftCollision
    {
        static constexpr std::string_view Name = "CRSimSoftCollision";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t ShapeType = 0x60;
            static constexpr std::uintptr_t MinimumDistance = 0x64;
            static constexpr std::uintptr_t MaximumDistance = 0x68;
            static constexpr std::uintptr_t FalloffType = 0x6C;
            static constexpr std::uintptr_t Coefficient = 0x70;
            static constexpr std::uintptr_t bInverted = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"ShapeType", 0x60, "EnumProperty"},
            {"MinimumDistance", 0x64, "FloatProperty"},
            {"MaximumDistance", 0x68, "FloatProperty"},
            {"FalloffType", 0x6C, "EnumProperty"},
            {"Coefficient", 0x70, "FloatProperty"},
            {"bInverted", 0x74, "BoolProperty"},
        }};
    };

    struct CachedRigComponent
    {
        static constexpr std::string_view Name = "CachedRigComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedElement = 0x0;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t Index = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedElement", 0x0, "StructProperty"},
            {"Name", 0x18, "NameProperty"},
            {"Index", 0x1C, "UInt16Property"},
        }};
    };

    struct CachedRigElement
    {
        static constexpr std::string_view Name = "CachedRigElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Index = 0x8;
            static constexpr std::uintptr_t ContainerVersion = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"Index", 0x8, "UInt16Property"},
            {"ContainerVersion", 0xC, "IntProperty"},
        }};
    };

    struct ChannelMapInfo
    {
        static constexpr std::string_view Name = "ChannelMapInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlIndex = 0x0;
            static constexpr std::uintptr_t TotalChannelIndex = 0x4;
            static constexpr std::uintptr_t ChannelIndex = 0x8;
            static constexpr std::uintptr_t ParentControlIndex = 0xC;
            static constexpr std::uintptr_t ChannelTypeName = 0x10;
            static constexpr std::uintptr_t bDoesHaveSpace = 0x14;
            static constexpr std::uintptr_t SpaceChannelIndex = 0x18;
            static constexpr std::uintptr_t MaskIndex = 0x1C;
            static constexpr std::uintptr_t CategoryIndex = 0x20;
            static constexpr std::uintptr_t ConstraintsIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ControlIndex", 0x0, "IntProperty"},
            {"TotalChannelIndex", 0x4, "IntProperty"},
            {"ChannelIndex", 0x8, "IntProperty"},
            {"ParentControlIndex", 0xC, "IntProperty"},
            {"ChannelTypeName", 0x10, "NameProperty"},
            {"bDoesHaveSpace", 0x14, "BoolProperty"},
            {"SpaceChannelIndex", 0x18, "IntProperty"},
            {"MaskIndex", 0x1C, "IntProperty"},
            {"CategoryIndex", 0x20, "IntProperty"},
            {"ConstraintsIndex", 0x28, "ArrayProperty"},
        }};
    };

    struct ConstraintNodeData
    {
        static constexpr std::string_view Name = "ConstraintNodeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RelativeParent = 0x0;
            static constexpr std::uintptr_t ConstraintOffset = 0x60;
            static constexpr std::uintptr_t LinkedNode = 0x120;
            static constexpr std::uintptr_t Constraints = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RelativeParent", 0x0, "StructProperty"},
            {"ConstraintOffset", 0x60, "StructProperty"},
            {"LinkedNode", 0x120, "NameProperty"},
            {"Constraints", 0x128, "ArrayProperty"},
        }};
    };

    struct ConstraintParent
    {
        static constexpr std::string_view Name = "ConstraintParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t Weight = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"Weight", 0x8, "FloatProperty"},
        }};
    };

    struct ConstraintTarget
    {
        static constexpr std::string_view Name = "ConstraintTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t Weight = 0x60;
            static constexpr std::uintptr_t bMaintainOffset = 0x64;
            static constexpr std::uintptr_t Filter = 0x65;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"Weight", 0x60, "FloatProperty"},
            {"bMaintainOffset", 0x64, "BoolProperty"},
            {"Filter", 0x65, "StructProperty"},
        }};
    };

    struct ControlRig
    {
        static constexpr std::string_view Name = "ControlRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMHost";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideAssets = 0x260;
            static constexpr std::uintptr_t ExecutionType = 0x271;
            static constexpr std::uintptr_t HierarchySettings = 0x278;
            static constexpr std::uintptr_t ControlCustomizations = 0x2A0;
            static constexpr std::uintptr_t DynamicHierarchy = 0x2B0;
            static constexpr std::uintptr_t ShapeLibraries = 0x2B8;
            static constexpr std::uintptr_t ShapeLibraryNameMap = 0x2C8;
            static constexpr std::uintptr_t RigVMExtendedExecuteContext = 0x2F0;
            static constexpr std::uintptr_t DataSourceRegistry = 0x558;
            static constexpr std::uintptr_t Influences = 0x610;
            static constexpr std::uintptr_t ExternalVariableDataAssetLinks = 0x678;
            static constexpr std::uintptr_t OnControlSelected_BP = 0x760;
            static constexpr std::uintptr_t bIsAdditive = 0x790;
            static constexpr std::uintptr_t RigModuleSettings = 0x828;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OverrideAssets", 0x260, "ArrayProperty"},
            {"ExecutionType", 0x271, "EnumProperty"},
            {"HierarchySettings", 0x278, "StructProperty"},
            {"ControlCustomizations", 0x2A0, "MapProperty"},
            {"DynamicHierarchy", 0x2B0, "ObjectProperty"},
            {"ShapeLibraries", 0x2B8, "ArrayProperty"},
            {"ShapeLibraryNameMap", 0x2C8, "MapProperty"},
            {"RigVMExtendedExecuteContext", 0x2F0, "StructProperty"},
            {"DataSourceRegistry", 0x558, "ObjectProperty"},
            {"Influences", 0x610, "StructProperty"},
            {"ExternalVariableDataAssetLinks", 0x678, "MapProperty"},
            {"OnControlSelected_BP", 0x760, "MulticastSparseDelegateProperty"},
            {"bIsAdditive", 0x790, "BoolProperty"},
            {"RigModuleSettings", 0x828, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "ClearControlSelection",
            "CreateTransformableControlHandle",
            "CurrentControlSelection",
            "FindControlRigs",
            "GetAssetReference",
            "GetHierarchy",
            "GetHostingActor",
            "GetInteractionRig",
            "GetInteractionRigClass",
            "GetSortedControls",
            "IsControlSelected",
            "RequestConstruction",
            "SelectControl",
            "SetInteractionRig",
            "SetInteractionRigClass",
            "SupportsBackwardsSolve",
        }};
    };

    struct ControlRigAnimInstance
    {
        static constexpr std::string_view Name = "ControlRigAnimInstance";
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

    struct ControlRigAnimInstanceProxy
    {
        static constexpr std::string_view Name = "ControlRigAnimInstanceProxy";
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

    struct ControlRigAnimNodeEventName
    {
        static constexpr std::string_view Name = "ControlRigAnimNodeEventName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventName", 0x0, "NameProperty"},
        }};
    };

    struct ControlRigAssetReferenceLibrary
    {
        static constexpr std::string_view Name = "ControlRigAssetReferenceLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "Conv_ControlRigSoftReferenceToString",
            "Conv_ControlRigStrongReferenceToString",
            "EqualEqual_ControlRigAssetSoftReference",
            "EqualEqual_ControlRigAssetStrongReference",
            "GetControlRigSoftReferencePathName",
            "GetControlRigStrongReferencePathName",
            "GetSoftReferenceFromStrongReference",
            "GetStrongReferenceFromSoftReference",
            "IsControlRigSoftReferenceValid",
            "IsControlRigStrongReferenceValid",
            "NotEqual_ControlRigAssetSoftReference",
            "NotEqual_ControlRigAssetStrongReference",
        }};
    };

    struct ControlRigAssetSoftReference
    {
        static constexpr std::string_view Name = "ControlRigAssetSoftReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlueprintRigClass = 0x0;
            static constexpr std::uintptr_t ControlRigAsset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlueprintRigClass", 0x0, "SoftClassProperty"},
            {"ControlRigAsset", 0x20, "SoftObjectProperty"},
        }};
    };

    struct ControlRigAssetStrongReference
    {
        static constexpr std::string_view Name = "ControlRigAssetStrongReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlueprintRigClass = 0x0;
            static constexpr std::uintptr_t ControlRigAsset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlueprintRigClass", 0x0, "ClassProperty"},
            {"ControlRigAsset", 0x8, "ObjectProperty"},
        }};
    };

    struct ControlRigBlueprintGeneratedClass
    {
        static constexpr std::string_view Name = "ControlRigBlueprintGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMBlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSkeletalMesh = 0x318;
            static constexpr std::uintptr_t bExposesAnimatableControls = 0x330;
            static constexpr std::uintptr_t bAllowMultipleInstances = 0x331;
            static constexpr std::uintptr_t ControlRigType = 0x332;
            static constexpr std::uintptr_t ItemTypeDisplayName = 0x334;
            static constexpr std::uintptr_t RigModuleSettings = 0x338;
            static constexpr std::uintptr_t ModuleReferenceData = 0x3B0;
            static constexpr std::uintptr_t CustomThumbnail = 0x3C0;
            static constexpr std::uintptr_t bSupportsInversion = 0x3D0;
            static constexpr std::uintptr_t bSupportsControls = 0x3D1;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PreviewSkeletalMesh", 0x318, "StructProperty"},
            {"bExposesAnimatableControls", 0x330, "BoolProperty"},
            {"bAllowMultipleInstances", 0x331, "BoolProperty"},
            {"ControlRigType", 0x332, "EnumProperty"},
            {"ItemTypeDisplayName", 0x334, "NameProperty"},
            {"RigModuleSettings", 0x338, "StructProperty"},
            {"ModuleReferenceData", 0x3B0, "ArrayProperty"},
            {"CustomThumbnail", 0x3C0, "StrProperty"},
            {"bSupportsInversion", 0x3D0, "BoolProperty"},
            {"bSupportsControls", 0x3D1, "BoolProperty"},
        }};
    };

    struct ControlRigComponent
    {
        static constexpr std::string_view Name = "ControlRigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRigAssetReference = 0x560;
            static constexpr std::uintptr_t ControlRigClass = 0x570;
            static constexpr std::uintptr_t OnPreInitializeDelegate = 0x578;
            static constexpr std::uintptr_t OnPostInitializeDelegate = 0x588;
            static constexpr std::uintptr_t OnPreConstructionDelegate = 0x598;
            static constexpr std::uintptr_t OnPostConstructionDelegate = 0x5A8;
            static constexpr std::uintptr_t OnPreForwardsSolveDelegate = 0x5B8;
            static constexpr std::uintptr_t OnPostForwardsSolveDelegate = 0x5C8;
            static constexpr std::uintptr_t UserDefinedElements = 0x5D8;
            static constexpr std::uintptr_t MappedElements = 0x5E8;
            static constexpr std::uintptr_t bEnableLazyEvaluation = 0x5F8;
            static constexpr std::uintptr_t LazyEvaluationPositionThreshold = 0x5FC;
            static constexpr std::uintptr_t LazyEvaluationRotationThreshold = 0x600;
            static constexpr std::uintptr_t LazyEvaluationScaleThreshold = 0x604;
            static constexpr std::uintptr_t bResetTransformBeforeTick = 0x608;
            static constexpr std::uintptr_t bResetInitialsBeforeConstruction = 0x609;
            static constexpr std::uintptr_t bUpdateRigOnTick = 0x60A;
            static constexpr std::uintptr_t bUpdateInEditor = 0x60B;
            static constexpr std::uintptr_t bDrawBones = 0x60C;
            static constexpr std::uintptr_t bShowDebugDrawing = 0x60D;
            static constexpr std::uintptr_t ControlRig = 0x610;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"ControlRigAssetReference", 0x560, "StructProperty"},
            {"ControlRigClass", 0x570, "ClassProperty"},
            {"OnPreInitializeDelegate", 0x578, "MulticastInlineDelegateProperty"},
            {"OnPostInitializeDelegate", 0x588, "MulticastInlineDelegateProperty"},
            {"OnPreConstructionDelegate", 0x598, "MulticastInlineDelegateProperty"},
            {"OnPostConstructionDelegate", 0x5A8, "MulticastInlineDelegateProperty"},
            {"OnPreForwardsSolveDelegate", 0x5B8, "MulticastInlineDelegateProperty"},
            {"OnPostForwardsSolveDelegate", 0x5C8, "MulticastInlineDelegateProperty"},
            {"UserDefinedElements", 0x5D8, "ArrayProperty"},
            {"MappedElements", 0x5E8, "ArrayProperty"},
            {"bEnableLazyEvaluation", 0x5F8, "BoolProperty"},
            {"LazyEvaluationPositionThreshold", 0x5FC, "FloatProperty"},
            {"LazyEvaluationRotationThreshold", 0x600, "FloatProperty"},
            {"LazyEvaluationScaleThreshold", 0x604, "FloatProperty"},
            {"bResetTransformBeforeTick", 0x608, "BoolProperty"},
            {"bResetInitialsBeforeConstruction", 0x609, "BoolProperty"},
            {"bUpdateRigOnTick", 0x60A, "BoolProperty"},
            {"bUpdateInEditor", 0x60B, "BoolProperty"},
            {"bDrawBones", 0x60C, "BoolProperty"},
            {"bShowDebugDrawing", 0x60D, "BoolProperty"},
            {"ControlRig", 0x610, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 48> FunctionNames{{
            "AddMappedCompleteSkeletalMesh",
            "AddMappedComponents",
            "AddMappedElements",
            "AddMappedSkeletalMesh",
            "CanExecute",
            "ClearMappedElements",
            "DoesElementExist",
            "GetAbsoluteTime",
            "GetBoneTransform",
            "GetControlBool",
            "GetControlFloat",
            "GetControlInt",
            "GetControlOffset",
            "GetControlPosition",
            "GetControlRig",
            "GetControlRotator",
            "GetControlScale",
            "GetControlTransform",
            "GetControlVector2D",
            "GetElementNames",
            "GetInitialBoneTransform",
            "GetInitialSpaceTransform",
            "GetSpaceTransform",
            "Initialize",
            "OnPostConstruction",
            "OnPostForwardsSolve",
            "OnPostInitialize",
            "OnPreConstruction",
            "OnPreForwardsSolve",
            "OnPreInitialize",
            "SetBoneInitialTransformsFromSkeletalMesh",
            "SetBoneTransform",
            "SetControlBool",
            "SetControlFloat",
            "SetControlInt",
            "SetControlOffset",
            "SetControlPosition",
            "SetControlRigAssetReference",
            "SetControlRigClass",
            "SetControlRotator",
            "SetControlScale",
            "SetControlTransform",
            "SetControlVector2D",
            "SetInitialBoneTransform",
            "SetInitialSpaceTransform",
            "SetMappedElements",
            "SetObjectBinding",
            "Update",
        }};
    };

    struct ControlRigComponentMappedBone
    {
        static constexpr std::string_view Name = "ControlRigComponentMappedBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t Target = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x0, "NameProperty"},
            {"Target", 0x4, "NameProperty"},
        }};
    };

    struct ControlRigComponentMappedComponent
    {
        static constexpr std::string_view Name = "ControlRigComponentMappedComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x0;
            static constexpr std::uintptr_t ElementName = 0x8;
            static constexpr std::uintptr_t ElementType = 0xC;
            static constexpr std::uintptr_t Direction = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Component", 0x0, "ObjectProperty"},
            {"ElementName", 0x8, "NameProperty"},
            {"ElementType", 0xC, "EnumProperty"},
            {"Direction", 0xD, "EnumProperty"},
        }};
    };

    struct ControlRigComponentMappedCurve
    {
        static constexpr std::string_view Name = "ControlRigComponentMappedCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t Target = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x0, "NameProperty"},
            {"Target", 0x4, "NameProperty"},
        }};
    };

    struct ControlRigComponentMappedElement
    {
        static constexpr std::string_view Name = "ControlRigComponentMappedElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentReference = 0x0;
            static constexpr std::uintptr_t TransformIndex = 0x40;
            static constexpr std::uintptr_t TransformName = 0x44;
            static constexpr std::uintptr_t ElementType = 0x48;
            static constexpr std::uintptr_t ElementName = 0x4C;
            static constexpr std::uintptr_t Direction = 0x50;
            static constexpr std::uintptr_t Offset = 0x60;
            static constexpr std::uintptr_t Weight = 0xC0;
            static constexpr std::uintptr_t Space = 0xC4;
            static constexpr std::uintptr_t SceneComponent = 0xC8;
            static constexpr std::uintptr_t ElementIndex = 0xD0;
            static constexpr std::uintptr_t SubIndex = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ComponentReference", 0x0, "StructProperty"},
            {"TransformIndex", 0x40, "IntProperty"},
            {"TransformName", 0x44, "NameProperty"},
            {"ElementType", 0x48, "EnumProperty"},
            {"ElementName", 0x4C, "NameProperty"},
            {"Direction", 0x50, "EnumProperty"},
            {"Offset", 0x60, "StructProperty"},
            {"Weight", 0xC0, "FloatProperty"},
            {"Space", 0xC4, "EnumProperty"},
            {"SceneComponent", 0xC8, "ObjectProperty"},
            {"ElementIndex", 0xD0, "IntProperty"},
            {"SubIndex", 0xD4, "IntProperty"},
        }};
    };

    struct ControlRigControlActor
    {
        static constexpr std::string_view Name = "ControlRigControlActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorToTrack = 0x278;
            static constexpr std::uintptr_t ControlRigClass = 0x280;
            static constexpr std::uintptr_t bRefreshOnTick = 0x288;
            static constexpr std::uintptr_t bIsSelectable = 0x289;
            static constexpr std::uintptr_t MaterialOverride = 0x290;
            static constexpr std::uintptr_t ColorParameter = 0x298;
            static constexpr std::uintptr_t bCastShadows = 0x2A8;
            static constexpr std::uintptr_t ActorRootComponent = 0x2B0;
            static constexpr std::uintptr_t ControlRig = 0x2B8;
            static constexpr std::uintptr_t ControlNames = 0x2D8;
            static constexpr std::uintptr_t ShapeTransforms = 0x2E8;
            static constexpr std::uintptr_t Components = 0x2F8;
            static constexpr std::uintptr_t Materials = 0x308;
            static constexpr std::uintptr_t ColorParameterName = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ActorToTrack", 0x278, "ObjectProperty"},
            {"ControlRigClass", 0x280, "ClassProperty"},
            {"bRefreshOnTick", 0x288, "BoolProperty"},
            {"bIsSelectable", 0x289, "BoolProperty"},
            {"MaterialOverride", 0x290, "ObjectProperty"},
            {"ColorParameter", 0x298, "StrProperty"},
            {"bCastShadows", 0x2A8, "BoolProperty"},
            {"ActorRootComponent", 0x2B0, "ObjectProperty"},
            {"ControlRig", 0x2B8, "SoftObjectProperty"},
            {"ControlNames", 0x2D8, "ArrayProperty"},
            {"ShapeTransforms", 0x2E8, "ArrayProperty"},
            {"Components", 0x2F8, "ArrayProperty"},
            {"Materials", 0x308, "ArrayProperty"},
            {"ColorParameterName", 0x318, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Clear",
            "Refresh",
            "ResetControlActor",
        }};
    };

    struct ControlRigControlPose
    {
        static constexpr std::string_view Name = "ControlRigControlPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CopyOfControls = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CopyOfControls", 0x0, "ArrayProperty"},
        }};
    };

    struct ControlRigEditorSettings
    {
        static constexpr std::string_view Name = "ControlRigEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMEditorSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigExecuteContext
    {
        static constexpr std::string_view Name = "ControlRigExecuteContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMExecuteContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigIOSettings
    {
        static constexpr std::string_view Name = "ControlRigIOSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdatePose = 0x0;
            static constexpr std::uintptr_t bUpdateCurves = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUpdatePose", 0x0, "BoolProperty"},
            {"bUpdateCurves", 0x1, "BoolProperty"},
        }};
    };

    struct ControlRigLayerInstance
    {
        static constexpr std::string_view Name = "ControlRigLayerInstance";
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

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSourceAnimInstance",
        }};
    };

    struct ControlRigLayerInstanceProxy
    {
        static constexpr std::string_view Name = "ControlRigLayerInstanceProxy";
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

    struct ControlRigNumericalValidationPass
    {
        static constexpr std::string_view Name = "ControlRigNumericalValidationPass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRigValidationPass";
        struct Offsets
        {
            static constexpr std::uintptr_t bCheckControls = 0x28;
            static constexpr std::uintptr_t bCheckBones = 0x29;
            static constexpr std::uintptr_t bCheckCurves = 0x2A;
            static constexpr std::uintptr_t TranslationPrecision = 0x2C;
            static constexpr std::uintptr_t RotationPrecision = 0x30;
            static constexpr std::uintptr_t ScalePrecision = 0x34;
            static constexpr std::uintptr_t CurvePrecision = 0x38;
            static constexpr std::uintptr_t EventNameA = 0x3C;
            static constexpr std::uintptr_t EventNameB = 0x40;
            static constexpr std::uintptr_t Pose = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bCheckControls", 0x28, "BoolProperty"},
            {"bCheckBones", 0x29, "BoolProperty"},
            {"bCheckCurves", 0x2A, "BoolProperty"},
            {"TranslationPrecision", 0x2C, "FloatProperty"},
            {"RotationPrecision", 0x30, "FloatProperty"},
            {"ScalePrecision", 0x34, "FloatProperty"},
            {"CurvePrecision", 0x38, "FloatProperty"},
            {"EventNameA", 0x3C, "NameProperty"},
            {"EventNameB", 0x40, "NameProperty"},
            {"Pose", 0x48, "StructProperty"},
        }};
    };

    struct ControlRigOverrideAsset
    {
        static constexpr std::string_view Name = "ControlRigOverrideAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x28, "StructProperty"},
        }};
    };

    struct ControlRigOverrideContainer
    {
        static constexpr std::string_view Name = "ControlRigOverrideContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigOverrideValue
    {
        static constexpr std::string_view Name = "ControlRigOverrideValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigPoseAsset
    {
        static constexpr std::string_view Name = "ControlRigPoseAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Pose", 0x28, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "DoesMirrorMatch",
            "GetControlNames",
            "GetCurrentPose",
            "PastePose",
            "ReplaceControlName",
            "SavePose",
            "SelectControls",
            "SetUpMirrorMatchTable",
        }};
    };

    struct ControlRigPoseMirrorSettings
    {
        static constexpr std::string_view Name = "ControlRigPoseMirrorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RightSide = 0x28;
            static constexpr std::uintptr_t LeftSide = 0x38;
            static constexpr std::uintptr_t MirrorAxis = 0x48;
            static constexpr std::uintptr_t AxisToFlip = 0x49;
            static constexpr std::uintptr_t MirrorMatchTolerance = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RightSide", 0x28, "StrProperty"},
            {"LeftSide", 0x38, "StrProperty"},
            {"MirrorAxis", 0x48, "ByteProperty"},
            {"AxisToFlip", 0x49, "ByteProperty"},
            {"MirrorMatchTolerance", 0x50, "DoubleProperty"},
        }};
    };

    struct ControlRigPoseProjectSettings
    {
        static constexpr std::string_view Name = "ControlRigPoseProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RootSaveDirs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootSaveDirs", 0x28, "ArrayProperty"},
        }};
    };

    struct ControlRigReference
    {
        static constexpr std::string_view Name = "ControlRigReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigReplay
    {
        static constexpr std::string_view Name = "ControlRigReplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t ControlRigObjectPath = 0x38;
            static constexpr std::uintptr_t PreviewSkeletalMeshObjectPath = 0x50;
            static constexpr std::uintptr_t InputTracks = 0x68;
            static constexpr std::uintptr_t OutputTracks = 0xE0;
            static constexpr std::uintptr_t Tolerance = 0x158;
            static constexpr std::uintptr_t bValidateHierarchyTopology = 0x160;
            static constexpr std::uintptr_t bValidatePose = 0x161;
            static constexpr std::uintptr_t bValidateMetadata = 0x162;
            static constexpr std::uintptr_t bValidateVariables = 0x163;
            static constexpr std::uintptr_t FramesToSkip = 0x168;
            static constexpr std::uintptr_t EnableTest = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Description", 0x28, "TextProperty"},
            {"ControlRigObjectPath", 0x38, "StructProperty"},
            {"PreviewSkeletalMeshObjectPath", 0x50, "StructProperty"},
            {"InputTracks", 0x68, "StructProperty"},
            {"OutputTracks", 0xE0, "StructProperty"},
            {"Tolerance", 0x158, "DoubleProperty"},
            {"bValidateHierarchyTopology", 0x160, "BoolProperty"},
            {"bValidatePose", 0x161, "BoolProperty"},
            {"bValidateMetadata", 0x162, "BoolProperty"},
            {"bValidateVariables", 0x163, "BoolProperty"},
            {"FramesToSkip", 0x168, "ArrayProperty"},
            {"EnableTest", 0x178, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "CreateNewAsset",
            "GetPlaybackMode",
            "GetTimeRange",
            "IsPaused",
            "IsRecording",
            "IsReplaying",
            "PauseReplay",
            "SetPlaybackMode",
            "StartRecording",
            "StartReplay",
            "StopRecording",
            "StopReplay",
        }};
    };

    struct ControlRigReplayTracks
    {
        static constexpr std::string_view Name = "ControlRigReplayTracks";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SampleTrackHost";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigReplayVariable
    {
        static constexpr std::string_view Name = "ControlRigReplayVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t CPPType = 0x4;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"CPPType", 0x4, "NameProperty"},
            {"Value", 0x8, "StrProperty"},
        }};
    };

    struct ControlRigRuntimeAsset
    {
        static constexpr std::string_view Name = "ControlRigRuntimeAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMRuntimeAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Hierarchy = 0x4E8;
            static constexpr std::uintptr_t HierarchySettings = 0x4F0;
            static constexpr std::uintptr_t ModularRigModel = 0x518;
            static constexpr std::uintptr_t ModularRigSettings = 0x598;
            static constexpr std::uintptr_t RigModuleSettings = 0x5A0;
            static constexpr std::uintptr_t ControlRigType = 0x618;
            static constexpr std::uintptr_t ItemTypeDisplayName = 0x61C;
            static constexpr std::uintptr_t SourceHierarchyImport = 0x620;
            static constexpr std::uintptr_t SourceCurveImport = 0x640;
            static constexpr std::uintptr_t PreviewSkeletalMesh = 0x660;
            static constexpr std::uintptr_t ModuleReferenceData = 0x680;
            static constexpr std::uintptr_t ArrayConnectionMap = 0x690;
            static constexpr std::uintptr_t Influences = 0x6A0;
            static constexpr std::uintptr_t bSupportsInversion = 0x6C0;
            static constexpr std::uintptr_t bSupportsControls = 0x6C1;
            static constexpr std::uintptr_t bExposesAnimatableControls = 0x6C2;
            static constexpr std::uintptr_t bAllowMultipleInstances = 0x6C3;
            static constexpr std::uintptr_t CustomThumbnail = 0x6C8;
            static constexpr std::uintptr_t ShapeLibraries = 0x6D8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"Hierarchy", 0x4E8, "ObjectProperty"},
            {"HierarchySettings", 0x4F0, "StructProperty"},
            {"ModularRigModel", 0x518, "StructProperty"},
            {"ModularRigSettings", 0x598, "StructProperty"},
            {"RigModuleSettings", 0x5A0, "StructProperty"},
            {"ControlRigType", 0x618, "EnumProperty"},
            {"ItemTypeDisplayName", 0x61C, "NameProperty"},
            {"SourceHierarchyImport", 0x620, "SoftObjectProperty"},
            {"SourceCurveImport", 0x640, "SoftObjectProperty"},
            {"PreviewSkeletalMesh", 0x660, "SoftObjectProperty"},
            {"ModuleReferenceData", 0x680, "ArrayProperty"},
            {"ArrayConnectionMap", 0x690, "MapProperty"},
            {"Influences", 0x6A0, "StructProperty"},
            {"bSupportsInversion", 0x6C0, "BoolProperty"},
            {"bSupportsControls", 0x6C1, "BoolProperty"},
            {"bExposesAnimatableControls", 0x6C2, "BoolProperty"},
            {"bAllowMultipleInstances", 0x6C3, "BoolProperty"},
            {"CustomThumbnail", 0x6C8, "StrProperty"},
            {"ShapeLibraries", 0x6D8, "ArrayProperty"},
        }};
    };

    struct ControlRigRuntimeAssetInterface
    {
        static constexpr std::string_view Name = "ControlRigRuntimeAssetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigSequenceObjectReference
    {
        static constexpr std::string_view Name = "ControlRigSequenceObjectReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRigClass = 0x0;
            static constexpr std::uintptr_t ControlRigAssetReference = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlRigClass", 0x0, "ClassProperty"},
            {"ControlRigAssetReference", 0x8, "StructProperty"},
        }};
    };

    struct ControlRigSequenceObjectReferenceMap
    {
        static constexpr std::string_view Name = "ControlRigSequenceObjectReferenceMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingIds = 0x0;
            static constexpr std::uintptr_t References = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BindingIds", 0x0, "ArrayProperty"},
            {"References", 0x10, "ArrayProperty"},
        }};
    };

    struct ControlRigSequenceObjectReferences
    {
        static constexpr std::string_view Name = "ControlRigSequenceObjectReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Array", 0x0, "ArrayProperty"},
        }};
    };

    struct ControlRigSettings
    {
        static constexpr std::string_view Name = "ControlRigSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigSettingsPerPinBool
    {
        static constexpr std::string_view Name = "ControlRigSettingsPerPinBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x0, "MapProperty"},
        }};
    };

    struct ControlRigShapeActor
    {
        static constexpr std::string_view Name = "ControlRigShapeActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorRootComponent = 0x280;
            static constexpr std::uintptr_t ProxyComponent = 0x288;
            static constexpr std::uintptr_t ControlRigIndex = 0x290;
            static constexpr std::uintptr_t ControlRig = 0x294;
            static constexpr std::uintptr_t ControlName = 0x29C;
            static constexpr std::uintptr_t ShapeName = 0x2A0;
            static constexpr std::uintptr_t ColorParameterName = 0x2A4;
            static constexpr std::uintptr_t CachedIndex = 0x320;
            static constexpr std::uintptr_t HoveredParameterName = 0x338;
            static constexpr std::uintptr_t HoveredColorParameterName = 0x33C;
            static constexpr std::uintptr_t bHovered = 0x340;
            static constexpr std::uintptr_t bSelected = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ActorRootComponent", 0x280, "ObjectProperty"},
            {"ProxyComponent", 0x288, "ObjectProperty"},
            {"ControlRigIndex", 0x290, "UInt32Property"},
            {"ControlRig", 0x294, "WeakObjectProperty"},
            {"ControlName", 0x29C, "NameProperty"},
            {"ShapeName", 0x2A0, "NameProperty"},
            {"ColorParameterName", 0x2A4, "NameProperty"},
            {"CachedIndex", 0x320, "StructProperty"},
            {"HoveredParameterName", 0x338, "NameProperty"},
            {"HoveredColorParameterName", 0x33C, "NameProperty"},
            {"bHovered", 0x340, "BoolProperty"},
            {"bSelected", 0x340, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "GetGlobalTransform",
            "IsEnabled",
            "IsHovered",
            "IsSelectedInEditor",
            "OnEnabledChanged",
            "OnHoveredChanged",
            "OnManipulatingChanged",
            "OnSelectionChanged",
            "OnTransformChanged",
            "SetEnabled",
            "SetGlobalTransform",
            "SetHovered",
            "SetSelectable",
            "SetSelected",
        }};
    };

    struct ControlRigShapeDefinition
    {
        static constexpr std::string_view Name = "ControlRigShapeDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeName = 0x0;
            static constexpr std::uintptr_t StaticMesh = 0x8;
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t ShapeProxy = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShapeName", 0x0, "NameProperty"},
            {"StaticMesh", 0x8, "SoftObjectProperty"},
            {"Transform", 0x30, "StructProperty"},
            {"ShapeProxy", 0x90, "SoftObjectProperty"},
        }};
    };

    struct ControlRigShapeLibrary
    {
        static constexpr std::string_view Name = "ControlRigShapeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultShape = 0x30;
            static constexpr std::uintptr_t DefaultMaterial = 0x120;
            static constexpr std::uintptr_t XRayMaterial = 0x140;
            static constexpr std::uintptr_t MaterialColorParameter = 0x160;
            static constexpr std::uintptr_t MaterialHoveredParameter = 0x164;
            static constexpr std::uintptr_t MaterialHoveredColorParameter = 0x168;
            static constexpr std::uintptr_t Shapes = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DefaultShape", 0x30, "StructProperty"},
            {"DefaultMaterial", 0x120, "SoftObjectProperty"},
            {"XRayMaterial", 0x140, "SoftObjectProperty"},
            {"MaterialColorParameter", 0x160, "NameProperty"},
            {"MaterialHoveredParameter", 0x164, "NameProperty"},
            {"MaterialHoveredColorParameter", 0x168, "NameProperty"},
            {"Shapes", 0x170, "ArrayProperty"},
        }};
    };

    struct ControlRigShapeLibraryLink
    {
        static constexpr std::string_view Name = "ControlRigShapeLibraryLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NameSpacedUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeLibrary = 0x80;
            static constexpr std::uintptr_t ShapeNames = 0xA0;
            static constexpr std::uintptr_t ShapeLibraryCached = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShapeLibrary", 0x80, "SoftObjectProperty"},
            {"ShapeNames", 0xA0, "ArrayProperty"},
            {"ShapeLibraryCached", 0xB0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetShapeLibrary",
            "SetShapeLibrary",
        }};
    };

    struct ControlRigTestData
    {
        static constexpr std::string_view Name = "ControlRigTestData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRigReplay";
        struct Offsets
        {
            static constexpr std::uintptr_t Initial = 0x1D8;
            static constexpr std::uintptr_t InputFrames = 0x260;
            static constexpr std::uintptr_t OutputFrames = 0x270;
            static constexpr std::uintptr_t EventQueue = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Initial", 0x1D8, "StructProperty"},
            {"InputFrames", 0x260, "ArrayProperty"},
            {"OutputFrames", 0x270, "ArrayProperty"},
            {"EventQueue", 0x280, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetFrameIndexForTime",
        }};
    };

    struct ControlRigTestDataFrame
    {
        static constexpr std::string_view Name = "ControlRigTestDataFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AbsoluteTime = 0x0;
            static constexpr std::uintptr_t DeltaTime = 0x8;
            static constexpr std::uintptr_t Variables = 0x10;
            static constexpr std::uintptr_t Pose = 0x20;
            static constexpr std::uintptr_t MetaData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AbsoluteTime", 0x0, "DoubleProperty"},
            {"DeltaTime", 0x8, "DoubleProperty"},
            {"Variables", 0x10, "ArrayProperty"},
            {"Pose", 0x20, "StructProperty"},
            {"MetaData", 0x50, "ArrayProperty"},
        }};
    };

    struct ControlRigTransformWorkflowOptions
    {
        static constexpr std::string_view Name = "ControlRigTransformWorkflowOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRigWorkflowOptions";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformType = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransformType", 0xB0, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProvideWorkflows",
        }};
    };

    struct ControlRigValidationContext
    {
        static constexpr std::string_view Name = "ControlRigValidationContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigValidationPass
    {
        static constexpr std::string_view Name = "ControlRigValidationPass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ControlRigValidator
    {
        static constexpr std::string_view Name = "ControlRigValidator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Passes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Passes", 0x28, "ArrayProperty"},
        }};
    };

    struct ControlRigWorkflowOptions
    {
        static constexpr std::string_view Name = "ControlRigWorkflowOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RigVMUserWorkflowOptions";
        struct Offsets
        {
            static constexpr std::uintptr_t Hierarchy = 0x98;
            static constexpr std::uintptr_t Selection = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Hierarchy", 0x98, "ObjectProperty"},
            {"Selection", 0xA0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "EnsureAtLeastOneRigElementSelected",
        }};
    };

    struct ControlRotationOrder
    {
        static constexpr std::string_view Name = "ControlRotationOrder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationOrder = 0x0;
            static constexpr std::uintptr_t bOverrideSetting = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RotationOrder", 0x0, "EnumProperty"},
            {"bOverrideSetting", 0x1, "BoolProperty"},
        }};
    };

    struct ControlSettingsData
    {
        static constexpr std::string_view Name = "ControlSettingsData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeSettings = 0x0;
            static constexpr std::uintptr_t Customization = 0x90;
            static constexpr std::uintptr_t DrivenControls = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShapeSettings", 0x0, "StructProperty"},
            {"Customization", 0x90, "StructProperty"},
            {"DrivenControls", 0xB0, "ArrayProperty"},
        }};
    };

    struct ControlSettingsTopology
    {
        static constexpr std::string_view Name = "ControlSettingsTopology";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationType = 0x0;
            static constexpr std::uintptr_t ControlType = 0x1;
            static constexpr std::uintptr_t LayeredCombineMode = 0x2;
            static constexpr std::uintptr_t DisplayName = 0x4;
            static constexpr std::uintptr_t PrimaryAxis = 0x8;
            static constexpr std::uintptr_t bIsCurve = 0x9;
            static constexpr std::uintptr_t LimitEnabled = 0x10;
            static constexpr std::uintptr_t bDrawLimits = 0x20;
            static constexpr std::uintptr_t MinimumValue = 0x24;
            static constexpr std::uintptr_t MaximumValue = 0xA8;
            static constexpr std::uintptr_t bShapeVisible = 0x12C;
            static constexpr std::uintptr_t bIsTransientControl = 0x12D;
            static constexpr std::uintptr_t ControlEnum = 0x130;
            static constexpr std::uintptr_t bGroupWithParentControl = 0x138;
            static constexpr std::uintptr_t bRestrictSpaceSwitching = 0x139;
            static constexpr std::uintptr_t FilteredChannels = 0x140;
            static constexpr std::uintptr_t PreferredRotationOrder = 0x150;
            static constexpr std::uintptr_t bUsePreferredRotationOrder = 0x151;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"AnimationType", 0x0, "EnumProperty"},
            {"ControlType", 0x1, "EnumProperty"},
            {"LayeredCombineMode", 0x2, "EnumProperty"},
            {"DisplayName", 0x4, "NameProperty"},
            {"PrimaryAxis", 0x8, "EnumProperty"},
            {"bIsCurve", 0x9, "BoolProperty"},
            {"LimitEnabled", 0x10, "ArrayProperty"},
            {"bDrawLimits", 0x20, "BoolProperty"},
            {"MinimumValue", 0x24, "StructProperty"},
            {"MaximumValue", 0xA8, "StructProperty"},
            {"bShapeVisible", 0x12C, "BoolProperty"},
            {"bIsTransientControl", 0x12D, "BoolProperty"},
            {"ControlEnum", 0x130, "ObjectProperty"},
            {"bGroupWithParentControl", 0x138, "BoolProperty"},
            {"bRestrictSpaceSwitching", 0x139, "BoolProperty"},
            {"FilteredChannels", 0x140, "ArrayProperty"},
            {"PreferredRotationOrder", 0x150, "EnumProperty"},
            {"bUsePreferredRotationOrder", 0x151, "BoolProperty"},
        }};
    };

    struct ControlShapeActorCreationParam
    {
        static constexpr std::string_view Name = "ControlShapeActorCreationParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnumParameterNameAndCurve
    {
        static constexpr std::string_view Name = "EnumParameterNameAndCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterCurve", 0x8, "StructProperty"},
        }};
    };

    struct FKControlRig
    {
        static constexpr std::string_view Name = "FKControlRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRig";
        struct Offsets
        {
            static constexpr std::uintptr_t IsControlActive = 0x920;
            static constexpr std::uintptr_t ApplyMode = 0x930;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsControlActive", 0x920, "ArrayProperty"},
            {"ApplyMode", 0x930, "EnumProperty"},
        }};
    };

    struct IntegerParameterNameAndCurve
    {
        static constexpr std::string_view Name = "IntegerParameterNameAndCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseParameterNameAndValue";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterCurve", 0x8, "StructProperty"},
        }};
    };

    struct ModularRig
    {
        static constexpr std::string_view Name = "ModularRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControlRig";
        struct Offsets
        {
            static constexpr std::uintptr_t Modules = 0x8D0;
            static constexpr std::uintptr_t ModularRigSettings = 0x900;
            static constexpr std::uintptr_t ExecutionQueue = 0x908;
            static constexpr std::uintptr_t ModularRigModel = 0x920;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Modules", 0x8D0, "ArrayProperty"},
            {"ModularRigSettings", 0x900, "StructProperty"},
            {"ExecutionQueue", 0x908, "ArrayProperty"},
            {"ModularRigModel", 0x920, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "ExecuteEventOnAllModules",
            "ExecuteEventOnModuleByNameForBP",
            "ExecuteEventOnModuleForBP",
            "GetEventsForAllModules",
            "GetEventsForModule",
            "GetEventsForModuleByName",
            "GetModuleNames",
            "GetModulePaths",
            "GetModuleRig",
            "GetModuleRigByName",
            "GetParentModuleNameForBP",
            "GetParentPathForBP",
        }};
    };

    struct ModularRigConnections
    {
        static constexpr std::string_view Name = "ModularRigConnections";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectionList = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConnectionList", 0x0, "ArrayProperty"},
        }};
    };

    struct ModularRigController
    {
        static constexpr std::string_view Name = "ModularRigController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 32> FunctionNames{{
            "AddModule",
            "AddTargetToArrayConnector",
            "AutoConnectModules",
            "AutoConnectSecondaryConnectors",
            "BindModuleVariable",
            "CanConnectConnectorToElement",
            "CanConnectConnectorToElements",
            "ConnectConnectorToElement",
            "ConnectConnectorToElements",
            "DeleteModule",
            "DeselectModule",
            "DisconnectConnector",
            "DisconnectCyclicConnectors",
            "ExportModuleSettingsToString",
            "GetAllModules",
            "GetConnectorsForModule",
            "GetModuleReference",
            "GetSelectedModules",
            "ImportModuleSettingsFromString",
            "MirrorModule",
            "RenameModule",
            "ReorderModule",
            "ReparentModule",
            "ResetConfigValueInModule",
            "SelectModule",
            "SetConfigValueInModule",
            "SetModuleSelection",
            "SwapModuleClass",
            "SwapModuleSource",
            "SwapModulesOfClass",
            "SwapModulesWithSource",
            "UnBindModuleVariable",
        }};
    };

    struct ModularRigModel
    {
        static constexpr std::string_view Name = "ModularRigModel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Modules = 0x0;
            static constexpr std::uintptr_t Connections = 0x30;
            static constexpr std::uintptr_t Controller = 0x50;
            static constexpr std::uintptr_t PreviousModulePaths = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Modules", 0x0, "ArrayProperty"},
            {"Connections", 0x30, "StructProperty"},
            {"Controller", 0x50, "ObjectProperty"},
            {"PreviousModulePaths", 0x58, "MapProperty"},
        }};
    };

    struct ModularRigModuleSettingsForClipboard
    {
        static constexpr std::string_view Name = "ModularRigModuleSettingsForClipboard";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleClass = 0x0;
            static constexpr std::uintptr_t Defaults = 0x18;
            static constexpr std::uintptr_t Overrides = 0x28;
            static constexpr std::uintptr_t Bindings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModuleClass", 0x0, "StructProperty"},
            {"Defaults", 0x18, "MapProperty"},
            {"Overrides", 0x28, "MapProperty"},
            {"Bindings", 0x38, "MapProperty"},
        }};
    };

    struct ModularRigModuleSettingsSetForClipboard
    {
        static constexpr std::string_view Name = "ModularRigModuleSettingsSetForClipboard";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x0, "MapProperty"},
        }};
    };

    struct ModularRigResolveResult
    {
        static constexpr std::string_view Name = "ModularRigResolveResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Connector = 0x0;
            static constexpr std::uintptr_t Matches = 0x8;
            static constexpr std::uintptr_t Excluded = 0x18;
            static constexpr std::uintptr_t State = 0x28;
            static constexpr std::uintptr_t Message = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Connector", 0x0, "StructProperty"},
            {"Matches", 0x8, "ArrayProperty"},
            {"Excluded", 0x18, "ArrayProperty"},
            {"State", 0x28, "EnumProperty"},
            {"Message", 0x30, "TextProperty"},
        }};
    };

    struct ModularRigRuleManager
    {
        static constexpr std::string_view Name = "ModularRigRuleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModularRigSettings
    {
        static constexpr std::string_view Name = "ModularRigSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoResolve = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAutoResolve", 0x0, "BoolProperty"},
        }};
    };

    struct ModularRigSingleConnection
    {
        static constexpr std::string_view Name = "ModularRigSingleConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Connector = 0x0;
            static constexpr std::uintptr_t Target = 0x8;
            static constexpr std::uintptr_t Targets = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Connector", 0x0, "StructProperty"},
            {"Target", 0x8, "StructProperty"},
            {"Targets", 0x10, "ArrayProperty"},
        }};
    };

    struct ModuleReferenceData
    {
        static constexpr std::string_view Name = "ModuleReferenceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulePath = 0x0;
            static constexpr std::uintptr_t ReferencedModule = 0x10;
            static constexpr std::uintptr_t ReferencedModuleAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModulePath", 0x0, "StrProperty"},
            {"ReferencedModule", 0x10, "StructProperty"},
            {"ReferencedModuleAsset", 0x28, "StructProperty"},
        }};
    };

    struct MovieSceneControlRigInstanceData
    {
        static constexpr std::string_view Name = "MovieSceneControlRigInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneSequenceInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t bAdditive = 0x8;
            static constexpr std::uintptr_t bApplyBoneFilter = 0x9;
            static constexpr std::uintptr_t BoneFilter = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t Operand = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bAdditive", 0x8, "BoolProperty"},
            {"bApplyBoneFilter", 0x9, "BoolProperty"},
            {"BoneFilter", 0x10, "StructProperty"},
            {"Weight", 0x20, "StructProperty"},
            {"Operand", 0xF0, "StructProperty"},
        }};
    };

    struct MovieSceneControlRigParameterEvaluatorSystem
    {
        static constexpr std::string_view Name = "MovieSceneControlRigParameterEvaluatorSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleBlenderSystem = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleBlenderSystem", 0x140, "ObjectProperty"},
        }};
    };

    struct MovieSceneControlRigParameterSection
    {
        static constexpr std::string_view Name = "MovieSceneControlRigParameterSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneParameterSection";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRig = 0x1F8;
            static constexpr std::uintptr_t ControlRigClass = 0x200;
            static constexpr std::uintptr_t ControlRigAssetReference = 0x208;
            static constexpr std::uintptr_t ControlsMask = 0x218;
            static constexpr std::uintptr_t ControlNameMask = 0x228;
            static constexpr std::uintptr_t TransformMask = 0x238;
            static constexpr std::uintptr_t Weight = 0x240;
            static constexpr std::uintptr_t ControlChannelMap = 0x310;
            static constexpr std::uintptr_t EnumParameterNamesAndCurves = 0x320;
            static constexpr std::uintptr_t IntegerParameterNamesAndCurves = 0x330;
            static constexpr std::uintptr_t SpaceChannels = 0x340;
            static constexpr std::uintptr_t ConstraintsChannels = 0x350;
            static constexpr std::uintptr_t PlayRate = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ControlRig", 0x1F8, "ObjectProperty"},
            {"ControlRigClass", 0x200, "ClassProperty"},
            {"ControlRigAssetReference", 0x208, "StructProperty"},
            {"ControlsMask", 0x218, "ArrayProperty"},
            {"ControlNameMask", 0x228, "SetProperty"},
            {"TransformMask", 0x238, "StructProperty"},
            {"Weight", 0x240, "StructProperty"},
            {"ControlChannelMap", 0x310, "MapProperty"},
            {"EnumParameterNamesAndCurves", 0x320, "ArrayProperty"},
            {"IntegerParameterNamesAndCurves", 0x330, "ArrayProperty"},
            {"SpaceChannels", 0x340, "ArrayProperty"},
            {"ConstraintsChannels", 0x350, "ArrayProperty"},
            {"PlayRate", 0x360, "StructProperty"},
        }};
    };

    struct MovieSceneControlRigParameterTemplate
    {
        static constexpr std::string_view Name = "MovieSceneControlRigParameterTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Enums = 0x80;
            static constexpr std::uintptr_t Integers = 0x90;
            static constexpr std::uintptr_t Spaces = 0xA0;
            static constexpr std::uintptr_t Constraints = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Enums", 0x80, "ArrayProperty"},
            {"Integers", 0x90, "ArrayProperty"},
            {"Spaces", 0xA0, "ArrayProperty"},
            {"Constraints", 0xB0, "ArrayProperty"},
        }};
    };

    struct MovieSceneControlRigParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneControlRigParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKeyPerControl = 0x110;
            static constexpr std::uintptr_t ControlRig = 0x158;
            static constexpr std::uintptr_t SectionToKey = 0x160;
            static constexpr std::uintptr_t Sections = 0x168;
            static constexpr std::uintptr_t TrackName = 0x178;
            static constexpr std::uintptr_t ControlsRotationOrder = 0x180;
            static constexpr std::uintptr_t PriorityOrder = 0x190;
            static constexpr std::uintptr_t ControlRigSettingsOverrides = 0x198;
            static constexpr std::uintptr_t GameWorldControlRigs = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SectionToKeyPerControl", 0x110, "MapProperty"},
            {"ControlRig", 0x158, "ObjectProperty"},
            {"SectionToKey", 0x160, "ObjectProperty"},
            {"Sections", 0x168, "ArrayProperty"},
            {"TrackName", 0x178, "NameProperty"},
            {"ControlsRotationOrder", 0x180, "MapProperty"},
            {"PriorityOrder", 0x190, "IntProperty"},
            {"ControlRigSettingsOverrides", 0x198, "StructProperty"},
            {"GameWorldControlRigs", 0x1A8, "MapProperty"},
        }};
    };

    struct MovieSceneControlRigSpaceBaseKey
    {
        static constexpr std::string_view Name = "MovieSceneControlRigSpaceBaseKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceType = 0x0;
            static constexpr std::uintptr_t ControlRigElement = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpaceType", 0x0, "EnumProperty"},
            {"ControlRigElement", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneControlRigSpaceChannel
    {
        static constexpr std::string_view Name = "MovieSceneControlRigSpaceChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyTimes = 0x50;
            static constexpr std::uintptr_t KeyValues = 0x60;
            static constexpr std::uintptr_t KeyHandles = 0x70;
            static constexpr std::uintptr_t DefaultValue = 0xD0;
            static constexpr std::uintptr_t bHasDefaultValue = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"KeyTimes", 0x50, "ArrayProperty"},
            {"KeyValues", 0x60, "ArrayProperty"},
            {"KeyHandles", 0x70, "StructProperty"},
            {"DefaultValue", 0xD0, "StructProperty"},
            {"bHasDefaultValue", 0xDC, "BoolProperty"},
        }};
    };

    struct RegionScaleFactors
    {
        static constexpr std::string_view Name = "RegionScaleFactors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PositiveWidth = 0x0;
            static constexpr std::uintptr_t NegativeWidth = 0x4;
            static constexpr std::uintptr_t PositiveHeight = 0x8;
            static constexpr std::uintptr_t NegativeHeight = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PositiveWidth", 0x0, "FloatProperty"},
            {"NegativeWidth", 0x4, "FloatProperty"},
            {"PositiveHeight", 0x8, "FloatProperty"},
            {"NegativeHeight", 0xC, "FloatProperty"},
        }};
    };

    struct RigAndConnectionRule
    {
        static constexpr std::string_view Name = "RigAndConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildRules = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildRules", 0x8, "ArrayProperty"},
        }};
    };

    struct RigArraySizeConnectionRule
    {
        static constexpr std::string_view Name = "RigArraySizeConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
            static constexpr std::uintptr_t MinNumConnections = 0x8;
            static constexpr std::uintptr_t bMinEnabled = 0xC;
            static constexpr std::uintptr_t MaxNumConnections = 0x10;
            static constexpr std::uintptr_t bMaxEnabled = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinNumConnections", 0x8, "IntProperty"},
            {"bMinEnabled", 0xC, "BoolProperty"},
            {"MaxNumConnections", 0x10, "IntProperty"},
            {"bMaxEnabled", 0x14, "BoolProperty"},
        }};
    };

    struct RigBaseComponent
    {
        static constexpr std::string_view Name = "RigBaseComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigBaseElement
    {
        static constexpr std::string_view Name = "RigBaseElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigBaseMetadata
    {
        static constexpr std::string_view Name = "RigBaseMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Type", 0xC, "EnumProperty"},
        }};
    };

    struct RigBone
    {
        static constexpr std::string_view Name = "RigBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigElement";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentName = 0x10;
            static constexpr std::uintptr_t ParentIndex = 0x14;
            static constexpr std::uintptr_t InitialTransform = 0x20;
            static constexpr std::uintptr_t GlobalTransform = 0x80;
            static constexpr std::uintptr_t LocalTransform = 0xE0;
            static constexpr std::uintptr_t Dependents = 0x140;
            static constexpr std::uintptr_t Type = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ParentName", 0x10, "NameProperty"},
            {"ParentIndex", 0x14, "IntProperty"},
            {"InitialTransform", 0x20, "StructProperty"},
            {"GlobalTransform", 0x80, "StructProperty"},
            {"LocalTransform", 0xE0, "StructProperty"},
            {"Dependents", 0x140, "ArrayProperty"},
            {"Type", 0x150, "EnumProperty"},
        }};
    };

    struct RigBoneElement
    {
        static constexpr std::string_view Name = "RigBoneElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigSingleParentElement";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneType = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneType", 0x78, "EnumProperty"},
        }};
    };

    struct RigBoneHierarchy
    {
        static constexpr std::string_view Name = "RigBoneHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bones = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Bones", 0x0, "ArrayProperty"},
        }};
    };

    struct RigBoolArrayMetadata
    {
        static constexpr std::string_view Name = "RigBoolArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigBoolMetadata
    {
        static constexpr std::string_view Name = "RigBoolMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "BoolProperty"},
        }};
    };

    struct RigChildOfPrimaryConnectionRule
    {
        static constexpr std::string_view Name = "RigChildOfPrimaryConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigComponentKey
    {
        static constexpr std::string_view Name = "RigComponentKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementKey = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ElementKey", 0x0, "StructProperty"},
            {"Name", 0x8, "NameProperty"},
        }};
    };

    struct RigComputedTransform
    {
        static constexpr std::string_view Name = "RigComputedTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigConnectionRule
    {
        static constexpr std::string_view Name = "RigConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigConnectionRuleStash
    {
        static constexpr std::string_view Name = "RigConnectionRuleStash";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptStructPath = 0x0;
            static constexpr std::uintptr_t ExportedText = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScriptStructPath", 0x0, "StrProperty"},
            {"ExportedText", 0x10, "StrProperty"},
        }};
    };

    struct RigConnectorElement
    {
        static constexpr std::string_view Name = "RigConnectorElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x40, "StructProperty"},
        }};
    };

    struct RigConnectorSettings
    {
        static constexpr std::string_view Name = "RigConnectorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x0;
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t bOptional = 0x11;
            static constexpr std::uintptr_t bIsArray = 0x12;
            static constexpr std::uintptr_t bPostConstruction = 0x13;
            static constexpr std::uintptr_t Rules = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Description", 0x0, "StrProperty"},
            {"Type", 0x10, "EnumProperty"},
            {"bOptional", 0x11, "BoolProperty"},
            {"bIsArray", 0x12, "BoolProperty"},
            {"bPostConstruction", 0x13, "BoolProperty"},
            {"Rules", 0x18, "ArrayProperty"},
        }};
    };

    struct RigConnectorState
    {
        static constexpr std::string_view Name = "RigConnectorState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ResolvedTarget = 0x4;
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ResolvedTarget", 0x4, "StructProperty"},
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct RigControl
    {
        static constexpr std::string_view Name = "RigControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigElement";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlType = 0x10;
            static constexpr std::uintptr_t DisplayName = 0x14;
            static constexpr std::uintptr_t ParentName = 0x18;
            static constexpr std::uintptr_t ParentIndex = 0x1C;
            static constexpr std::uintptr_t SpaceName = 0x20;
            static constexpr std::uintptr_t SpaceIndex = 0x24;
            static constexpr std::uintptr_t OffsetTransform = 0x30;
            static constexpr std::uintptr_t InitialValue = 0x90;
            static constexpr std::uintptr_t Value = 0x114;
            static constexpr std::uintptr_t PrimaryAxis = 0x198;
            static constexpr std::uintptr_t bIsCurve = 0x199;
            static constexpr std::uintptr_t bAnimatable = 0x19A;
            static constexpr std::uintptr_t bLimitTranslation = 0x19B;
            static constexpr std::uintptr_t bLimitRotation = 0x19C;
            static constexpr std::uintptr_t bLimitScale = 0x19D;
            static constexpr std::uintptr_t bDrawLimits = 0x19E;
            static constexpr std::uintptr_t MinimumValue = 0x1A0;
            static constexpr std::uintptr_t MaximumValue = 0x224;
            static constexpr std::uintptr_t bGizmoEnabled = 0x2A8;
            static constexpr std::uintptr_t bGizmoVisible = 0x2A9;
            static constexpr std::uintptr_t GizmoName = 0x2AC;
            static constexpr std::uintptr_t GizmoTransform = 0x2B0;
            static constexpr std::uintptr_t GizmoColor = 0x310;
            static constexpr std::uintptr_t Dependents = 0x320;
            static constexpr std::uintptr_t bIsTransientControl = 0x330;
            static constexpr std::uintptr_t ControlEnum = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"ControlType", 0x10, "EnumProperty"},
            {"DisplayName", 0x14, "NameProperty"},
            {"ParentName", 0x18, "NameProperty"},
            {"ParentIndex", 0x1C, "IntProperty"},
            {"SpaceName", 0x20, "NameProperty"},
            {"SpaceIndex", 0x24, "IntProperty"},
            {"OffsetTransform", 0x30, "StructProperty"},
            {"InitialValue", 0x90, "StructProperty"},
            {"Value", 0x114, "StructProperty"},
            {"PrimaryAxis", 0x198, "EnumProperty"},
            {"bIsCurve", 0x199, "BoolProperty"},
            {"bAnimatable", 0x19A, "BoolProperty"},
            {"bLimitTranslation", 0x19B, "BoolProperty"},
            {"bLimitRotation", 0x19C, "BoolProperty"},
            {"bLimitScale", 0x19D, "BoolProperty"},
            {"bDrawLimits", 0x19E, "BoolProperty"},
            {"MinimumValue", 0x1A0, "StructProperty"},
            {"MaximumValue", 0x224, "StructProperty"},
            {"bGizmoEnabled", 0x2A8, "BoolProperty"},
            {"bGizmoVisible", 0x2A9, "BoolProperty"},
            {"GizmoName", 0x2AC, "NameProperty"},
            {"GizmoTransform", 0x2B0, "StructProperty"},
            {"GizmoColor", 0x310, "StructProperty"},
            {"Dependents", 0x320, "ArrayProperty"},
            {"bIsTransientControl", 0x330, "BoolProperty"},
            {"ControlEnum", 0x338, "ObjectProperty"},
        }};
    };

    struct RigControlCopy
    {
        static constexpr std::string_view Name = "RigControlCopy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ControlType = 0x4;
            static constexpr std::uintptr_t ParentKey = 0x8;
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t OffsetTransform = 0xA0;
            static constexpr std::uintptr_t ParentTransform = 0x100;
            static constexpr std::uintptr_t LocalTransform = 0x160;
            static constexpr std::uintptr_t GlobalTransform = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ControlType", 0x4, "EnumProperty"},
            {"ParentKey", 0x8, "StructProperty"},
            {"Value", 0x10, "StructProperty"},
            {"OffsetTransform", 0xA0, "StructProperty"},
            {"ParentTransform", 0x100, "StructProperty"},
            {"LocalTransform", 0x160, "StructProperty"},
            {"GlobalTransform", 0x1C0, "StructProperty"},
        }};
    };

    struct RigControlElement
    {
        static constexpr std::string_view Name = "RigControlElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigMultiParentElement";
        struct Offsets
        {
            static constexpr std::uintptr_t PreferredEulerAngles = 0x98;
            static constexpr std::uintptr_t TopologyControlSettings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreferredEulerAngles", 0x98, "StructProperty"},
            {"TopologyControlSettings", 0xD0, "StructProperty"},
        }};
    };

    struct RigControlElementCustomization
    {
        static constexpr std::string_view Name = "RigControlElementCustomization";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableSpaces = 0x0;
            static constexpr std::uintptr_t RemovedSpaces = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AvailableSpaces", 0x0, "ArrayProperty"},
            {"RemovedSpaces", 0x10, "ArrayProperty"},
        }};
    };

    struct RigControlHierarchy
    {
        static constexpr std::string_view Name = "RigControlHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Controls = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Controls", 0x0, "ArrayProperty"},
        }};
    };

    struct RigControlLimitEnabled
    {
        static constexpr std::string_view Name = "RigControlLimitEnabled";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bMinimum = 0x0;
            static constexpr std::uintptr_t bMaximum = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bMinimum", 0x0, "BoolProperty"},
            {"bMaximum", 0x1, "BoolProperty"},
        }};
    };

    struct RigControlModifiedContext
    {
        static constexpr std::string_view Name = "RigControlModifiedContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigControlSettings
    {
        static constexpr std::string_view Name = "RigControlSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationType = 0x0;
            static constexpr std::uintptr_t ControlType = 0x1;
            static constexpr std::uintptr_t LayeredCombineMode = 0x2;
            static constexpr std::uintptr_t DisplayName = 0x4;
            static constexpr std::uintptr_t PrimaryAxis = 0x8;
            static constexpr std::uintptr_t bIsCurve = 0x9;
            static constexpr std::uintptr_t LimitEnabled = 0x10;
            static constexpr std::uintptr_t bDrawLimits = 0x20;
            static constexpr std::uintptr_t MinimumValue = 0x24;
            static constexpr std::uintptr_t MaximumValue = 0xA8;
            static constexpr std::uintptr_t bShapeVisible = 0x12C;
            static constexpr std::uintptr_t ShapeVisibility = 0x12D;
            static constexpr std::uintptr_t ShapeName = 0x130;
            static constexpr std::uintptr_t ShapeColor = 0x134;
            static constexpr std::uintptr_t bIsTransientControl = 0x144;
            static constexpr std::uintptr_t ControlEnum = 0x148;
            static constexpr std::uintptr_t Customization = 0x150;
            static constexpr std::uintptr_t DrivenControls = 0x170;
            static constexpr std::uintptr_t bGroupWithParentControl = 0x190;
            static constexpr std::uintptr_t bRestrictSpaceSwitching = 0x191;
            static constexpr std::uintptr_t FilteredChannels = 0x198;
            static constexpr std::uintptr_t PreferredRotationOrder = 0x1A8;
            static constexpr std::uintptr_t bUsePreferredRotationOrder = 0x1A9;
            static constexpr std::uintptr_t ShapeTransform = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"AnimationType", 0x0, "EnumProperty"},
            {"ControlType", 0x1, "EnumProperty"},
            {"LayeredCombineMode", 0x2, "EnumProperty"},
            {"DisplayName", 0x4, "NameProperty"},
            {"PrimaryAxis", 0x8, "EnumProperty"},
            {"bIsCurve", 0x9, "BoolProperty"},
            {"LimitEnabled", 0x10, "ArrayProperty"},
            {"bDrawLimits", 0x20, "BoolProperty"},
            {"MinimumValue", 0x24, "StructProperty"},
            {"MaximumValue", 0xA8, "StructProperty"},
            {"bShapeVisible", 0x12C, "BoolProperty"},
            {"ShapeVisibility", 0x12D, "EnumProperty"},
            {"ShapeName", 0x130, "NameProperty"},
            {"ShapeColor", 0x134, "StructProperty"},
            {"bIsTransientControl", 0x144, "BoolProperty"},
            {"ControlEnum", 0x148, "ObjectProperty"},
            {"Customization", 0x150, "StructProperty"},
            {"DrivenControls", 0x170, "ArrayProperty"},
            {"bGroupWithParentControl", 0x190, "BoolProperty"},
            {"bRestrictSpaceSwitching", 0x191, "BoolProperty"},
            {"FilteredChannels", 0x198, "ArrayProperty"},
            {"PreferredRotationOrder", 0x1A8, "EnumProperty"},
            {"bUsePreferredRotationOrder", 0x1A9, "BoolProperty"},
            {"ShapeTransform", 0x1B0, "StructProperty"},
        }};
    };

    struct RigControlShapeData
    {
        static constexpr std::string_view Name = "RigControlShapeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeName = 0x0;
            static constexpr std::uintptr_t ShapeColor = 0x4;
            static constexpr std::uintptr_t ShapeTransform = 0x20;
            static constexpr std::uintptr_t ShapeVisibility = 0x80;
            static constexpr std::uintptr_t bShapeVisible = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ShapeName", 0x0, "NameProperty"},
            {"ShapeColor", 0x4, "StructProperty"},
            {"ShapeTransform", 0x20, "StructProperty"},
            {"ShapeVisibility", 0x80, "EnumProperty"},
            {"bShapeVisible", 0x81, "BoolProperty"},
        }};
    };

    struct RigControlValue
    {
        static constexpr std::string_view Name = "RigControlValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatStorage = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatStorage", 0x0, "StructProperty"},
        }};
    };

    struct RigControlValueStorage
    {
        static constexpr std::string_view Name = "RigControlValueStorage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Float00 = 0x0;
            static constexpr std::uintptr_t Float01 = 0x4;
            static constexpr std::uintptr_t Float02 = 0x8;
            static constexpr std::uintptr_t Float03 = 0xC;
            static constexpr std::uintptr_t Float10 = 0x10;
            static constexpr std::uintptr_t Float11 = 0x14;
            static constexpr std::uintptr_t Float12 = 0x18;
            static constexpr std::uintptr_t Float13 = 0x1C;
            static constexpr std::uintptr_t Float20 = 0x20;
            static constexpr std::uintptr_t Float21 = 0x24;
            static constexpr std::uintptr_t Float22 = 0x28;
            static constexpr std::uintptr_t Float23 = 0x2C;
            static constexpr std::uintptr_t Float30 = 0x30;
            static constexpr std::uintptr_t Float31 = 0x34;
            static constexpr std::uintptr_t Float32 = 0x38;
            static constexpr std::uintptr_t Float33 = 0x3C;
            static constexpr std::uintptr_t bValid = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Float00", 0x0, "FloatProperty"},
            {"Float01", 0x4, "FloatProperty"},
            {"Float02", 0x8, "FloatProperty"},
            {"Float03", 0xC, "FloatProperty"},
            {"Float10", 0x10, "FloatProperty"},
            {"Float11", 0x14, "FloatProperty"},
            {"Float12", 0x18, "FloatProperty"},
            {"Float13", 0x1C, "FloatProperty"},
            {"Float20", 0x20, "FloatProperty"},
            {"Float21", 0x24, "FloatProperty"},
            {"Float22", 0x28, "FloatProperty"},
            {"Float23", 0x2C, "FloatProperty"},
            {"Float30", 0x30, "FloatProperty"},
            {"Float31", 0x34, "FloatProperty"},
            {"Float32", 0x38, "FloatProperty"},
            {"Float33", 0x3C, "FloatProperty"},
            {"bValid", 0x80, "BoolProperty"},
        }};
    };

    struct RigCurrentAndInitialDirtyState
    {
        static constexpr std::string_view Name = "RigCurrentAndInitialDirtyState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x0;
            static constexpr std::uintptr_t Initial = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Current", 0x0, "StructProperty"},
            {"Initial", 0x8, "StructProperty"},
        }};
    };

    struct RigCurrentAndInitialTransform
    {
        static constexpr std::string_view Name = "RigCurrentAndInitialTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x0;
            static constexpr std::uintptr_t Initial = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Current", 0x0, "StructProperty"},
            {"Initial", 0x8, "StructProperty"},
        }};
    };

    struct RigCurve
    {
        static constexpr std::string_view Name = "RigCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x10, "FloatProperty"},
        }};
    };

    struct RigCurveContainer
    {
        static constexpr std::string_view Name = "RigCurveContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curves", 0x0, "ArrayProperty"},
        }};
    };

    struct RigCurveElement
    {
        static constexpr std::string_view Name = "RigCurveElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigDispatchFactory
    {
        static constexpr std::string_view Name = "RigDispatchFactory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_AnimAttributeBase
    {
        static constexpr std::string_view Name = "RigDispatch_AnimAttributeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_ComponentBase
    {
        static constexpr std::string_view Name = "RigDispatch_ComponentBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_GetAnimAttribute
    {
        static constexpr std::string_view Name = "RigDispatch_GetAnimAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_AnimAttributeBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_GetComponentContent
    {
        static constexpr std::string_view Name = "RigDispatch_GetComponentContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_ComponentBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_GetMetadata
    {
        static constexpr std::string_view Name = "RigDispatch_GetMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_MetadataBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_GetModuleMetadata
    {
        static constexpr std::string_view Name = "RigDispatch_GetModuleMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_GetMetadata";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_GetUserData
    {
        static constexpr std::string_view Name = "RigDispatch_GetUserData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_MetadataBase
    {
        static constexpr std::string_view Name = "RigDispatch_MetadataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatchFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_SetAnimAttribute
    {
        static constexpr std::string_view Name = "RigDispatch_SetAnimAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_AnimAttributeBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_SetComponentContent
    {
        static constexpr std::string_view Name = "RigDispatch_SetComponentContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_ComponentBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_SetMetadata
    {
        static constexpr std::string_view Name = "RigDispatch_SetMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_MetadataBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_SetModuleMetadata
    {
        static constexpr std::string_view Name = "RigDispatch_SetModuleMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_SetMetadata";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigDispatch_SpawnComponent
    {
        static constexpr std::string_view Name = "RigDispatch_SpawnComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigDispatch_ComponentBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigElement
    {
        static constexpr std::string_view Name = "RigElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Index = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Index", 0xC, "IntProperty"},
        }};
    };

    struct RigElementKey
    {
        static constexpr std::string_view Name = "RigElementKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Name", 0x4, "NameProperty"},
        }};
    };

    struct RigElementKeyArrayMetadata
    {
        static constexpr std::string_view Name = "RigElementKeyArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigElementKeyCollection
    {
        static constexpr std::string_view Name = "RigElementKeyCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Keys = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Keys", 0x0, "ArrayProperty"},
        }};
    };

    struct RigElementKeyMetadata
    {
        static constexpr std::string_view Name = "RigElementKeyMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigElementKeyWithLabel
    {
        static constexpr std::string_view Name = "RigElementKeyWithLabel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"Label", 0x8, "NameProperty"},
        }};
    };

    struct RigElementParentConstraint
    {
        static constexpr std::string_view Name = "RigElementParentConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigElementParentConstraintData
    {
        static constexpr std::string_view Name = "RigElementParentConstraintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigElementParentConstraintTopology
    {
        static constexpr std::string_view Name = "RigElementParentConstraintTopology";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigElementResolveResult
    {
        static constexpr std::string_view Name = "RigElementResolveResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t State = 0x8;
            static constexpr std::uintptr_t Message = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"State", 0x8, "EnumProperty"},
            {"Message", 0x10, "TextProperty"},
        }};
    };

    struct RigElementWeight
    {
        static constexpr std::string_view Name = "RigElementWeight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x4;
            static constexpr std::uintptr_t Scale = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Location", 0x0, "FloatProperty"},
            {"Rotation", 0x4, "FloatProperty"},
            {"Scale", 0x8, "FloatProperty"},
        }};
    };

    struct RigEventContext
    {
        static constexpr std::string_view Name = "RigEventContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigFloatArrayMetadata
    {
        static constexpr std::string_view Name = "RigFloatArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigFloatMetadata
    {
        static constexpr std::string_view Name = "RigFloatMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "FloatProperty"},
        }};
    };

    struct RigHierarchy
    {
        static constexpr std::string_view Name = "RigHierarchy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifiedEventDynamic = 0x40;
            static constexpr std::uintptr_t bEnableDirtyPropagation = 0x388;
            static constexpr std::uintptr_t TransformStackIndex = 0x444;
            static constexpr std::uintptr_t HierarchyController = 0x4C8;
            static constexpr std::uintptr_t RuleManager = 0x4D8;
            static constexpr std::uintptr_t HierarchyForCacheValidation = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ModifiedEventDynamic", 0x40, "MulticastInlineDelegateProperty"},
            {"bEnableDirtyPropagation", 0x388, "BoolProperty"},
            {"TransformStackIndex", 0x444, "IntProperty"},
            {"HierarchyController", 0x4C8, "ObjectProperty"},
            {"RuleManager", 0x4D8, "ObjectProperty"},
            {"HierarchyForCacheValidation", 0x538, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 189> FunctionNames{{
            "Contains_ForBlueprint",
            "CopyHierarchy",
            "CopyPose",
            "FindBone_ForBlueprintOnly",
            "FindControl_ForBlueprintOnly",
            "FindNull_ForBlueprintOnly",
            "GetAllComponentKeys",
            "GetAllKeys_ForBlueprint",
            "GetBoneKeys",
            "GetBoneType_ForBlueprintOnly",
            "GetBoolArrayMetadata",
            "GetBoolMetadata",
            "GetChildren",
            "GetComponentContent",
            "GetComponentKey",
            "GetComponentKeys",
            "GetComponentName",
            "GetComponentType",
            "GetConnectorKeys",
            "GetConnectorStates",
            "GetControlKeys",
            "GetControlPreferredEulerAngles",
            "GetControlPreferredEulerAnglesByIndex",
            "GetControlPreferredEulerRotationOrder",
            "GetControlPreferredEulerRotationOrderByIndex",
            "GetControlPreferredRotator",
            "GetControlPreferredRotatorByIndex",
            "GetControlSettings_ForBlueprintOnly",
            "GetControlValue",
            "GetControlValueByIndex",
            "GetController",
            "GetCurveKeys",
            "GetCurveValue",
            "GetCurveValueByIndex",
            "GetDefaultParent",
            "GetEulerTransformFromControlValue",
            "GetFirstParent",
            "GetFloatArrayMetadata",
            "GetFloatFromControlValue",
            "GetFloatMetadata",
            "GetGlobalControlOffsetTransform",
            "GetGlobalControlOffsetTransformByIndex",
            "GetGlobalControlShapeTransform",
            "GetGlobalControlShapeTransformByIndex",
            "GetGlobalTransform",
            "GetGlobalTransformByIndex",
            "GetIndex_ForBlueprint",
            "GetInt32ArrayMetadata",
            "GetInt32Metadata",
            "GetIntFromControlValue",
            "GetKey",
            "GetKeys",
            "GetLinearColorArrayMetadata",
            "GetLinearColorMetadata",
            "GetLocalControlShapeTransform",
            "GetLocalControlShapeTransformByIndex",
            "GetLocalIndex_ForBlueprint",
            "GetLocalTransform",
            "GetLocalTransformByIndex",
            "GetMetadataNames",
            "GetMetadataType",
            "GetModuleFName",
            "GetModuleName",
            "GetModulePath",
            "GetModulePathFName",
            "GetModulePrefix",
            "GetNameArrayMetadata",
            "GetNameMetadata",
            "GetNameSpaceFName",
            "GetNamespace",
            "GetNullKeys",
            "GetNumberOfParents",
            "GetParentTransform",
            "GetParentTransformByIndex",
            "GetParentWeight",
            "GetParentWeightArray",
            "GetParents",
            "GetPose",
            "GetPreviousHierarchyName",
            "GetPreviousHierarchyParent",
            "GetPreviousName",
            "GetPreviousParent",
            "GetQuatArrayMetadata",
            "GetQuatMetadata",
            "GetReferenceKeys",
            "GetRigElementKeyArrayMetadata",
            "GetRigElementKeyMetadata",
            "GetRootElementKeys",
            "GetRotatorArrayMetadata",
            "GetRotatorFromControlValue",
            "GetRotatorMetadata",
            "GetRuleManager",
            "GetSelectedHierarchyKeys_ForBlueprint",
            "GetSelectedKeys",
            "GetSocketKeys",
            "GetSocketStates",
            "GetTags",
            "GetTransformArrayMetadata",
            "GetTransformFromControlValue",
            "GetTransformMetadata",
            "GetTransformNoScaleFromControlValue",
            "GetVector2DFromControlValue",
            "GetVectorArrayMetadata",
            "GetVectorFromControlValue",
            "GetVectorMetadata",
            "HasTag",
            "IsComponentSelected",
            "IsControllerAvailable",
            "IsCurveValueSet",
            "IsCurveValueSetByIndex",
            "IsParentedTo",
            "IsProcedural",
            "IsSelected",
            "IsSelectedByIndex",
            "IsValidIndex",
            "MakeControlValueFromBool",
            "MakeControlValueFromEulerTransform",
            "MakeControlValueFromFloat",
            "MakeControlValueFromInt",
            "MakeControlValueFromRotator",
            "MakeControlValueFromTransform",
            "MakeControlValueFromTransformNoScale",
            "MakeControlValueFromVector",
            "MakeControlValueFromVector2D",
            "Num",
            "NumComponents",
            "RemoveAllMetadata",
            "RemoveMetadata",
            "Reset",
            "ResetCurveValues",
            "ResetPoseToInitial",
            "ResetToDefault",
            "RestoreConnectorsFromStates",
            "RestoreSocketsFromStates",
            "SendAutoKeyEvent",
            "SetBoolArrayMetadata",
            "SetBoolMetadata",
            "SetConnectorSettings",
            "SetConnectorSettingsByIndex",
            "SetControlOffsetTransform",
            "SetControlOffsetTransformByIndex",
            "SetControlPreferredEulerAngles",
            "SetControlPreferredEulerAnglesByIndex",
            "SetControlPreferredRotationOrder",
            "SetControlPreferredRotationOrderByIndex",
            "SetControlPreferredRotator",
            "SetControlPreferredRotatorByIndex",
            "SetControlSettings",
            "SetControlSettingsByIndex",
            "SetControlShapeTransform",
            "SetControlShapeTransformByIndex",
            "SetControlValue",
            "SetControlValueByIndex",
            "SetControlVisibility",
            "SetControlVisibilityByIndex",
            "SetCurveValue",
            "SetCurveValueByIndex",
            "SetFloatArrayMetadata",
            "SetFloatMetadata",
            "SetGlobalTransform",
            "SetGlobalTransformByIndex",
            "SetInt32ArrayMetadata",
            "SetInt32Metadata",
            "SetLinearColorArrayMetadata",
            "SetLinearColorMetadata",
            "SetLocalTransform",
            "SetLocalTransformByIndex",
            "SetNameArrayMetadata",
            "SetNameMetadata",
            "SetParentWeight",
            "SetParentWeightArray",
            "SetPose_ForBlueprint",
            "SetQuatArrayMetadata",
            "SetQuatMetadata",
            "SetRigElementKeyArrayMetadata",
            "SetRigElementKeyMetadata",
            "SetRotatorArrayMetadata",
            "SetRotatorMetadata",
            "SetTag",
            "SetTransformArrayMetadata",
            "SetTransformMetadata",
            "SetVectorArrayMetadata",
            "SetVectorMetadata",
            "SortKeys",
            "SwitchToDefaultParent",
            "SwitchToParent",
            "SwitchToWorldSpace",
            "UnsetCurveValue",
            "UnsetCurveValueByIndex",
        }};
    };

    struct RigHierarchyContainer
    {
        static constexpr std::string_view Name = "RigHierarchyContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneHierarchy = 0x0;
            static constexpr std::uintptr_t SpaceHierarchy = 0x10;
            static constexpr std::uintptr_t ControlHierarchy = 0x20;
            static constexpr std::uintptr_t CurveContainer = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoneHierarchy", 0x0, "StructProperty"},
            {"SpaceHierarchy", 0x10, "StructProperty"},
            {"ControlHierarchy", 0x20, "StructProperty"},
            {"CurveContainer", 0x30, "StructProperty"},
        }};
    };

    struct RigHierarchyController
    {
        static constexpr std::string_view Name = "RigHierarchyController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bReportWarningsAndErrors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReportWarningsAndErrors", 0x28, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 56> FunctionNames{{
            "AddAnimationChannel_ForBlueprint",
            "AddAvailableSpace",
            "AddBone",
            "AddChannelHost",
            "AddComponent",
            "AddConnector",
            "AddControl_ForBlueprint",
            "AddCurve",
            "AddNull",
            "AddParent",
            "AddSocket",
            "ClearSelection",
            "DeselectComponent",
            "DeselectElement",
            "DeselectHierarchyKey",
            "DuplicateElements",
            "ExportSelectionToText",
            "ExportToText",
            "GetControlData",
            "GetControlSettings",
            "GetHierarchy",
            "ImportBones",
            "ImportBonesFromSkeletalMesh",
            "ImportCurves",
            "ImportCurvesFromSkeletalMesh",
            "ImportFromText",
            "ImportPreviewSkeletalMesh",
            "ImportSocketsFromSkeletalMesh",
            "MirrorElements",
            "RemoveAllParents",
            "RemoveAvailableSpace",
            "RemoveChannelHost",
            "RemoveComponent",
            "RemoveElement",
            "RemoveParent",
            "RenameComponent",
            "RenameElement",
            "ReorderElement",
            "ReparentComponent",
            "SelectComponent",
            "SelectElement",
            "SelectHierarchyKey",
            "SetAvailableSpaceIndex",
            "SetAvailableSpaceLabel",
            "SetComponentContent",
            "SetComponentSelection",
            "SetControlData",
            "SetControlSettings",
            "SetDisplayName",
            "SetHierarchy",
            "SetHierarchySelection",
            "SetParent",
            "SetSelection",
            "SwitchToDefaultParent",
            "SwitchToParent",
            "SwitchToWorldSpace",
        }};
    };

    struct RigHierarchyCopyPasteContent
    {
        static constexpr std::string_view Name = "RigHierarchyCopyPasteContent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x0;
            static constexpr std::uintptr_t Types = 0x10;
            static constexpr std::uintptr_t Contents = 0x20;
            static constexpr std::uintptr_t LocalTransforms = 0x30;
            static constexpr std::uintptr_t GlobalTransforms = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Elements", 0x0, "ArrayProperty"},
            {"Types", 0x10, "ArrayProperty"},
            {"Contents", 0x20, "ArrayProperty"},
            {"LocalTransforms", 0x30, "ArrayProperty"},
            {"GlobalTransforms", 0x40, "ArrayProperty"},
        }};
    };

    struct RigHierarchyCopyPasteContentPerElement
    {
        static constexpr std::string_view Name = "RigHierarchyCopyPasteContentPerElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Content = 0x8;
            static constexpr std::uintptr_t ContentData = 0x18;
            static constexpr std::uintptr_t Parents = 0x28;
            static constexpr std::uintptr_t ParentWeights = 0x38;
            static constexpr std::uintptr_t Poses = 0x48;
            static constexpr std::uintptr_t DirtyStates = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"Content", 0x8, "StrProperty"},
            {"ContentData", 0x18, "StrProperty"},
            {"Parents", 0x28, "ArrayProperty"},
            {"ParentWeights", 0x38, "ArrayProperty"},
            {"Poses", 0x48, "ArrayProperty"},
            {"DirtyStates", 0x58, "ArrayProperty"},
        }};
    };

    struct RigHierarchyKey
    {
        static constexpr std::string_view Name = "RigHierarchyKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigHierarchyModulePath
    {
        static constexpr std::string_view Name = "RigHierarchyModulePath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulePath = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModulePath", 0x0, "StrProperty"},
        }};
    };

    struct RigHierarchyProvider
    {
        static constexpr std::string_view Name = "RigHierarchyProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigHierarchyRef
    {
        static constexpr std::string_view Name = "RigHierarchyRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigHierarchySettings
    {
        static constexpr std::string_view Name = "RigHierarchySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementNameDisplayMode = 0x0;
            static constexpr std::uintptr_t ProceduralElementLimit = 0x4;
            static constexpr std::uintptr_t PromiseStore = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ElementNameDisplayMode", 0x0, "EnumProperty"},
            {"ProceduralElementLimit", 0x4, "IntProperty"},
            {"PromiseStore", 0x8, "StructProperty"},
        }};
    };

    struct RigInfluenceEntry
    {
        static constexpr std::string_view Name = "RigInfluenceEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t AffectedList = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x0, "StructProperty"},
            {"AffectedList", 0x8, "ArrayProperty"},
        }};
    };

    struct RigInfluenceEntryModifier
    {
        static constexpr std::string_view Name = "RigInfluenceEntryModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AffectedList = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AffectedList", 0x0, "ArrayProperty"},
        }};
    };

    struct RigInfluenceMap
    {
        static constexpr std::string_view Name = "RigInfluenceMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventName = 0x0;
            static constexpr std::uintptr_t Entries = 0x8;
            static constexpr std::uintptr_t KeyToIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventName", 0x0, "NameProperty"},
            {"Entries", 0x8, "ArrayProperty"},
            {"KeyToIndex", 0x18, "MapProperty"},
        }};
    };

    struct RigInfluenceMapPerEvent
    {
        static constexpr std::string_view Name = "RigInfluenceMapPerEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Maps = 0x0;
            static constexpr std::uintptr_t EventToIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Maps", 0x0, "ArrayProperty"},
            {"EventToIndex", 0x10, "MapProperty"},
        }};
    };

    struct RigInt32ArrayMetadata
    {
        static constexpr std::string_view Name = "RigInt32ArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigInt32Metadata
    {
        static constexpr std::string_view Name = "RigInt32Metadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "IntProperty"},
        }};
    };

    struct RigLinearColorArrayMetadata
    {
        static constexpr std::string_view Name = "RigLinearColorArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigLinearColorMetadata
    {
        static constexpr std::string_view Name = "RigLinearColorMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigLocalAndGlobalDirtyState
    {
        static constexpr std::string_view Name = "RigLocalAndGlobalDirtyState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Local = 0x0;
            static constexpr std::uintptr_t Global = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Local", 0x0, "StructProperty"},
            {"Global", 0x4, "StructProperty"},
        }};
    };

    struct RigLocalAndGlobalTransform
    {
        static constexpr std::string_view Name = "RigLocalAndGlobalTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Local = 0x0;
            static constexpr std::uintptr_t Global = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Local", 0x0, "StructProperty"},
            {"Global", 0x4, "StructProperty"},
        }};
    };

    struct RigModuleConnector
    {
        static constexpr std::string_view Name = "RigModuleConnector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct RigModuleDescription
    {
        static constexpr std::string_view Name = "RigModuleDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Settings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x0, "StructProperty"},
            {"Settings", 0x18, "StructProperty"},
        }};
    };

    struct RigModuleExecutionElement
    {
        static constexpr std::string_view Name = "RigModuleExecutionElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleName = 0x0;
            static constexpr std::uintptr_t EventName = 0x10;
            static constexpr std::uintptr_t bExecuted = 0x14;
            static constexpr std::uintptr_t DurationInMicroSeconds = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModuleName", 0x0, "NameProperty"},
            {"EventName", 0x10, "NameProperty"},
            {"bExecuted", 0x14, "BoolProperty"},
            {"DurationInMicroSeconds", 0x18, "DoubleProperty"},
        }};
    };

    struct RigModuleExecutionQueue
    {
        static constexpr std::string_view Name = "RigModuleExecutionQueue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x0;
            static constexpr std::uintptr_t TotalDurationInMicroSeconds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Elements", 0x0, "ArrayProperty"},
            {"TotalDurationInMicroSeconds", 0x10, "DoubleProperty"},
        }};
    };

    struct RigModuleIdentifier
    {
        static constexpr std::string_view Name = "RigModuleIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Type = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Type", 0x10, "StrProperty"},
        }};
    };

    struct RigModuleInstance
    {
        static constexpr std::string_view Name = "RigModuleInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t RigClass = 0x8;
            static constexpr std::uintptr_t RigAssetReference = 0x10;
            static constexpr std::uintptr_t RigPtr = 0x20;
            static constexpr std::uintptr_t ParentPath = 0x28;
            static constexpr std::uintptr_t ParentModuleName = 0x38;
            static constexpr std::uintptr_t VariableBindings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"RigClass", 0x8, "ClassProperty"},
            {"RigAssetReference", 0x10, "StructProperty"},
            {"RigPtr", 0x20, "ObjectProperty"},
            {"ParentPath", 0x28, "StrProperty"},
            {"ParentModuleName", 0x38, "NameProperty"},
            {"VariableBindings", 0x40, "MapProperty"},
        }};
    };

    struct RigModuleReference
    {
        static constexpr std::string_view Name = "RigModuleReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ShortName = 0x8;
            static constexpr std::uintptr_t bShortNameBasedOnPath = 0x18;
            static constexpr std::uintptr_t ParentPath = 0x20;
            static constexpr std::uintptr_t ParentModuleName = 0x30;
            static constexpr std::uintptr_t Class = 0x38;
            static constexpr std::uintptr_t ControlRigAssetReference = 0x58;
            static constexpr std::uintptr_t Connections = 0x98;
            static constexpr std::uintptr_t ConfigValues = 0xA8;
            static constexpr std::uintptr_t ConfigOverrides = 0xB8;
            static constexpr std::uintptr_t Bindings = 0x110;
            static constexpr std::uintptr_t PreviousName = 0x120;
            static constexpr std::uintptr_t PreviousParentName = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ShortName", 0x8, "StrProperty"},
            {"bShortNameBasedOnPath", 0x18, "BoolProperty"},
            {"ParentPath", 0x20, "StrProperty"},
            {"ParentModuleName", 0x30, "NameProperty"},
            {"Class", 0x38, "SoftClassProperty"},
            {"ControlRigAssetReference", 0x58, "StructProperty"},
            {"Connections", 0x98, "MapProperty"},
            {"ConfigValues", 0xA8, "MapProperty"},
            {"ConfigOverrides", 0xB8, "StructProperty"},
            {"Bindings", 0x110, "MapProperty"},
            {"PreviousName", 0x120, "NameProperty"},
            {"PreviousParentName", 0x124, "NameProperty"},
        }};
    };

    struct RigModuleSettings
    {
        static constexpr std::string_view Name = "RigModuleSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x0;
            static constexpr std::uintptr_t Icon = 0x20;
            static constexpr std::uintptr_t Category = 0x38;
            static constexpr std::uintptr_t Keywords = 0x48;
            static constexpr std::uintptr_t Description = 0x58;
            static constexpr std::uintptr_t ExposedConnectors = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Identifier", 0x0, "StructProperty"},
            {"Icon", 0x20, "StructProperty"},
            {"Category", 0x38, "StrProperty"},
            {"Keywords", 0x48, "StrProperty"},
            {"Description", 0x58, "StrProperty"},
            {"ExposedConnectors", 0x68, "ArrayProperty"},
        }};
    };

    struct RigMultiParentElement
    {
        static constexpr std::string_view Name = "RigMultiParentElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigTransformElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigNameArrayMetadata
    {
        static constexpr std::string_view Name = "RigNameArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigNameMetadata
    {
        static constexpr std::string_view Name = "RigNameMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "NameProperty"},
        }};
    };

    struct RigNullElement
    {
        static constexpr std::string_view Name = "RigNullElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigMultiParentElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigOrConnectionRule
    {
        static constexpr std::string_view Name = "RigOrConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildRules = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildRules", 0x8, "ArrayProperty"},
        }};
    };

    struct RigPhysicsSimulationBase
    {
        static constexpr std::string_view Name = "RigPhysicsSimulationBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigPhysicsSolverDescription
    {
        static constexpr std::string_view Name = "RigPhysicsSolverDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
        }};
    };

    struct RigPhysicsSolverID
    {
        static constexpr std::string_view Name = "RigPhysicsSolverID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Guid", 0x0, "StructProperty"},
        }};
    };

    struct RigPose
    {
        static constexpr std::string_view Name = "RigPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x0;
            static constexpr std::uintptr_t HierarchyTopologyVersion = 0x10;
            static constexpr std::uintptr_t PoseHash = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Elements", 0x0, "ArrayProperty"},
            {"HierarchyTopologyVersion", 0x10, "IntProperty"},
            {"PoseHash", 0x14, "IntProperty"},
        }};
    };

    struct RigPoseElement
    {
        static constexpr std::string_view Name = "RigPoseElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t GlobalTransform = 0x20;
            static constexpr std::uintptr_t LocalTransform = 0x80;
            static constexpr std::uintptr_t PreferredEulerAngle = 0xE0;
            static constexpr std::uintptr_t ActiveParent = 0xF8;
            static constexpr std::uintptr_t CurveValue = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Index", 0x0, "StructProperty"},
            {"GlobalTransform", 0x20, "StructProperty"},
            {"LocalTransform", 0x80, "StructProperty"},
            {"PreferredEulerAngle", 0xE0, "StructProperty"},
            {"ActiveParent", 0xF8, "StructProperty"},
            {"CurveValue", 0x100, "FloatProperty"},
        }};
    };

    struct RigPreferredEulerAngles
    {
        static constexpr std::string_view Name = "RigPreferredEulerAngles";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationOrder = 0x0;
            static constexpr std::uintptr_t Current = 0x8;
            static constexpr std::uintptr_t Initial = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RotationOrder", 0x0, "EnumProperty"},
            {"Current", 0x8, "StructProperty"},
            {"Initial", 0x20, "StructProperty"},
        }};
    };

    struct RigPromise
    {
        static constexpr std::string_view Name = "RigPromise";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Name = 0x14;
            static constexpr std::uintptr_t ElementType = 0x18;
            static constexpr std::uintptr_t MinCount = 0x1C;
            static constexpr std::uintptr_t MaxCount = 0x20;
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t SpawnSite = 0x38;
            static constexpr std::uintptr_t bWithImportSkeletonNode = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"Name", 0x14, "NameProperty"},
            {"ElementType", 0x18, "EnumProperty"},
            {"MinCount", 0x1C, "IntProperty"},
            {"MaxCount", 0x20, "OptionalProperty"},
            {"Description", 0x28, "StrProperty"},
            {"SpawnSite", 0x38, "OptionalProperty"},
            {"bWithImportSkeletonNode", 0x58, "BoolProperty"},
        }};
    };

    struct RigPromiseKey
    {
        static constexpr std::string_view Name = "RigPromiseKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModuleName = 0x0;
            static constexpr std::uintptr_t ID = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModuleName", 0x0, "NameProperty"},
            {"ID", 0x4, "StructProperty"},
        }};
    };

    struct RigPromiseNodePath
    {
        static constexpr std::string_view Name = "RigPromiseNodePath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigPromiseSpawnSite
    {
        static constexpr std::string_view Name = "RigPromiseSpawnSite";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CallPath = 0x0;
            static constexpr std::uintptr_t bConditional = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CallPath", 0x0, "StructProperty"},
            {"bConditional", 0x10, "BoolProperty"},
        }};
    };

    struct RigPromiseStore
    {
        static constexpr std::string_view Name = "RigPromiseStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TenablePromises = 0x0;
            static constexpr std::uintptr_t UntenablePromises = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TenablePromises", 0x0, "ArrayProperty"},
            {"UntenablePromises", 0x10, "ArrayProperty"},
        }};
    };

    struct RigQuatArrayMetadata
    {
        static constexpr std::string_view Name = "RigQuatArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigQuatMetadata
    {
        static constexpr std::string_view Name = "RigQuatMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigReferenceElement
    {
        static constexpr std::string_view Name = "RigReferenceElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigSingleParentElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigRotatorArrayMetadata
    {
        static constexpr std::string_view Name = "RigRotatorArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigRotatorMetadata
    {
        static constexpr std::string_view Name = "RigRotatorMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigSingleParentElement
    {
        static constexpr std::string_view Name = "RigSingleParentElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigTransformElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigSocketElement
    {
        static constexpr std::string_view Name = "RigSocketElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigSingleParentElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x78, "StructProperty"},
        }};
    };

    struct RigSocketSettings
    {
        static constexpr std::string_view Name = "RigSocketSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Color = 0x4;
            static constexpr std::uintptr_t Parent = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Color", 0x4, "StructProperty"},
            {"Parent", 0x14, "StructProperty"},
        }};
    };

    struct RigSocketState
    {
        static constexpr std::string_view Name = "RigSocketState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Parent = 0x4;
            static constexpr std::uintptr_t InitialLocalTransform = 0x10;
            static constexpr std::uintptr_t Color = 0x70;
            static constexpr std::uintptr_t Description = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Parent", 0x4, "StructProperty"},
            {"InitialLocalTransform", 0x10, "StructProperty"},
            {"Color", 0x70, "StructProperty"},
            {"Description", 0x80, "StrProperty"},
        }};
    };

    struct RigSpace
    {
        static constexpr std::string_view Name = "RigSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigElement";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceType = 0x10;
            static constexpr std::uintptr_t ParentName = 0x14;
            static constexpr std::uintptr_t ParentIndex = 0x18;
            static constexpr std::uintptr_t InitialTransform = 0x20;
            static constexpr std::uintptr_t LocalTransform = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpaceType", 0x10, "EnumProperty"},
            {"ParentName", 0x14, "NameProperty"},
            {"ParentIndex", 0x18, "IntProperty"},
            {"InitialTransform", 0x20, "StructProperty"},
            {"LocalTransform", 0x80, "StructProperty"},
        }};
    };

    struct RigSpaceHierarchy
    {
        static constexpr std::string_view Name = "RigSpaceHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Spaces = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Spaces", 0x0, "ArrayProperty"},
        }};
    };

    struct RigSpawnCallPath
    {
        static constexpr std::string_view Name = "RigSpawnCallPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instructions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instructions", 0x0, "ArrayProperty"},
        }};
    };

    struct RigTagConnectionRule
    {
        static constexpr std::string_view Name = "RigTagConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tag", 0x8, "NameProperty"},
        }};
    };

    struct RigTransformArrayMetadata
    {
        static constexpr std::string_view Name = "RigTransformArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigTransformDirtyState
    {
        static constexpr std::string_view Name = "RigTransformDirtyState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigTransformElement
    {
        static constexpr std::string_view Name = "RigTransformElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t Index = 0x10;
            static constexpr std::uintptr_t SubIndex = 0x14;
            static constexpr std::uintptr_t CreatedAtInstructionIndex = 0x18;
            static constexpr std::uintptr_t SpawnIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x8, "StructProperty"},
            {"Index", 0x10, "IntProperty"},
            {"SubIndex", 0x14, "IntProperty"},
            {"CreatedAtInstructionIndex", 0x18, "IntProperty"},
            {"SpawnIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigTransformMetadata
    {
        static constexpr std::string_view Name = "RigTransformMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigTransformStackEntry
    {
        static constexpr std::string_view Name = "RigTransformStackEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t EntryType = 0x8;
            static constexpr std::uintptr_t TransformType = 0x9;
            static constexpr std::uintptr_t OldTransform = 0x10;
            static constexpr std::uintptr_t NewTransform = 0x70;
            static constexpr std::uintptr_t bAffectChildren = 0xD0;
            static constexpr std::uintptr_t CallStack = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"EntryType", 0x8, "ByteProperty"},
            {"TransformType", 0x9, "ByteProperty"},
            {"OldTransform", 0x10, "StructProperty"},
            {"NewTransform", 0x70, "StructProperty"},
            {"bAffectChildren", 0xD0, "BoolProperty"},
            {"CallStack", 0xD8, "ArrayProperty"},
        }};
    };

    struct RigTypeConnectionRule
    {
        static constexpr std::string_view Name = "RigTypeConnectionRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigConnectionRule";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementType", 0x8, "EnumProperty"},
        }};
    };

    struct RigUnit
    {
        static constexpr std::string_view Name = "RigUnit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMStruct";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnitMutable
    {
        static constexpr std::string_view Name = "RigUnitMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_AddAvailableSpaces
    {
        static constexpr std::string_view Name = "RigUnit_AddAvailableSpaces";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Spaces = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x10, "StructProperty"},
            {"Spaces", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_AddBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_AddBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Weight = 0x80;
            static constexpr std::uintptr_t bPostMultiply = 0x84;
            static constexpr std::uintptr_t bPropagateToChildren = 0x85;
            static constexpr std::uintptr_t CachedBone = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Weight", 0x80, "FloatProperty"},
            {"bPostMultiply", 0x84, "BoolProperty"},
            {"bPropagateToChildren", 0x85, "BoolProperty"},
            {"CachedBone", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_AddParent
    {
        static constexpr std::string_view Name = "RigUnit_AddParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Parent = 0x18;
            static constexpr std::uintptr_t DisplayLabel = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Parent", 0x18, "StructProperty"},
            {"DisplayLabel", 0x20, "NameProperty"},
        }};
    };

    struct RigUnit_Add_FloatFloat
    {
        static constexpr std::string_view Name = "RigUnit_Add_FloatFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryFloatOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "FloatProperty"},
            {"Argument1", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigUnit_Add_VectorVector
    {
        static constexpr std::string_view Name = "RigUnit_Add_VectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryVectorOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_AimBone
    {
        static constexpr std::string_view Name = "RigUnit_AimBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Primary = 0x18;
            static constexpr std::uintptr_t Secondary = 0x58;
            static constexpr std::uintptr_t Weight = 0x98;
            static constexpr std::uintptr_t bPropagateToChildren = 0x9C;
            static constexpr std::uintptr_t DebugSettings = 0xA0;
            static constexpr std::uintptr_t CachedBoneIndex = 0x110;
            static constexpr std::uintptr_t PrimaryCachedSpace = 0x128;
            static constexpr std::uintptr_t SecondaryCachedSpace = 0x140;
            static constexpr std::uintptr_t bIsInitialized = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Primary", 0x18, "StructProperty"},
            {"Secondary", 0x58, "StructProperty"},
            {"Weight", 0x98, "FloatProperty"},
            {"bPropagateToChildren", 0x9C, "BoolProperty"},
            {"DebugSettings", 0xA0, "StructProperty"},
            {"CachedBoneIndex", 0x110, "StructProperty"},
            {"PrimaryCachedSpace", 0x128, "StructProperty"},
            {"SecondaryCachedSpace", 0x140, "StructProperty"},
            {"bIsInitialized", 0x158, "BoolProperty"},
        }};
    };

    struct RigUnit_AimBoneMath
    {
        static constexpr std::string_view Name = "RigUnit_AimBoneMath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputTransform = 0x10;
            static constexpr std::uintptr_t Primary = 0x70;
            static constexpr std::uintptr_t Secondary = 0xB8;
            static constexpr std::uintptr_t Weight = 0x100;
            static constexpr std::uintptr_t Result = 0x110;
            static constexpr std::uintptr_t DebugSettings = 0x170;
            static constexpr std::uintptr_t PrimaryCachedSpace = 0x1E0;
            static constexpr std::uintptr_t SecondaryCachedSpace = 0x1F8;
            static constexpr std::uintptr_t bIsInitialized = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InputTransform", 0x10, "StructProperty"},
            {"Primary", 0x70, "StructProperty"},
            {"Secondary", 0xB8, "StructProperty"},
            {"Weight", 0x100, "FloatProperty"},
            {"Result", 0x110, "StructProperty"},
            {"DebugSettings", 0x170, "StructProperty"},
            {"PrimaryCachedSpace", 0x1E0, "StructProperty"},
            {"SecondaryCachedSpace", 0x1F8, "StructProperty"},
            {"bIsInitialized", 0x210, "BoolProperty"},
        }};
    };

    struct RigUnit_AimBone_DebugSettings
    {
        static constexpr std::string_view Name = "RigUnit_AimBone_DebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t WorldOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"WorldOffset", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_AimBone_Target
    {
        static constexpr std::string_view Name = "RigUnit_AimBone_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x0;
            static constexpr std::uintptr_t Axis = 0x8;
            static constexpr std::uintptr_t Target = 0x20;
            static constexpr std::uintptr_t Kind = 0x38;
            static constexpr std::uintptr_t Space = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Weight", 0x0, "FloatProperty"},
            {"Axis", 0x8, "StructProperty"},
            {"Target", 0x20, "StructProperty"},
            {"Kind", 0x38, "EnumProperty"},
            {"Space", 0x3C, "NameProperty"},
        }};
    };

    struct RigUnit_AimConstraint
    {
        static constexpr std::string_view Name = "RigUnit_AimConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Joint = 0x10;
            static constexpr std::uintptr_t AimMode = 0x14;
            static constexpr std::uintptr_t UpMode = 0x15;
            static constexpr std::uintptr_t AimVector = 0x18;
            static constexpr std::uintptr_t UpVector = 0x30;
            static constexpr std::uintptr_t AimTargets = 0x48;
            static constexpr std::uintptr_t UpTargets = 0x58;
            static constexpr std::uintptr_t WorkData = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Joint", 0x10, "NameProperty"},
            {"AimMode", 0x14, "EnumProperty"},
            {"UpMode", 0x15, "EnumProperty"},
            {"AimVector", 0x18, "StructProperty"},
            {"UpVector", 0x30, "StructProperty"},
            {"AimTargets", 0x48, "ArrayProperty"},
            {"UpTargets", 0x58, "ArrayProperty"},
            {"WorkData", 0x68, "StructProperty"},
        }};
    };

    struct RigUnit_AimConstraintLocalSpaceOffset
    {
        static constexpr std::string_view Name = "RigUnit_AimConstraintLocalSpaceOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t AimAxis = 0x20;
            static constexpr std::uintptr_t UpAxis = 0x38;
            static constexpr std::uintptr_t WorldUp = 0x50;
            static constexpr std::uintptr_t Parents = 0x78;
            static constexpr std::uintptr_t AdvancedSettings = 0x90;
            static constexpr std::uintptr_t Weight = 0x110;
            static constexpr std::uintptr_t WorldUpSpaceCache = 0x118;
            static constexpr std::uintptr_t ChildCache = 0x130;
            static constexpr std::uintptr_t ParentCaches = 0x148;
            static constexpr std::uintptr_t bIsInitialized = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"AimAxis", 0x20, "StructProperty"},
            {"UpAxis", 0x38, "StructProperty"},
            {"WorldUp", 0x50, "StructProperty"},
            {"Parents", 0x78, "ArrayProperty"},
            {"AdvancedSettings", 0x90, "StructProperty"},
            {"Weight", 0x110, "FloatProperty"},
            {"WorldUpSpaceCache", 0x118, "StructProperty"},
            {"ChildCache", 0x130, "StructProperty"},
            {"ParentCaches", 0x148, "ArrayProperty"},
            {"bIsInitialized", 0x158, "BoolProperty"},
        }};
    };

    struct RigUnit_AimConstraint_AdvancedSettings
    {
        static constexpr std::string_view Name = "RigUnit_AimConstraint_AdvancedSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugSettings = 0x0;
            static constexpr std::uintptr_t RotationOrderForFilter = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DebugSettings", 0x0, "StructProperty"},
            {"RotationOrderForFilter", 0x70, "EnumProperty"},
        }};
    };

    struct RigUnit_AimConstraint_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_AimConstraint_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstraintData", 0x0, "ArrayProperty"},
        }};
    };

    struct RigUnit_AimConstraint_WorldUp
    {
        static constexpr std::string_view Name = "RigUnit_AimConstraint_WorldUp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Kind = 0x18;
            static constexpr std::uintptr_t Space = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Kind", 0x18, "EnumProperty"},
            {"Space", 0x1C, "StructProperty"},
        }};
    };

    struct RigUnit_AimItem
    {
        static constexpr std::string_view Name = "RigUnit_AimItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Primary = 0x18;
            static constexpr std::uintptr_t Secondary = 0x60;
            static constexpr std::uintptr_t Weight = 0xA8;
            static constexpr std::uintptr_t DebugSettings = 0xB0;
            static constexpr std::uintptr_t CachedItem = 0x120;
            static constexpr std::uintptr_t PrimaryCachedSpace = 0x138;
            static constexpr std::uintptr_t SecondaryCachedSpace = 0x150;
            static constexpr std::uintptr_t bIsInitialized = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Primary", 0x18, "StructProperty"},
            {"Secondary", 0x60, "StructProperty"},
            {"Weight", 0xA8, "FloatProperty"},
            {"DebugSettings", 0xB0, "StructProperty"},
            {"CachedItem", 0x120, "StructProperty"},
            {"PrimaryCachedSpace", 0x138, "StructProperty"},
            {"SecondaryCachedSpace", 0x150, "StructProperty"},
            {"bIsInitialized", 0x168, "BoolProperty"},
        }};
    };

    struct RigUnit_AimItem_Target
    {
        static constexpr std::string_view Name = "RigUnit_AimItem_Target";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x0;
            static constexpr std::uintptr_t Axis = 0x8;
            static constexpr std::uintptr_t Target = 0x20;
            static constexpr std::uintptr_t Kind = 0x38;
            static constexpr std::uintptr_t Space = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Weight", 0x0, "FloatProperty"},
            {"Axis", 0x8, "StructProperty"},
            {"Target", 0x20, "StructProperty"},
            {"Kind", 0x38, "EnumProperty"},
            {"Space", 0x3C, "StructProperty"},
        }};
    };

    struct RigUnit_ApplyFK
    {
        static constexpr std::string_view Name = "RigUnit_ApplyFK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Joint = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Filter = 0x80;
            static constexpr std::uintptr_t ApplyTransformMode = 0x89;
            static constexpr std::uintptr_t ApplyTransformSpace = 0x8A;
            static constexpr std::uintptr_t BaseTransform = 0x90;
            static constexpr std::uintptr_t BaseJoint = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Joint", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Filter", 0x80, "StructProperty"},
            {"ApplyTransformMode", 0x89, "EnumProperty"},
            {"ApplyTransformSpace", 0x8A, "EnumProperty"},
            {"BaseTransform", 0x90, "StructProperty"},
            {"BaseJoint", 0xF0, "NameProperty"},
        }};
    };

    struct RigUnit_BeginExecution
    {
        static constexpr std::string_view Name = "RigUnit_BeginExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_BinaryFloatOp
    {
        static constexpr std::string_view Name = "RigUnit_BinaryFloatOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "FloatProperty"},
            {"Argument1", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigUnit_BinaryQuaternionOp
    {
        static constexpr std::string_view Name = "RigUnit_BinaryQuaternionOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x10;
            static constexpr std::uintptr_t Argument1 = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x10, "StructProperty"},
            {"Argument1", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigUnit_BinaryTransformOp
    {
        static constexpr std::string_view Name = "RigUnit_BinaryTransformOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x10;
            static constexpr std::uintptr_t Argument1 = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x10, "StructProperty"},
            {"Argument1", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigUnit_BinaryVectorOp
    {
        static constexpr std::string_view Name = "RigUnit_BinaryVectorOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_BlendTransform
    {
        static constexpr std::string_view Name = "RigUnit_BlendTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x10;
            static constexpr std::uintptr_t Targets = 0x70;
            static constexpr std::uintptr_t Result = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Source", 0x10, "StructProperty"},
            {"Targets", 0x70, "ArrayProperty"},
            {"Result", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_BoneHarmonics
    {
        static constexpr std::string_view Name = "RigUnit_BoneHarmonics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Bones = 0x10;
            static constexpr std::uintptr_t WaveSpeed = 0x20;
            static constexpr std::uintptr_t WaveFrequency = 0x38;
            static constexpr std::uintptr_t WaveAmplitude = 0x50;
            static constexpr std::uintptr_t WaveOffset = 0x68;
            static constexpr std::uintptr_t WaveNoise = 0x80;
            static constexpr std::uintptr_t WaveEase = 0x98;
            static constexpr std::uintptr_t WaveMinimum = 0x9C;
            static constexpr std::uintptr_t WaveMaximum = 0xA0;
            static constexpr std::uintptr_t RotationOrder = 0xA4;
            static constexpr std::uintptr_t bPropagateToChildren = 0xA5;
            static constexpr std::uintptr_t WorkData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Bones", 0x10, "ArrayProperty"},
            {"WaveSpeed", 0x20, "StructProperty"},
            {"WaveFrequency", 0x38, "StructProperty"},
            {"WaveAmplitude", 0x50, "StructProperty"},
            {"WaveOffset", 0x68, "StructProperty"},
            {"WaveNoise", 0x80, "StructProperty"},
            {"WaveEase", 0x98, "EnumProperty"},
            {"WaveMinimum", 0x9C, "FloatProperty"},
            {"WaveMaximum", 0xA0, "FloatProperty"},
            {"RotationOrder", 0xA4, "EnumProperty"},
            {"bPropagateToChildren", 0xA5, "BoolProperty"},
            {"WorkData", 0xA8, "StructProperty"},
        }};
    };

    struct RigUnit_BoneHarmonics_BoneTarget
    {
        static constexpr std::string_view Name = "RigUnit_BoneHarmonics_BoneTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Ratio = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"Ratio", 0x4, "FloatProperty"},
        }};
    };

    struct RigUnit_BoneHarmonics_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_BoneHarmonics_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedItems = 0x0;
            static constexpr std::uintptr_t WaveTime = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedItems", 0x0, "ArrayProperty"},
            {"WaveTime", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_BoneName
    {
        static constexpr std::string_view Name = "RigUnit_BoneName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bone", 0x8, "NameProperty"},
        }};
    };

    struct RigUnit_CCDIK
    {
        static constexpr std::string_view Name = "RigUnit_CCDIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EffectorBone = 0x14;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t MaxIterations = 0x88;
            static constexpr std::uintptr_t bStartFromTail = 0x8C;
            static constexpr std::uintptr_t BaseRotationLimit = 0x90;
            static constexpr std::uintptr_t RotationLimits = 0x98;
            static constexpr std::uintptr_t bPropagateToChildren = 0xA8;
            static constexpr std::uintptr_t WorkData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EffectorBone", 0x14, "NameProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"MaxIterations", 0x88, "IntProperty"},
            {"bStartFromTail", 0x8C, "BoolProperty"},
            {"BaseRotationLimit", 0x90, "FloatProperty"},
            {"RotationLimits", 0x98, "ArrayProperty"},
            {"bPropagateToChildren", 0xA8, "BoolProperty"},
            {"WorkData", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_CCDIKItemArray
    {
        static constexpr std::string_view Name = "RigUnit_CCDIKItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t MaxIterations = 0x88;
            static constexpr std::uintptr_t bStartFromTail = 0x8C;
            static constexpr std::uintptr_t BaseRotationLimit = 0x90;
            static constexpr std::uintptr_t RotationLimits = 0x98;
            static constexpr std::uintptr_t bPropagateToChildren = 0xA8;
            static constexpr std::uintptr_t WorkData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"MaxIterations", 0x88, "IntProperty"},
            {"bStartFromTail", 0x8C, "BoolProperty"},
            {"BaseRotationLimit", 0x90, "FloatProperty"},
            {"RotationLimits", 0x98, "ArrayProperty"},
            {"bPropagateToChildren", 0xA8, "BoolProperty"},
            {"WorkData", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_CCDIKPerItem
    {
        static constexpr std::string_view Name = "RigUnit_CCDIKPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t MaxIterations = 0x88;
            static constexpr std::uintptr_t bStartFromTail = 0x8C;
            static constexpr std::uintptr_t BaseRotationLimit = 0x90;
            static constexpr std::uintptr_t RotationLimits = 0x98;
            static constexpr std::uintptr_t bPropagateToChildren = 0xA8;
            static constexpr std::uintptr_t WorkData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"MaxIterations", 0x88, "IntProperty"},
            {"bStartFromTail", 0x8C, "BoolProperty"},
            {"BaseRotationLimit", 0x90, "FloatProperty"},
            {"RotationLimits", 0x98, "ArrayProperty"},
            {"bPropagateToChildren", 0xA8, "BoolProperty"},
            {"WorkData", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_CCDIK_RotationLimit
    {
        static constexpr std::string_view Name = "RigUnit_CCDIK_RotationLimit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Limit = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"Limit", 0x4, "FloatProperty"},
        }};
    };

    struct RigUnit_CCDIK_RotationLimitPerItem
    {
        static constexpr std::string_view Name = "RigUnit_CCDIK_RotationLimitPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t Limit = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"Limit", 0x8, "FloatProperty"},
        }};
    };

    struct RigUnit_CCDIK_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_CCDIK_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Chain = 0x0;
            static constexpr std::uintptr_t CachedItems = 0x10;
            static constexpr std::uintptr_t RotationLimitIndex = 0x20;
            static constexpr std::uintptr_t RotationLimitsPerItem = 0x30;
            static constexpr std::uintptr_t CachedEffector = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Chain", 0x0, "ArrayProperty"},
            {"CachedItems", 0x10, "ArrayProperty"},
            {"RotationLimitIndex", 0x20, "ArrayProperty"},
            {"RotationLimitsPerItem", 0x30, "ArrayProperty"},
            {"CachedEffector", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_ChainHarmonics
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainRoot = 0x10;
            static constexpr std::uintptr_t Speed = 0x18;
            static constexpr std::uintptr_t Reach = 0x30;
            static constexpr std::uintptr_t Wave = 0x78;
            static constexpr std::uintptr_t WaveCurve = 0xF0;
            static constexpr std::uintptr_t Pendulum = 0x138;
            static constexpr std::uintptr_t bDrawDebug = 0x190;
            static constexpr std::uintptr_t DrawWorldOffset = 0x1A0;
            static constexpr std::uintptr_t WorkData = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ChainRoot", 0x10, "NameProperty"},
            {"Speed", 0x18, "StructProperty"},
            {"Reach", 0x30, "StructProperty"},
            {"Wave", 0x78, "StructProperty"},
            {"WaveCurve", 0xF0, "StructProperty"},
            {"Pendulum", 0x138, "StructProperty"},
            {"bDrawDebug", 0x190, "BoolProperty"},
            {"DrawWorldOffset", 0x1A0, "StructProperty"},
            {"WorkData", 0x200, "StructProperty"},
        }};
    };

    struct RigUnit_ChainHarmonicsPerItem
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonicsPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainRoot = 0x10;
            static constexpr std::uintptr_t Speed = 0x18;
            static constexpr std::uintptr_t Reach = 0x30;
            static constexpr std::uintptr_t Wave = 0x78;
            static constexpr std::uintptr_t WaveCurve = 0xF0;
            static constexpr std::uintptr_t Pendulum = 0x138;
            static constexpr std::uintptr_t bDrawDebug = 0x190;
            static constexpr std::uintptr_t DrawWorldOffset = 0x1A0;
            static constexpr std::uintptr_t WorkData = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ChainRoot", 0x10, "StructProperty"},
            {"Speed", 0x18, "StructProperty"},
            {"Reach", 0x30, "StructProperty"},
            {"Wave", 0x78, "StructProperty"},
            {"WaveCurve", 0xF0, "StructProperty"},
            {"Pendulum", 0x138, "StructProperty"},
            {"bDrawDebug", 0x190, "BoolProperty"},
            {"DrawWorldOffset", 0x1A0, "StructProperty"},
            {"WorkData", 0x200, "StructProperty"},
        }};
    };

    struct RigUnit_ChainHarmonics_Pendulum
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonics_Pendulum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t PendulumStiffness = 0x4;
            static constexpr std::uintptr_t PendulumGravity = 0x8;
            static constexpr std::uintptr_t PendulumBlend = 0x20;
            static constexpr std::uintptr_t PendulumDrag = 0x24;
            static constexpr std::uintptr_t PendulumMinimum = 0x28;
            static constexpr std::uintptr_t PendulumMaximum = 0x2C;
            static constexpr std::uintptr_t PendulumEase = 0x30;
            static constexpr std::uintptr_t UnwindAxis = 0x38;
            static constexpr std::uintptr_t UnwindMinimum = 0x50;
            static constexpr std::uintptr_t UnwindMaximum = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"PendulumStiffness", 0x4, "FloatProperty"},
            {"PendulumGravity", 0x8, "StructProperty"},
            {"PendulumBlend", 0x20, "FloatProperty"},
            {"PendulumDrag", 0x24, "FloatProperty"},
            {"PendulumMinimum", 0x28, "FloatProperty"},
            {"PendulumMaximum", 0x2C, "FloatProperty"},
            {"PendulumEase", 0x30, "EnumProperty"},
            {"UnwindAxis", 0x38, "StructProperty"},
            {"UnwindMinimum", 0x50, "FloatProperty"},
            {"UnwindMaximum", 0x54, "FloatProperty"},
        }};
    };

    struct RigUnit_ChainHarmonics_Reach
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonics_Reach";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t ReachTarget = 0x8;
            static constexpr std::uintptr_t ReachAxis = 0x20;
            static constexpr std::uintptr_t ReachMinimum = 0x38;
            static constexpr std::uintptr_t ReachMaximum = 0x3C;
            static constexpr std::uintptr_t ReachEase = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"ReachTarget", 0x8, "StructProperty"},
            {"ReachAxis", 0x20, "StructProperty"},
            {"ReachMinimum", 0x38, "FloatProperty"},
            {"ReachMaximum", 0x3C, "FloatProperty"},
            {"ReachEase", 0x40, "EnumProperty"},
        }};
    };

    struct RigUnit_ChainHarmonics_Wave
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonics_Wave";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t WaveFrequency = 0x8;
            static constexpr std::uintptr_t WaveAmplitude = 0x20;
            static constexpr std::uintptr_t WaveOffset = 0x38;
            static constexpr std::uintptr_t WaveNoise = 0x50;
            static constexpr std::uintptr_t WaveMinimum = 0x68;
            static constexpr std::uintptr_t WaveMaximum = 0x6C;
            static constexpr std::uintptr_t WaveEase = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"WaveFrequency", 0x8, "StructProperty"},
            {"WaveAmplitude", 0x20, "StructProperty"},
            {"WaveOffset", 0x38, "StructProperty"},
            {"WaveNoise", 0x50, "StructProperty"},
            {"WaveMinimum", 0x68, "FloatProperty"},
            {"WaveMaximum", 0x6C, "FloatProperty"},
            {"WaveEase", 0x70, "EnumProperty"},
        }};
    };

    struct RigUnit_ChainHarmonics_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_ChainHarmonics_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t time = 0x0;
            static constexpr std::uintptr_t Items = 0x18;
            static constexpr std::uintptr_t Ratio = 0x28;
            static constexpr std::uintptr_t LocalTip = 0x38;
            static constexpr std::uintptr_t PendulumTip = 0x48;
            static constexpr std::uintptr_t PendulumPosition = 0x58;
            static constexpr std::uintptr_t PendulumVelocity = 0x68;
            static constexpr std::uintptr_t HierarchyLine = 0x78;
            static constexpr std::uintptr_t VelocityLines = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"time", 0x0, "StructProperty"},
            {"Items", 0x18, "ArrayProperty"},
            {"Ratio", 0x28, "ArrayProperty"},
            {"LocalTip", 0x38, "ArrayProperty"},
            {"PendulumTip", 0x48, "ArrayProperty"},
            {"PendulumPosition", 0x58, "ArrayProperty"},
            {"PendulumVelocity", 0x68, "ArrayProperty"},
            {"HierarchyLine", 0x78, "ArrayProperty"},
            {"VelocityLines", 0x88, "ArrayProperty"},
        }};
    };

    struct RigUnit_ChainInfo
    {
        static constexpr std::string_view Name = "RigUnit_ChainInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Param = 0x18;
            static constexpr std::uintptr_t bCalculateStretch = 0x1C;
            static constexpr std::uintptr_t bInitial = 0x1D;
            static constexpr std::uintptr_t bDebug = 0x1E;
            static constexpr std::uintptr_t DebugScale = 0x20;
            static constexpr std::uintptr_t InterpolatedTransform = 0x30;
            static constexpr std::uintptr_t ChainLength = 0x90;
            static constexpr std::uintptr_t ParamLength = 0x94;
            static constexpr std::uintptr_t ChainStretchFactor = 0x98;
            static constexpr std::uintptr_t SegmentInfo = 0x9C;
            static constexpr std::uintptr_t CachedElements = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"Param", 0x18, "FloatProperty"},
            {"bCalculateStretch", 0x1C, "BoolProperty"},
            {"bInitial", 0x1D, "BoolProperty"},
            {"bDebug", 0x1E, "BoolProperty"},
            {"DebugScale", 0x20, "FloatProperty"},
            {"InterpolatedTransform", 0x30, "StructProperty"},
            {"ChainLength", 0x90, "FloatProperty"},
            {"ParamLength", 0x94, "FloatProperty"},
            {"ChainStretchFactor", 0x98, "FloatProperty"},
            {"SegmentInfo", 0x9C, "StructProperty"},
            {"CachedElements", 0xC8, "ArrayProperty"},
        }};
    };

    struct RigUnit_ChainInfo_Segment
    {
        static constexpr std::string_view Name = "RigUnit_ChainInfo_Segment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartItem = 0x0;
            static constexpr std::uintptr_t StartItemIndex = 0x18;
            static constexpr std::uintptr_t EndItem = 0x20;
            static constexpr std::uintptr_t EndItemIndex = 0x38;
            static constexpr std::uintptr_t InitialLength = 0x3C;
            static constexpr std::uintptr_t InitialCumLength = 0x40;
            static constexpr std::uintptr_t Length = 0x44;
            static constexpr std::uintptr_t CumLength = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StartItem", 0x0, "StructProperty"},
            {"StartItemIndex", 0x18, "IntProperty"},
            {"EndItem", 0x20, "StructProperty"},
            {"EndItemIndex", 0x38, "IntProperty"},
            {"InitialLength", 0x3C, "FloatProperty"},
            {"InitialCumLength", 0x40, "FloatProperty"},
            {"Length", 0x44, "FloatProperty"},
            {"CumLength", 0x48, "FloatProperty"},
        }};
    };

    struct RigUnit_ChainInfo_SegmentInfo
    {
        static constexpr std::string_view Name = "RigUnit_ChainInfo_SegmentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SegmentIndex = 0x0;
            static constexpr std::uintptr_t SegmentLength = 0x4;
            static constexpr std::uintptr_t SegmentParam = 0x8;
            static constexpr std::uintptr_t SegmentParamLength = 0xC;
            static constexpr std::uintptr_t SegmentStartItem = 0x10;
            static constexpr std::uintptr_t SegmentStartItemIndex = 0x18;
            static constexpr std::uintptr_t SegmentEndItem = 0x1C;
            static constexpr std::uintptr_t SegmentEndItemIndex = 0x24;
            static constexpr std::uintptr_t SegmentStretchFactor = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SegmentIndex", 0x0, "IntProperty"},
            {"SegmentLength", 0x4, "FloatProperty"},
            {"SegmentParam", 0x8, "FloatProperty"},
            {"SegmentParamLength", 0xC, "FloatProperty"},
            {"SegmentStartItem", 0x10, "StructProperty"},
            {"SegmentStartItemIndex", 0x18, "IntProperty"},
            {"SegmentEndItem", 0x1C, "StructProperty"},
            {"SegmentEndItemIndex", 0x24, "IntProperty"},
            {"SegmentStretchFactor", 0x28, "FloatProperty"},
        }};
    };

    struct RigUnit_Clamp_Float
    {
        static constexpr std::string_view Name = "RigUnit_Clamp_Float";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t min = 0xC;
            static constexpr std::uintptr_t max = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"min", 0xC, "FloatProperty"},
            {"max", 0x10, "FloatProperty"},
            {"Result", 0x14, "FloatProperty"},
        }};
    };

    struct RigUnit_CollectionAddItem
    {
        static constexpr std::string_view Name = "RigUnit_CollectionAddItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t Item = 0x18;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"Item", 0x18, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionBase
    {
        static constexpr std::string_view Name = "RigUnit_CollectionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_CollectionBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_CollectionBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionChain
    {
        static constexpr std::string_view Name = "RigUnit_CollectionChain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstItem = 0x8;
            static constexpr std::uintptr_t LastItem = 0x10;
            static constexpr std::uintptr_t Reverse = 0x18;
            static constexpr std::uintptr_t Collection = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FirstItem", 0x8, "StructProperty"},
            {"LastItem", 0x10, "StructProperty"},
            {"Reverse", 0x18, "BoolProperty"},
            {"Collection", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionChainArray
    {
        static constexpr std::string_view Name = "RigUnit_CollectionChainArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstItem = 0x8;
            static constexpr std::uintptr_t LastItem = 0x10;
            static constexpr std::uintptr_t Reverse = 0x18;
            static constexpr std::uintptr_t Items = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FirstItem", 0x8, "StructProperty"},
            {"LastItem", 0x10, "StructProperty"},
            {"Reverse", 0x18, "BoolProperty"},
            {"Items", 0x20, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionChildren
    {
        static constexpr std::string_view Name = "RigUnit_CollectionChildren";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x8;
            static constexpr std::uintptr_t bIncludeParent = 0x10;
            static constexpr std::uintptr_t bRecursive = 0x11;
            static constexpr std::uintptr_t TypeToSearch = 0x12;
            static constexpr std::uintptr_t Collection = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Parent", 0x8, "StructProperty"},
            {"bIncludeParent", 0x10, "BoolProperty"},
            {"bRecursive", 0x11, "BoolProperty"},
            {"TypeToSearch", 0x12, "EnumProperty"},
            {"Collection", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionChildrenArray
    {
        static constexpr std::string_view Name = "RigUnit_CollectionChildrenArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x8;
            static constexpr std::uintptr_t bIncludeParent = 0x10;
            static constexpr std::uintptr_t bRecursive = 0x11;
            static constexpr std::uintptr_t bDefaultChildren = 0x12;
            static constexpr std::uintptr_t TypeToSearch = 0x13;
            static constexpr std::uintptr_t Items = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Parent", 0x8, "StructProperty"},
            {"bIncludeParent", 0x10, "BoolProperty"},
            {"bRecursive", 0x11, "BoolProperty"},
            {"bDefaultChildren", 0x12, "BoolProperty"},
            {"TypeToSearch", 0x13, "EnumProperty"},
            {"Items", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionCount
    {
        static constexpr std::string_view Name = "RigUnit_CollectionCount";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t Count = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"Count", 0x18, "IntProperty"},
        }};
    };

    struct RigUnit_CollectionDifference
    {
        static constexpr std::string_view Name = "RigUnit_CollectionDifference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Collection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Collection", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionGetAll
    {
        static constexpr std::string_view Name = "RigUnit_CollectionGetAll";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeToSearch = 0x8;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TypeToSearch", 0x8, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionGetItems
    {
        static constexpr std::string_view Name = "RigUnit_CollectionGetItems";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t Items = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"Items", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionGetParentIndices
    {
        static constexpr std::string_view Name = "RigUnit_CollectionGetParentIndices";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t ParentIndices = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"ParentIndices", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionGetParentIndicesItemArray
    {
        static constexpr std::string_view Name = "RigUnit_CollectionGetParentIndicesItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t ParentIndices = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"ParentIndices", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionIntersection
    {
        static constexpr std::string_view Name = "RigUnit_CollectionIntersection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t Collection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"Collection", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionItemAtIndex
    {
        static constexpr std::string_view Name = "RigUnit_CollectionItemAtIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t Index = 0x18;
            static constexpr std::uintptr_t Item = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"Index", 0x18, "IntProperty"},
            {"Item", 0x1C, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionItems
    {
        static constexpr std::string_view Name = "RigUnit_CollectionItems";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t bAllowDuplicates = 0x18;
            static constexpr std::uintptr_t Collection = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"bAllowDuplicates", 0x18, "BoolProperty"},
            {"Collection", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionLoop
    {
        static constexpr std::string_view Name = "RigUnit_CollectionLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockToRun = 0x10;
            static constexpr std::uintptr_t Collection = 0x18;
            static constexpr std::uintptr_t Item = 0x28;
            static constexpr std::uintptr_t Index = 0x30;
            static constexpr std::uintptr_t Count = 0x34;
            static constexpr std::uintptr_t Ratio = 0x38;
            static constexpr std::uintptr_t Completed = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BlockToRun", 0x10, "NameProperty"},
            {"Collection", 0x18, "StructProperty"},
            {"Item", 0x28, "StructProperty"},
            {"Index", 0x30, "IntProperty"},
            {"Count", 0x34, "IntProperty"},
            {"Ratio", 0x38, "FloatProperty"},
            {"Completed", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionNameSearch
    {
        static constexpr std::string_view Name = "RigUnit_CollectionNameSearch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PartialName = 0x8;
            static constexpr std::uintptr_t TypeToSearch = 0xC;
            static constexpr std::uintptr_t Collection = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PartialName", 0x8, "NameProperty"},
            {"TypeToSearch", 0xC, "EnumProperty"},
            {"Collection", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionNameSearchArray
    {
        static constexpr std::string_view Name = "RigUnit_CollectionNameSearchArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PartialName = 0x8;
            static constexpr std::uintptr_t TypeToSearch = 0xC;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PartialName", 0x8, "NameProperty"},
            {"TypeToSearch", 0xC, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionReplaceItems
    {
        static constexpr std::string_view Name = "RigUnit_CollectionReplaceItems";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Old = 0x18;
            static constexpr std::uintptr_t New = 0x1C;
            static constexpr std::uintptr_t RemoveInvalidItems = 0x20;
            static constexpr std::uintptr_t bAllowDuplicates = 0x21;
            static constexpr std::uintptr_t Collection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Items", 0x8, "StructProperty"},
            {"Old", 0x18, "NameProperty"},
            {"New", 0x1C, "NameProperty"},
            {"RemoveInvalidItems", 0x20, "BoolProperty"},
            {"bAllowDuplicates", 0x21, "BoolProperty"},
            {"Collection", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionReplaceItemsArray
    {
        static constexpr std::string_view Name = "RigUnit_CollectionReplaceItemsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Old = 0x18;
            static constexpr std::uintptr_t New = 0x1C;
            static constexpr std::uintptr_t RemoveInvalidItems = 0x20;
            static constexpr std::uintptr_t bAllowDuplicates = 0x21;
            static constexpr std::uintptr_t Result = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"Old", 0x18, "NameProperty"},
            {"New", 0x1C, "NameProperty"},
            {"RemoveInvalidItems", 0x20, "BoolProperty"},
            {"bAllowDuplicates", 0x21, "BoolProperty"},
            {"Result", 0x28, "ArrayProperty"},
        }};
    };

    struct RigUnit_CollectionReverse
    {
        static constexpr std::string_view Name = "RigUnit_CollectionReverse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x8;
            static constexpr std::uintptr_t Reversed = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Collection", 0x8, "StructProperty"},
            {"Reversed", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_CollectionUnion
    {
        static constexpr std::string_view Name = "RigUnit_CollectionUnion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_CollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
            static constexpr std::uintptr_t bAllowDuplicates = 0x28;
            static constexpr std::uintptr_t Collection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
            {"bAllowDuplicates", 0x28, "BoolProperty"},
            {"Collection", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ConnectorExecution
    {
        static constexpr std::string_view Name = "RigUnit_ConnectorExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_Control
    {
        static constexpr std::string_view Name = "RigUnit_Control";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x8;
            static constexpr std::uintptr_t base = 0x50;
            static constexpr std::uintptr_t InitTransform = 0xB0;
            static constexpr std::uintptr_t Result = 0x110;
            static constexpr std::uintptr_t Filter = 0x170;
            static constexpr std::uintptr_t bIsInitialized = 0x179;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Transform", 0x8, "StructProperty"},
            {"base", 0x50, "StructProperty"},
            {"InitTransform", 0xB0, "StructProperty"},
            {"Result", 0x110, "StructProperty"},
            {"Filter", 0x170, "StructProperty"},
            {"bIsInitialized", 0x179, "BoolProperty"},
        }};
    };

    struct RigUnit_ControlName
    {
        static constexpr std::string_view Name = "RigUnit_ControlName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Control", 0x8, "NameProperty"},
        }};
    };

    struct RigUnit_Control_StaticMesh
    {
        static constexpr std::string_view Name = "RigUnit_Control_StaticMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_Control";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshTransform = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshTransform", 0x180, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertEulerTransform
    {
        static constexpr std::string_view Name = "RigUnit_ConvertEulerTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertQuaternion
    {
        static constexpr std::string_view Name = "RigUnit_ConvertQuaternion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertQuaternionToVector
    {
        static constexpr std::string_view Name = "RigUnit_ConvertQuaternionToVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertRotation
    {
        static constexpr std::string_view Name = "RigUnit_ConvertRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertRotationToVector
    {
        static constexpr std::string_view Name = "RigUnit_ConvertRotationToVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertTransform
    {
        static constexpr std::string_view Name = "RigUnit_ConvertTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertVectorRotation
    {
        static constexpr std::string_view Name = "RigUnit_ConvertVectorRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ConvertRotation";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertVectorToQuaternion
    {
        static constexpr std::string_view Name = "RigUnit_ConvertVectorToQuaternion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ConvertVectorToRotation
    {
        static constexpr std::string_view Name = "RigUnit_ConvertVectorToRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x8;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0x8, "StructProperty"},
            {"Result", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_CurveExists
    {
        static constexpr std::string_view Name = "RigUnit_CurveExists";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x8;
            static constexpr std::uintptr_t Exists = 0xC;
            static constexpr std::uintptr_t CachedCurveIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Curve", 0x8, "NameProperty"},
            {"Exists", 0xC, "BoolProperty"},
            {"CachedCurveIndex", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_DebugArc
    {
        static constexpr std::string_view Name = "RigUnit_DebugArc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Radius = 0x90;
            static constexpr std::uintptr_t MinimumDegrees = 0x94;
            static constexpr std::uintptr_t MaximumDegrees = 0x98;
            static constexpr std::uintptr_t Thickness = 0x9C;
            static constexpr std::uintptr_t Detail = 0xA0;
            static constexpr std::uintptr_t Space = 0xA4;
            static constexpr std::uintptr_t WorldOffset = 0xB0;
            static constexpr std::uintptr_t bEnabled = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Radius", 0x90, "FloatProperty"},
            {"MinimumDegrees", 0x94, "FloatProperty"},
            {"MaximumDegrees", 0x98, "FloatProperty"},
            {"Thickness", 0x9C, "FloatProperty"},
            {"Detail", 0xA0, "IntProperty"},
            {"Space", 0xA4, "NameProperty"},
            {"WorldOffset", 0xB0, "StructProperty"},
            {"bEnabled", 0x110, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugArcItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugArcItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Radius = 0x90;
            static constexpr std::uintptr_t MinimumDegrees = 0x94;
            static constexpr std::uintptr_t MaximumDegrees = 0x98;
            static constexpr std::uintptr_t Thickness = 0x9C;
            static constexpr std::uintptr_t Detail = 0xA0;
            static constexpr std::uintptr_t Space = 0xA4;
            static constexpr std::uintptr_t WorldOffset = 0xB0;
            static constexpr std::uintptr_t bEnabled = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Radius", 0x90, "FloatProperty"},
            {"MinimumDegrees", 0x94, "FloatProperty"},
            {"MaximumDegrees", 0x98, "FloatProperty"},
            {"Thickness", 0x9C, "FloatProperty"},
            {"Detail", 0xA0, "IntProperty"},
            {"Space", 0xA4, "StructProperty"},
            {"WorldOffset", 0xB0, "StructProperty"},
            {"bEnabled", 0x110, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugBase
    {
        static constexpr std::string_view Name = "RigUnit_DebugBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugDrawSettings = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugDrawSettings", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_DebugBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_DebugBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugDrawSettings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugDrawSettings", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_DebugBezier
    {
        static constexpr std::string_view Name = "RigUnit_DebugBezier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Bezier = 0x18;
            static constexpr std::uintptr_t MinimumU = 0x78;
            static constexpr std::uintptr_t MaximumU = 0x7C;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Thickness = 0x90;
            static constexpr std::uintptr_t Detail = 0x94;
            static constexpr std::uintptr_t Space = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Bezier", 0x18, "StructProperty"},
            {"MinimumU", 0x78, "FloatProperty"},
            {"MaximumU", 0x7C, "FloatProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Thickness", 0x90, "FloatProperty"},
            {"Detail", 0x94, "IntProperty"},
            {"Space", 0x98, "NameProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugBezierItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugBezierItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Bezier = 0x18;
            static constexpr std::uintptr_t MinimumU = 0x78;
            static constexpr std::uintptr_t MaximumU = 0x7C;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Thickness = 0x90;
            static constexpr std::uintptr_t Detail = 0x94;
            static constexpr std::uintptr_t Space = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Bezier", 0x18, "StructProperty"},
            {"MinimumU", 0x78, "FloatProperty"},
            {"MaximumU", 0x7C, "FloatProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Thickness", 0x90, "FloatProperty"},
            {"Detail", 0x94, "IntProperty"},
            {"Space", 0x98, "StructProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugHierarchy
    {
        static constexpr std::string_view Name = "RigUnit_DebugHierarchy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x10;
            static constexpr std::uintptr_t Items = 0x18;
            static constexpr std::uintptr_t Scale = 0x28;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t WorldOffset = 0x40;
            static constexpr std::uintptr_t bEnabled = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ExecutePin", 0x10, "StructProperty"},
            {"Items", 0x18, "ArrayProperty"},
            {"Scale", 0x28, "FloatProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"WorldOffset", 0x40, "StructProperty"},
            {"bEnabled", 0xA0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugLine
    {
        static constexpr std::string_view Name = "RigUnit_DebugLine";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x18;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Color = 0x48;
            static constexpr std::uintptr_t Thickness = 0x58;
            static constexpr std::uintptr_t Space = 0x5C;
            static constexpr std::uintptr_t WorldOffset = 0x60;
            static constexpr std::uintptr_t bEnabled = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"A", 0x18, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Color", 0x48, "StructProperty"},
            {"Thickness", 0x58, "FloatProperty"},
            {"Space", 0x5C, "NameProperty"},
            {"WorldOffset", 0x60, "StructProperty"},
            {"bEnabled", 0xC0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugLineItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugLineItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x18;
            static constexpr std::uintptr_t B = 0x30;
            static constexpr std::uintptr_t Color = 0x48;
            static constexpr std::uintptr_t Thickness = 0x58;
            static constexpr std::uintptr_t Space = 0x5C;
            static constexpr std::uintptr_t WorldOffset = 0x70;
            static constexpr std::uintptr_t bEnabled = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"A", 0x18, "StructProperty"},
            {"B", 0x30, "StructProperty"},
            {"Color", 0x48, "StructProperty"},
            {"Thickness", 0x58, "FloatProperty"},
            {"Space", 0x5C, "StructProperty"},
            {"WorldOffset", 0x70, "StructProperty"},
            {"bEnabled", 0xD0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugLineStrip
    {
        static constexpr std::string_view Name = "RigUnit_DebugLineStrip";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x18;
            static constexpr std::uintptr_t Color = 0x28;
            static constexpr std::uintptr_t Thickness = 0x38;
            static constexpr std::uintptr_t Space = 0x3C;
            static constexpr std::uintptr_t WorldOffset = 0x40;
            static constexpr std::uintptr_t bEnabled = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Points", 0x18, "ArrayProperty"},
            {"Color", 0x28, "StructProperty"},
            {"Thickness", 0x38, "FloatProperty"},
            {"Space", 0x3C, "NameProperty"},
            {"WorldOffset", 0x40, "StructProperty"},
            {"bEnabled", 0xA0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugLineStripItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugLineStripItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x18;
            static constexpr std::uintptr_t Color = 0x28;
            static constexpr std::uintptr_t Thickness = 0x38;
            static constexpr std::uintptr_t Space = 0x3C;
            static constexpr std::uintptr_t WorldOffset = 0x50;
            static constexpr std::uintptr_t bEnabled = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Points", 0x18, "ArrayProperty"},
            {"Color", 0x28, "StructProperty"},
            {"Thickness", 0x38, "FloatProperty"},
            {"Space", 0x3C, "StructProperty"},
            {"WorldOffset", 0x50, "StructProperty"},
            {"bEnabled", 0xB0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugPose
    {
        static constexpr std::string_view Name = "RigUnit_DebugPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x10;
            static constexpr std::uintptr_t Pose = 0x18;
            static constexpr std::uintptr_t Items = 0x48;
            static constexpr std::uintptr_t Scale = 0x58;
            static constexpr std::uintptr_t Color = 0x5C;
            static constexpr std::uintptr_t Thickness = 0x6C;
            static constexpr std::uintptr_t WorldOffset = 0x70;
            static constexpr std::uintptr_t bEnabled = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutePin", 0x10, "StructProperty"},
            {"Pose", 0x18, "StructProperty"},
            {"Items", 0x48, "ArrayProperty"},
            {"Scale", 0x58, "FloatProperty"},
            {"Color", 0x5C, "StructProperty"},
            {"Thickness", 0x6C, "FloatProperty"},
            {"WorldOffset", 0x70, "StructProperty"},
            {"bEnabled", 0xD0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugRectangle
    {
        static constexpr std::string_view Name = "RigUnit_DebugRectangle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Scale = 0x90;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Space = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Scale", 0x90, "FloatProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Space", 0x98, "NameProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugRectangleItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugRectangleItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t Scale = 0x90;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Space = 0x98;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"Scale", 0x90, "FloatProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Space", 0x98, "StructProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugTransform
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Mode = 0x70;
            static constexpr std::uintptr_t Color = 0x74;
            static constexpr std::uintptr_t Thickness = 0x84;
            static constexpr std::uintptr_t Scale = 0x88;
            static constexpr std::uintptr_t Space = 0x8C;
            static constexpr std::uintptr_t WorldOffset = 0x90;
            static constexpr std::uintptr_t bEnabled = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transform", 0x10, "StructProperty"},
            {"Mode", 0x70, "EnumProperty"},
            {"Color", 0x74, "StructProperty"},
            {"Thickness", 0x84, "FloatProperty"},
            {"Scale", 0x88, "FloatProperty"},
            {"Space", 0x8C, "NameProperty"},
            {"WorldOffset", 0x90, "StructProperty"},
            {"bEnabled", 0xF0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugTransformArrayMutable
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransformArrayMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x18;
            static constexpr std::uintptr_t Mode = 0x28;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t Space = 0x44;
            static constexpr std::uintptr_t WorldOffset = 0x50;
            static constexpr std::uintptr_t bEnabled = 0xB0;
            static constexpr std::uintptr_t WorkData = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Transforms", 0x18, "ArrayProperty"},
            {"Mode", 0x28, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"Scale", 0x40, "FloatProperty"},
            {"Space", 0x44, "NameProperty"},
            {"WorldOffset", 0x50, "StructProperty"},
            {"bEnabled", 0xB0, "BoolProperty"},
            {"WorkData", 0xB8, "StructProperty"},
        }};
    };

    struct RigUnit_DebugTransformArrayMutableItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransformArrayMutableItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x18;
            static constexpr std::uintptr_t ParentIndices = 0x28;
            static constexpr std::uintptr_t Mode = 0x38;
            static constexpr std::uintptr_t Color = 0x3C;
            static constexpr std::uintptr_t Thickness = 0x4C;
            static constexpr std::uintptr_t Scale = 0x50;
            static constexpr std::uintptr_t Space = 0x54;
            static constexpr std::uintptr_t WorldOffset = 0x60;
            static constexpr std::uintptr_t bEnabled = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Transforms", 0x18, "ArrayProperty"},
            {"ParentIndices", 0x28, "ArrayProperty"},
            {"Mode", 0x38, "EnumProperty"},
            {"Color", 0x3C, "StructProperty"},
            {"Thickness", 0x4C, "FloatProperty"},
            {"Scale", 0x50, "FloatProperty"},
            {"Space", 0x54, "StructProperty"},
            {"WorldOffset", 0x60, "StructProperty"},
            {"bEnabled", 0xC0, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugTransformArrayMutable_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransformArrayMutable_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DrawTransforms = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DrawTransforms", 0x0, "ArrayProperty"},
        }};
    };

    struct RigUnit_DebugTransformMutable
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransformMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Mode = 0x80;
            static constexpr std::uintptr_t Color = 0x84;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Scale = 0x98;
            static constexpr std::uintptr_t Space = 0x9C;
            static constexpr std::uintptr_t WorldOffset = 0xA0;
            static constexpr std::uintptr_t bEnabled = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Mode", 0x80, "EnumProperty"},
            {"Color", 0x84, "StructProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Scale", 0x98, "FloatProperty"},
            {"Space", 0x9C, "NameProperty"},
            {"WorldOffset", 0xA0, "StructProperty"},
            {"bEnabled", 0x100, "BoolProperty"},
        }};
    };

    struct RigUnit_DebugTransformMutableItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_DebugTransformMutableItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Mode = 0x80;
            static constexpr std::uintptr_t Color = 0x84;
            static constexpr std::uintptr_t Thickness = 0x94;
            static constexpr std::uintptr_t Scale = 0x98;
            static constexpr std::uintptr_t Space = 0x9C;
            static constexpr std::uintptr_t WorldOffset = 0xB0;
            static constexpr std::uintptr_t bEnabled = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transform", 0x20, "StructProperty"},
            {"Mode", 0x80, "EnumProperty"},
            {"Color", 0x84, "StructProperty"},
            {"Thickness", 0x94, "FloatProperty"},
            {"Scale", 0x98, "FloatProperty"},
            {"Space", 0x9C, "StructProperty"},
            {"WorldOffset", 0xB0, "StructProperty"},
            {"bEnabled", 0x110, "BoolProperty"},
        }};
    };

    struct RigUnit_DiscardMatches
    {
        static constexpr std::string_view Name = "RigUnit_DiscardMatches";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Excluded = 0x10;
            static constexpr std::uintptr_t Message = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Excluded", 0x10, "ArrayProperty"},
            {"Message", 0x20, "StrProperty"},
        }};
    };

    struct RigUnit_Distance_VectorVector
    {
        static constexpr std::string_view Name = "RigUnit_Distance_VectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "FloatProperty"},
        }};
    };

    struct RigUnit_DistributeRotation
    {
        static constexpr std::string_view Name = "RigUnit_DistributeRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EndBone = 0x14;
            static constexpr std::uintptr_t Rotations = 0x18;
            static constexpr std::uintptr_t RotationEaseType = 0x28;
            static constexpr std::uintptr_t Weight = 0x2C;
            static constexpr std::uintptr_t bPropagateToChildren = 0x30;
            static constexpr std::uintptr_t WorkData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EndBone", 0x14, "NameProperty"},
            {"Rotations", 0x18, "ArrayProperty"},
            {"RotationEaseType", 0x28, "EnumProperty"},
            {"Weight", 0x2C, "FloatProperty"},
            {"bPropagateToChildren", 0x30, "BoolProperty"},
            {"WorkData", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_DistributeRotationForCollection
    {
        static constexpr std::string_view Name = "RigUnit_DistributeRotationForCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Rotations = 0x20;
            static constexpr std::uintptr_t RotationEaseType = 0x30;
            static constexpr std::uintptr_t Weight = 0x34;
            static constexpr std::uintptr_t WorkData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"Rotations", 0x20, "ArrayProperty"},
            {"RotationEaseType", 0x30, "EnumProperty"},
            {"Weight", 0x34, "FloatProperty"},
            {"WorkData", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_DistributeRotationForItemArray
    {
        static constexpr std::string_view Name = "RigUnit_DistributeRotationForItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Rotations = 0x20;
            static constexpr std::uintptr_t RotationEaseType = 0x30;
            static constexpr std::uintptr_t Weight = 0x34;
            static constexpr std::uintptr_t WorkData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"Rotations", 0x20, "ArrayProperty"},
            {"RotationEaseType", 0x30, "EnumProperty"},
            {"Weight", 0x34, "FloatProperty"},
            {"WorkData", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_DistributeRotation_Rotation
    {
        static constexpr std::string_view Name = "RigUnit_DistributeRotation_Rotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Ratio = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Ratio", 0x20, "FloatProperty"},
        }};
    };

    struct RigUnit_DistributeRotation_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_DistributeRotation_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedItems = 0x0;
            static constexpr std::uintptr_t ItemRotationA = 0x10;
            static constexpr std::uintptr_t ItemRotationB = 0x20;
            static constexpr std::uintptr_t ItemRotationT = 0x30;
            static constexpr std::uintptr_t ItemLocalTransforms = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CachedItems", 0x0, "ArrayProperty"},
            {"ItemRotationA", 0x10, "ArrayProperty"},
            {"ItemRotationB", 0x20, "ArrayProperty"},
            {"ItemRotationT", 0x30, "ArrayProperty"},
            {"ItemLocalTransforms", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_Divide_FloatFloat
    {
        static constexpr std::string_view Name = "RigUnit_Divide_FloatFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryFloatOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "FloatProperty"},
            {"Argument1", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigUnit_Divide_VectorVector
    {
        static constexpr std::string_view Name = "RigUnit_Divide_VectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryVectorOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_DrawContainerGetInstruction
    {
        static constexpr std::string_view Name = "RigUnit_DrawContainerGetInstruction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t InstructionName = 0x8;
            static constexpr std::uintptr_t Color = 0xC;
            static constexpr std::uintptr_t Transform = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstructionName", 0x8, "NameProperty"},
            {"Color", 0xC, "StructProperty"},
            {"Transform", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_DrawContainerSetColor
    {
        static constexpr std::string_view Name = "RigUnit_DrawContainerSetColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t InstructionName = 0x10;
            static constexpr std::uintptr_t Color = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstructionName", 0x10, "NameProperty"},
            {"Color", 0x14, "StructProperty"},
        }};
    };

    struct RigUnit_DrawContainerSetThickness
    {
        static constexpr std::string_view Name = "RigUnit_DrawContainerSetThickness";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t InstructionName = 0x10;
            static constexpr std::uintptr_t Thickness = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstructionName", 0x10, "NameProperty"},
            {"Thickness", 0x14, "FloatProperty"},
        }};
    };

    struct RigUnit_DrawContainerSetTransform
    {
        static constexpr std::string_view Name = "RigUnit_DrawContainerSetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t InstructionName = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstructionName", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_DynamicHierarchyBase
    {
        static constexpr std::string_view Name = "RigUnit_DynamicHierarchyBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_DynamicHierarchyBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_DynamicHierarchyBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_EndProfilingTimer
    {
        static constexpr std::string_view Name = "RigUnit_EndProfilingTimer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfMeasurements = 0x18;
            static constexpr std::uintptr_t Prefix = 0x20;
            static constexpr std::uintptr_t AverageTime = 0x30;
            static constexpr std::uintptr_t AccumulatedTime = 0x34;
            static constexpr std::uintptr_t MeasurementsLeft = 0x38;
            static constexpr std::uintptr_t bIsInitialized = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NumberOfMeasurements", 0x18, "IntProperty"},
            {"Prefix", 0x20, "StrProperty"},
            {"AverageTime", 0x30, "FloatProperty"},
            {"AccumulatedTime", 0x34, "FloatProperty"},
            {"MeasurementsLeft", 0x38, "IntProperty"},
            {"bIsInitialized", 0x3C, "BoolProperty"},
        }};
    };

    struct RigUnit_FABRIK
    {
        static constexpr std::string_view Name = "RigUnit_FABRIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EffectorBone = 0x14;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t bPropagateToChildren = 0x88;
            static constexpr std::uintptr_t MaxIterations = 0x8C;
            static constexpr std::uintptr_t WorkData = 0x90;
            static constexpr std::uintptr_t bSetEffectorTransform = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EffectorBone", 0x14, "NameProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"bPropagateToChildren", 0x88, "BoolProperty"},
            {"MaxIterations", 0x8C, "IntProperty"},
            {"WorkData", 0x90, "StructProperty"},
            {"bSetEffectorTransform", 0xC8, "BoolProperty"},
        }};
    };

    struct RigUnit_FABRIKItemArray
    {
        static constexpr std::string_view Name = "RigUnit_FABRIKItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t bPropagateToChildren = 0x88;
            static constexpr std::uintptr_t MaxIterations = 0x8C;
            static constexpr std::uintptr_t WorkData = 0x90;
            static constexpr std::uintptr_t bSetEffectorTransform = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"bPropagateToChildren", 0x88, "BoolProperty"},
            {"MaxIterations", 0x8C, "IntProperty"},
            {"WorkData", 0x90, "StructProperty"},
            {"bSetEffectorTransform", 0xC8, "BoolProperty"},
        }};
    };

    struct RigUnit_FABRIKPerItem
    {
        static constexpr std::string_view Name = "RigUnit_FABRIKPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t EffectorTransform = 0x20;
            static constexpr std::uintptr_t Precision = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t bPropagateToChildren = 0x88;
            static constexpr std::uintptr_t MaxIterations = 0x8C;
            static constexpr std::uintptr_t WorkData = 0x90;
            static constexpr std::uintptr_t bSetEffectorTransform = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"EffectorTransform", 0x20, "StructProperty"},
            {"Precision", 0x80, "FloatProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"bPropagateToChildren", 0x88, "BoolProperty"},
            {"MaxIterations", 0x8C, "IntProperty"},
            {"WorkData", 0x90, "StructProperty"},
            {"bSetEffectorTransform", 0xC8, "BoolProperty"},
        }};
    };

    struct RigUnit_FABRIK_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_FABRIK_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Chain = 0x0;
            static constexpr std::uintptr_t CachedItems = 0x10;
            static constexpr std::uintptr_t CachedEffector = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Chain", 0x0, "ArrayProperty"},
            {"CachedItems", 0x10, "ArrayProperty"},
            {"CachedEffector", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_FilterItemsByMetadataTags
    {
        static constexpr std::string_view Name = "RigUnit_FilterItemsByMetadataTags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Tags = 0x18;
            static constexpr std::uintptr_t Namespace = 0x28;
            static constexpr std::uintptr_t Inclusive = 0x29;
            static constexpr std::uintptr_t Result = 0x30;
            static constexpr std::uintptr_t CachedIndices = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"Tags", 0x18, "ArrayProperty"},
            {"Namespace", 0x28, "EnumProperty"},
            {"Inclusive", 0x29, "BoolProperty"},
            {"Result", 0x30, "ArrayProperty"},
            {"CachedIndices", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_FindClosestItem
    {
        static constexpr std::string_view Name = "RigUnit_FindClosestItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Point = 0x20;
            static constexpr std::uintptr_t Item = 0x38;
            static constexpr std::uintptr_t CachedItems = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"Point", 0x20, "StructProperty"},
            {"Item", 0x38, "StructProperty"},
            {"CachedItems", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_FindItemsWithMetadata
    {
        static constexpr std::string_view Name = "RigUnit_FindItemsWithMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
            static constexpr std::uintptr_t Namespace = 0xD;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x8, "NameProperty"},
            {"Type", 0xC, "EnumProperty"},
            {"Namespace", 0xD, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_FindItemsWithMetadataTag
    {
        static constexpr std::string_view Name = "RigUnit_FindItemsWithMetadataTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x8;
            static constexpr std::uintptr_t Namespace = 0xC;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x8, "NameProperty"},
            {"Namespace", 0xC, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_FindItemsWithMetadataTagArray
    {
        static constexpr std::string_view Name = "RigUnit_FindItemsWithMetadataTagArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x8;
            static constexpr std::uintptr_t Namespace = 0x18;
            static constexpr std::uintptr_t Items = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tags", 0x8, "ArrayProperty"},
            {"Namespace", 0x18, "EnumProperty"},
            {"Items", 0x20, "ArrayProperty"},
        }};
    };

    struct RigUnit_FitChainToCurve
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EndBone = 0x14;
            static constexpr std::uintptr_t Bezier = 0x18;
            static constexpr std::uintptr_t Alignment = 0x78;
            static constexpr std::uintptr_t Minimum = 0x7C;
            static constexpr std::uintptr_t Maximum = 0x80;
            static constexpr std::uintptr_t SamplingPrecision = 0x84;
            static constexpr std::uintptr_t PrimaryAxis = 0x88;
            static constexpr std::uintptr_t SecondaryAxis = 0xA0;
            static constexpr std::uintptr_t PoleVectorPosition = 0xB8;
            static constexpr std::uintptr_t Rotations = 0xD0;
            static constexpr std::uintptr_t RotationEaseType = 0xE0;
            static constexpr std::uintptr_t Weight = 0xE4;
            static constexpr std::uintptr_t bPropagateToChildren = 0xE8;
            static constexpr std::uintptr_t DebugSettings = 0xF0;
            static constexpr std::uintptr_t WorkData = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EndBone", 0x14, "NameProperty"},
            {"Bezier", 0x18, "StructProperty"},
            {"Alignment", 0x78, "EnumProperty"},
            {"Minimum", 0x7C, "FloatProperty"},
            {"Maximum", 0x80, "FloatProperty"},
            {"SamplingPrecision", 0x84, "IntProperty"},
            {"PrimaryAxis", 0x88, "StructProperty"},
            {"SecondaryAxis", 0xA0, "StructProperty"},
            {"PoleVectorPosition", 0xB8, "StructProperty"},
            {"Rotations", 0xD0, "ArrayProperty"},
            {"RotationEaseType", 0xE0, "EnumProperty"},
            {"Weight", 0xE4, "FloatProperty"},
            {"bPropagateToChildren", 0xE8, "BoolProperty"},
            {"DebugSettings", 0xF0, "StructProperty"},
            {"WorkData", 0x180, "StructProperty"},
        }};
    };

    struct RigUnit_FitChainToCurveItemArray
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurveItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Bezier = 0x20;
            static constexpr std::uintptr_t Alignment = 0x80;
            static constexpr std::uintptr_t Minimum = 0x84;
            static constexpr std::uintptr_t Maximum = 0x88;
            static constexpr std::uintptr_t SamplingPrecision = 0x8C;
            static constexpr std::uintptr_t PrimaryAxis = 0x90;
            static constexpr std::uintptr_t SecondaryAxis = 0xA8;
            static constexpr std::uintptr_t PoleVectorPosition = 0xC0;
            static constexpr std::uintptr_t Rotations = 0xD8;
            static constexpr std::uintptr_t RotationEaseType = 0xE8;
            static constexpr std::uintptr_t Weight = 0xEC;
            static constexpr std::uintptr_t bPropagateToChildren = 0xF0;
            static constexpr std::uintptr_t DebugSettings = 0x100;
            static constexpr std::uintptr_t WorkData = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"Bezier", 0x20, "StructProperty"},
            {"Alignment", 0x80, "EnumProperty"},
            {"Minimum", 0x84, "FloatProperty"},
            {"Maximum", 0x88, "FloatProperty"},
            {"SamplingPrecision", 0x8C, "IntProperty"},
            {"PrimaryAxis", 0x90, "StructProperty"},
            {"SecondaryAxis", 0xA8, "StructProperty"},
            {"PoleVectorPosition", 0xC0, "StructProperty"},
            {"Rotations", 0xD8, "ArrayProperty"},
            {"RotationEaseType", 0xE8, "EnumProperty"},
            {"Weight", 0xEC, "FloatProperty"},
            {"bPropagateToChildren", 0xF0, "BoolProperty"},
            {"DebugSettings", 0x100, "StructProperty"},
            {"WorkData", 0x190, "StructProperty"},
        }};
    };

    struct RigUnit_FitChainToCurvePerItem
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurvePerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Bezier = 0x20;
            static constexpr std::uintptr_t Alignment = 0x80;
            static constexpr std::uintptr_t Minimum = 0x84;
            static constexpr std::uintptr_t Maximum = 0x88;
            static constexpr std::uintptr_t SamplingPrecision = 0x8C;
            static constexpr std::uintptr_t PrimaryAxis = 0x90;
            static constexpr std::uintptr_t SecondaryAxis = 0xA8;
            static constexpr std::uintptr_t PoleVectorPosition = 0xC0;
            static constexpr std::uintptr_t Rotations = 0xD8;
            static constexpr std::uintptr_t RotationEaseType = 0xE8;
            static constexpr std::uintptr_t Weight = 0xEC;
            static constexpr std::uintptr_t bPropagateToChildren = 0xF0;
            static constexpr std::uintptr_t DebugSettings = 0x100;
            static constexpr std::uintptr_t WorkData = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"Bezier", 0x20, "StructProperty"},
            {"Alignment", 0x80, "EnumProperty"},
            {"Minimum", 0x84, "FloatProperty"},
            {"Maximum", 0x88, "FloatProperty"},
            {"SamplingPrecision", 0x8C, "IntProperty"},
            {"PrimaryAxis", 0x90, "StructProperty"},
            {"SecondaryAxis", 0xA8, "StructProperty"},
            {"PoleVectorPosition", 0xC0, "StructProperty"},
            {"Rotations", 0xD8, "ArrayProperty"},
            {"RotationEaseType", 0xE8, "EnumProperty"},
            {"Weight", 0xEC, "FloatProperty"},
            {"bPropagateToChildren", 0xF0, "BoolProperty"},
            {"DebugSettings", 0x100, "StructProperty"},
            {"WorkData", 0x190, "StructProperty"},
        }};
    };

    struct RigUnit_FitChainToCurve_DebugSettings
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurve_DebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t CurveColor = 0x8;
            static constexpr std::uintptr_t SegmentsColor = 0x18;
            static constexpr std::uintptr_t WorldOffset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"CurveColor", 0x8, "StructProperty"},
            {"SegmentsColor", 0x18, "StructProperty"},
            {"WorldOffset", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_FitChainToCurve_Rotation
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurve_Rotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Ratio = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Ratio", 0x20, "FloatProperty"},
        }};
    };

    struct RigUnit_FitChainToCurve_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_FitChainToCurve_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainLength = 0x0;
            static constexpr std::uintptr_t ItemPositions = 0x8;
            static constexpr std::uintptr_t ItemSegments = 0x18;
            static constexpr std::uintptr_t CurvePositions = 0x28;
            static constexpr std::uintptr_t CurveSegments = 0x38;
            static constexpr std::uintptr_t CachedItems = 0x48;
            static constexpr std::uintptr_t ItemRotationA = 0x58;
            static constexpr std::uintptr_t ItemRotationB = 0x68;
            static constexpr std::uintptr_t ItemRotationT = 0x78;
            static constexpr std::uintptr_t ItemLocalTransforms = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ChainLength", 0x0, "FloatProperty"},
            {"ItemPositions", 0x8, "ArrayProperty"},
            {"ItemSegments", 0x18, "ArrayProperty"},
            {"CurvePositions", 0x28, "ArrayProperty"},
            {"CurveSegments", 0x38, "ArrayProperty"},
            {"CachedItems", 0x48, "ArrayProperty"},
            {"ItemRotationA", 0x58, "ArrayProperty"},
            {"ItemRotationB", 0x68, "ArrayProperty"},
            {"ItemRotationT", 0x78, "ArrayProperty"},
            {"ItemLocalTransforms", 0x88, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetAnimationChannelBase
    {
        static constexpr std::string_view Name = "RigUnit_GetAnimationChannelBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Channel = 0xC;
            static constexpr std::uintptr_t bInitial = 0x10;
            static constexpr std::uintptr_t CachedChannelKey = 0x14;
            static constexpr std::uintptr_t CachedChannelHash = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Channel", 0xC, "NameProperty"},
            {"bInitial", 0x10, "BoolProperty"},
            {"CachedChannelKey", 0x14, "StructProperty"},
            {"CachedChannelHash", 0x1C, "IntProperty"},
        }};
    };

    struct RigUnit_GetAnimationChannelFromItemBase
    {
        static constexpr std::string_view Name = "RigUnit_GetAnimationChannelFromItemBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t bInitial = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"bInitial", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_GetBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedBone = 0x70;
            static constexpr std::uintptr_t bFirstUpdate = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bone", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedBone", 0x70, "StructProperty"},
            {"bFirstUpdate", 0x88, "BoolProperty"},
        }};
    };

    struct RigUnit_GetBoolAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetBoolAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "BoolProperty"},
        }};
    };

    struct RigUnit_GetBoolAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetBoolAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_GetCandidates
    {
        static constexpr std::string_view Name = "RigUnit_GetCandidates";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Connector = 0x8;
            static constexpr std::uintptr_t Candidates = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Connector", 0x8, "StructProperty"},
            {"Candidates", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetControlBool
    {
        static constexpr std::string_view Name = "RigUnit_GetControlBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t BoolValue = 0xC;
            static constexpr std::uintptr_t CachedControlIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"BoolValue", 0xC, "BoolProperty"},
            {"CachedControlIndex", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlColor
    {
        static constexpr std::string_view Name = "RigUnit_GetControlColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Color = 0xC;
            static constexpr std::uintptr_t CachedControlIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Color", 0xC, "StructProperty"},
            {"CachedControlIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlDrivenList
    {
        static constexpr std::string_view Name = "RigUnit_GetControlDrivenList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Driven = 0x10;
            static constexpr std::uintptr_t CachedControlIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Driven", 0x10, "ArrayProperty"},
            {"CachedControlIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlFloat
    {
        static constexpr std::string_view Name = "RigUnit_GetControlFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t FloatValue = 0xC;
            static constexpr std::uintptr_t Minimum = 0x10;
            static constexpr std::uintptr_t Maximum = 0x14;
            static constexpr std::uintptr_t CachedControlIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"FloatValue", 0xC, "FloatProperty"},
            {"Minimum", 0x10, "FloatProperty"},
            {"Maximum", 0x14, "FloatProperty"},
            {"CachedControlIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlInitialTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetControlInitialTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedControlIndex = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedControlIndex", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlInteger
    {
        static constexpr std::string_view Name = "RigUnit_GetControlInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t IntegerValue = 0xC;
            static constexpr std::uintptr_t Minimum = 0x10;
            static constexpr std::uintptr_t Maximum = 0x14;
            static constexpr std::uintptr_t CachedControlIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"IntegerValue", 0xC, "IntProperty"},
            {"Minimum", 0x10, "IntProperty"},
            {"Maximum", 0x14, "IntProperty"},
            {"CachedControlIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlOffset
    {
        static constexpr std::string_view Name = "RigUnit_GetControlOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t OffsetTransform = 0x10;
            static constexpr std::uintptr_t CachedIndex = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"OffsetTransform", 0x10, "StructProperty"},
            {"CachedIndex", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlPreferredEulerAngles
    {
        static constexpr std::string_view Name = "RigUnit_GetControlPreferredEulerAngles";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Angles = 0x10;
            static constexpr std::uintptr_t RotationOrder = 0x28;
            static constexpr std::uintptr_t CachedControlIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Angles", 0x10, "StructProperty"},
            {"RotationOrder", 0x28, "EnumProperty"},
            {"CachedControlIndex", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlRotator
    {
        static constexpr std::string_view Name = "RigUnit_GetControlRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Rotator = 0x10;
            static constexpr std::uintptr_t Minimum = 0x28;
            static constexpr std::uintptr_t Maximum = 0x40;
            static constexpr std::uintptr_t CachedControlIndex = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Rotator", 0x10, "StructProperty"},
            {"Minimum", 0x28, "StructProperty"},
            {"Maximum", 0x40, "StructProperty"},
            {"CachedControlIndex", 0x58, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetControlTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Minimum = 0x70;
            static constexpr std::uintptr_t Maximum = 0xD0;
            static constexpr std::uintptr_t CachedControlIndex = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"Minimum", 0x70, "StructProperty"},
            {"Maximum", 0xD0, "StructProperty"},
            {"CachedControlIndex", 0x130, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlVector
    {
        static constexpr std::string_view Name = "RigUnit_GetControlVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Vector = 0x10;
            static constexpr std::uintptr_t Minimum = 0x28;
            static constexpr std::uintptr_t Maximum = 0x40;
            static constexpr std::uintptr_t CachedControlIndex = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Vector", 0x10, "StructProperty"},
            {"Minimum", 0x28, "StructProperty"},
            {"Maximum", 0x40, "StructProperty"},
            {"CachedControlIndex", 0x58, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlVector2D
    {
        static constexpr std::string_view Name = "RigUnit_GetControlVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Vector = 0x10;
            static constexpr std::uintptr_t Minimum = 0x20;
            static constexpr std::uintptr_t Maximum = 0x30;
            static constexpr std::uintptr_t CachedControlIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Vector", 0x10, "StructProperty"},
            {"Minimum", 0x20, "StructProperty"},
            {"Maximum", 0x30, "StructProperty"},
            {"CachedControlIndex", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_GetControlVisibility
    {
        static constexpr std::string_view Name = "RigUnit_GetControlVisibility";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t bVisible = 0x10;
            static constexpr std::uintptr_t CachedControlIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"bVisible", 0x10, "BoolProperty"},
            {"CachedControlIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetCurrentNameSpace
    {
        static constexpr std::string_view Name = "RigUnit_GetCurrentNameSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Namespace", 0x8, "StrProperty"},
        }};
    };

    struct RigUnit_GetCurveValue
    {
        static constexpr std::string_view Name = "RigUnit_GetCurveValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x8;
            static constexpr std::uintptr_t Valid = 0xC;
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t CachedCurveIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Curve", 0x8, "NameProperty"},
            {"Valid", 0xC, "BoolProperty"},
            {"Value", 0x10, "FloatProperty"},
            {"CachedCurveIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetFloatAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetFloatAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "FloatProperty"},
        }};
    };

    struct RigUnit_GetFloatAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetFloatAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "FloatProperty"},
        }};
    };

    struct RigUnit_GetInitialBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetInitialBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedBone = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bone", 0x8, "NameProperty"},
            {"Space", 0xC, "EnumProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedBone", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_GetIntAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetIntAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "IntProperty"},
        }};
    };

    struct RigUnit_GetIntAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetIntAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "IntProperty"},
        }};
    };

    struct RigUnit_GetItemModuleName
    {
        static constexpr std::string_view Name = "RigUnit_GetItemModuleName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t IsPartOfModule = 0x10;
            static constexpr std::uintptr_t Module = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"IsPartOfModule", 0x10, "BoolProperty"},
            {"Module", 0x18, "StrProperty"},
        }};
    };

    struct RigUnit_GetItemNameSpace
    {
        static constexpr std::string_view Name = "RigUnit_GetItemNameSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t HasNameSpace = 0x10;
            static constexpr std::uintptr_t Namespace = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"HasNameSpace", 0x10, "BoolProperty"},
            {"Namespace", 0x18, "StrProperty"},
        }};
    };

    struct RigUnit_GetItemShortName
    {
        static constexpr std::string_view Name = "RigUnit_GetItemShortName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t ShortName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"ShortName", 0x10, "NameProperty"},
        }};
    };

    struct RigUnit_GetItemsInModule
    {
        static constexpr std::string_view Name = "RigUnit_GetItemsInModule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeToSearch = 0x8;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TypeToSearch", 0x8, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetItemsInNameSpace
    {
        static constexpr std::string_view Name = "RigUnit_GetItemsInNameSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeToSearch = 0x8;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TypeToSearch", 0x8, "EnumProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetJointTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetJointTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Joint = 0x10;
            static constexpr std::uintptr_t Type = 0x14;
            static constexpr std::uintptr_t TransformSpace = 0x15;
            static constexpr std::uintptr_t BaseTransform = 0x20;
            static constexpr std::uintptr_t BaseJoint = 0x80;
            static constexpr std::uintptr_t Output = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Joint", 0x10, "NameProperty"},
            {"Type", 0x14, "EnumProperty"},
            {"TransformSpace", 0x15, "EnumProperty"},
            {"BaseTransform", 0x20, "StructProperty"},
            {"BaseJoint", 0x80, "NameProperty"},
            {"Output", 0x90, "StructProperty"},
        }};
    };

    struct RigUnit_GetMetadataTags
    {
        static constexpr std::string_view Name = "RigUnit_GetMetadataTags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Tags = 0x10;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Tags", 0x10, "ArrayProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetModuleName
    {
        static constexpr std::string_view Name = "RigUnit_GetModuleName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Module = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Module", 0x8, "StrProperty"},
        }};
    };

    struct RigUnit_GetRelativeBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetRelativeBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x8;
            static constexpr std::uintptr_t Space = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedBone = 0x70;
            static constexpr std::uintptr_t CachedSpace = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bone", 0x8, "NameProperty"},
            {"Space", 0xC, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedBone", 0x70, "StructProperty"},
            {"CachedSpace", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_GetRelativeTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetRelativeTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryTransformOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x10;
            static constexpr std::uintptr_t Argument1 = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x10, "StructProperty"},
            {"Argument1", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigUnit_GetRelativeTransformForItem
    {
        static constexpr std::string_view Name = "RigUnit_GetRelativeTransformForItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t bChildInitial = 0x10;
            static constexpr std::uintptr_t Parent = 0x14;
            static constexpr std::uintptr_t bParentInitial = 0x1C;
            static constexpr std::uintptr_t RelativeTransform = 0x20;
            static constexpr std::uintptr_t CachedChild = 0x80;
            static constexpr std::uintptr_t CachedParent = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"bChildInitial", 0x10, "BoolProperty"},
            {"Parent", 0x14, "StructProperty"},
            {"bParentInitial", 0x1C, "BoolProperty"},
            {"RelativeTransform", 0x20, "StructProperty"},
            {"CachedChild", 0x80, "StructProperty"},
            {"CachedParent", 0x98, "StructProperty"},
        }};
    };

    struct RigUnit_GetRotatorAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetRotatorAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetRotatorAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetRotatorAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetShapeTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetShapeTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x8;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedControlIndex = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x8, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedControlIndex", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_GetSpaceTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetSpaceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Space = 0x8;
            static constexpr std::uintptr_t SpaceType = 0xC;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t CachedSpaceIndex = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Space", 0x8, "NameProperty"},
            {"SpaceType", 0xC, "EnumProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"CachedSpaceIndex", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_GetTransform
    {
        static constexpr std::string_view Name = "RigUnit_GetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Space = 0x10;
            static constexpr std::uintptr_t bInitial = 0x11;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t CachedIndex = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Space", 0x10, "EnumProperty"},
            {"bInitial", 0x11, "BoolProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"CachedIndex", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_GetTransformAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetTransformAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetTransformAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetTransformAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetTransformArray
    {
        static constexpr std::string_view Name = "RigUnit_GetTransformArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Transforms = 0x20;
            static constexpr std::uintptr_t CachedIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Items", 0x8, "StructProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Transforms", 0x20, "ArrayProperty"},
            {"CachedIndex", 0x30, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetTransformItemArray
    {
        static constexpr std::string_view Name = "RigUnit_GetTransformItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Transforms = 0x20;
            static constexpr std::uintptr_t CachedIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Items", 0x8, "ArrayProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Transforms", 0x20, "ArrayProperty"},
            {"CachedIndex", 0x30, "ArrayProperty"},
        }};
    };

    struct RigUnit_GetVector2DAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetVector2DAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetVector2DAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetVector2DAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_GetVectorAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_GetVectorAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_GetVectorAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_GetVectorAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_Harmonics_TargetItem
    {
        static constexpr std::string_view Name = "RigUnit_Harmonics_TargetItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t Ratio = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"Ratio", 0x8, "FloatProperty"},
        }};
    };

    struct RigUnit_HasMetadata
    {
        static constexpr std::string_view Name = "RigUnit_HasMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t Type = 0x14;
            static constexpr std::uintptr_t Namespace = 0x15;
            static constexpr std::uintptr_t Found = 0x16;
            static constexpr std::uintptr_t CachedIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"Type", 0x14, "EnumProperty"},
            {"Namespace", 0x15, "EnumProperty"},
            {"Found", 0x16, "BoolProperty"},
            {"CachedIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_HasMetadataTag
    {
        static constexpr std::string_view Name = "RigUnit_HasMetadataTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Tag = 0x10;
            static constexpr std::uintptr_t Namespace = 0x14;
            static constexpr std::uintptr_t Found = 0x15;
            static constexpr std::uintptr_t CachedIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Tag", 0x10, "NameProperty"},
            {"Namespace", 0x14, "EnumProperty"},
            {"Found", 0x15, "BoolProperty"},
            {"CachedIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_HasMetadataTagArray
    {
        static constexpr std::string_view Name = "RigUnit_HasMetadataTagArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Tags = 0x10;
            static constexpr std::uintptr_t Namespace = 0x20;
            static constexpr std::uintptr_t Found = 0x21;
            static constexpr std::uintptr_t CachedIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Tags", 0x10, "ArrayProperty"},
            {"Namespace", 0x20, "EnumProperty"},
            {"Found", 0x21, "BoolProperty"},
            {"CachedIndex", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannel2DLimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannel2DLimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "StructProperty"},
            {"Y", 0x2, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelBool
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x29;
            static constexpr std::uintptr_t MaximumValue = 0x2A;
            static constexpr std::uintptr_t LimitsEnabled = 0x2B;
            static constexpr std::uintptr_t LayeredCombineMode = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "BoolProperty"},
            {"MinimumValue", 0x29, "BoolProperty"},
            {"MaximumValue", 0x2A, "BoolProperty"},
            {"LimitsEnabled", 0x2B, "StructProperty"},
            {"LayeredCombineMode", 0x2C, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelFloat
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x2C;
            static constexpr std::uintptr_t MaximumValue = 0x30;
            static constexpr std::uintptr_t LimitsEnabled = 0x34;
            static constexpr std::uintptr_t LayeredCombineMode = 0x36;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "FloatProperty"},
            {"MinimumValue", 0x2C, "FloatProperty"},
            {"MaximumValue", 0x30, "FloatProperty"},
            {"LimitsEnabled", 0x34, "StructProperty"},
            {"LayeredCombineMode", 0x36, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelInteger
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x2C;
            static constexpr std::uintptr_t MaximumValue = 0x30;
            static constexpr std::uintptr_t LimitsEnabled = 0x34;
            static constexpr std::uintptr_t ControlEnum = 0x38;
            static constexpr std::uintptr_t LayeredCombineMode = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InitialValue", 0x28, "IntProperty"},
            {"MinimumValue", 0x2C, "IntProperty"},
            {"MaximumValue", 0x30, "IntProperty"},
            {"LimitsEnabled", 0x34, "StructProperty"},
            {"ControlEnum", 0x38, "ObjectProperty"},
            {"LayeredCombineMode", 0x40, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelRotator
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x40;
            static constexpr std::uintptr_t MaximumValue = 0x58;
            static constexpr std::uintptr_t LimitsEnabled = 0x70;
            static constexpr std::uintptr_t LayeredCombineMode = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "StructProperty"},
            {"MinimumValue", 0x40, "StructProperty"},
            {"MaximumValue", 0x58, "StructProperty"},
            {"LimitsEnabled", 0x70, "StructProperty"},
            {"LayeredCombineMode", 0x76, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Pitch = 0x0;
            static constexpr std::uintptr_t Yaw = 0x2;
            static constexpr std::uintptr_t Roll = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pitch", 0x0, "StructProperty"},
            {"Yaw", 0x2, "StructProperty"},
            {"Roll", 0x4, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelScaleFloat
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelScaleFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x2C;
            static constexpr std::uintptr_t MaximumValue = 0x30;
            static constexpr std::uintptr_t LimitsEnabled = 0x34;
            static constexpr std::uintptr_t LayeredCombineMode = 0x36;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "FloatProperty"},
            {"MinimumValue", 0x2C, "FloatProperty"},
            {"MaximumValue", 0x30, "FloatProperty"},
            {"LimitsEnabled", 0x34, "StructProperty"},
            {"LayeredCombineMode", 0x36, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelScaleVector
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelScaleVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x40;
            static constexpr std::uintptr_t MaximumValue = 0x58;
            static constexpr std::uintptr_t LimitsEnabled = 0x70;
            static constexpr std::uintptr_t LayeredCombineMode = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "StructProperty"},
            {"MinimumValue", 0x40, "StructProperty"},
            {"MaximumValue", 0x58, "StructProperty"},
            {"LimitsEnabled", 0x70, "StructProperty"},
            {"LayeredCombineMode", 0x76, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelSingleLimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelSingleLimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enabled", 0x0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelVector
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x40;
            static constexpr std::uintptr_t MaximumValue = 0x58;
            static constexpr std::uintptr_t LimitsEnabled = 0x70;
            static constexpr std::uintptr_t LayeredCombineMode = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "StructProperty"},
            {"MinimumValue", 0x40, "StructProperty"},
            {"MaximumValue", 0x58, "StructProperty"},
            {"LimitsEnabled", 0x70, "StructProperty"},
            {"LayeredCombineMode", 0x76, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelVector2D
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x28;
            static constexpr std::uintptr_t MinimumValue = 0x38;
            static constexpr std::uintptr_t MaximumValue = 0x48;
            static constexpr std::uintptr_t LimitsEnabled = 0x58;
            static constexpr std::uintptr_t LayeredCombineMode = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialValue", 0x28, "StructProperty"},
            {"MinimumValue", 0x38, "StructProperty"},
            {"MaximumValue", 0x48, "StructProperty"},
            {"LimitsEnabled", 0x58, "StructProperty"},
            {"LayeredCombineMode", 0x5C, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddAnimationChannelVectorLimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddAnimationChannelVectorLimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
            static constexpr std::uintptr_t Z = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "StructProperty"},
            {"Y", 0x2, "StructProperty"},
            {"Z", 0x4, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddBone
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t Space = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0x30, "StructProperty"},
            {"Space", 0x90, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlElement
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetTransform = 0x30;
            static constexpr std::uintptr_t OffsetSpace = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OffsetTransform", 0x30, "StructProperty"},
            {"OffsetSpace", 0x90, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlFloat
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "FloatProperty"},
            {"Settings", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlFloat_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlFloat_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Limit = 0x0;
            static constexpr std::uintptr_t MinValue = 0x4;
            static constexpr std::uintptr_t MaxValue = 0x8;
            static constexpr std::uintptr_t bDrawLimits = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Limit", 0x0, "StructProperty"},
            {"MinValue", 0x4, "FloatProperty"},
            {"MaxValue", 0x8, "FloatProperty"},
            {"bDrawLimits", 0xC, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlFloat_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlFloat_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryAxis = 0x10;
            static constexpr std::uintptr_t bIsScale = 0x11;
            static constexpr std::uintptr_t Limits = 0x14;
            static constexpr std::uintptr_t Shape = 0x30;
            static constexpr std::uintptr_t Proxy = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PrimaryAxis", 0x10, "EnumProperty"},
            {"bIsScale", 0x11, "BoolProperty"},
            {"Limits", 0x14, "StructProperty"},
            {"Shape", 0x30, "StructProperty"},
            {"Proxy", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlInteger
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "IntProperty"},
            {"Settings", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlInteger_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlInteger_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Limit = 0x0;
            static constexpr std::uintptr_t MinValue = 0x4;
            static constexpr std::uintptr_t MaxValue = 0x8;
            static constexpr std::uintptr_t bDrawLimits = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Limit", 0x0, "StructProperty"},
            {"MinValue", 0x4, "IntProperty"},
            {"MaxValue", 0x8, "IntProperty"},
            {"bDrawLimits", 0xC, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlInteger_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlInteger_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryAxis = 0x10;
            static constexpr std::uintptr_t ControlEnum = 0x18;
            static constexpr std::uintptr_t Limits = 0x20;
            static constexpr std::uintptr_t Shape = 0x30;
            static constexpr std::uintptr_t Proxy = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PrimaryAxis", 0x10, "EnumProperty"},
            {"ControlEnum", 0x18, "ObjectProperty"},
            {"Limits", 0x20, "StructProperty"},
            {"Shape", 0x30, "StructProperty"},
            {"Proxy", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlRotator
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "StructProperty"},
            {"Settings", 0xC0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlRotator_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlRotator_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitPitch = 0x8;
            static constexpr std::uintptr_t LimitYaw = 0xA;
            static constexpr std::uintptr_t LimitRoll = 0xC;
            static constexpr std::uintptr_t MinValue = 0x10;
            static constexpr std::uintptr_t MaxValue = 0x28;
            static constexpr std::uintptr_t bDrawLimits = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LimitPitch", 0x8, "StructProperty"},
            {"LimitYaw", 0xA, "StructProperty"},
            {"LimitRoll", 0xC, "StructProperty"},
            {"MinValue", 0x10, "StructProperty"},
            {"MaxValue", 0x28, "StructProperty"},
            {"bDrawLimits", 0x40, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlRotator_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlRotator_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialSpace = 0x10;
            static constexpr std::uintptr_t Limits = 0x18;
            static constexpr std::uintptr_t Shape = 0x60;
            static constexpr std::uintptr_t Proxy = 0xE0;
            static constexpr std::uintptr_t FilteredChannels = 0x100;
            static constexpr std::uintptr_t bUsePreferredRotationOrder = 0x110;
            static constexpr std::uintptr_t PreferredRotationOrder = 0x111;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InitialSpace", 0x10, "EnumProperty"},
            {"Limits", 0x18, "StructProperty"},
            {"Shape", 0x60, "StructProperty"},
            {"Proxy", 0xE0, "StructProperty"},
            {"FilteredChannels", 0x100, "ArrayProperty"},
            {"bUsePreferredRotationOrder", 0x110, "BoolProperty"},
            {"PreferredRotationOrder", 0x111, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlTransform
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "StructProperty"},
            {"Settings", 0x100, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlTransform_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlTransform_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitTranslationX = 0x0;
            static constexpr std::uintptr_t LimitTranslationY = 0x2;
            static constexpr std::uintptr_t LimitTranslationZ = 0x4;
            static constexpr std::uintptr_t LimitPitch = 0x6;
            static constexpr std::uintptr_t LimitYaw = 0x8;
            static constexpr std::uintptr_t LimitRoll = 0xA;
            static constexpr std::uintptr_t LimitScaleX = 0xC;
            static constexpr std::uintptr_t LimitScaleY = 0xE;
            static constexpr std::uintptr_t LimitScaleZ = 0x10;
            static constexpr std::uintptr_t MinValue = 0x18;
            static constexpr std::uintptr_t MaxValue = 0x60;
            static constexpr std::uintptr_t bDrawLimits = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LimitTranslationX", 0x0, "StructProperty"},
            {"LimitTranslationY", 0x2, "StructProperty"},
            {"LimitTranslationZ", 0x4, "StructProperty"},
            {"LimitPitch", 0x6, "StructProperty"},
            {"LimitYaw", 0x8, "StructProperty"},
            {"LimitRoll", 0xA, "StructProperty"},
            {"LimitScaleX", 0xC, "StructProperty"},
            {"LimitScaleY", 0xE, "StructProperty"},
            {"LimitScaleZ", 0x10, "StructProperty"},
            {"MinValue", 0x18, "StructProperty"},
            {"MaxValue", 0x60, "StructProperty"},
            {"bDrawLimits", 0xA8, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlTransform_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlTransform_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialSpace = 0x10;
            static constexpr std::uintptr_t bUsePreferredRotationOrder = 0x11;
            static constexpr std::uintptr_t PreferredRotationOrder = 0x12;
            static constexpr std::uintptr_t Limits = 0x18;
            static constexpr std::uintptr_t Shape = 0xD0;
            static constexpr std::uintptr_t Proxy = 0x150;
            static constexpr std::uintptr_t FilteredChannels = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InitialSpace", 0x10, "EnumProperty"},
            {"bUsePreferredRotationOrder", 0x11, "BoolProperty"},
            {"PreferredRotationOrder", 0x12, "EnumProperty"},
            {"Limits", 0x18, "StructProperty"},
            {"Shape", 0xD0, "StructProperty"},
            {"Proxy", 0x150, "StructProperty"},
            {"FilteredChannels", 0x170, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "StructProperty"},
            {"Settings", 0xC0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector2D
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControlElement";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0xA0;
            static constexpr std::uintptr_t Settings = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0xA0, "StructProperty"},
            {"Settings", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector2D_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector2D_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitX = 0x0;
            static constexpr std::uintptr_t LimitY = 0x2;
            static constexpr std::uintptr_t MinValue = 0x8;
            static constexpr std::uintptr_t MaxValue = 0x18;
            static constexpr std::uintptr_t bDrawLimits = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LimitX", 0x0, "StructProperty"},
            {"LimitY", 0x2, "StructProperty"},
            {"MinValue", 0x8, "StructProperty"},
            {"MaxValue", 0x18, "StructProperty"},
            {"bDrawLimits", 0x28, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector2D_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector2D_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryAxis = 0x10;
            static constexpr std::uintptr_t Limits = 0x18;
            static constexpr std::uintptr_t Shape = 0x50;
            static constexpr std::uintptr_t Proxy = 0xD0;
            static constexpr std::uintptr_t FilteredChannels = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PrimaryAxis", 0x10, "EnumProperty"},
            {"Limits", 0x18, "StructProperty"},
            {"Shape", 0x50, "StructProperty"},
            {"Proxy", 0xD0, "StructProperty"},
            {"FilteredChannels", 0xF0, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector_LimitSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector_LimitSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitX = 0x0;
            static constexpr std::uintptr_t LimitY = 0x2;
            static constexpr std::uintptr_t LimitZ = 0x4;
            static constexpr std::uintptr_t MinValue = 0x8;
            static constexpr std::uintptr_t MaxValue = 0x20;
            static constexpr std::uintptr_t bDrawLimits = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LimitX", 0x0, "StructProperty"},
            {"LimitY", 0x2, "StructProperty"},
            {"LimitZ", 0x4, "StructProperty"},
            {"MinValue", 0x8, "StructProperty"},
            {"MaxValue", 0x20, "StructProperty"},
            {"bDrawLimits", 0x38, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControlVector_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControlVector_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddControl_Settings";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialSpace = 0x10;
            static constexpr std::uintptr_t bIsPosition = 0x11;
            static constexpr std::uintptr_t Limits = 0x18;
            static constexpr std::uintptr_t Shape = 0x60;
            static constexpr std::uintptr_t Proxy = 0xE0;
            static constexpr std::uintptr_t FilteredChannels = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InitialSpace", 0x10, "EnumProperty"},
            {"bIsPosition", 0x11, "BoolProperty"},
            {"Limits", 0x18, "StructProperty"},
            {"Shape", 0x60, "StructProperty"},
            {"Proxy", 0xE0, "StructProperty"},
            {"FilteredChannels", 0x100, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControl_ProxySettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControl_ProxySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsProxy = 0x0;
            static constexpr std::uintptr_t DrivenControls = 0x8;
            static constexpr std::uintptr_t ShapeVisibility = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsProxy", 0x0, "BoolProperty"},
            {"DrivenControls", 0x8, "ArrayProperty"},
            {"ShapeVisibility", 0x18, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControl_Settings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControl_Settings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t bSelectable = 0xC;
            static constexpr std::uintptr_t LayeredCombineMode = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x8, "NameProperty"},
            {"bSelectable", 0xC, "BoolProperty"},
            {"LayeredCombineMode", 0xD, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddControl_ShapeSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddControl_ShapeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bVisible = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t Color = 0x8;
            static constexpr std::uintptr_t Transform = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bVisible", 0x0, "BoolProperty"},
            {"Name", 0x4, "NameProperty"},
            {"Color", 0x8, "StructProperty"},
            {"Transform", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddElement
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x10;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t Item = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Parent", 0x10, "StructProperty"},
            {"Name", 0x18, "NameProperty"},
            {"Item", 0x1C, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddNull
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddNull";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t Space = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0x30, "StructProperty"},
            {"Space", 0x90, "EnumProperty"},
        }};
    };

    struct RigUnit_HierarchyAddPhysicsJoint
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddPhysicsJoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t Solver = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0x30, "StructProperty"},
            {"Solver", 0x90, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddPhysicsSolver
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddPhysicsSolver";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t Solver = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x10, "NameProperty"},
            {"Solver", 0x14, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyAddSocket
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyAddSocket";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyAddElement";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t Space = 0x90;
            static constexpr std::uintptr_t Color = 0x94;
            static constexpr std::uintptr_t Description = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transform", 0x30, "StructProperty"},
            {"Space", 0x90, "EnumProperty"},
            {"Color", 0x94, "StructProperty"},
            {"Description", 0xA8, "StrProperty"},
        }};
    };

    struct RigUnit_HierarchyBase
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_HierarchyBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyCreatePoseItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyCreatePoseItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x8;
            static constexpr std::uintptr_t Pose = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x8, "ArrayProperty"},
            {"Pose", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyCreatePoseItemArray_Entry
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyCreatePoseItemArray_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t LocalTransform = 0x10;
            static constexpr std::uintptr_t GlobalTransform = 0x70;
            static constexpr std::uintptr_t UseEulerAngles = 0xD0;
            static constexpr std::uintptr_t EulerAngles = 0xD8;
            static constexpr std::uintptr_t CurveValue = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"LocalTransform", 0x10, "StructProperty"},
            {"GlobalTransform", 0x70, "StructProperty"},
            {"UseEulerAngles", 0xD0, "BoolProperty"},
            {"EulerAngles", 0xD8, "StructProperty"},
            {"CurveValue", 0xF0, "FloatProperty"},
        }};
    };

    struct RigUnit_HierarchyGetChainItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetChainItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x10;
            static constexpr std::uintptr_t bIncludeStart = 0x18;
            static constexpr std::uintptr_t bIncludeEnd = 0x19;
            static constexpr std::uintptr_t bReverse = 0x1A;
            static constexpr std::uintptr_t Chain = 0x20;
            static constexpr std::uintptr_t CachedStart = 0x30;
            static constexpr std::uintptr_t CachedEnd = 0x48;
            static constexpr std::uintptr_t CachedChain = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x10, "StructProperty"},
            {"bIncludeStart", 0x18, "BoolProperty"},
            {"bIncludeEnd", 0x19, "BoolProperty"},
            {"bReverse", 0x1A, "BoolProperty"},
            {"Chain", 0x20, "ArrayProperty"},
            {"CachedStart", 0x30, "StructProperty"},
            {"CachedEnd", 0x48, "StructProperty"},
            {"CachedChain", 0x60, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetChildren
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetChildren";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x8;
            static constexpr std::uintptr_t bIncludeParent = 0x10;
            static constexpr std::uintptr_t bRecursive = 0x11;
            static constexpr std::uintptr_t Children = 0x18;
            static constexpr std::uintptr_t CachedParent = 0x28;
            static constexpr std::uintptr_t CachedChildren = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Parent", 0x8, "StructProperty"},
            {"bIncludeParent", 0x10, "BoolProperty"},
            {"bRecursive", 0x11, "BoolProperty"},
            {"Children", 0x18, "StructProperty"},
            {"CachedParent", 0x28, "StructProperty"},
            {"CachedChildren", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetParent
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t bDefaultParent = 0x10;
            static constexpr std::uintptr_t Parent = 0x14;
            static constexpr std::uintptr_t CachedChild = 0x20;
            static constexpr std::uintptr_t CachedParent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"bDefaultParent", 0x10, "BoolProperty"},
            {"Parent", 0x14, "StructProperty"},
            {"CachedChild", 0x20, "StructProperty"},
            {"CachedParent", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetParentWeights
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetParentWeights";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t Weights = 0x10;
            static constexpr std::uintptr_t Parents = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"Weights", 0x10, "ArrayProperty"},
            {"Parents", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetParentWeightsArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetParentWeightsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t Weights = 0x10;
            static constexpr std::uintptr_t Parents = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"Weights", 0x10, "ArrayProperty"},
            {"Parents", 0x20, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchyGetParents
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetParents";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t bIncludeChild = 0x10;
            static constexpr std::uintptr_t bReverse = 0x11;
            static constexpr std::uintptr_t Parents = 0x18;
            static constexpr std::uintptr_t CachedChild = 0x28;
            static constexpr std::uintptr_t CachedParents = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"bIncludeChild", 0x10, "BoolProperty"},
            {"bReverse", 0x11, "BoolProperty"},
            {"Parents", 0x18, "StructProperty"},
            {"CachedChild", 0x28, "StructProperty"},
            {"CachedParents", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetParentsItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetParentsItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t bIncludeChild = 0x10;
            static constexpr std::uintptr_t bReverse = 0x11;
            static constexpr std::uintptr_t bDefaultParent = 0x12;
            static constexpr std::uintptr_t Parents = 0x18;
            static constexpr std::uintptr_t CachedChild = 0x28;
            static constexpr std::uintptr_t CachedParents = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"bIncludeChild", 0x10, "BoolProperty"},
            {"bReverse", 0x11, "BoolProperty"},
            {"bDefaultParent", 0x12, "BoolProperty"},
            {"Parents", 0x18, "ArrayProperty"},
            {"CachedChild", 0x28, "StructProperty"},
            {"CachedParents", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetPose
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Initial = 0x8;
            static constexpr std::uintptr_t ElementType = 0x9;
            static constexpr std::uintptr_t ItemsToGet = 0x10;
            static constexpr std::uintptr_t Pose = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Initial", 0x8, "BoolProperty"},
            {"ElementType", 0x9, "EnumProperty"},
            {"ItemsToGet", 0x10, "StructProperty"},
            {"Pose", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetPoseItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetPoseItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Initial = 0x8;
            static constexpr std::uintptr_t ElementType = 0x9;
            static constexpr std::uintptr_t ItemsToGet = 0x10;
            static constexpr std::uintptr_t Pose = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Initial", 0x8, "BoolProperty"},
            {"ElementType", 0x9, "EnumProperty"},
            {"ItemsToGet", 0x10, "ArrayProperty"},
            {"Pose", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetShapeSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetShapeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Settings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Settings", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetSiblings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetSiblings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t bIncludeItem = 0x10;
            static constexpr std::uintptr_t Siblings = 0x18;
            static constexpr std::uintptr_t CachedItem = 0x28;
            static constexpr std::uintptr_t CachedSiblings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"bIncludeItem", 0x10, "BoolProperty"},
            {"Siblings", 0x18, "StructProperty"},
            {"CachedItem", 0x28, "StructProperty"},
            {"CachedSiblings", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyGetSiblingsItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyGetSiblingsItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t bIncludeItem = 0x10;
            static constexpr std::uintptr_t bDefaultSiblings = 0x11;
            static constexpr std::uintptr_t Siblings = 0x18;
            static constexpr std::uintptr_t CachedItem = 0x28;
            static constexpr std::uintptr_t CachedSiblings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"bIncludeItem", 0x10, "BoolProperty"},
            {"bDefaultSiblings", 0x11, "BoolProperty"},
            {"Siblings", 0x18, "ArrayProperty"},
            {"CachedItem", 0x28, "StructProperty"},
            {"CachedSiblings", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchyImportFromSkeleton
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyImportFromSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x10;
            static constexpr std::uintptr_t bIncludeCurves = 0x14;
            static constexpr std::uintptr_t bIncludeMeshSockets = 0x15;
            static constexpr std::uintptr_t bIncludeVirtualBones = 0x16;
            static constexpr std::uintptr_t Items = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Namespace", 0x10, "NameProperty"},
            {"bIncludeCurves", 0x14, "BoolProperty"},
            {"bIncludeMeshSockets", 0x15, "BoolProperty"},
            {"bIncludeVirtualBones", 0x16, "BoolProperty"},
            {"Items", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchyRemoveElement
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyRemoveElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t bSuccess = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"bSuccess", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_HierarchyReset
    {
        static constexpr std::string_view Name = "RigUnit_HierarchyReset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_HierarchySetParentWeights
    {
        static constexpr std::string_view Name = "RigUnit_HierarchySetParentWeights";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Weights = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Weights", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_HierarchySetPose
    {
        static constexpr std::string_view Name = "RigUnit_HierarchySetPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x10;
            static constexpr std::uintptr_t ElementType = 0x40;
            static constexpr std::uintptr_t Space = 0x41;
            static constexpr std::uintptr_t ItemsToSet = 0x48;
            static constexpr std::uintptr_t Weight = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Pose", 0x10, "StructProperty"},
            {"ElementType", 0x40, "EnumProperty"},
            {"Space", 0x41, "EnumProperty"},
            {"ItemsToSet", 0x48, "StructProperty"},
            {"Weight", 0x58, "FloatProperty"},
        }};
    };

    struct RigUnit_HierarchySetPoseItemArray
    {
        static constexpr std::string_view Name = "RigUnit_HierarchySetPoseItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x10;
            static constexpr std::uintptr_t ElementType = 0x40;
            static constexpr std::uintptr_t Space = 0x41;
            static constexpr std::uintptr_t ItemsToSet = 0x48;
            static constexpr std::uintptr_t Weight = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Pose", 0x10, "StructProperty"},
            {"ElementType", 0x40, "EnumProperty"},
            {"Space", 0x41, "EnumProperty"},
            {"ItemsToSet", 0x48, "ArrayProperty"},
            {"Weight", 0x58, "FloatProperty"},
        }};
    };

    struct RigUnit_HierarchySetShapeSettings
    {
        static constexpr std::string_view Name = "RigUnit_HierarchySetShapeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Settings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Settings", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_HighlevelBase
    {
        static constexpr std::string_view Name = "RigUnit_HighlevelBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_HighlevelBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_HighlevelBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_InteractionExecution
    {
        static constexpr std::string_view Name = "RigUnit_InteractionExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_InverseExecution
    {
        static constexpr std::string_view Name = "RigUnit_InverseExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_InverseQuaterion
    {
        static constexpr std::string_view Name = "RigUnit_InverseQuaterion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_UnaryQuaternionOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Argument", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_IsInteracting
    {
        static constexpr std::string_view Name = "RigUnit_IsInteracting";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInteracting = 0x8;
            static constexpr std::uintptr_t bIsTranslating = 0x9;
            static constexpr std::uintptr_t bIsRotating = 0xA;
            static constexpr std::uintptr_t bIsScaling = 0xB;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsInteracting", 0x8, "BoolProperty"},
            {"bIsTranslating", 0x9, "BoolProperty"},
            {"bIsRotating", 0xA, "BoolProperty"},
            {"bIsScaling", 0xB, "BoolProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_IsItemInCurrentModule
    {
        static constexpr std::string_view Name = "RigUnit_IsItemInCurrentModule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_IsItemInCurrentNameSpace
    {
        static constexpr std::string_view Name = "RigUnit_IsItemInCurrentNameSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_Item
    {
        static constexpr std::string_view Name = "RigUnit_Item";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Item", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_ItemArray
    {
        static constexpr std::string_view Name = "RigUnit_ItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x8, "ArrayProperty"},
        }};
    };

    struct RigUnit_ItemBase
    {
        static constexpr std::string_view Name = "RigUnit_ItemBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_ItemBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_ItemBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_ItemEquals
    {
        static constexpr std::string_view Name = "RigUnit_ItemEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x10, "StructProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_ItemExists
    {
        static constexpr std::string_view Name = "RigUnit_ItemExists";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Exists = 0x10;
            static constexpr std::uintptr_t CachedIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Exists", 0x10, "BoolProperty"},
            {"CachedIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_ItemHarmonics
    {
        static constexpr std::string_view Name = "RigUnit_ItemHarmonics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0x10;
            static constexpr std::uintptr_t WaveSpeed = 0x20;
            static constexpr std::uintptr_t WaveFrequency = 0x38;
            static constexpr std::uintptr_t WaveAmplitude = 0x50;
            static constexpr std::uintptr_t WaveOffset = 0x68;
            static constexpr std::uintptr_t WaveNoise = 0x80;
            static constexpr std::uintptr_t WaveEase = 0x98;
            static constexpr std::uintptr_t WaveMinimum = 0x9C;
            static constexpr std::uintptr_t WaveMaximum = 0xA0;
            static constexpr std::uintptr_t RotationOrder = 0xA4;
            static constexpr std::uintptr_t WorkData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Targets", 0x10, "ArrayProperty"},
            {"WaveSpeed", 0x20, "StructProperty"},
            {"WaveFrequency", 0x38, "StructProperty"},
            {"WaveAmplitude", 0x50, "StructProperty"},
            {"WaveOffset", 0x68, "StructProperty"},
            {"WaveNoise", 0x80, "StructProperty"},
            {"WaveEase", 0x98, "EnumProperty"},
            {"WaveMinimum", 0x9C, "FloatProperty"},
            {"WaveMaximum", 0xA0, "FloatProperty"},
            {"RotationOrder", 0xA4, "EnumProperty"},
            {"WorkData", 0xA8, "StructProperty"},
        }};
    };

    struct RigUnit_ItemNotEquals
    {
        static constexpr std::string_view Name = "RigUnit_ItemNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x10, "StructProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_ItemReplace
    {
        static constexpr std::string_view Name = "RigUnit_ItemReplace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x8;
            static constexpr std::uintptr_t Old = 0x10;
            static constexpr std::uintptr_t New = 0x14;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x8, "StructProperty"},
            {"Old", 0x10, "NameProperty"},
            {"New", 0x14, "NameProperty"},
            {"Result", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_ItemToName
    {
        static constexpr std::string_view Name = "RigUnit_ItemToName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Result", 0x10, "NameProperty"},
        }};
    };

    struct RigUnit_ItemTypeEquals
    {
        static constexpr std::string_view Name = "RigUnit_ItemTypeEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x10, "StructProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_ItemTypeNotEquals
    {
        static constexpr std::string_view Name = "RigUnit_ItemTypeNotEquals";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x10, "StructProperty"},
            {"Result", 0x18, "BoolProperty"},
        }};
    };

    struct RigUnit_LineTraceByObjectTypes
    {
        static constexpr std::string_view Name = "RigUnit_LineTraceByObjectTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t ObjectTypes = 0x38;
            static constexpr std::uintptr_t bHit = 0x48;
            static constexpr std::uintptr_t HitLocation = 0x50;
            static constexpr std::uintptr_t HitNormal = 0x68;
            static constexpr std::uintptr_t WorkData = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"ObjectTypes", 0x38, "ArrayProperty"},
            {"bHit", 0x48, "BoolProperty"},
            {"HitLocation", 0x50, "StructProperty"},
            {"HitNormal", 0x68, "StructProperty"},
            {"WorkData", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_LineTraceByProfile
    {
        static constexpr std::string_view Name = "RigUnit_LineTraceByProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t ProfileName = 0x38;
            static constexpr std::uintptr_t bHit = 0x3C;
            static constexpr std::uintptr_t HitLocation = 0x40;
            static constexpr std::uintptr_t HitNormal = 0x58;
            static constexpr std::uintptr_t WorkData = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"ProfileName", 0x38, "NameProperty"},
            {"bHit", 0x3C, "BoolProperty"},
            {"HitLocation", 0x40, "StructProperty"},
            {"HitNormal", 0x58, "StructProperty"},
            {"WorkData", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_LineTraceByTraceChannel
    {
        static constexpr std::string_view Name = "RigUnit_LineTraceByTraceChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t TraceChannel = 0x38;
            static constexpr std::uintptr_t bHit = 0x39;
            static constexpr std::uintptr_t HitLocation = 0x40;
            static constexpr std::uintptr_t HitNormal = 0x58;
            static constexpr std::uintptr_t WorkData = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"TraceChannel", 0x38, "ByteProperty"},
            {"bHit", 0x39, "BoolProperty"},
            {"HitLocation", 0x40, "StructProperty"},
            {"HitNormal", 0x58, "StructProperty"},
            {"WorkData", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_MapRange_Float
    {
        static constexpr std::string_view Name = "RigUnit_MapRange_Float";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t MinIn = 0xC;
            static constexpr std::uintptr_t MaxIn = 0x10;
            static constexpr std::uintptr_t MinOut = 0x14;
            static constexpr std::uintptr_t MaxOut = 0x18;
            static constexpr std::uintptr_t Result = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Value", 0x8, "FloatProperty"},
            {"MinIn", 0xC, "FloatProperty"},
            {"MaxIn", 0x10, "FloatProperty"},
            {"MinOut", 0x14, "FloatProperty"},
            {"MaxOut", 0x18, "FloatProperty"},
            {"Result", 0x1C, "FloatProperty"},
        }};
    };

    struct RigUnit_ModifyBoneTransforms
    {
        static constexpr std::string_view Name = "RigUnit_ModifyBoneTransforms";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneToModify = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t WeightMinimum = 0x24;
            static constexpr std::uintptr_t WeightMaximum = 0x28;
            static constexpr std::uintptr_t Mode = 0x2C;
            static constexpr std::uintptr_t WorkData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BoneToModify", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"WeightMinimum", 0x24, "FloatProperty"},
            {"WeightMaximum", 0x28, "FloatProperty"},
            {"Mode", 0x2C, "EnumProperty"},
            {"WorkData", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ModifyBoneTransforms_PerBone
    {
        static constexpr std::string_view Name = "RigUnit_ModifyBoneTransforms_PerBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_ModifyBoneTransforms_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_ModifyBoneTransforms_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_ModifyTransforms_WorkData";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedItems = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedItems", 0x0, "ArrayProperty"},
        }};
    };

    struct RigUnit_ModifyTransforms
    {
        static constexpr std::string_view Name = "RigUnit_ModifyTransforms";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemToModify = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t WeightMinimum = 0x24;
            static constexpr std::uintptr_t WeightMaximum = 0x28;
            static constexpr std::uintptr_t Mode = 0x2C;
            static constexpr std::uintptr_t WorkData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemToModify", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"WeightMinimum", 0x24, "FloatProperty"},
            {"WeightMaximum", 0x28, "FloatProperty"},
            {"Mode", 0x2C, "EnumProperty"},
            {"WorkData", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ModifyTransforms_PerItem
    {
        static constexpr std::string_view Name = "RigUnit_ModifyTransforms_PerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Item", 0x0, "StructProperty"},
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_ModifyTransforms_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_ModifyTransforms_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedItems = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedItems", 0x0, "ArrayProperty"},
        }};
    };

    struct RigUnit_MultiFABRIK
    {
        static constexpr std::string_view Name = "RigUnit_MultiFABRIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t RootBone = 0x10;
            static constexpr std::uintptr_t Effectors = 0x18;
            static constexpr std::uintptr_t Precision = 0x28;
            static constexpr std::uintptr_t bPropagateToChildren = 0x2C;
            static constexpr std::uintptr_t MaxIterations = 0x30;
            static constexpr std::uintptr_t WorkData = 0x38;
            static constexpr std::uintptr_t bIsInitialized = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RootBone", 0x10, "NameProperty"},
            {"Effectors", 0x18, "ArrayProperty"},
            {"Precision", 0x28, "FloatProperty"},
            {"bPropagateToChildren", 0x2C, "BoolProperty"},
            {"MaxIterations", 0x30, "IntProperty"},
            {"WorkData", 0x38, "StructProperty"},
            {"bIsInitialized", 0xA0, "BoolProperty"},
        }};
    };

    struct RigUnit_MultiFABRIK_EndEffector
    {
        static constexpr std::string_view Name = "RigUnit_MultiFABRIK_EndEffector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"Location", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_MultiFABRIK_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_MultiFABRIK_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_MultiplyQuaternion
    {
        static constexpr std::string_view Name = "RigUnit_MultiplyQuaternion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryQuaternionOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x10;
            static constexpr std::uintptr_t Argument1 = 0x30;
            static constexpr std::uintptr_t Result = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x10, "StructProperty"},
            {"Argument1", 0x30, "StructProperty"},
            {"Result", 0x50, "StructProperty"},
        }};
    };

    struct RigUnit_MultiplyTransform
    {
        static constexpr std::string_view Name = "RigUnit_MultiplyTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryTransformOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x10;
            static constexpr std::uintptr_t Argument1 = 0x70;
            static constexpr std::uintptr_t Result = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x10, "StructProperty"},
            {"Argument1", 0x70, "StructProperty"},
            {"Result", 0xD0, "StructProperty"},
        }};
    };

    struct RigUnit_Multiply_FloatFloat
    {
        static constexpr std::string_view Name = "RigUnit_Multiply_FloatFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryFloatOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "FloatProperty"},
            {"Argument1", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigUnit_Multiply_VectorVector
    {
        static constexpr std::string_view Name = "RigUnit_Multiply_VectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryVectorOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_OffsetTransformForItem
    {
        static constexpr std::string_view Name = "RigUnit_OffsetTransformForItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t OffsetTransform = 0x20;
            static constexpr std::uintptr_t Weight = 0x80;
            static constexpr std::uintptr_t bPropagateToChildren = 0x84;
            static constexpr std::uintptr_t CachedIndex = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"OffsetTransform", 0x20, "StructProperty"},
            {"Weight", 0x80, "FloatProperty"},
            {"bPropagateToChildren", 0x84, "BoolProperty"},
            {"CachedIndex", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_ParentConstraint
    {
        static constexpr std::string_view Name = "RigUnit_ParentConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x28;
            static constexpr std::uintptr_t AdvancedSettings = 0x38;
            static constexpr std::uintptr_t Weight = 0x3C;
            static constexpr std::uintptr_t ChildCache = 0x40;
            static constexpr std::uintptr_t ParentCaches = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x28, "ArrayProperty"},
            {"AdvancedSettings", 0x38, "StructProperty"},
            {"Weight", 0x3C, "FloatProperty"},
            {"ChildCache", 0x40, "StructProperty"},
            {"ParentCaches", 0x58, "ArrayProperty"},
        }};
    };

    struct RigUnit_ParentConstraintMath
    {
        static constexpr std::string_view Name = "RigUnit_ParentConstraintMath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t Parents = 0x70;
            static constexpr std::uintptr_t AdvancedSettings = 0x80;
            static constexpr std::uintptr_t Output = 0x90;
            static constexpr std::uintptr_t ParentCaches = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"Parents", 0x70, "ArrayProperty"},
            {"AdvancedSettings", 0x80, "StructProperty"},
            {"Output", 0x90, "StructProperty"},
            {"ParentCaches", 0xF0, "ArrayProperty"},
        }};
    };

    struct RigUnit_ParentConstraintMath_AdvancedSettings
    {
        static constexpr std::string_view Name = "RigUnit_ParentConstraintMath_AdvancedSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterpolationType = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InterpolationType", 0x0, "EnumProperty"},
        }};
    };

    struct RigUnit_ParentConstraint_AdvancedSettings
    {
        static constexpr std::string_view Name = "RigUnit_ParentConstraint_AdvancedSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterpolationType = 0x0;
            static constexpr std::uintptr_t RotationOrderForFilter = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InterpolationType", 0x0, "EnumProperty"},
            {"RotationOrderForFilter", 0x1, "EnumProperty"},
        }};
    };

    struct RigUnit_ParentSwitchConstraint
    {
        static constexpr std::string_view Name = "RigUnit_ParentSwitchConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Subject = 0x10;
            static constexpr std::uintptr_t ParentIndex = 0x18;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t InitialGlobalTransform = 0x30;
            static constexpr std::uintptr_t Weight = 0x90;
            static constexpr std::uintptr_t Transform = 0xA0;
            static constexpr std::uintptr_t Switched = 0x100;
            static constexpr std::uintptr_t CachedSubject = 0x108;
            static constexpr std::uintptr_t CachedParent = 0x120;
            static constexpr std::uintptr_t RelativeOffset = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Subject", 0x10, "StructProperty"},
            {"ParentIndex", 0x18, "IntProperty"},
            {"Parents", 0x20, "StructProperty"},
            {"InitialGlobalTransform", 0x30, "StructProperty"},
            {"Weight", 0x90, "FloatProperty"},
            {"Transform", 0xA0, "StructProperty"},
            {"Switched", 0x100, "BoolProperty"},
            {"CachedSubject", 0x108, "StructProperty"},
            {"CachedParent", 0x120, "StructProperty"},
            {"RelativeOffset", 0x140, "StructProperty"},
        }};
    };

    struct RigUnit_ParentSwitchConstraintArray
    {
        static constexpr std::string_view Name = "RigUnit_ParentSwitchConstraintArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Subject = 0x10;
            static constexpr std::uintptr_t ParentIndex = 0x18;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t InitialGlobalTransform = 0x30;
            static constexpr std::uintptr_t Weight = 0x90;
            static constexpr std::uintptr_t Transform = 0xA0;
            static constexpr std::uintptr_t Switched = 0x100;
            static constexpr std::uintptr_t CachedSubject = 0x108;
            static constexpr std::uintptr_t CachedParent = 0x120;
            static constexpr std::uintptr_t RelativeOffset = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Subject", 0x10, "StructProperty"},
            {"ParentIndex", 0x18, "IntProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"InitialGlobalTransform", 0x30, "StructProperty"},
            {"Weight", 0x90, "FloatProperty"},
            {"Transform", 0xA0, "StructProperty"},
            {"Switched", 0x100, "BoolProperty"},
            {"CachedSubject", 0x108, "StructProperty"},
            {"CachedParent", 0x120, "StructProperty"},
            {"RelativeOffset", 0x140, "StructProperty"},
        }};
    };

    struct RigUnit_PointSimulation
    {
        static constexpr std::string_view Name = "RigUnit_PointSimulation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x10;
            static constexpr std::uintptr_t Links = 0x20;
            static constexpr std::uintptr_t Forces = 0x30;
            static constexpr std::uintptr_t CollisionVolumes = 0x40;
            static constexpr std::uintptr_t SimulatedStepsPerSecond = 0x50;
            static constexpr std::uintptr_t IntegratorType = 0x54;
            static constexpr std::uintptr_t VerletBlend = 0x58;
            static constexpr std::uintptr_t BoneTargets = 0x60;
            static constexpr std::uintptr_t bLimitLocalPosition = 0x70;
            static constexpr std::uintptr_t bPropagateToChildren = 0x71;
            static constexpr std::uintptr_t PrimaryAimAxis = 0x78;
            static constexpr std::uintptr_t SecondaryAimAxis = 0x90;
            static constexpr std::uintptr_t DebugSettings = 0xB0;
            static constexpr std::uintptr_t Bezier = 0x130;
            static constexpr std::uintptr_t WorkData = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Points", 0x10, "ArrayProperty"},
            {"Links", 0x20, "ArrayProperty"},
            {"Forces", 0x30, "ArrayProperty"},
            {"CollisionVolumes", 0x40, "ArrayProperty"},
            {"SimulatedStepsPerSecond", 0x50, "FloatProperty"},
            {"IntegratorType", 0x54, "EnumProperty"},
            {"VerletBlend", 0x58, "FloatProperty"},
            {"BoneTargets", 0x60, "ArrayProperty"},
            {"bLimitLocalPosition", 0x70, "BoolProperty"},
            {"bPropagateToChildren", 0x71, "BoolProperty"},
            {"PrimaryAimAxis", 0x78, "StructProperty"},
            {"SecondaryAimAxis", 0x90, "StructProperty"},
            {"DebugSettings", 0xB0, "StructProperty"},
            {"Bezier", 0x130, "StructProperty"},
            {"WorkData", 0x190, "StructProperty"},
        }};
    };

    struct RigUnit_PointSimulation_BoneTarget
    {
        static constexpr std::string_view Name = "RigUnit_PointSimulation_BoneTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x0;
            static constexpr std::uintptr_t TranslationPoint = 0x4;
            static constexpr std::uintptr_t PrimaryAimPoint = 0x8;
            static constexpr std::uintptr_t SecondaryAimPoint = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bone", 0x0, "NameProperty"},
            {"TranslationPoint", 0x4, "IntProperty"},
            {"PrimaryAimPoint", 0x8, "IntProperty"},
            {"SecondaryAimPoint", 0xC, "IntProperty"},
        }};
    };

    struct RigUnit_PointSimulation_DebugSettings
    {
        static constexpr std::string_view Name = "RigUnit_PointSimulation_DebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t CollisionScale = 0x8;
            static constexpr std::uintptr_t bDrawPointsAsSpheres = 0xC;
            static constexpr std::uintptr_t Color = 0x10;
            static constexpr std::uintptr_t WorldOffset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"CollisionScale", 0x8, "FloatProperty"},
            {"bDrawPointsAsSpheres", 0xC, "BoolProperty"},
            {"Color", 0x10, "StructProperty"},
            {"WorldOffset", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_PointSimulation_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_PointSimulation_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Simulation = 0x0;
            static constexpr std::uintptr_t BoneIndices = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Simulation", 0x0, "StructProperty"},
            {"BoneIndices", 0x78, "ArrayProperty"},
        }};
    };

    struct RigUnit_PoseAssetApplyAllPoses
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetApplyAllPoses";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x10;
            static constexpr std::uintptr_t Items = 0x18;
            static constexpr std::uintptr_t ApplyTransforms = 0x28;
            static constexpr std::uintptr_t ApplyCurves = 0x29;
            static constexpr std::uintptr_t bPropagateToChildren = 0x2A;
            static constexpr std::uintptr_t Success = 0x2B;
            static constexpr std::uintptr_t ActivePoses = 0x30;
            static constexpr std::uintptr_t GetActivePosesWorkData = 0x40;
            static constexpr std::uintptr_t WorkData = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ExecutePin", 0x10, "StructProperty"},
            {"Items", 0x18, "ArrayProperty"},
            {"ApplyTransforms", 0x28, "BoolProperty"},
            {"ApplyCurves", 0x29, "BoolProperty"},
            {"bPropagateToChildren", 0x2A, "BoolProperty"},
            {"Success", 0x2B, "BoolProperty"},
            {"ActivePoses", 0x30, "ArrayProperty"},
            {"GetActivePosesWorkData", 0x40, "StructProperty"},
            {"WorkData", 0xB8, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetApplyMultiplePoses
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetApplyMultiplePoses";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x10;
            static constexpr std::uintptr_t Poses = 0x18;
            static constexpr std::uintptr_t Items = 0x28;
            static constexpr std::uintptr_t ApplyTransforms = 0x38;
            static constexpr std::uintptr_t ApplyCurves = 0x39;
            static constexpr std::uintptr_t bPropagateToChildren = 0x3A;
            static constexpr std::uintptr_t Success = 0x3B;
            static constexpr std::uintptr_t WorkData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutePin", 0x10, "StructProperty"},
            {"Poses", 0x18, "ArrayProperty"},
            {"Items", 0x28, "ArrayProperty"},
            {"ApplyTransforms", 0x38, "BoolProperty"},
            {"ApplyCurves", 0x39, "BoolProperty"},
            {"bPropagateToChildren", 0x3A, "BoolProperty"},
            {"Success", 0x3B, "BoolProperty"},
            {"WorkData", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetBase
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseAsset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PoseAsset", 0x8, "ObjectProperty"},
        }};
    };

    struct RigUnit_PoseAssetContainsPose
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetContainsPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x90, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetActivePoses
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetActivePoses";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t ActivePoses = 0x20;
            static constexpr std::uintptr_t WorkData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"ActivePoses", 0x20, "ArrayProperty"},
            {"WorkData", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetBoneIndex
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetBoneIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x10;
            static constexpr std::uintptr_t Index = 0x14;
            static constexpr std::uintptr_t Success = 0x18;
            static constexpr std::uintptr_t LastBoneIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoneName", 0x10, "NameProperty"},
            {"Index", 0x14, "IntProperty"},
            {"Success", 0x18, "BoolProperty"},
            {"LastBoneIndex", 0x1C, "IntProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetBoneNames
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetBoneNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneNames = 0x10;
            static constexpr std::uintptr_t Success = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneNames", 0x10, "ArrayProperty"},
            {"Success", 0x20, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetCurveNames
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetCurveNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveNames = 0x10;
            static constexpr std::uintptr_t Success = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurveNames", 0x10, "ArrayProperty"},
            {"Success", 0x20, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetInfluences
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetInfluences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x90;
            static constexpr std::uintptr_t Bones = 0xA0;
            static constexpr std::uintptr_t Curves = 0xB0;
            static constexpr std::uintptr_t Success = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Items", 0x90, "ArrayProperty"},
            {"Bones", 0xA0, "ArrayProperty"},
            {"Curves", 0xB0, "ArrayProperty"},
            {"Success", 0xC0, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetPoseForItems
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetPoseForItems";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Poses = 0x10;
            static constexpr std::uintptr_t Items = 0x20;
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t Bones = 0x38;
            static constexpr std::uintptr_t LocalTransforms = 0x48;
            static constexpr std::uintptr_t Curves = 0x58;
            static constexpr std::uintptr_t CurveValues = 0x68;
            static constexpr std::uintptr_t Success = 0x78;
            static constexpr std::uintptr_t WorkData = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Poses", 0x10, "ArrayProperty"},
            {"Items", 0x20, "ArrayProperty"},
            {"Mode", 0x30, "EnumProperty"},
            {"Bones", 0x38, "ArrayProperty"},
            {"LocalTransforms", 0x48, "ArrayProperty"},
            {"Curves", 0x58, "ArrayProperty"},
            {"CurveValues", 0x68, "ArrayProperty"},
            {"Success", 0x78, "BoolProperty"},
            {"WorkData", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetPoseNames
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetPoseNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseNames = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PoseNames", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetRigPose
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetRigPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Poses = 0x10;
            static constexpr std::uintptr_t Items = 0x20;
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t RigPose = 0x38;
            static constexpr std::uintptr_t Success = 0x68;
            static constexpr std::uintptr_t WorkData = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Poses", 0x10, "ArrayProperty"},
            {"Items", 0x20, "ArrayProperty"},
            {"Mode", 0x30, "EnumProperty"},
            {"RigPose", 0x38, "StructProperty"},
            {"Success", 0x68, "BoolProperty"},
            {"WorkData", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetGetter
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetGetter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseName = 0x10;
            static constexpr std::uintptr_t WorkData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PoseName", 0x10, "NameProperty"},
            {"WorkData", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_PoseAssetHasRootMotion
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetHasRootMotion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x10, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseAssetIsAdditive
    {
        static constexpr std::string_view Name = "RigUnit_PoseAssetIsAdditive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_PoseAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x10;
            static constexpr std::uintptr_t BasePoseName = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Result", 0x10, "BoolProperty"},
            {"BasePoseName", 0x14, "NameProperty"},
        }};
    };

    struct RigUnit_PoseAsset_PoseInfo
    {
        static constexpr std::string_view Name = "RigUnit_PoseAsset_PoseInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseName = 0x0;
            static constexpr std::uintptr_t UseWeightFromCurve = 0x8;
            static constexpr std::uintptr_t Weight = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PoseName", 0x0, "NameProperty"},
            {"UseWeightFromCurve", 0x8, "BoolProperty"},
            {"Weight", 0xC, "FloatProperty"},
        }};
    };

    struct RigUnit_PoseAsset_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_PoseAsset_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LastPoseIndex = 0x0;
            static constexpr std::uintptr_t BoneTransforms = 0x8;
            static constexpr std::uintptr_t CurveValues = 0x18;
            static constexpr std::uintptr_t TrackIndexPerBone = 0x28;
            static constexpr std::uintptr_t TrackIndexPerCurve = 0x38;
            static constexpr std::uintptr_t CachedBoneItems = 0x48;
            static constexpr std::uintptr_t CachedCurveItems = 0x58;
            static constexpr std::uintptr_t LastBoneHash = 0x68;
            static constexpr std::uintptr_t LastCurveHash = 0x6C;
            static constexpr std::uintptr_t bFilterByInfluences = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"LastPoseIndex", 0x0, "IntProperty"},
            {"BoneTransforms", 0x8, "ArrayProperty"},
            {"CurveValues", 0x18, "ArrayProperty"},
            {"TrackIndexPerBone", 0x28, "ArrayProperty"},
            {"TrackIndexPerCurve", 0x38, "ArrayProperty"},
            {"CachedBoneItems", 0x48, "ArrayProperty"},
            {"CachedCurveItems", 0x58, "ArrayProperty"},
            {"LastBoneHash", 0x68, "UInt32Property"},
            {"LastCurveHash", 0x6C, "UInt32Property"},
            {"bFilterByInfluences", 0x70, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseGetCurve
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t Curve = 0x38;
            static constexpr std::uintptr_t Valid = 0x3C;
            static constexpr std::uintptr_t CurveValue = 0x40;
            static constexpr std::uintptr_t CachedPoseElementIndex = 0x44;
            static constexpr std::uintptr_t CachedPoseHash = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"Curve", 0x38, "NameProperty"},
            {"Valid", 0x3C, "BoolProperty"},
            {"CurveValue", 0x40, "FloatProperty"},
            {"CachedPoseElementIndex", 0x44, "IntProperty"},
            {"CachedPoseHash", 0x48, "IntProperty"},
        }};
    };

    struct RigUnit_PoseGetDelta
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseA = 0x8;
            static constexpr std::uintptr_t PoseB = 0x38;
            static constexpr std::uintptr_t PositionThreshold = 0x68;
            static constexpr std::uintptr_t RotationThreshold = 0x6C;
            static constexpr std::uintptr_t ScaleThreshold = 0x70;
            static constexpr std::uintptr_t CurveThreshold = 0x74;
            static constexpr std::uintptr_t ElementType = 0x78;
            static constexpr std::uintptr_t Space = 0x79;
            static constexpr std::uintptr_t ItemsToCompare = 0x80;
            static constexpr std::uintptr_t PosesAreEqual = 0x90;
            static constexpr std::uintptr_t ItemsWithDelta = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PoseA", 0x8, "StructProperty"},
            {"PoseB", 0x38, "StructProperty"},
            {"PositionThreshold", 0x68, "FloatProperty"},
            {"RotationThreshold", 0x6C, "FloatProperty"},
            {"ScaleThreshold", 0x70, "FloatProperty"},
            {"CurveThreshold", 0x74, "FloatProperty"},
            {"ElementType", 0x78, "EnumProperty"},
            {"Space", 0x79, "EnumProperty"},
            {"ItemsToCompare", 0x80, "StructProperty"},
            {"PosesAreEqual", 0x90, "BoolProperty"},
            {"ItemsWithDelta", 0x98, "StructProperty"},
        }};
    };

    struct RigUnit_PoseGetItems
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetItems";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t ElementType = 0x38;
            static constexpr std::uintptr_t Items = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"ElementType", 0x38, "EnumProperty"},
            {"Items", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_PoseGetItemsItemArray
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetItemsItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t ElementType = 0x38;
            static constexpr std::uintptr_t Items = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"ElementType", 0x38, "EnumProperty"},
            {"Items", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_PoseGetTransform
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t Item = 0x38;
            static constexpr std::uintptr_t Space = 0x40;
            static constexpr std::uintptr_t Valid = 0x41;
            static constexpr std::uintptr_t Transform = 0x50;
            static constexpr std::uintptr_t CurveValue = 0xB0;
            static constexpr std::uintptr_t CachedPoseElementIndex = 0xB4;
            static constexpr std::uintptr_t CachedPoseHash = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"Item", 0x38, "StructProperty"},
            {"Space", 0x40, "EnumProperty"},
            {"Valid", 0x41, "BoolProperty"},
            {"Transform", 0x50, "StructProperty"},
            {"CurveValue", 0xB0, "FloatProperty"},
            {"CachedPoseElementIndex", 0xB4, "IntProperty"},
            {"CachedPoseHash", 0xB8, "IntProperty"},
        }};
    };

    struct RigUnit_PoseGetTransformArray
    {
        static constexpr std::string_view Name = "RigUnit_PoseGetTransformArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t Space = 0x38;
            static constexpr std::uintptr_t Valid = 0x39;
            static constexpr std::uintptr_t Transforms = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"Space", 0x38, "EnumProperty"},
            {"Valid", 0x39, "BoolProperty"},
            {"Transforms", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_PoseIsEmpty
    {
        static constexpr std::string_view Name = "RigUnit_PoseIsEmpty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Pose = 0x8;
            static constexpr std::uintptr_t IsEmpty = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Pose", 0x8, "StructProperty"},
            {"IsEmpty", 0x38, "BoolProperty"},
        }};
    };

    struct RigUnit_PoseLoop
    {
        static constexpr std::string_view Name = "RigUnit_PoseLoop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockToRun = 0x10;
            static constexpr std::uintptr_t Pose = 0x18;
            static constexpr std::uintptr_t Item = 0x48;
            static constexpr std::uintptr_t GlobalTransform = 0x50;
            static constexpr std::uintptr_t LocalTransform = 0xB0;
            static constexpr std::uintptr_t CurveValue = 0x110;
            static constexpr std::uintptr_t Index = 0x114;
            static constexpr std::uintptr_t Count = 0x118;
            static constexpr std::uintptr_t Ratio = 0x11C;
            static constexpr std::uintptr_t Completed = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BlockToRun", 0x10, "NameProperty"},
            {"Pose", 0x18, "StructProperty"},
            {"Item", 0x48, "StructProperty"},
            {"GlobalTransform", 0x50, "StructProperty"},
            {"LocalTransform", 0xB0, "StructProperty"},
            {"CurveValue", 0x110, "FloatProperty"},
            {"Index", 0x114, "IntProperty"},
            {"Count", 0x118, "IntProperty"},
            {"Ratio", 0x11C, "FloatProperty"},
            {"Completed", 0x120, "StructProperty"},
        }};
    };

    struct RigUnit_PositionConstraint
    {
        static constexpr std::string_view Name = "RigUnit_PositionConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t Weight = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"Weight", 0x30, "FloatProperty"},
        }};
    };

    struct RigUnit_PositionConstraintLocalSpaceOffset
    {
        static constexpr std::string_view Name = "RigUnit_PositionConstraintLocalSpaceOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t Weight = 0x30;
            static constexpr std::uintptr_t ChildCache = 0x38;
            static constexpr std::uintptr_t ParentCaches = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"Weight", 0x30, "FloatProperty"},
            {"ChildCache", 0x38, "StructProperty"},
            {"ParentCaches", 0x50, "ArrayProperty"},
        }};
    };

    struct RigUnit_PostBeginExecution
    {
        static constexpr std::string_view Name = "RigUnit_PostBeginExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_PostPrepareForExecution
    {
        static constexpr std::string_view Name = "RigUnit_PostPrepareForExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_PreBeginExecution
    {
        static constexpr std::string_view Name = "RigUnit_PreBeginExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_PrepareForExecution
    {
        static constexpr std::string_view Name = "RigUnit_PrepareForExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_ProjectTransformToNewParent
    {
        static constexpr std::string_view Name = "RigUnit_ProjectTransformToNewParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x8;
            static constexpr std::uintptr_t bChildInitial = 0x10;
            static constexpr std::uintptr_t OldParent = 0x14;
            static constexpr std::uintptr_t bOldParentInitial = 0x1C;
            static constexpr std::uintptr_t NewParent = 0x20;
            static constexpr std::uintptr_t bNewParentInitial = 0x28;
            static constexpr std::uintptr_t Transform = 0x30;
            static constexpr std::uintptr_t CachedChild = 0x90;
            static constexpr std::uintptr_t CachedOldParent = 0xA8;
            static constexpr std::uintptr_t CachedNewParent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Child", 0x8, "StructProperty"},
            {"bChildInitial", 0x10, "BoolProperty"},
            {"OldParent", 0x14, "StructProperty"},
            {"bOldParentInitial", 0x1C, "BoolProperty"},
            {"NewParent", 0x20, "StructProperty"},
            {"bNewParentInitial", 0x28, "BoolProperty"},
            {"Transform", 0x30, "StructProperty"},
            {"CachedChild", 0x90, "StructProperty"},
            {"CachedOldParent", 0xA8, "StructProperty"},
            {"CachedNewParent", 0xC0, "StructProperty"},
        }};
    };

    struct RigUnit_PropagateTransform
    {
        static constexpr std::string_view Name = "RigUnit_PropagateTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t bRecomputeGlobal = 0x18;
            static constexpr std::uintptr_t bApplyToChildren = 0x19;
            static constexpr std::uintptr_t bRecursive = 0x1A;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"bRecomputeGlobal", 0x18, "BoolProperty"},
            {"bApplyToChildren", 0x19, "BoolProperty"},
            {"bRecursive", 0x1A, "BoolProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_QuaternionFromAxisAndAngle
    {
        static constexpr std::string_view Name = "RigUnit_QuaternionFromAxisAndAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Axis = 0x8;
            static constexpr std::uintptr_t Angle = 0x20;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Axis", 0x8, "StructProperty"},
            {"Angle", 0x20, "FloatProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_QuaternionToAngle
    {
        static constexpr std::string_view Name = "RigUnit_QuaternionToAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Axis = 0x8;
            static constexpr std::uintptr_t Argument = 0x20;
            static constexpr std::uintptr_t Angle = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Axis", 0x8, "StructProperty"},
            {"Argument", 0x20, "StructProperty"},
            {"Angle", 0x40, "FloatProperty"},
        }};
    };

    struct RigUnit_QuaternionToAxisAndAngle
    {
        static constexpr std::string_view Name = "RigUnit_QuaternionToAxisAndAngle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument = 0x10;
            static constexpr std::uintptr_t Axis = 0x30;
            static constexpr std::uintptr_t Angle = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument", 0x10, "StructProperty"},
            {"Axis", 0x30, "StructProperty"},
            {"Angle", 0x48, "FloatProperty"},
        }};
    };

    struct RigUnit_RemoveAllMetadata
    {
        static constexpr std::string_view Name = "RigUnit_RemoveAllMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Namespace = 0x18;
            static constexpr std::uintptr_t Removed = 0x19;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Namespace", 0x18, "EnumProperty"},
            {"Removed", 0x19, "BoolProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_RemoveMetadata
    {
        static constexpr std::string_view Name = "RigUnit_RemoveMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Name = 0x18;
            static constexpr std::uintptr_t Namespace = 0x1C;
            static constexpr std::uintptr_t Removed = 0x1D;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Name", 0x18, "NameProperty"},
            {"Namespace", 0x1C, "EnumProperty"},
            {"Removed", 0x1D, "BoolProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_RemoveMetadataTag
    {
        static constexpr std::string_view Name = "RigUnit_RemoveMetadataTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Tag = 0x18;
            static constexpr std::uintptr_t Namespace = 0x1C;
            static constexpr std::uintptr_t Removed = 0x1D;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Tag", 0x18, "NameProperty"},
            {"Namespace", 0x1C, "EnumProperty"},
            {"Removed", 0x1D, "BoolProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ResolveArrayConnector
    {
        static constexpr std::string_view Name = "RigUnit_ResolveArrayConnector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Connector = 0x8;
            static constexpr std::uintptr_t SkipSocket = 0x10;
            static constexpr std::uintptr_t Result = 0x18;
            static constexpr std::uintptr_t bIsConnected = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Connector", 0x8, "StructProperty"},
            {"SkipSocket", 0x10, "BoolProperty"},
            {"Result", 0x18, "ArrayProperty"},
            {"bIsConnected", 0x28, "BoolProperty"},
        }};
    };

    struct RigUnit_ResolveConnector
    {
        static constexpr std::string_view Name = "RigUnit_ResolveConnector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_RigModulesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Connector = 0x8;
            static constexpr std::uintptr_t SkipSocket = 0x10;
            static constexpr std::uintptr_t Result = 0x14;
            static constexpr std::uintptr_t bIsConnected = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Connector", 0x8, "StructProperty"},
            {"SkipSocket", 0x10, "BoolProperty"},
            {"Result", 0x14, "StructProperty"},
            {"bIsConnected", 0x1C, "BoolProperty"},
        }};
    };

    struct RigUnit_RigModulesBase
    {
        static constexpr std::string_view Name = "RigUnit_RigModulesBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RigUnit_RigModulesBaseMutable
    {
        static constexpr std::string_view Name = "RigUnit_RigModulesBaseMutable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_RotationConstraint
    {
        static constexpr std::string_view Name = "RigUnit_RotationConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t AdvancedSettings = 0x30;
            static constexpr std::uintptr_t Weight = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"AdvancedSettings", 0x30, "StructProperty"},
            {"Weight", 0x34, "FloatProperty"},
        }};
    };

    struct RigUnit_RotationConstraintLocalSpaceOffset
    {
        static constexpr std::string_view Name = "RigUnit_RotationConstraintLocalSpaceOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t AdvancedSettings = 0x30;
            static constexpr std::uintptr_t Weight = 0x34;
            static constexpr std::uintptr_t ChildCache = 0x38;
            static constexpr std::uintptr_t ParentCaches = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"AdvancedSettings", 0x30, "StructProperty"},
            {"Weight", 0x34, "FloatProperty"},
            {"ChildCache", 0x38, "StructProperty"},
            {"ParentCaches", 0x50, "ArrayProperty"},
        }};
    };

    struct RigUnit_RotationConstraint_AdvancedSettings
    {
        static constexpr std::string_view Name = "RigUnit_RotationConstraint_AdvancedSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterpolationType = 0x0;
            static constexpr std::uintptr_t RotationOrderForFilter = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InterpolationType", 0x0, "EnumProperty"},
            {"RotationOrderForFilter", 0x1, "EnumProperty"},
        }};
    };

    struct RigUnit_ScaleConstraint
    {
        static constexpr std::string_view Name = "RigUnit_ScaleConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t Weight = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"Weight", 0x30, "FloatProperty"},
        }};
    };

    struct RigUnit_ScaleConstraintLocalSpaceOffset
    {
        static constexpr std::string_view Name = "RigUnit_ScaleConstraintLocalSpaceOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x18;
            static constexpr std::uintptr_t Filter = 0x19;
            static constexpr std::uintptr_t Parents = 0x20;
            static constexpr std::uintptr_t Weight = 0x30;
            static constexpr std::uintptr_t ChildCache = 0x38;
            static constexpr std::uintptr_t ParentCaches = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"bMaintainOffset", 0x18, "BoolProperty"},
            {"Filter", 0x19, "StructProperty"},
            {"Parents", 0x20, "ArrayProperty"},
            {"Weight", 0x30, "FloatProperty"},
            {"ChildCache", 0x38, "StructProperty"},
            {"ParentCaches", 0x50, "ArrayProperty"},
        }};
    };

    struct RigUnit_SendEvent
    {
        static constexpr std::string_view Name = "RigUnit_SendEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Event = 0x10;
            static constexpr std::uintptr_t Item = 0x14;
            static constexpr std::uintptr_t OffsetInSeconds = 0x1C;
            static constexpr std::uintptr_t bEnable = 0x20;
            static constexpr std::uintptr_t bOnlyDuringInteraction = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Event", 0x10, "EnumProperty"},
            {"Item", 0x14, "StructProperty"},
            {"OffsetInSeconds", 0x1C, "FloatProperty"},
            {"bEnable", 0x20, "BoolProperty"},
            {"bOnlyDuringInteraction", 0x21, "BoolProperty"},
        }};
    };

    struct RigUnit_SequenceExecution
    {
        static constexpr std::string_view Name = "RigUnit_SequenceExecution";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteContext = 0x10;
            static constexpr std::uintptr_t A = 0x250;
            static constexpr std::uintptr_t B = 0x490;
            static constexpr std::uintptr_t C = 0x6D0;
            static constexpr std::uintptr_t D = 0x910;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExecuteContext", 0x10, "StructProperty"},
            {"A", 0x250, "StructProperty"},
            {"B", 0x490, "StructProperty"},
            {"C", 0x6D0, "StructProperty"},
            {"D", 0x910, "StructProperty"},
        }};
    };

    struct RigUnit_SetAnimationChannelBase
    {
        static constexpr std::string_view Name = "RigUnit_SetAnimationChannelBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetAnimationChannelBaseFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetAnimationChannelBaseFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_GetAnimationChannelFromItemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutePin = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutePin", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_SetBoneInitialTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetBoneInitialTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Result = 0x80;
            static constexpr std::uintptr_t Space = 0xE0;
            static constexpr std::uintptr_t bPropagateToChildren = 0xE1;
            static constexpr std::uintptr_t CachedBone = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Result", 0x80, "StructProperty"},
            {"Space", 0xE0, "EnumProperty"},
            {"bPropagateToChildren", 0xE1, "BoolProperty"},
            {"CachedBone", 0xE8, "StructProperty"},
        }};
    };

    struct RigUnit_SetBoneRotation
    {
        static constexpr std::string_view Name = "RigUnit_SetBoneRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t Space = 0x40;
            static constexpr std::uintptr_t Weight = 0x44;
            static constexpr std::uintptr_t bPropagateToChildren = 0x48;
            static constexpr std::uintptr_t CachedBone = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"Space", 0x40, "EnumProperty"},
            {"Weight", 0x44, "FloatProperty"},
            {"bPropagateToChildren", 0x48, "BoolProperty"},
            {"CachedBone", 0x50, "StructProperty"},
        }};
    };

    struct RigUnit_SetBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Result = 0x80;
            static constexpr std::uintptr_t Space = 0xE0;
            static constexpr std::uintptr_t Weight = 0xE4;
            static constexpr std::uintptr_t bPropagateToChildren = 0xE8;
            static constexpr std::uintptr_t CachedBone = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Result", 0x80, "StructProperty"},
            {"Space", 0xE0, "EnumProperty"},
            {"Weight", 0xE4, "FloatProperty"},
            {"bPropagateToChildren", 0xE8, "BoolProperty"},
            {"CachedBone", 0xF0, "StructProperty"},
        }};
    };

    struct RigUnit_SetBoneTranslation
    {
        static constexpr std::string_view Name = "RigUnit_SetBoneTranslation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Translation = 0x18;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t Weight = 0x34;
            static constexpr std::uintptr_t bPropagateToChildren = 0x38;
            static constexpr std::uintptr_t CachedBone = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Translation", 0x18, "StructProperty"},
            {"Space", 0x30, "EnumProperty"},
            {"Weight", 0x34, "FloatProperty"},
            {"bPropagateToChildren", 0x38, "BoolProperty"},
            {"CachedBone", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_SetBoolAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetBoolAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "BoolProperty"},
        }};
    };

    struct RigUnit_SetBoolAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetBoolAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "BoolProperty"},
        }};
    };

    struct RigUnit_SetChannelHosts
    {
        static constexpr std::string_view Name = "RigUnit_SetChannelHosts";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x10;
            static constexpr std::uintptr_t Hosts = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Channel", 0x10, "StructProperty"},
            {"Hosts", 0x18, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetControlBool
    {
        static constexpr std::string_view Name = "RigUnit_SetControlBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t BoolValue = 0x14;
            static constexpr std::uintptr_t CachedControlIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"BoolValue", 0x14, "BoolProperty"},
            {"CachedControlIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlColor
    {
        static constexpr std::string_view Name = "RigUnit_SetControlColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Color = 0x14;
            static constexpr std::uintptr_t CachedControlIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Color", 0x14, "StructProperty"},
            {"CachedControlIndex", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlDrivenList
    {
        static constexpr std::string_view Name = "RigUnit_SetControlDrivenList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Driven = 0x18;
            static constexpr std::uintptr_t CachedControlIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Driven", 0x18, "ArrayProperty"},
            {"CachedControlIndex", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlFloat
    {
        static constexpr std::string_view Name = "RigUnit_SetControlFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t FloatValue = 0x18;
            static constexpr std::uintptr_t CachedControlIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"FloatValue", 0x18, "FloatProperty"},
            {"CachedControlIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlInteger
    {
        static constexpr std::string_view Name = "RigUnit_SetControlInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t IntegerValue = 0x18;
            static constexpr std::uintptr_t CachedControlIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "IntProperty"},
            {"IntegerValue", 0x18, "IntProperty"},
            {"CachedControlIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlIntegerFloatWeight
    {
        static constexpr std::string_view Name = "RigUnit_SetControlIntegerFloatWeight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t IntegerValue = 0x18;
            static constexpr std::uintptr_t CachedControlIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"IntegerValue", 0x18, "IntProperty"},
            {"CachedControlIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlOffset
    {
        static constexpr std::string_view Name = "RigUnit_SetControlOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Offset = 0x20;
            static constexpr std::uintptr_t Space = 0x80;
            static constexpr std::uintptr_t CachedControlIndex = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Offset", 0x20, "StructProperty"},
            {"Space", 0x80, "EnumProperty"},
            {"CachedControlIndex", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlRotationOffset
    {
        static constexpr std::string_view Name = "RigUnit_SetControlRotationOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Offset = 0x20;
            static constexpr std::uintptr_t Space = 0x40;
            static constexpr std::uintptr_t CachedControlIndex = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Offset", 0x20, "StructProperty"},
            {"Space", 0x40, "EnumProperty"},
            {"CachedControlIndex", 0x48, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlRotator
    {
        static constexpr std::string_view Name = "RigUnit_SetControlRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t Rotator = 0x18;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t CachedControlIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"Rotator", 0x18, "StructProperty"},
            {"Space", 0x30, "EnumProperty"},
            {"CachedControlIndex", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlScaleOffset
    {
        static constexpr std::string_view Name = "RigUnit_SetControlScaleOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Scale = 0x18;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t CachedControlIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Scale", 0x18, "StructProperty"},
            {"Space", 0x30, "EnumProperty"},
            {"CachedControlIndex", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetControlTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Space = 0x80;
            static constexpr std::uintptr_t CachedControlIndex = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Space", 0x80, "EnumProperty"},
            {"CachedControlIndex", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlTranslationOffset
    {
        static constexpr std::string_view Name = "RigUnit_SetControlTranslationOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Offset = 0x18;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t CachedControlIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Offset", 0x18, "StructProperty"},
            {"Space", 0x30, "EnumProperty"},
            {"CachedControlIndex", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlVector
    {
        static constexpr std::string_view Name = "RigUnit_SetControlVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t Vector = 0x18;
            static constexpr std::uintptr_t Space = 0x30;
            static constexpr std::uintptr_t CachedControlIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"Vector", 0x18, "StructProperty"},
            {"Space", 0x30, "EnumProperty"},
            {"CachedControlIndex", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlVector2D
    {
        static constexpr std::string_view Name = "RigUnit_SetControlVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t Vector = 0x18;
            static constexpr std::uintptr_t CachedControlIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"Vector", 0x18, "StructProperty"},
            {"CachedControlIndex", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetControlVisibility
    {
        static constexpr std::string_view Name = "RigUnit_SetControlVisibility";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Pattern = 0x18;
            static constexpr std::uintptr_t bVisible = 0x28;
            static constexpr std::uintptr_t CachedControlIndices = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Pattern", 0x18, "StrProperty"},
            {"bVisible", 0x28, "BoolProperty"},
            {"CachedControlIndices", 0x30, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetCurveValue
    {
        static constexpr std::string_view Name = "RigUnit_SetCurveValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x10;
            static constexpr std::uintptr_t Value = 0x14;
            static constexpr std::uintptr_t CachedCurveIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Curve", 0x10, "NameProperty"},
            {"Value", 0x14, "FloatProperty"},
            {"CachedCurveIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_SetDefaultMatch
    {
        static constexpr std::string_view Name = "RigUnit_SetDefaultMatch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_SetDefaultMatchArray
    {
        static constexpr std::string_view Name = "RigUnit_SetDefaultMatchArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x10, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetDefaultParent
    {
        static constexpr std::string_view Name = "RigUnit_SetDefaultParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Parent = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Parent", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_SetFloatAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetFloatAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "FloatProperty"},
        }};
    };

    struct RigUnit_SetFloatAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetFloatAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "FloatProperty"},
        }};
    };

    struct RigUnit_SetIntAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetIntAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "IntProperty"},
        }};
    };

    struct RigUnit_SetIntAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetIntAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "IntProperty"},
        }};
    };

    struct RigUnit_SetMetadataTag
    {
        static constexpr std::string_view Name = "RigUnit_SetMetadataTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Tag = 0x18;
            static constexpr std::uintptr_t Namespace = 0x1C;
            static constexpr std::uintptr_t CachedIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Tag", 0x18, "NameProperty"},
            {"Namespace", 0x1C, "EnumProperty"},
            {"CachedIndex", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetMetadataTagArray
    {
        static constexpr std::string_view Name = "RigUnit_SetMetadataTagArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Tags = 0x18;
            static constexpr std::uintptr_t Namespace = 0x28;
            static constexpr std::uintptr_t CachedIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Tags", 0x18, "ArrayProperty"},
            {"Namespace", 0x28, "EnumProperty"},
            {"CachedIndex", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_SetMultiControlBool
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t CachedControlIndices = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"CachedControlIndices", 0x20, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetMultiControlBool_Entry
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlBool_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t BoolValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x0, "NameProperty"},
            {"BoolValue", 0x4, "BoolProperty"},
        }};
    };

    struct RigUnit_SetMultiControlFloat
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t CachedControlIndices = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"CachedControlIndices", 0x28, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetMultiControlFloat_Entry
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlFloat_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t FloatValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x0, "NameProperty"},
            {"FloatValue", 0x4, "FloatProperty"},
        }};
    };

    struct RigUnit_SetMultiControlInteger
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlInteger";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t CachedControlIndices = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"CachedControlIndices", 0x28, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetMultiControlInteger_Entry
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlInteger_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t IntegerValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x0, "NameProperty"},
            {"IntegerValue", 0x4, "IntProperty"},
        }};
    };

    struct RigUnit_SetMultiControlRotator
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t CachedControlIndices = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"CachedControlIndices", 0x28, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetMultiControlRotator_Entry
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlRotator_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t Rotator = 0x8;
            static constexpr std::uintptr_t Space = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x0, "NameProperty"},
            {"Rotator", 0x8, "StructProperty"},
            {"Space", 0x20, "EnumProperty"},
        }};
    };

    struct RigUnit_SetMultiControlVector2D
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t Weight = 0x20;
            static constexpr std::uintptr_t CachedControlIndices = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Entries", 0x10, "ArrayProperty"},
            {"Weight", 0x20, "FloatProperty"},
            {"CachedControlIndices", 0x28, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetMultiControlVector2D_Entry
    {
        static constexpr std::string_view Name = "RigUnit_SetMultiControlVector2D_Entry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t Vector = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x0, "NameProperty"},
            {"Vector", 0x8, "StructProperty"},
        }};
    };

    struct RigUnit_SetRelativeBoneTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetRelativeBoneTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t Space = 0x14;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Weight = 0x80;
            static constexpr std::uintptr_t bPropagateToChildren = 0x84;
            static constexpr std::uintptr_t CachedBone = 0x88;
            static constexpr std::uintptr_t CachedSpaceIndex = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"Space", 0x14, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Weight", 0x80, "FloatProperty"},
            {"bPropagateToChildren", 0x84, "BoolProperty"},
            {"CachedBone", 0x88, "StructProperty"},
            {"CachedSpaceIndex", 0xA0, "StructProperty"},
        }};
    };

    struct RigUnit_SetRelativeRotationForItem
    {
        static constexpr std::string_view Name = "RigUnit_SetRelativeRotationForItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Parent = 0x18;
            static constexpr std::uintptr_t bParentInitial = 0x20;
            static constexpr std::uintptr_t Value = 0x30;
            static constexpr std::uintptr_t Weight = 0x50;
            static constexpr std::uintptr_t bPropagateToChildren = 0x54;
            static constexpr std::uintptr_t CachedChild = 0x58;
            static constexpr std::uintptr_t CachedParent = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Parent", 0x18, "StructProperty"},
            {"bParentInitial", 0x20, "BoolProperty"},
            {"Value", 0x30, "StructProperty"},
            {"Weight", 0x50, "FloatProperty"},
            {"bPropagateToChildren", 0x54, "BoolProperty"},
            {"CachedChild", 0x58, "StructProperty"},
            {"CachedParent", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_SetRelativeTransformForItem
    {
        static constexpr std::string_view Name = "RigUnit_SetRelativeTransformForItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Parent = 0x18;
            static constexpr std::uintptr_t bParentInitial = 0x20;
            static constexpr std::uintptr_t Value = 0x30;
            static constexpr std::uintptr_t Weight = 0x90;
            static constexpr std::uintptr_t bPropagateToChildren = 0x94;
            static constexpr std::uintptr_t CachedChild = 0x98;
            static constexpr std::uintptr_t CachedParent = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Parent", 0x18, "StructProperty"},
            {"bParentInitial", 0x20, "BoolProperty"},
            {"Value", 0x30, "StructProperty"},
            {"Weight", 0x90, "FloatProperty"},
            {"bPropagateToChildren", 0x94, "BoolProperty"},
            {"CachedChild", 0x98, "StructProperty"},
            {"CachedParent", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_SetRelativeTranslationForItem
    {
        static constexpr std::string_view Name = "RigUnit_SetRelativeTranslationForItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Child = 0x10;
            static constexpr std::uintptr_t Parent = 0x18;
            static constexpr std::uintptr_t bParentInitial = 0x20;
            static constexpr std::uintptr_t Value = 0x28;
            static constexpr std::uintptr_t Weight = 0x40;
            static constexpr std::uintptr_t bPropagateToChildren = 0x44;
            static constexpr std::uintptr_t CachedChild = 0x48;
            static constexpr std::uintptr_t CachedParent = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Child", 0x10, "StructProperty"},
            {"Parent", 0x18, "StructProperty"},
            {"bParentInitial", 0x20, "BoolProperty"},
            {"Value", 0x28, "StructProperty"},
            {"Weight", 0x40, "FloatProperty"},
            {"bPropagateToChildren", 0x44, "BoolProperty"},
            {"CachedChild", 0x48, "StructProperty"},
            {"CachedParent", 0x60, "StructProperty"},
        }};
    };

    struct RigUnit_SetRotation
    {
        static constexpr std::string_view Name = "RigUnit_SetRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Value = 0x20;
            static constexpr std::uintptr_t Weight = 0x40;
            static constexpr std::uintptr_t bPropagateToChildren = 0x44;
            static constexpr std::uintptr_t CachedIndex = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Value", 0x20, "StructProperty"},
            {"Weight", 0x40, "FloatProperty"},
            {"bPropagateToChildren", 0x44, "BoolProperty"},
            {"CachedIndex", 0x48, "StructProperty"},
        }};
    };

    struct RigUnit_SetRotatorAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetRotatorAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetRotatorAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetRotatorAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetScale
    {
        static constexpr std::string_view Name = "RigUnit_SetScale";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Scale = 0x20;
            static constexpr std::uintptr_t Weight = 0x38;
            static constexpr std::uintptr_t bPropagateToChildren = 0x3C;
            static constexpr std::uintptr_t CachedIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Scale", 0x20, "StructProperty"},
            {"Weight", 0x38, "FloatProperty"},
            {"bPropagateToChildren", 0x3C, "BoolProperty"},
            {"CachedIndex", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_SetShapeTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetShapeTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t CachedControlIndex = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Control", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"CachedControlIndex", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_SetSpaceInitialTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetSpaceInitialTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceName = 0x10;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t Result = 0x80;
            static constexpr std::uintptr_t Space = 0xE0;
            static constexpr std::uintptr_t CachedSpaceIndex = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpaceName", 0x10, "NameProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"Result", 0x80, "StructProperty"},
            {"Space", 0xE0, "EnumProperty"},
            {"CachedSpaceIndex", 0xE8, "StructProperty"},
        }};
    };

    struct RigUnit_SetSpaceTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetSpaceTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Space = 0x10;
            static constexpr std::uintptr_t Weight = 0x14;
            static constexpr std::uintptr_t Transform = 0x20;
            static constexpr std::uintptr_t SpaceType = 0x80;
            static constexpr std::uintptr_t CachedSpaceIndex = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Space", 0x10, "NameProperty"},
            {"Weight", 0x14, "FloatProperty"},
            {"Transform", 0x20, "StructProperty"},
            {"SpaceType", 0x80, "EnumProperty"},
            {"CachedSpaceIndex", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_SetTransform
    {
        static constexpr std::string_view Name = "RigUnit_SetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Value = 0x20;
            static constexpr std::uintptr_t Weight = 0x80;
            static constexpr std::uintptr_t bPropagateToChildren = 0x84;
            static constexpr std::uintptr_t CachedIndex = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Value", 0x20, "StructProperty"},
            {"Weight", 0x80, "FloatProperty"},
            {"bPropagateToChildren", 0x84, "BoolProperty"},
            {"CachedIndex", 0x88, "StructProperty"},
        }};
    };

    struct RigUnit_SetTransformAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetTransformAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_SetTransformAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetTransformAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetTransformArray
    {
        static constexpr std::string_view Name = "RigUnit_SetTransformArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Space = 0x20;
            static constexpr std::uintptr_t bInitial = 0x21;
            static constexpr std::uintptr_t Transforms = 0x28;
            static constexpr std::uintptr_t Weight = 0x38;
            static constexpr std::uintptr_t bPropagateToChildren = 0x3C;
            static constexpr std::uintptr_t CachedIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"Space", 0x20, "EnumProperty"},
            {"bInitial", 0x21, "BoolProperty"},
            {"Transforms", 0x28, "ArrayProperty"},
            {"Weight", 0x38, "FloatProperty"},
            {"bPropagateToChildren", 0x3C, "BoolProperty"},
            {"CachedIndex", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetTransformItemArray
    {
        static constexpr std::string_view Name = "RigUnit_SetTransformItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t Space = 0x20;
            static constexpr std::uintptr_t bInitial = 0x21;
            static constexpr std::uintptr_t Transforms = 0x28;
            static constexpr std::uintptr_t Weight = 0x38;
            static constexpr std::uintptr_t bPropagateToChildren = 0x3C;
            static constexpr std::uintptr_t CachedIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"Space", 0x20, "EnumProperty"},
            {"bInitial", 0x21, "BoolProperty"},
            {"Transforms", 0x28, "ArrayProperty"},
            {"Weight", 0x38, "FloatProperty"},
            {"bPropagateToChildren", 0x3C, "BoolProperty"},
            {"CachedIndex", 0x40, "ArrayProperty"},
        }};
    };

    struct RigUnit_SetTranslation
    {
        static constexpr std::string_view Name = "RigUnit_SetTranslation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t Space = 0x18;
            static constexpr std::uintptr_t bInitial = 0x19;
            static constexpr std::uintptr_t Value = 0x20;
            static constexpr std::uintptr_t Weight = 0x38;
            static constexpr std::uintptr_t bPropagateToChildren = 0x3C;
            static constexpr std::uintptr_t CachedIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"Space", 0x18, "EnumProperty"},
            {"bInitial", 0x19, "BoolProperty"},
            {"Value", 0x20, "StructProperty"},
            {"Weight", 0x38, "FloatProperty"},
            {"bPropagateToChildren", 0x3C, "BoolProperty"},
            {"CachedIndex", 0x40, "StructProperty"},
        }};
    };

    struct RigUnit_SetVector2DAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetVector2DAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetVector2DAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetVector2DAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetVectorAnimationChannel
    {
        static constexpr std::string_view Name = "RigUnit_SetVectorAnimationChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SetVectorAnimationChannelFromItem
    {
        static constexpr std::string_view Name = "RigUnit_SetVectorAnimationChannelFromItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_SetAnimationChannelBaseFromItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SetupShapeLibraryFromUserData
    {
        static constexpr std::string_view Name = "RigUnit_SetupShapeLibraryFromUserData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x10;
            static constexpr std::uintptr_t Path = 0x20;
            static constexpr std::uintptr_t LibraryName = 0x30;
            static constexpr std::uintptr_t LogShapeLibraries = 0x40;
            static constexpr std::uintptr_t bFound = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Namespace", 0x10, "StrProperty"},
            {"Path", 0x20, "StrProperty"},
            {"LibraryName", 0x30, "StrProperty"},
            {"LogShapeLibraries", 0x40, "BoolProperty"},
            {"bFound", 0x41, "BoolProperty"},
        }};
    };

    struct RigUnit_ShapeExists
    {
        static constexpr std::string_view Name = "RigUnit_ShapeExists";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeName = 0x8;
            static constexpr std::uintptr_t Result = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShapeName", 0x8, "NameProperty"},
            {"Result", 0xC, "BoolProperty"},
        }};
    };

    struct RigUnit_SlideChain
    {
        static constexpr std::string_view Name = "RigUnit_SlideChain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EndBone = 0x14;
            static constexpr std::uintptr_t SlideAmount = 0x18;
            static constexpr std::uintptr_t bPropagateToChildren = 0x1C;
            static constexpr std::uintptr_t WorkData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EndBone", 0x14, "NameProperty"},
            {"SlideAmount", 0x18, "FloatProperty"},
            {"bPropagateToChildren", 0x1C, "BoolProperty"},
            {"WorkData", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SlideChainItemArray
    {
        static constexpr std::string_view Name = "RigUnit_SlideChainItemArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t SlideAmount = 0x20;
            static constexpr std::uintptr_t bPropagateToChildren = 0x24;
            static constexpr std::uintptr_t WorkData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Items", 0x10, "ArrayProperty"},
            {"SlideAmount", 0x20, "FloatProperty"},
            {"bPropagateToChildren", 0x24, "BoolProperty"},
            {"WorkData", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SlideChainPerItem
    {
        static constexpr std::string_view Name = "RigUnit_SlideChainPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t SlideAmount = 0x20;
            static constexpr std::uintptr_t bPropagateToChildren = 0x24;
            static constexpr std::uintptr_t WorkData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"SlideAmount", 0x20, "FloatProperty"},
            {"bPropagateToChildren", 0x24, "BoolProperty"},
            {"WorkData", 0x28, "StructProperty"},
        }};
    };

    struct RigUnit_SlideChain_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_SlideChain_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainLength = 0x0;
            static constexpr std::uintptr_t ItemSegments = 0x8;
            static constexpr std::uintptr_t CachedItems = 0x18;
            static constexpr std::uintptr_t Transforms = 0x28;
            static constexpr std::uintptr_t BlendedTransforms = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChainLength", 0x0, "FloatProperty"},
            {"ItemSegments", 0x8, "ArrayProperty"},
            {"CachedItems", 0x18, "ArrayProperty"},
            {"Transforms", 0x28, "ArrayProperty"},
            {"BlendedTransforms", 0x38, "ArrayProperty"},
        }};
    };

    struct RigUnit_SpaceName
    {
        static constexpr std::string_view Name = "RigUnit_SpaceName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Space = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Space", 0x8, "NameProperty"},
        }};
    };

    struct RigUnit_SphereTraceByObjectTypes
    {
        static constexpr std::string_view Name = "RigUnit_SphereTraceByObjectTypes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t ObjectTypes = 0x38;
            static constexpr std::uintptr_t Radius = 0x48;
            static constexpr std::uintptr_t bHit = 0x4C;
            static constexpr std::uintptr_t HitLocation = 0x50;
            static constexpr std::uintptr_t HitNormal = 0x68;
            static constexpr std::uintptr_t WorkData = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"ObjectTypes", 0x38, "ArrayProperty"},
            {"Radius", 0x48, "FloatProperty"},
            {"bHit", 0x4C, "BoolProperty"},
            {"HitLocation", 0x50, "StructProperty"},
            {"HitNormal", 0x68, "StructProperty"},
            {"WorkData", 0x80, "StructProperty"},
        }};
    };

    struct RigUnit_SphereTraceByProfile
    {
        static constexpr std::string_view Name = "RigUnit_SphereTraceByProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t Radius = 0x38;
            static constexpr std::uintptr_t ProfileName = 0x3C;
            static constexpr std::uintptr_t bHit = 0x40;
            static constexpr std::uintptr_t HitLocation = 0x48;
            static constexpr std::uintptr_t HitNormal = 0x60;
            static constexpr std::uintptr_t WorkData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"Radius", 0x38, "FloatProperty"},
            {"ProfileName", 0x3C, "NameProperty"},
            {"bHit", 0x40, "BoolProperty"},
            {"HitLocation", 0x48, "StructProperty"},
            {"HitNormal", 0x60, "StructProperty"},
            {"WorkData", 0x78, "StructProperty"},
        }};
    };

    struct RigUnit_SphereTraceByTraceChannel
    {
        static constexpr std::string_view Name = "RigUnit_SphereTraceByTraceChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t TraceChannel = 0x38;
            static constexpr std::uintptr_t Radius = 0x3C;
            static constexpr std::uintptr_t bHit = 0x40;
            static constexpr std::uintptr_t HitLocation = 0x48;
            static constexpr std::uintptr_t HitNormal = 0x60;
            static constexpr std::uintptr_t WorkData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"TraceChannel", 0x38, "ByteProperty"},
            {"Radius", 0x3C, "FloatProperty"},
            {"bHit", 0x40, "BoolProperty"},
            {"HitLocation", 0x48, "StructProperty"},
            {"HitNormal", 0x60, "StructProperty"},
            {"WorkData", 0x78, "StructProperty"},
        }};
    };

    struct RigUnit_SphereTraceWorld
    {
        static constexpr std::string_view Name = "RigUnit_SphereTraceWorld";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x8;
            static constexpr std::uintptr_t End = 0x20;
            static constexpr std::uintptr_t Channel = 0x38;
            static constexpr std::uintptr_t Radius = 0x3C;
            static constexpr std::uintptr_t bHit = 0x40;
            static constexpr std::uintptr_t HitLocation = 0x48;
            static constexpr std::uintptr_t HitNormal = 0x60;
            static constexpr std::uintptr_t WorkData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Start", 0x8, "StructProperty"},
            {"End", 0x20, "StructProperty"},
            {"Channel", 0x38, "ByteProperty"},
            {"Radius", 0x3C, "FloatProperty"},
            {"bHit", 0x40, "BoolProperty"},
            {"HitLocation", 0x48, "StructProperty"},
            {"HitNormal", 0x60, "StructProperty"},
            {"WorkData", 0x78, "StructProperty"},
        }};
    };

    struct RigUnit_SphereTrace_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_SphereTrace_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hash = 0x0;
            static constexpr std::uintptr_t bHit = 0x4;
            static constexpr std::uintptr_t HitLocation = 0x8;
            static constexpr std::uintptr_t HitNormal = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Hash", 0x0, "UInt32Property"},
            {"bHit", 0x4, "BoolProperty"},
            {"HitLocation", 0x8, "StructProperty"},
            {"HitNormal", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SphericalPoseReader
    {
        static constexpr std::string_view Name = "RigUnit_SphericalPoseReader";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputParam = 0x10;
            static constexpr std::uintptr_t DriverItem = 0x14;
            static constexpr std::uintptr_t DriverAxis = 0x20;
            static constexpr std::uintptr_t RotationOffset = 0x38;
            static constexpr std::uintptr_t ActiveRegionSize = 0x50;
            static constexpr std::uintptr_t ActiveRegionScaleFactors = 0x54;
            static constexpr std::uintptr_t FalloffSize = 0x64;
            static constexpr std::uintptr_t FalloffRegionScaleFactors = 0x68;
            static constexpr std::uintptr_t FlipWidthScaling = 0x78;
            static constexpr std::uintptr_t FlipHeightScaling = 0x79;
            static constexpr std::uintptr_t OptionalParentItem = 0x7C;
            static constexpr std::uintptr_t Debug = 0x84;
            static constexpr std::uintptr_t InnerRegion = 0x94;
            static constexpr std::uintptr_t OuterRegion = 0xA8;
            static constexpr std::uintptr_t DriverNormal = 0xC0;
            static constexpr std::uintptr_t Driver2D = 0xD8;
            static constexpr std::uintptr_t DriverCache = 0xF0;
            static constexpr std::uintptr_t OptionalParentCache = 0x108;
            static constexpr std::uintptr_t LocalDriverTransformInit = 0x120;
            static constexpr std::uintptr_t CachedRotationOffset = 0x180;
            static constexpr std::uintptr_t CachedParentElementKey = 0x198;
            static constexpr std::uintptr_t bCachedInitTransforms = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OutputParam", 0x10, "FloatProperty"},
            {"DriverItem", 0x14, "StructProperty"},
            {"DriverAxis", 0x20, "StructProperty"},
            {"RotationOffset", 0x38, "StructProperty"},
            {"ActiveRegionSize", 0x50, "FloatProperty"},
            {"ActiveRegionScaleFactors", 0x54, "StructProperty"},
            {"FalloffSize", 0x64, "FloatProperty"},
            {"FalloffRegionScaleFactors", 0x68, "StructProperty"},
            {"FlipWidthScaling", 0x78, "BoolProperty"},
            {"FlipHeightScaling", 0x79, "BoolProperty"},
            {"OptionalParentItem", 0x7C, "StructProperty"},
            {"Debug", 0x84, "StructProperty"},
            {"InnerRegion", 0x94, "StructProperty"},
            {"OuterRegion", 0xA8, "StructProperty"},
            {"DriverNormal", 0xC0, "StructProperty"},
            {"Driver2D", 0xD8, "StructProperty"},
            {"DriverCache", 0xF0, "StructProperty"},
            {"OptionalParentCache", 0x108, "StructProperty"},
            {"LocalDriverTransformInit", 0x120, "StructProperty"},
            {"CachedRotationOffset", 0x180, "StructProperty"},
            {"CachedParentElementKey", 0x198, "StructProperty"},
            {"bCachedInitTransforms", 0x1A0, "BoolProperty"},
        }};
    };

    struct RigUnit_SpringIK
    {
        static constexpr std::string_view Name = "RigUnit_SpringIK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EndBone = 0x14;
            static constexpr std::uintptr_t HierarchyStrength = 0x18;
            static constexpr std::uintptr_t EffectorStrength = 0x1C;
            static constexpr std::uintptr_t EffectorRatio = 0x20;
            static constexpr std::uintptr_t RootStrength = 0x24;
            static constexpr std::uintptr_t RootRatio = 0x28;
            static constexpr std::uintptr_t Damping = 0x2C;
            static constexpr std::uintptr_t PoleVector = 0x30;
            static constexpr std::uintptr_t bFlipPolePlane = 0x48;
            static constexpr std::uintptr_t PoleVectorKind = 0x49;
            static constexpr std::uintptr_t PoleVectorSpace = 0x4C;
            static constexpr std::uintptr_t PrimaryAxis = 0x50;
            static constexpr std::uintptr_t SecondaryAxis = 0x68;
            static constexpr std::uintptr_t bLiveSimulation = 0x80;
            static constexpr std::uintptr_t Iterations = 0x84;
            static constexpr std::uintptr_t bLimitLocalPosition = 0x88;
            static constexpr std::uintptr_t bPropagateToChildren = 0x89;
            static constexpr std::uintptr_t DebugSettings = 0x90;
            static constexpr std::uintptr_t WorkData = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EndBone", 0x14, "NameProperty"},
            {"HierarchyStrength", 0x18, "FloatProperty"},
            {"EffectorStrength", 0x1C, "FloatProperty"},
            {"EffectorRatio", 0x20, "FloatProperty"},
            {"RootStrength", 0x24, "FloatProperty"},
            {"RootRatio", 0x28, "FloatProperty"},
            {"Damping", 0x2C, "FloatProperty"},
            {"PoleVector", 0x30, "StructProperty"},
            {"bFlipPolePlane", 0x48, "BoolProperty"},
            {"PoleVectorKind", 0x49, "EnumProperty"},
            {"PoleVectorSpace", 0x4C, "NameProperty"},
            {"PrimaryAxis", 0x50, "StructProperty"},
            {"SecondaryAxis", 0x68, "StructProperty"},
            {"bLiveSimulation", 0x80, "BoolProperty"},
            {"Iterations", 0x84, "IntProperty"},
            {"bLimitLocalPosition", 0x88, "BoolProperty"},
            {"bPropagateToChildren", 0x89, "BoolProperty"},
            {"DebugSettings", 0x90, "StructProperty"},
            {"WorkData", 0x110, "StructProperty"},
        }};
    };

    struct RigUnit_SpringIK_DebugSettings
    {
        static constexpr std::string_view Name = "RigUnit_SpringIK_DebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t Color = 0x8;
            static constexpr std::uintptr_t WorldOffset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"Color", 0x8, "StructProperty"},
            {"WorldOffset", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SpringIK_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_SpringIK_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBones = 0x0;
            static constexpr std::uintptr_t CachedPoleVector = 0x10;
            static constexpr std::uintptr_t Transforms = 0x28;
            static constexpr std::uintptr_t Simulation = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedBones", 0x0, "ArrayProperty"},
            {"CachedPoleVector", 0x10, "StructProperty"},
            {"Transforms", 0x28, "ArrayProperty"},
            {"Simulation", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SpringInterp
    {
        static constexpr std::string_view Name = "RigUnit_SpringInterp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x8;
            static constexpr std::uintptr_t Target = 0xC;
            static constexpr std::uintptr_t Stiffness = 0x10;
            static constexpr std::uintptr_t CriticalDamping = 0x14;
            static constexpr std::uintptr_t Mass = 0x18;
            static constexpr std::uintptr_t Result = 0x1C;
            static constexpr std::uintptr_t SpringState = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Current", 0x8, "FloatProperty"},
            {"Target", 0xC, "FloatProperty"},
            {"Stiffness", 0x10, "FloatProperty"},
            {"CriticalDamping", 0x14, "FloatProperty"},
            {"Mass", 0x18, "FloatProperty"},
            {"Result", 0x1C, "FloatProperty"},
            {"SpringState", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_SpringInterpQuaternionV2
    {
        static constexpr std::string_view Name = "RigUnit_SpringInterpQuaternionV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x10;
            static constexpr std::uintptr_t Strength = 0x30;
            static constexpr std::uintptr_t CriticalDamping = 0x34;
            static constexpr std::uintptr_t Torque = 0x38;
            static constexpr std::uintptr_t bUseCurrentInput = 0x50;
            static constexpr std::uintptr_t Current = 0x60;
            static constexpr std::uintptr_t TargetVelocityAmount = 0x80;
            static constexpr std::uintptr_t bInitializeFromTarget = 0x84;
            static constexpr std::uintptr_t Result = 0x90;
            static constexpr std::uintptr_t AngularVelocity = 0xB0;
            static constexpr std::uintptr_t SimulatedResult = 0xD0;
            static constexpr std::uintptr_t SpringState = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Target", 0x10, "StructProperty"},
            {"Strength", 0x30, "FloatProperty"},
            {"CriticalDamping", 0x34, "FloatProperty"},
            {"Torque", 0x38, "StructProperty"},
            {"bUseCurrentInput", 0x50, "BoolProperty"},
            {"Current", 0x60, "StructProperty"},
            {"TargetVelocityAmount", 0x80, "FloatProperty"},
            {"bInitializeFromTarget", 0x84, "BoolProperty"},
            {"Result", 0x90, "StructProperty"},
            {"AngularVelocity", 0xB0, "StructProperty"},
            {"SimulatedResult", 0xD0, "StructProperty"},
            {"SpringState", 0xF0, "StructProperty"},
        }};
    };

    struct RigUnit_SpringInterpV2
    {
        static constexpr std::string_view Name = "RigUnit_SpringInterpV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x8;
            static constexpr std::uintptr_t Strength = 0xC;
            static constexpr std::uintptr_t CriticalDamping = 0x10;
            static constexpr std::uintptr_t Force = 0x14;
            static constexpr std::uintptr_t bUseCurrentInput = 0x18;
            static constexpr std::uintptr_t Current = 0x1C;
            static constexpr std::uintptr_t TargetVelocityAmount = 0x20;
            static constexpr std::uintptr_t bInitializeFromTarget = 0x24;
            static constexpr std::uintptr_t Result = 0x28;
            static constexpr std::uintptr_t Velocity = 0x2C;
            static constexpr std::uintptr_t SimulatedResult = 0x30;
            static constexpr std::uintptr_t SpringState = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Target", 0x8, "FloatProperty"},
            {"Strength", 0xC, "FloatProperty"},
            {"CriticalDamping", 0x10, "FloatProperty"},
            {"Force", 0x14, "FloatProperty"},
            {"bUseCurrentInput", 0x18, "BoolProperty"},
            {"Current", 0x1C, "FloatProperty"},
            {"TargetVelocityAmount", 0x20, "FloatProperty"},
            {"bInitializeFromTarget", 0x24, "BoolProperty"},
            {"Result", 0x28, "FloatProperty"},
            {"Velocity", 0x2C, "FloatProperty"},
            {"SimulatedResult", 0x30, "FloatProperty"},
            {"SpringState", 0x34, "StructProperty"},
        }};
    };

    struct RigUnit_SpringInterpVector
    {
        static constexpr std::string_view Name = "RigUnit_SpringInterpVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x8;
            static constexpr std::uintptr_t Target = 0x20;
            static constexpr std::uintptr_t Stiffness = 0x38;
            static constexpr std::uintptr_t CriticalDamping = 0x3C;
            static constexpr std::uintptr_t Mass = 0x40;
            static constexpr std::uintptr_t Result = 0x48;
            static constexpr std::uintptr_t SpringState = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Current", 0x8, "StructProperty"},
            {"Target", 0x20, "StructProperty"},
            {"Stiffness", 0x38, "FloatProperty"},
            {"CriticalDamping", 0x3C, "FloatProperty"},
            {"Mass", 0x40, "FloatProperty"},
            {"Result", 0x48, "StructProperty"},
            {"SpringState", 0x60, "StructProperty"},
        }};
    };

    struct RigUnit_SpringInterpVectorV2
    {
        static constexpr std::string_view Name = "RigUnit_SpringInterpVectorV2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_SimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x8;
            static constexpr std::uintptr_t Strength = 0x20;
            static constexpr std::uintptr_t CriticalDamping = 0x24;
            static constexpr std::uintptr_t Force = 0x28;
            static constexpr std::uintptr_t bUseCurrentInput = 0x40;
            static constexpr std::uintptr_t Current = 0x48;
            static constexpr std::uintptr_t TargetVelocityAmount = 0x60;
            static constexpr std::uintptr_t bInitializeFromTarget = 0x64;
            static constexpr std::uintptr_t Result = 0x68;
            static constexpr std::uintptr_t Velocity = 0x80;
            static constexpr std::uintptr_t SimulatedResult = 0x98;
            static constexpr std::uintptr_t SpringState = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Target", 0x8, "StructProperty"},
            {"Strength", 0x20, "FloatProperty"},
            {"CriticalDamping", 0x24, "FloatProperty"},
            {"Force", 0x28, "StructProperty"},
            {"bUseCurrentInput", 0x40, "BoolProperty"},
            {"Current", 0x48, "StructProperty"},
            {"TargetVelocityAmount", 0x60, "FloatProperty"},
            {"bInitializeFromTarget", 0x64, "BoolProperty"},
            {"Result", 0x68, "StructProperty"},
            {"Velocity", 0x80, "StructProperty"},
            {"SimulatedResult", 0x98, "StructProperty"},
            {"SpringState", 0xB0, "StructProperty"},
        }};
    };

    struct RigUnit_StartProfilingTimer
    {
        static constexpr std::string_view Name = "RigUnit_StartProfilingTimer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigVMFunction_DebugBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugDrawSettings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugDrawSettings", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_Subtract_FloatFloat
    {
        static constexpr std::string_view Name = "RigUnit_Subtract_FloatFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryFloatOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0xC;
            static constexpr std::uintptr_t Result = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "FloatProperty"},
            {"Argument1", 0xC, "FloatProperty"},
            {"Result", 0x10, "FloatProperty"},
        }};
    };

    struct RigUnit_Subtract_VectorVector
    {
        static constexpr std::string_view Name = "RigUnit_Subtract_VectorVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_BinaryVectorOp";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument0 = 0x8;
            static constexpr std::uintptr_t Argument1 = 0x20;
            static constexpr std::uintptr_t Result = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Argument0", 0x8, "StructProperty"},
            {"Argument1", 0x20, "StructProperty"},
            {"Result", 0x38, "StructProperty"},
        }};
    };

    struct RigUnit_SwitchParent
    {
        static constexpr std::string_view Name = "RigUnit_SwitchParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DynamicHierarchyBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x10;
            static constexpr std::uintptr_t Child = 0x14;
            static constexpr std::uintptr_t Parent = 0x1C;
            static constexpr std::uintptr_t bMaintainGlobal = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Mode", 0x10, "EnumProperty"},
            {"Child", 0x14, "StructProperty"},
            {"Parent", 0x1C, "StructProperty"},
            {"bMaintainGlobal", 0x24, "BoolProperty"},
        }};
    };

    struct RigUnit_ToRigSpace_Location
    {
        static constexpr std::string_view Name = "RigUnit_ToRigSpace_Location";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t Global = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"Global", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ToRigSpace_Rotation
    {
        static constexpr std::string_view Name = "RigUnit_ToRigSpace_Rotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Global = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Global", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ToRigSpace_Transform
    {
        static constexpr std::string_view Name = "RigUnit_ToRigSpace_Transform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t Global = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"Global", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_ToSwingAndTwist
    {
        static constexpr std::string_view Name = "RigUnit_ToSwingAndTwist";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t TwistAxis = 0x30;
            static constexpr std::uintptr_t Swing = 0x50;
            static constexpr std::uintptr_t Twist = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Input", 0x10, "StructProperty"},
            {"TwistAxis", 0x30, "StructProperty"},
            {"Swing", 0x50, "StructProperty"},
            {"Twist", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_ToWorldSpace_Location
    {
        static constexpr std::string_view Name = "RigUnit_ToWorldSpace_Location";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t World = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x8, "StructProperty"},
            {"World", 0x20, "StructProperty"},
        }};
    };

    struct RigUnit_ToWorldSpace_Rotation
    {
        static constexpr std::string_view Name = "RigUnit_ToWorldSpace_Rotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t World = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"World", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_ToWorldSpace_Transform
    {
        static constexpr std::string_view Name = "RigUnit_ToWorldSpace_Transform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t World = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"World", 0x70, "StructProperty"},
        }};
    };

    struct RigUnit_TransformConstraint
    {
        static constexpr std::string_view Name = "RigUnit_TransformConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x10;
            static constexpr std::uintptr_t BaseTransformSpace = 0x14;
            static constexpr std::uintptr_t BaseTransform = 0x20;
            static constexpr std::uintptr_t BaseBone = 0x80;
            static constexpr std::uintptr_t Targets = 0x88;
            static constexpr std::uintptr_t bUseInitialTransforms = 0x98;
            static constexpr std::uintptr_t WorkData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bone", 0x10, "NameProperty"},
            {"BaseTransformSpace", 0x14, "EnumProperty"},
            {"BaseTransform", 0x20, "StructProperty"},
            {"BaseBone", 0x80, "NameProperty"},
            {"Targets", 0x88, "ArrayProperty"},
            {"bUseInitialTransforms", 0x98, "BoolProperty"},
            {"WorkData", 0xA0, "StructProperty"},
        }};
    };

    struct RigUnit_TransformConstraintPerItem
    {
        static constexpr std::string_view Name = "RigUnit_TransformConstraintPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x10;
            static constexpr std::uintptr_t BaseTransformSpace = 0x18;
            static constexpr std::uintptr_t BaseTransform = 0x20;
            static constexpr std::uintptr_t BaseItem = 0x80;
            static constexpr std::uintptr_t Targets = 0x88;
            static constexpr std::uintptr_t bUseInitialTransforms = 0x98;
            static constexpr std::uintptr_t WorkData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Item", 0x10, "StructProperty"},
            {"BaseTransformSpace", 0x18, "EnumProperty"},
            {"BaseTransform", 0x20, "StructProperty"},
            {"BaseItem", 0x80, "StructProperty"},
            {"Targets", 0x88, "ArrayProperty"},
            {"bUseInitialTransforms", 0x98, "BoolProperty"},
            {"WorkData", 0xA0, "StructProperty"},
        }};
    };

    struct RigUnit_TransformConstraint_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_TransformConstraint_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintData = 0x0;
            static constexpr std::uintptr_t ConstraintDataToTargets = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConstraintData", 0x0, "ArrayProperty"},
            {"ConstraintDataToTargets", 0x10, "MapProperty"},
        }};
    };

    struct RigUnit_TwistBones
    {
        static constexpr std::string_view Name = "RigUnit_TwistBones";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBone = 0x10;
            static constexpr std::uintptr_t EndBone = 0x14;
            static constexpr std::uintptr_t TwistAxis = 0x18;
            static constexpr std::uintptr_t PoleAxis = 0x30;
            static constexpr std::uintptr_t TwistEaseType = 0x48;
            static constexpr std::uintptr_t Weight = 0x4C;
            static constexpr std::uintptr_t bPropagateToChildren = 0x50;
            static constexpr std::uintptr_t WorkData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StartBone", 0x10, "NameProperty"},
            {"EndBone", 0x14, "NameProperty"},
            {"TwistAxis", 0x18, "StructProperty"},
            {"PoleAxis", 0x30, "StructProperty"},
            {"TwistEaseType", 0x48, "EnumProperty"},
            {"Weight", 0x4C, "FloatProperty"},
            {"bPropagateToChildren", 0x50, "BoolProperty"},
            {"WorkData", 0x58, "StructProperty"},
        }};
    };

    struct RigUnit_TwistBonesPerItem
    {
        static constexpr std::string_view Name = "RigUnit_TwistBonesPerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t TwistAxis = 0x20;
            static constexpr std::uintptr_t PoleAxis = 0x38;
            static constexpr std::uintptr_t TwistEaseType = 0x50;
            static constexpr std::uintptr_t Weight = 0x54;
            static constexpr std::uintptr_t bPropagateToChildren = 0x58;
            static constexpr std::uintptr_t WorkData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Items", 0x10, "StructProperty"},
            {"TwistAxis", 0x20, "StructProperty"},
            {"PoleAxis", 0x38, "StructProperty"},
            {"TwistEaseType", 0x50, "EnumProperty"},
            {"Weight", 0x54, "FloatProperty"},
            {"bPropagateToChildren", 0x58, "BoolProperty"},
            {"WorkData", 0x60, "StructProperty"},
        }};
    };

    struct RigUnit_TwistBones_WorkData
    {
        static constexpr std::string_view Name = "RigUnit_TwistBones_WorkData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedItems = 0x0;
            static constexpr std::uintptr_t ItemRatios = 0x10;
            static constexpr std::uintptr_t ItemTransforms = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedItems", 0x0, "ArrayProperty"},
            {"ItemRatios", 0x10, "ArrayProperty"},
            {"ItemTransforms", 0x20, "ArrayProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKFK
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKFK";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t StartJoint = 0x10;
            static constexpr std::uintptr_t EndJoint = 0x14;
            static constexpr std::uintptr_t PoleTarget = 0x18;
            static constexpr std::uintptr_t Spin = 0x30;
            static constexpr std::uintptr_t EndEffector = 0x40;
            static constexpr std::uintptr_t IKBlend = 0xA0;
            static constexpr std::uintptr_t StartJointFKTransform = 0xB0;
            static constexpr std::uintptr_t MidJointFKTransform = 0x110;
            static constexpr std::uintptr_t EndJointFKTransform = 0x170;
            static constexpr std::uintptr_t PreviousFKIKBlend = 0x1D0;
            static constexpr std::uintptr_t StartJointIKTransform = 0x1E0;
            static constexpr std::uintptr_t MidJointIKTransform = 0x240;
            static constexpr std::uintptr_t EndJointIKTransform = 0x2A0;
            static constexpr std::uintptr_t StartJointIndex = 0x300;
            static constexpr std::uintptr_t MidJointIndex = 0x304;
            static constexpr std::uintptr_t EndJointIndex = 0x308;
            static constexpr std::uintptr_t UpperLimbLength = 0x30C;
            static constexpr std::uintptr_t LowerLimbLength = 0x310;
            static constexpr std::uintptr_t bIsInitialized = 0x314;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"StartJoint", 0x10, "NameProperty"},
            {"EndJoint", 0x14, "NameProperty"},
            {"PoleTarget", 0x18, "StructProperty"},
            {"Spin", 0x30, "FloatProperty"},
            {"EndEffector", 0x40, "StructProperty"},
            {"IKBlend", 0xA0, "FloatProperty"},
            {"StartJointFKTransform", 0xB0, "StructProperty"},
            {"MidJointFKTransform", 0x110, "StructProperty"},
            {"EndJointFKTransform", 0x170, "StructProperty"},
            {"PreviousFKIKBlend", 0x1D0, "FloatProperty"},
            {"StartJointIKTransform", 0x1E0, "StructProperty"},
            {"MidJointIKTransform", 0x240, "StructProperty"},
            {"EndJointIKTransform", 0x2A0, "StructProperty"},
            {"StartJointIndex", 0x300, "IntProperty"},
            {"MidJointIndex", 0x304, "IntProperty"},
            {"EndJointIndex", 0x308, "IntProperty"},
            {"UpperLimbLength", 0x30C, "FloatProperty"},
            {"LowerLimbLength", 0x310, "FloatProperty"},
            {"bIsInitialized", 0x314, "BoolProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKSimple
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKSimple";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneA = 0x10;
            static constexpr std::uintptr_t BoneB = 0x14;
            static constexpr std::uintptr_t EffectorBone = 0x18;
            static constexpr std::uintptr_t Effector = 0x20;
            static constexpr std::uintptr_t PrimaryAxis = 0x80;
            static constexpr std::uintptr_t SecondaryAxis = 0x98;
            static constexpr std::uintptr_t SecondaryAxisWeight = 0xB0;
            static constexpr std::uintptr_t PoleVector = 0xB8;
            static constexpr std::uintptr_t PoleVectorKind = 0xD0;
            static constexpr std::uintptr_t PoleVectorSpace = 0xD4;
            static constexpr std::uintptr_t bEnableStretch = 0xD8;
            static constexpr std::uintptr_t StretchStartRatio = 0xDC;
            static constexpr std::uintptr_t StretchMaximumRatio = 0xE0;
            static constexpr std::uintptr_t Weight = 0xE4;
            static constexpr std::uintptr_t BoneALength = 0xE8;
            static constexpr std::uintptr_t BoneBLength = 0xEC;
            static constexpr std::uintptr_t bPropagateToChildren = 0xF0;
            static constexpr std::uintptr_t DebugSettings = 0x100;
            static constexpr std::uintptr_t CachedBoneAIndex = 0x170;
            static constexpr std::uintptr_t CachedBoneBIndex = 0x188;
            static constexpr std::uintptr_t CachedEffectorBoneIndex = 0x1A0;
            static constexpr std::uintptr_t CachedPoleVectorSpaceIndex = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"BoneA", 0x10, "NameProperty"},
            {"BoneB", 0x14, "NameProperty"},
            {"EffectorBone", 0x18, "NameProperty"},
            {"Effector", 0x20, "StructProperty"},
            {"PrimaryAxis", 0x80, "StructProperty"},
            {"SecondaryAxis", 0x98, "StructProperty"},
            {"SecondaryAxisWeight", 0xB0, "FloatProperty"},
            {"PoleVector", 0xB8, "StructProperty"},
            {"PoleVectorKind", 0xD0, "EnumProperty"},
            {"PoleVectorSpace", 0xD4, "NameProperty"},
            {"bEnableStretch", 0xD8, "BoolProperty"},
            {"StretchStartRatio", 0xDC, "FloatProperty"},
            {"StretchMaximumRatio", 0xE0, "FloatProperty"},
            {"Weight", 0xE4, "FloatProperty"},
            {"BoneALength", 0xE8, "FloatProperty"},
            {"BoneBLength", 0xEC, "FloatProperty"},
            {"bPropagateToChildren", 0xF0, "BoolProperty"},
            {"DebugSettings", 0x100, "StructProperty"},
            {"CachedBoneAIndex", 0x170, "StructProperty"},
            {"CachedBoneBIndex", 0x188, "StructProperty"},
            {"CachedEffectorBoneIndex", 0x1A0, "StructProperty"},
            {"CachedPoleVectorSpaceIndex", 0x1B8, "StructProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKSimplePerItem
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKSimplePerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBaseMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemA = 0x10;
            static constexpr std::uintptr_t ItemB = 0x18;
            static constexpr std::uintptr_t EffectorItem = 0x20;
            static constexpr std::uintptr_t Effector = 0x30;
            static constexpr std::uintptr_t PrimaryAxis = 0x90;
            static constexpr std::uintptr_t SecondaryAxis = 0xA8;
            static constexpr std::uintptr_t SecondaryAxisWeight = 0xC0;
            static constexpr std::uintptr_t PoleVector = 0xC8;
            static constexpr std::uintptr_t PoleVectorKind = 0xE0;
            static constexpr std::uintptr_t PoleVectorSpace = 0xE4;
            static constexpr std::uintptr_t bEnableStretch = 0xEC;
            static constexpr std::uintptr_t StretchStartRatio = 0xF0;
            static constexpr std::uintptr_t StretchMaximumRatio = 0xF4;
            static constexpr std::uintptr_t Weight = 0xF8;
            static constexpr std::uintptr_t ItemALength = 0xFC;
            static constexpr std::uintptr_t ItemBLength = 0x100;
            static constexpr std::uintptr_t bPropagateToChildren = 0x104;
            static constexpr std::uintptr_t DebugSettings = 0x110;
            static constexpr std::uintptr_t CachedItemAIndex = 0x180;
            static constexpr std::uintptr_t CachedItemBIndex = 0x198;
            static constexpr std::uintptr_t CachedEffectorItemIndex = 0x1B0;
            static constexpr std::uintptr_t CachedPoleVectorSpaceIndex = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"ItemA", 0x10, "StructProperty"},
            {"ItemB", 0x18, "StructProperty"},
            {"EffectorItem", 0x20, "StructProperty"},
            {"Effector", 0x30, "StructProperty"},
            {"PrimaryAxis", 0x90, "StructProperty"},
            {"SecondaryAxis", 0xA8, "StructProperty"},
            {"SecondaryAxisWeight", 0xC0, "FloatProperty"},
            {"PoleVector", 0xC8, "StructProperty"},
            {"PoleVectorKind", 0xE0, "EnumProperty"},
            {"PoleVectorSpace", 0xE4, "StructProperty"},
            {"bEnableStretch", 0xEC, "BoolProperty"},
            {"StretchStartRatio", 0xF0, "FloatProperty"},
            {"StretchMaximumRatio", 0xF4, "FloatProperty"},
            {"Weight", 0xF8, "FloatProperty"},
            {"ItemALength", 0xFC, "FloatProperty"},
            {"ItemBLength", 0x100, "FloatProperty"},
            {"bPropagateToChildren", 0x104, "BoolProperty"},
            {"DebugSettings", 0x110, "StructProperty"},
            {"CachedItemAIndex", 0x180, "StructProperty"},
            {"CachedItemBIndex", 0x198, "StructProperty"},
            {"CachedEffectorItemIndex", 0x1B0, "StructProperty"},
            {"CachedPoleVectorSpaceIndex", 0x1C8, "StructProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKSimpleTransforms
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKSimpleTransforms";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x10;
            static constexpr std::uintptr_t PoleVector = 0x70;
            static constexpr std::uintptr_t Effector = 0x90;
            static constexpr std::uintptr_t PrimaryAxis = 0xF0;
            static constexpr std::uintptr_t SecondaryAxis = 0x108;
            static constexpr std::uintptr_t SecondaryAxisWeight = 0x120;
            static constexpr std::uintptr_t bEnableStretch = 0x124;
            static constexpr std::uintptr_t StretchStartRatio = 0x128;
            static constexpr std::uintptr_t StretchMaximumRatio = 0x12C;
            static constexpr std::uintptr_t BoneALength = 0x130;
            static constexpr std::uintptr_t BoneBLength = 0x134;
            static constexpr std::uintptr_t Elbow = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Root", 0x10, "StructProperty"},
            {"PoleVector", 0x70, "StructProperty"},
            {"Effector", 0x90, "StructProperty"},
            {"PrimaryAxis", 0xF0, "StructProperty"},
            {"SecondaryAxis", 0x108, "StructProperty"},
            {"SecondaryAxisWeight", 0x120, "FloatProperty"},
            {"bEnableStretch", 0x124, "BoolProperty"},
            {"StretchStartRatio", 0x128, "FloatProperty"},
            {"StretchMaximumRatio", 0x12C, "FloatProperty"},
            {"BoneALength", 0x130, "FloatProperty"},
            {"BoneBLength", 0x134, "FloatProperty"},
            {"Elbow", 0x140, "StructProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKSimpleVectors
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKSimpleVectors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_HighlevelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Root = 0x8;
            static constexpr std::uintptr_t PoleVector = 0x20;
            static constexpr std::uintptr_t Effector = 0x38;
            static constexpr std::uintptr_t bEnableStretch = 0x50;
            static constexpr std::uintptr_t StretchStartRatio = 0x54;
            static constexpr std::uintptr_t StretchMaximumRatio = 0x58;
            static constexpr std::uintptr_t BoneALength = 0x5C;
            static constexpr std::uintptr_t BoneBLength = 0x60;
            static constexpr std::uintptr_t Elbow = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Root", 0x8, "StructProperty"},
            {"PoleVector", 0x20, "StructProperty"},
            {"Effector", 0x38, "StructProperty"},
            {"bEnableStretch", 0x50, "BoolProperty"},
            {"StretchStartRatio", 0x54, "FloatProperty"},
            {"StretchMaximumRatio", 0x58, "FloatProperty"},
            {"BoneALength", 0x5C, "FloatProperty"},
            {"BoneBLength", 0x60, "FloatProperty"},
            {"Elbow", 0x68, "StructProperty"},
        }};
    };

    struct RigUnit_TwoBoneIKSimple_DebugSettings
    {
        static constexpr std::string_view Name = "RigUnit_TwoBoneIKSimple_DebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Scale = 0x4;
            static constexpr std::uintptr_t WorldOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Scale", 0x4, "FloatProperty"},
            {"WorldOffset", 0x10, "StructProperty"},
        }};
    };

    struct RigUnit_UnaryQuaternionOp
    {
        static constexpr std::string_view Name = "RigUnit_UnaryQuaternionOp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit";
        struct Offsets
        {
            static constexpr std::uintptr_t Argument = 0x10;
            static constexpr std::uintptr_t Result = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Argument", 0x10, "StructProperty"},
            {"Result", 0x30, "StructProperty"},
        }};
    };

    struct RigUnit_UnsetCurveValue
    {
        static constexpr std::string_view Name = "RigUnit_UnsetCurveValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnitMutable";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x10;
            static constexpr std::uintptr_t CachedCurveIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Curve", 0x10, "NameProperty"},
            {"CachedCurveIndex", 0x18, "StructProperty"},
        }};
    };

    struct RigUnit_VisualDebugQuat
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugQuat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t Thickness = 0x34;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t BoneSpace = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
            {"Thickness", 0x34, "FloatProperty"},
            {"Scale", 0x38, "FloatProperty"},
            {"BoneSpace", 0x3C, "NameProperty"},
        }};
    };

    struct RigUnit_VisualDebugQuatItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugQuatItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t Thickness = 0x34;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t Space = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
            {"Thickness", 0x34, "FloatProperty"},
            {"Scale", 0x38, "FloatProperty"},
            {"Space", 0x3C, "StructProperty"},
        }};
    };

    struct RigUnit_VisualDebugTransform
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t Thickness = 0x74;
            static constexpr std::uintptr_t Scale = 0x78;
            static constexpr std::uintptr_t BoneSpace = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"Thickness", 0x74, "FloatProperty"},
            {"Scale", 0x78, "FloatProperty"},
            {"BoneSpace", 0x7C, "NameProperty"},
        }};
    };

    struct RigUnit_VisualDebugTransformItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugTransformItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x70;
            static constexpr std::uintptr_t Thickness = 0x74;
            static constexpr std::uintptr_t Scale = 0x78;
            static constexpr std::uintptr_t Space = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x70, "BoolProperty"},
            {"Thickness", 0x74, "FloatProperty"},
            {"Scale", 0x78, "FloatProperty"},
            {"Space", 0x7C, "StructProperty"},
        }};
    };

    struct RigUnit_VisualDebugVector
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Mode = 0x29;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t BoneSpace = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"Mode", 0x29, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"Scale", 0x40, "FloatProperty"},
            {"BoneSpace", 0x44, "NameProperty"},
        }};
    };

    struct RigUnit_VisualDebugVectorItemSpace
    {
        static constexpr std::string_view Name = "RigUnit_VisualDebugVectorItemSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigUnit_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Mode = 0x29;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t Thickness = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t Space = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Value", 0x10, "StructProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"Mode", 0x29, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"Thickness", 0x3C, "FloatProperty"},
            {"Scale", 0x40, "FloatProperty"},
            {"Space", 0x44, "StructProperty"},
        }};
    };

    struct RigVectorArrayMetadata
    {
        static constexpr std::string_view Name = "RigVectorArrayMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "ArrayProperty"},
        }};
    };

    struct RigVectorMetadata
    {
        static constexpr std::string_view Name = "RigVectorMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RigBaseMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x18, "StructProperty"},
        }};
    };

    struct SampleTrackHost
    {
        static constexpr std::string_view Name = "SampleTrackHost";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SampleTrackMemoryData
    {
        static constexpr std::string_view Name = "SampleTrackMemoryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Buffer = 0x0;
            static constexpr std::uintptr_t Names = 0x10;
            static constexpr std::uintptr_t ObjectPaths = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Buffer", 0x0, "ArrayProperty"},
            {"Names", 0x10, "ArrayProperty"},
            {"ObjectPaths", 0x20, "ArrayProperty"},
        }};
    };

    struct SpaceControlNameAndChannel
    {
        static constexpr std::string_view Name = "SpaceControlNameAndChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlName = 0x0;
            static constexpr std::uintptr_t SpaceCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlName", 0x0, "NameProperty"},
            {"SpaceCurve", 0x8, "StructProperty"},
        }};
    };

    struct SphericalPoseReaderDebugSettings
    {
        static constexpr std::string_view Name = "SphericalPoseReaderDebugSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawDebug = 0x0;
            static constexpr std::uintptr_t bDraw2D = 0x1;
            static constexpr std::uintptr_t bDrawLocalAxes = 0x2;
            static constexpr std::uintptr_t DebugScale = 0x4;
            static constexpr std::uintptr_t DebugSegments = 0x8;
            static constexpr std::uintptr_t DebugThickness = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bDrawDebug", 0x0, "BoolProperty"},
            {"bDraw2D", 0x1, "BoolProperty"},
            {"bDrawLocalAxes", 0x2, "BoolProperty"},
            {"DebugScale", 0x4, "FloatProperty"},
            {"DebugSegments", 0x8, "IntProperty"},
            {"DebugThickness", 0xC, "FloatProperty"},
        }};
    };

    struct SphericalRegion
    {
        static constexpr std::string_view Name = "SphericalRegion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StructReference
    {
        static constexpr std::string_view Name = "StructReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformableControlHandle
    {
        static constexpr std::string_view Name = "TransformableControlHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TransformableHandle";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRig = 0x60;
            static constexpr std::uintptr_t ControlName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlRig", 0x60, "SoftObjectProperty"},
            {"ControlName", 0x80, "NameProperty"},
        }};
    };

}
