#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PhysicsControl
{
    struct AnimNode_RigidBodyWithControl
    {
        static constexpr std::string_view Name = "AnimNode_RigidBodyWithControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePhysicsAsset = 0xC8;
            static constexpr std::uintptr_t bDefaultToSkeletalMeshPhysicsAsset = 0xD0;
            static constexpr std::uintptr_t OverrideWorldGravity = 0x208;
            static constexpr std::uintptr_t ExternalForce = 0x220;
            static constexpr std::uintptr_t ComponentLinearAccScale = 0x238;
            static constexpr std::uintptr_t ComponentLinearVelScale = 0x250;
            static constexpr std::uintptr_t ComponentAppliedLinearAccClamp = 0x268;
            static constexpr std::uintptr_t SimSpaceSettings = 0x280;
            static constexpr std::uintptr_t CachedBoundsScale = 0x2E8;
            static constexpr std::uintptr_t bUpdateCacheEveryFrame = 0x2EC;
            static constexpr std::uintptr_t BaseBoneRef = 0x2F0;
            static constexpr std::uintptr_t OverlapChannel = 0x2FC;
            static constexpr std::uintptr_t SimulationSpace = 0x2FD;
            static constexpr std::uintptr_t bCalculateVelocitiesForWorldGeometry = 0x2FE;
            static constexpr std::uintptr_t bForceDisableCollisionBetweenConstraintBodies = 0x2FE;
            static constexpr std::uintptr_t bMakeKinematicConstraints = 0x2FE;
            static constexpr std::uintptr_t bUseExternalClothCollision = 0x2FE;
            static constexpr std::uintptr_t bEnableWorldGeometry = 0x300;
            static constexpr std::uintptr_t bFreezeIncomingPoseOnStart = 0x300;
            static constexpr std::uintptr_t bOverrideWorldGravity = 0x300;
            static constexpr std::uintptr_t bTransferBoneVelocities = 0x300;
            static constexpr std::uintptr_t bWorldGeometryCollisionEnabledHasPhysics = 0x300;
            static constexpr std::uintptr_t bWorldGeometryCollisionEnabledHasProbe = 0x300;
            static constexpr std::uintptr_t bWorldGeometryCollisionEnabledHasQuery = 0x300;
            static constexpr std::uintptr_t PhysicsAssetConditioningConstraintPosition = 0x301;
            static constexpr std::uintptr_t PhysicsAssetConditioningConstraintOrientation = 0x302;
            static constexpr std::uintptr_t WorldSpaceMinimumScale = 0x304;
            static constexpr std::uintptr_t EvaluationResetTime = 0x308;
            static constexpr std::uintptr_t bEnableControls = 0x30C;
            static constexpr std::uintptr_t PhysicsControlAsset = 0x310;
            static constexpr std::uintptr_t BoneToBodyNameMap = 0x318;
            static constexpr std::uintptr_t CharacterSetupData = 0x328;
            static constexpr std::uintptr_t bEnableCharacterSetupData = 0x3E8;
            static constexpr std::uintptr_t AdditionalControlsAndBodyModifiers = 0x3F0;
            static constexpr std::uintptr_t AdditionalSets = 0x410;
            static constexpr std::uintptr_t InitialControlAndBodyModifierUpdates = 0x430;
            static constexpr std::uintptr_t ControlAndModifierParameters = 0x460;
            static constexpr std::uintptr_t ControlAndModifierUpdates = 0x490;
            static constexpr std::uintptr_t ControlTargets = 0x4C0;
            static constexpr std::uintptr_t KinematicTargets = 0x4D0;
            static constexpr std::uintptr_t ForcesAndTorques = 0x4E0;
            static constexpr std::uintptr_t PhysicsAssetAuthoredSkeletalMesh = 0x4F0;
            static constexpr std::uintptr_t ConstraintProfile = 0x4F8;
            static constexpr std::uintptr_t ControlProfile = 0x4FC;
            static constexpr std::uintptr_t BoundsVelocityMultiplier = 0x500;
            static constexpr std::uintptr_t MaxVelocityBoundsExpansion = 0x504;
            static constexpr std::uintptr_t bAllowCCD = 0x508;
            static constexpr std::uintptr_t bUseLocalLODThresholdOnly = 0x509;
            static constexpr std::uintptr_t SimulationTiming = 0x50B;
        };

        inline static constexpr std::array<PropertyInfo, 49> Properties{{
            {"OverridePhysicsAsset", 0xC8, "ObjectProperty"},
            {"bDefaultToSkeletalMeshPhysicsAsset", 0xD0, "BoolProperty"},
            {"OverrideWorldGravity", 0x208, "StructProperty"},
            {"ExternalForce", 0x220, "StructProperty"},
            {"ComponentLinearAccScale", 0x238, "StructProperty"},
            {"ComponentLinearVelScale", 0x250, "StructProperty"},
            {"ComponentAppliedLinearAccClamp", 0x268, "StructProperty"},
            {"SimSpaceSettings", 0x280, "StructProperty"},
            {"CachedBoundsScale", 0x2E8, "FloatProperty"},
            {"bUpdateCacheEveryFrame", 0x2EC, "BoolProperty"},
            {"BaseBoneRef", 0x2F0, "StructProperty"},
            {"OverlapChannel", 0x2FC, "ByteProperty"},
            {"SimulationSpace", 0x2FD, "EnumProperty"},
            {"bCalculateVelocitiesForWorldGeometry", 0x2FE, "BoolProperty"},
            {"bForceDisableCollisionBetweenConstraintBodies", 0x2FE, "BoolProperty"},
            {"bMakeKinematicConstraints", 0x2FE, "BoolProperty"},
            {"bUseExternalClothCollision", 0x2FE, "BoolProperty"},
            {"bEnableWorldGeometry", 0x300, "BoolProperty"},
            {"bFreezeIncomingPoseOnStart", 0x300, "BoolProperty"},
            {"bOverrideWorldGravity", 0x300, "BoolProperty"},
            {"bTransferBoneVelocities", 0x300, "BoolProperty"},
            {"bWorldGeometryCollisionEnabledHasPhysics", 0x300, "BoolProperty"},
            {"bWorldGeometryCollisionEnabledHasProbe", 0x300, "BoolProperty"},
            {"bWorldGeometryCollisionEnabledHasQuery", 0x300, "BoolProperty"},
            {"PhysicsAssetConditioningConstraintPosition", 0x301, "EnumProperty"},
            {"PhysicsAssetConditioningConstraintOrientation", 0x302, "EnumProperty"},
            {"WorldSpaceMinimumScale", 0x304, "FloatProperty"},
            {"EvaluationResetTime", 0x308, "FloatProperty"},
            {"bEnableControls", 0x30C, "BoolProperty"},
            {"PhysicsControlAsset", 0x310, "ObjectProperty"},
            {"BoneToBodyNameMap", 0x318, "MapProperty"},
            {"CharacterSetupData", 0x328, "StructProperty"},
            {"bEnableCharacterSetupData", 0x3E8, "BoolProperty"},
            {"AdditionalControlsAndBodyModifiers", 0x3F0, "StructProperty"},
            {"AdditionalSets", 0x410, "StructProperty"},
            {"InitialControlAndBodyModifierUpdates", 0x430, "StructProperty"},
            {"ControlAndModifierParameters", 0x460, "StructProperty"},
            {"ControlAndModifierUpdates", 0x490, "StructProperty"},
            {"ControlTargets", 0x4C0, "StructProperty"},
            {"KinematicTargets", 0x4D0, "StructProperty"},
            {"ForcesAndTorques", 0x4E0, "StructProperty"},
            {"PhysicsAssetAuthoredSkeletalMesh", 0x4F0, "ObjectProperty"},
            {"ConstraintProfile", 0x4F8, "NameProperty"},
            {"ControlProfile", 0x4FC, "NameProperty"},
            {"BoundsVelocityMultiplier", 0x500, "FloatProperty"},
            {"MaxVelocityBoundsExpansion", 0x504, "FloatProperty"},
            {"bAllowCCD", 0x508, "BoolProperty"},
            {"bUseLocalLODThresholdOnly", 0x509, "BoolProperty"},
            {"SimulationTiming", 0x50B, "EnumProperty"},
        }};
    };

    struct InitialBodyModifier
    {
        static constexpr std::string_view Name = "InitialBodyModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t MeshComponentName = 0x8;
            static constexpr std::uintptr_t BoneName = 0xC;
            static constexpr std::uintptr_t BodyModifierData = 0x10;
            static constexpr std::uintptr_t KinematicTargetPosition = 0x20;
            static constexpr std::uintptr_t KinematicTargetOrientation = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Actor", 0x0, "WeakObjectProperty"},
            {"MeshComponentName", 0x8, "NameProperty"},
            {"BoneName", 0xC, "NameProperty"},
            {"BodyModifierData", 0x10, "StructProperty"},
            {"KinematicTargetPosition", 0x20, "StructProperty"},
            {"KinematicTargetOrientation", 0x38, "StructProperty"},
        }};
    };

    struct InitialCharacterControls
    {
        static constexpr std::string_view Name = "InitialCharacterControls";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterActor = 0x0;
            static constexpr std::uintptr_t SkeletalMeshComponentName = 0x8;
            static constexpr std::uintptr_t LimbSetupData = 0x10;
            static constexpr std::uintptr_t WorldSpaceControlData = 0x20;
            static constexpr std::uintptr_t ParentSpaceControlData = 0x70;
            static constexpr std::uintptr_t BodyModifierData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CharacterActor", 0x0, "WeakObjectProperty"},
            {"SkeletalMeshComponentName", 0x8, "NameProperty"},
            {"LimbSetupData", 0x10, "ArrayProperty"},
            {"WorldSpaceControlData", 0x20, "StructProperty"},
            {"ParentSpaceControlData", 0x70, "StructProperty"},
            {"BodyModifierData", 0xC0, "StructProperty"},
        }};
    };

    struct InitialPhysicsControl
    {
        static constexpr std::string_view Name = "InitialPhysicsControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentActor = 0x0;
            static constexpr std::uintptr_t ParentMeshComponentName = 0x8;
            static constexpr std::uintptr_t ParentBoneName = 0xC;
            static constexpr std::uintptr_t ChildActor = 0x10;
            static constexpr std::uintptr_t ChildMeshComponentName = 0x18;
            static constexpr std::uintptr_t ChildBoneName = 0x1C;
            static constexpr std::uintptr_t ControlData = 0x20;
            static constexpr std::uintptr_t ControlMultiplier = 0x70;
            static constexpr std::uintptr_t ControlTarget = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ParentActor", 0x0, "WeakObjectProperty"},
            {"ParentMeshComponentName", 0x8, "NameProperty"},
            {"ParentBoneName", 0xC, "NameProperty"},
            {"ChildActor", 0x10, "WeakObjectProperty"},
            {"ChildMeshComponentName", 0x18, "NameProperty"},
            {"ChildBoneName", 0x1C, "NameProperty"},
            {"ControlData", 0x20, "StructProperty"},
            {"ControlMultiplier", 0x70, "StructProperty"},
            {"ControlTarget", 0xE0, "StructProperty"},
        }};
    };

    struct PhysicsBodyModifier
    {
        static constexpr std::string_view Name = "PhysicsBodyModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x0;
            static constexpr std::uintptr_t ModifierData = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneName", 0x0, "NameProperty"},
            {"ModifierData", 0x4, "StructProperty"},
        }};
    };

    struct PhysicsBodyModifierCreationData
    {
        static constexpr std::string_view Name = "PhysicsBodyModifierCreationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t modifier = 0x0;
            static constexpr std::uintptr_t Sets = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"modifier", 0x0, "StructProperty"},
            {"Sets", 0x18, "ArrayProperty"},
        }};
    };

    struct PhysicsControl
    {
        static constexpr std::string_view Name = "PhysicsControl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentBoneName = 0x0;
            static constexpr std::uintptr_t ChildBoneName = 0x4;
            static constexpr std::uintptr_t ControlData = 0x8;
            static constexpr std::uintptr_t ControlMultiplier = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParentBoneName", 0x0, "NameProperty"},
            {"ChildBoneName", 0x4, "NameProperty"},
            {"ControlData", 0x8, "StructProperty"},
            {"ControlMultiplier", 0x58, "StructProperty"},
        }};
    };

    struct PhysicsControlActor
    {
        static constexpr std::string_view Name = "PhysicsControlActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlComponent = 0x278;
            static constexpr std::uintptr_t ControlInitializerComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlComponent", 0x278, "ObjectProperty"},
            {"ControlInitializerComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct PhysicsControlAndBodyModifierCreationDatas
    {
        static constexpr std::string_view Name = "PhysicsControlAndBodyModifierCreationDatas";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Controls = 0x0;
            static constexpr std::uintptr_t Modifiers = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Controls", 0x0, "MapProperty"},
            {"Modifiers", 0x10, "MapProperty"},
        }};
    };

    struct PhysicsControlAsset
    {
        static constexpr std::string_view Name = "PhysicsControlAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterSetupData = 0x30;
            static constexpr std::uintptr_t AdditionalControlsAndModifiers = 0xF0;
            static constexpr std::uintptr_t AdditionalSets = 0x110;
            static constexpr std::uintptr_t InitialControlAndModifierUpdates = 0x130;
            static constexpr std::uintptr_t Profiles = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CharacterSetupData", 0x30, "StructProperty"},
            {"AdditionalControlsAndModifiers", 0xF0, "StructProperty"},
            {"AdditionalSets", 0x110, "StructProperty"},
            {"InitialControlAndModifierUpdates", 0x130, "ArrayProperty"},
            {"Profiles", 0x140, "MapProperty"},
        }};
    };

    struct PhysicsControlBPLibrary
    {
        static constexpr std::string_view Name = "PhysicsControlBPLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "AddControlParameters",
            "AddModifierParameters",
            "AddMultipleControlParameters",
            "AddMultipleModifierParameters",
            "BlendControlParametersThroughSet",
            "BlendModifierParametersThroughSet",
            "BlendParameters",
            "ConvertToRigidBodyWithControl",
            "ConvertToRigidBodyWithControlPure",
            "DisableCollisionBetweenBodies",
            "DisableCollisionBetweenBodyArrays",
            "EnableCollisionBetweenBodies",
            "EnableCollisionBetweenBodyArrays",
            "GetBodyModifierNamesInSet",
            "GetControlNamesInSet",
            "SetOverridePhysicsAsset",
        }};
    };

    struct PhysicsControlCharacterSetupData
    {
        static constexpr std::string_view Name = "PhysicsControlCharacterSetupData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimbSetupData = 0x0;
            static constexpr std::uintptr_t DefaultWorldSpaceControlData = 0x10;
            static constexpr std::uintptr_t DefaultParentSpaceControlData = 0x60;
            static constexpr std::uintptr_t DefaultBodyModifierData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LimbSetupData", 0x0, "ArrayProperty"},
            {"DefaultWorldSpaceControlData", 0x10, "StructProperty"},
            {"DefaultParentSpaceControlData", 0x60, "StructProperty"},
            {"DefaultBodyModifierData", 0xB0, "StructProperty"},
        }};
    };

    struct PhysicsControlComponent
    {
        static constexpr std::string_view Name = "PhysicsControlComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsControlAsset = 0x240;
            static constexpr std::uintptr_t TeleportDistanceThreshold = 0x260;
            static constexpr std::uintptr_t TeleportRotationThreshold = 0x264;
            static constexpr std::uintptr_t bShowDebugVisualization = 0x268;
            static constexpr std::uintptr_t VisualizationSizeScale = 0x26C;
            static constexpr std::uintptr_t bShowDebugControlList = 0x270;
            static constexpr std::uintptr_t DebugControlDetailFilter = 0x278;
            static constexpr std::uintptr_t bShowDebugBodyModifierList = 0x288;
            static constexpr std::uintptr_t DebugBodyModifierDetailFilter = 0x290;
            static constexpr std::uintptr_t VelocityPredictionTime = 0x2A0;
            static constexpr std::uintptr_t bWarnAboutInvalidNames = 0x2A4;
            static constexpr std::uintptr_t MaxNumControlsOrModifiersPerName = 0x2A8;
            static constexpr std::uintptr_t bAttemptToRecreateDisabledControls = 0x2AC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PhysicsControlAsset", 0x240, "SoftObjectProperty"},
            {"TeleportDistanceThreshold", 0x260, "FloatProperty"},
            {"TeleportRotationThreshold", 0x264, "FloatProperty"},
            {"bShowDebugVisualization", 0x268, "BoolProperty"},
            {"VisualizationSizeScale", 0x26C, "FloatProperty"},
            {"bShowDebugControlList", 0x270, "BoolProperty"},
            {"DebugControlDetailFilter", 0x278, "StrProperty"},
            {"bShowDebugBodyModifierList", 0x288, "BoolProperty"},
            {"DebugBodyModifierDetailFilter", 0x290, "StrProperty"},
            {"VelocityPredictionTime", 0x2A0, "FloatProperty"},
            {"bWarnAboutInvalidNames", 0x2A4, "BoolProperty"},
            {"MaxNumControlsOrModifiersPerName", 0x2A8, "IntProperty"},
            {"bAttemptToRecreateDisabledControls", 0x2AC, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 126> FunctionNames{{
            "AddBodyModifierToSet",
            "AddBodyModifiersToSet",
            "AddControlToSet",
            "AddControlsToSet",
            "ApplyConstraintProfileToBodyModifiers",
            "CreateBodyModifier",
            "CreateBodyModifiersFromLimbBones",
            "CreateBodyModifiersFromSkeletalMeshBelow",
            "CreateControl",
            "CreateControlsAndBodyModifiersFromLimbBones",
            "CreateControlsAndBodyModifiersFromPhysicsControlAsset",
            "CreateControlsFromLimbBones",
            "CreateControlsFromLimbBonesAndConstraintProfile",
            "CreateControlsFromSkeletalMesh",
            "CreateControlsFromSkeletalMeshAndConstraintProfile",
            "CreateControlsFromSkeletalMeshAndConstraintProfileBelow",
            "CreateControlsFromSkeletalMeshBelow",
            "CreateNamedBodyModifier",
            "CreateNamedControl",
            "DestroyAllControlsAndBodyModifiers",
            "DestroyBodyModifier",
            "DestroyBodyModifiers",
            "DestroyBodyModifiersInSet",
            "DestroyControl",
            "DestroyControls",
            "DestroyControlsInSet",
            "GetAllBodyModifierNames",
            "GetAllControlNames",
            "GetBodyModifierExists",
            "GetBodyModifierNamesInSet",
            "GetCachedBoneOrientation",
            "GetCachedBoneOrientations",
            "GetCachedBonePosition",
            "GetCachedBonePositions",
            "GetCachedBoneTransform",
            "GetCachedBoneTransforms",
            "GetControlData",
            "GetControlEnabled",
            "GetControlExists",
            "GetControlMultiplier",
            "GetControlNamesInSet",
            "GetControlTarget",
            "GetLimbBonesFromSkeletalMesh",
            "GetSetsContainingBodyModifier",
            "GetSetsContainingControl",
            "InvokeControlProfile",
            "LogBodyModifiers",
            "LogControls",
            "LogControlsAndBodyModifiers",
            "ResetBodyModifierToCachedBoneTransform",
            "ResetBodyModifiersInSetToCachedBoneTransforms",
            "ResetBodyModifiersToCachedBoneTransforms",
            "ResetControlPoint",
            "SetBodyModifierCollisionType",
            "SetBodyModifierData",
            "SetBodyModifierDatas",
            "SetBodyModifierDatasInSet",
            "SetBodyModifierGravityMultiplier",
            "SetBodyModifierKinematicTarget",
            "SetBodyModifierKinematicTargetSpace",
            "SetBodyModifierMovementType",
            "SetBodyModifierPhysicsBlendWeight",
            "SetBodyModifierSparseData",
            "SetBodyModifierSparseDatas",
            "SetBodyModifierSparseDatasInSet",
            "SetBodyModifierUpdateKinematicFromSimulation",
            "SetBodyModifiersCollisionType",
            "SetBodyModifiersGravityMultiplier",
            "SetBodyModifiersInSetCollisionType",
            "SetBodyModifiersInSetGravityMultiplier",
            "SetBodyModifiersInSetKinematicTargetSpace",
            "SetBodyModifiersInSetMovementType",
            "SetBodyModifiersInSetPhysicsBlendWeight",
            "SetBodyModifiersInSetUpdateKinematicFromSimulation",
            "SetBodyModifiersKinematicTargetSpace",
            "SetBodyModifiersMovementType",
            "SetBodyModifiersPhysicsBlendWeight",
            "SetBodyModifiersUpdateKinematicFromSimulation",
            "SetCachedBoneData",
            "SetCachedBoneVelocitiesToZero",
            "SetControlAngularData",
            "SetControlData",
            "SetControlDatas",
            "SetControlDatasInSet",
            "SetControlDisableCollision",
            "SetControlEnabled",
            "SetControlLinearData",
            "SetControlMultiplier",
            "SetControlMultipliers",
            "SetControlMultipliersInSet",
            "SetControlParent",
            "SetControlParents",
            "SetControlParentsInSet",
            "SetControlPoint",
            "SetControlSparseData",
            "SetControlSparseDatas",
            "SetControlSparseDatasInSet",
            "SetControlSparseMultiplier",
            "SetControlSparseMultipliers",
            "SetControlSparseMultipliersInSet",
            "SetControlTarget",
            "SetControlTargetOrientation",
            "SetControlTargetOrientations",
            "SetControlTargetOrientationsFromArray",
            "SetControlTargetOrientationsInSet",
            "SetControlTargetPoses",
            "SetControlTargetPosition",
            "SetControlTargetPositionAndOrientation",
            "SetControlTargetPositions",
            "SetControlTargetPositionsAndOrientations",
            "SetControlTargetPositionsAndOrientationsFromArray",
            "SetControlTargetPositionsAndOrientationsInSet",
            "SetControlTargetPositionsFromArray",
            "SetControlTargetPositionsInSet",
            "SetControlTargets",
            "SetControlTargetsInSet",
            "SetControlUseSkeletalAnimation",
            "SetControlsDisableCollision",
            "SetControlsEnabled",
            "SetControlsInSetDisableCollision",
            "SetControlsInSetDriveLimitViolationResponse",
            "SetControlsInSetEnabled",
            "SetControlsInSetUseSkeletalAnimation",
            "SetControlsUseSkeletalAnimation",
            "UpdateControls",
            "UpdateTargetCaches",
        }};
    };

    struct PhysicsControlControlAndModifierParameters
    {
        static constexpr std::string_view Name = "PhysicsControlControlAndModifierParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlParameters = 0x0;
            static constexpr std::uintptr_t ControlMultiplierParameters = 0x10;
            static constexpr std::uintptr_t ModifierParameters = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlParameters", 0x0, "ArrayProperty"},
            {"ControlMultiplierParameters", 0x10, "ArrayProperty"},
            {"ModifierParameters", 0x20, "ArrayProperty"},
        }};
    };

    struct PhysicsControlControlAndModifierUpdates
    {
        static constexpr std::string_view Name = "PhysicsControlControlAndModifierUpdates";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlUpdates = 0x0;
            static constexpr std::uintptr_t ControlMultiplierUpdates = 0x10;
            static constexpr std::uintptr_t ModifierUpdates = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlUpdates", 0x0, "ArrayProperty"},
            {"ControlMultiplierUpdates", 0x10, "ArrayProperty"},
            {"ModifierUpdates", 0x20, "ArrayProperty"},
        }};
    };

    struct PhysicsControlCreationData
    {
        static constexpr std::string_view Name = "PhysicsControlCreationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Control = 0x0;
            static constexpr std::uintptr_t Sets = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Control", 0x0, "StructProperty"},
            {"Sets", 0xC8, "ArrayProperty"},
        }};
    };

    struct PhysicsControlData
    {
        static constexpr std::string_view Name = "PhysicsControlData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t LinearStrength = 0x4;
            static constexpr std::uintptr_t LinearDampingRatio = 0x8;
            static constexpr std::uintptr_t LinearExtraDamping = 0xC;
            static constexpr std::uintptr_t MaxForce = 0x10;
            static constexpr std::uintptr_t AngularStrength = 0x14;
            static constexpr std::uintptr_t AngularDampingRatio = 0x18;
            static constexpr std::uintptr_t AngularExtraDamping = 0x1C;
            static constexpr std::uintptr_t MaxTorque = 0x20;
            static constexpr std::uintptr_t LinearTargetVelocityMultiplier = 0x24;
            static constexpr std::uintptr_t AngularTargetVelocityMultiplier = 0x28;
            static constexpr std::uintptr_t CustomControlPoint = 0x30;
            static constexpr std::uintptr_t bUseCustomControlPoint = 0x48;
            static constexpr std::uintptr_t bUseSkeletalAnimation = 0x49;
            static constexpr std::uintptr_t bDisableCollision = 0x4A;
            static constexpr std::uintptr_t bOnlyControlChildObject = 0x4B;
            static constexpr std::uintptr_t bUseAccelerationDriveMode = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"LinearStrength", 0x4, "FloatProperty"},
            {"LinearDampingRatio", 0x8, "FloatProperty"},
            {"LinearExtraDamping", 0xC, "FloatProperty"},
            {"MaxForce", 0x10, "FloatProperty"},
            {"AngularStrength", 0x14, "FloatProperty"},
            {"AngularDampingRatio", 0x18, "FloatProperty"},
            {"AngularExtraDamping", 0x1C, "FloatProperty"},
            {"MaxTorque", 0x20, "FloatProperty"},
            {"LinearTargetVelocityMultiplier", 0x24, "FloatProperty"},
            {"AngularTargetVelocityMultiplier", 0x28, "FloatProperty"},
            {"CustomControlPoint", 0x30, "StructProperty"},
            {"bUseCustomControlPoint", 0x48, "BoolProperty"},
            {"bUseSkeletalAnimation", 0x49, "BoolProperty"},
            {"bDisableCollision", 0x4A, "BoolProperty"},
            {"bOnlyControlChildObject", 0x4B, "BoolProperty"},
            {"bUseAccelerationDriveMode", 0x4C, "BoolProperty"},
        }};
    };

    struct PhysicsControlForceAndTorqueData
    {
        static constexpr std::string_view Name = "PhysicsControlForceAndTorqueData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationSpace = 0x0;
            static constexpr std::uintptr_t ForceAndTorqueSpace = 0x1;
            static constexpr std::uintptr_t Type = 0x2;
            static constexpr std::uintptr_t Linear = 0x8;
            static constexpr std::uintptr_t Angular = 0x20;
            static constexpr std::uintptr_t Location = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LocationSpace", 0x0, "EnumProperty"},
            {"ForceAndTorqueSpace", 0x1, "EnumProperty"},
            {"Type", 0x2, "EnumProperty"},
            {"Linear", 0x8, "StructProperty"},
            {"Angular", 0x20, "StructProperty"},
            {"Location", 0x38, "StructProperty"},
        }};
    };

    struct PhysicsControlInitializerComponent
    {
        static constexpr std::string_view Name = "PhysicsControlInitializerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialCharacterControls = 0x240;
            static constexpr std::uintptr_t InitialControls = 0x310;
            static constexpr std::uintptr_t InitialBodyModifiers = 0x320;
            static constexpr std::uintptr_t bCreateControlsAtBeginPlay = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InitialCharacterControls", 0x240, "StructProperty"},
            {"InitialControls", 0x310, "MapProperty"},
            {"InitialBodyModifiers", 0x320, "MapProperty"},
            {"bCreateControlsAtBeginPlay", 0x330, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateControls",
        }};
    };

    struct PhysicsControlLimbBones
    {
        static constexpr std::string_view Name = "PhysicsControlLimbBones";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PhysicsControlLimbSetupData
    {
        static constexpr std::string_view Name = "PhysicsControlLimbSetupData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LimbName = 0x0;
            static constexpr std::uintptr_t StartBone = 0x4;
            static constexpr std::uintptr_t bCreateBodyModifiers = 0x8;
            static constexpr std::uintptr_t bCreateParentSpaceControls = 0x8;
            static constexpr std::uintptr_t bCreateWorldSpaceControls = 0x8;
            static constexpr std::uintptr_t bIncludeParentBone = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LimbName", 0x0, "NameProperty"},
            {"StartBone", 0x4, "NameProperty"},
            {"bCreateBodyModifiers", 0x8, "BoolProperty"},
            {"bCreateParentSpaceControls", 0x8, "BoolProperty"},
            {"bCreateWorldSpaceControls", 0x8, "BoolProperty"},
            {"bIncludeParentBone", 0x8, "BoolProperty"},
        }};
    };

    struct PhysicsControlModifierData
    {
        static constexpr std::string_view Name = "PhysicsControlModifierData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementType = 0x0;
            static constexpr std::uintptr_t CollisionType = 0x1;
            static constexpr std::uintptr_t KinematicTargetSpace = 0x2;
            static constexpr std::uintptr_t GravityMultiplier = 0x4;
            static constexpr std::uintptr_t PhysicsBlendWeight = 0x8;
            static constexpr std::uintptr_t bUpdateKinematicFromSimulation = 0xC;
            static constexpr std::uintptr_t bEnableCCD = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MovementType", 0x0, "EnumProperty"},
            {"CollisionType", 0x1, "ByteProperty"},
            {"KinematicTargetSpace", 0x2, "EnumProperty"},
            {"GravityMultiplier", 0x4, "FloatProperty"},
            {"PhysicsBlendWeight", 0x8, "FloatProperty"},
            {"bUpdateKinematicFromSimulation", 0xC, "BoolProperty"},
            {"bEnableCCD", 0xD, "BoolProperty"},
        }};
    };

    struct PhysicsControlModifierSparseData
    {
        static constexpr std::string_view Name = "PhysicsControlModifierSparseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementType = 0x0;
            static constexpr std::uintptr_t CollisionType = 0x1;
            static constexpr std::uintptr_t GravityMultiplier = 0x4;
            static constexpr std::uintptr_t PhysicsBlendWeight = 0x8;
            static constexpr std::uintptr_t KinematicTargetSpace = 0xC;
            static constexpr std::uintptr_t bEnableCCD = 0xD;
            static constexpr std::uintptr_t bEnableCollisionType = 0xD;
            static constexpr std::uintptr_t bEnableGravityMultiplier = 0xD;
            static constexpr std::uintptr_t bEnableKinematicTargetSpace = 0xD;
            static constexpr std::uintptr_t bEnableMovementType = 0xD;
            static constexpr std::uintptr_t bEnablePhysicsBlendWeight = 0xD;
            static constexpr std::uintptr_t bEnablebUpdateKinematicFromSimulation = 0xD;
            static constexpr std::uintptr_t bUpdateKinematicFromSimulation = 0xD;
            static constexpr std::uintptr_t bEnablebEnableCCD = 0xE;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"MovementType", 0x0, "EnumProperty"},
            {"CollisionType", 0x1, "ByteProperty"},
            {"GravityMultiplier", 0x4, "FloatProperty"},
            {"PhysicsBlendWeight", 0x8, "FloatProperty"},
            {"KinematicTargetSpace", 0xC, "EnumProperty"},
            {"bEnableCCD", 0xD, "BoolProperty"},
            {"bEnableCollisionType", 0xD, "BoolProperty"},
            {"bEnableGravityMultiplier", 0xD, "BoolProperty"},
            {"bEnableKinematicTargetSpace", 0xD, "BoolProperty"},
            {"bEnableMovementType", 0xD, "BoolProperty"},
            {"bEnablePhysicsBlendWeight", 0xD, "BoolProperty"},
            {"bEnablebUpdateKinematicFromSimulation", 0xD, "BoolProperty"},
            {"bUpdateKinematicFromSimulation", 0xD, "BoolProperty"},
            {"bEnablebEnableCCD", 0xE, "BoolProperty"},
        }};
    };

    struct PhysicsControlMultiplier
    {
        static constexpr std::string_view Name = "PhysicsControlMultiplier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearStrengthMultiplier = 0x0;
            static constexpr std::uintptr_t LinearDampingRatioMultiplier = 0x18;
            static constexpr std::uintptr_t LinearExtraDampingMultiplier = 0x30;
            static constexpr std::uintptr_t MaxForceMultiplier = 0x48;
            static constexpr std::uintptr_t AngularStrengthMultiplier = 0x60;
            static constexpr std::uintptr_t AngularDampingRatioMultiplier = 0x64;
            static constexpr std::uintptr_t AngularExtraDampingMultiplier = 0x68;
            static constexpr std::uintptr_t MaxTorqueMultiplier = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LinearStrengthMultiplier", 0x0, "StructProperty"},
            {"LinearDampingRatioMultiplier", 0x18, "StructProperty"},
            {"LinearExtraDampingMultiplier", 0x30, "StructProperty"},
            {"MaxForceMultiplier", 0x48, "StructProperty"},
            {"AngularStrengthMultiplier", 0x60, "FloatProperty"},
            {"AngularDampingRatioMultiplier", 0x64, "FloatProperty"},
            {"AngularExtraDampingMultiplier", 0x68, "FloatProperty"},
            {"MaxTorqueMultiplier", 0x6C, "FloatProperty"},
        }};
    };

    struct PhysicsControlNamedControlMultiplierParameters
    {
        static constexpr std::string_view Name = "PhysicsControlNamedControlMultiplierParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Data = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Data", 0x8, "StructProperty"},
        }};
    };

    struct PhysicsControlNamedControlParameters
    {
        static constexpr std::string_view Name = "PhysicsControlNamedControlParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Data = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Data", 0x8, "StructProperty"},
        }};
    };

    struct PhysicsControlNamedForceAndTorqueData
    {
        static constexpr std::string_view Name = "PhysicsControlNamedForceAndTorqueData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ForceAndTorqueData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ForceAndTorqueData", 0x8, "StructProperty"},
        }};
    };

    struct PhysicsControlNamedModifierParameters
    {
        static constexpr std::string_view Name = "PhysicsControlNamedModifierParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Data = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Data", 0x4, "StructProperty"},
        }};
    };

    struct PhysicsControlNames
    {
        static constexpr std::string_view Name = "PhysicsControlNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Names = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Names", 0x0, "ArrayProperty"},
        }};
    };

    struct PhysicsControlSetUpdate
    {
        static constexpr std::string_view Name = "PhysicsControlSetUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetName = 0x0;
            static constexpr std::uintptr_t Names = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetName", 0x0, "NameProperty"},
            {"Names", 0x8, "ArrayProperty"},
        }};
    };

    struct PhysicsControlSetUpdates
    {
        static constexpr std::string_view Name = "PhysicsControlSetUpdates";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlSetUpdates = 0x0;
            static constexpr std::uintptr_t ModifierSetUpdates = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlSetUpdates", 0x0, "ArrayProperty"},
            {"ModifierSetUpdates", 0x10, "ArrayProperty"},
        }};
    };

    struct PhysicsControlSparseData
    {
        static constexpr std::string_view Name = "PhysicsControlSparseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearStrength = 0x0;
            static constexpr std::uintptr_t LinearDampingRatio = 0x4;
            static constexpr std::uintptr_t LinearExtraDamping = 0x8;
            static constexpr std::uintptr_t MaxForce = 0xC;
            static constexpr std::uintptr_t AngularStrength = 0x10;
            static constexpr std::uintptr_t AngularDampingRatio = 0x14;
            static constexpr std::uintptr_t AngularExtraDamping = 0x18;
            static constexpr std::uintptr_t MaxTorque = 0x1C;
            static constexpr std::uintptr_t LinearTargetVelocityMultiplier = 0x20;
            static constexpr std::uintptr_t AngularTargetVelocityMultiplier = 0x24;
            static constexpr std::uintptr_t CustomControlPoint = 0x28;
            static constexpr std::uintptr_t bDisableCollision = 0x40;
            static constexpr std::uintptr_t bEnableLinearDampingRatio = 0x40;
            static constexpr std::uintptr_t bEnableLinearStrength = 0x40;
            static constexpr std::uintptr_t bEnabled = 0x40;
            static constexpr std::uintptr_t bOnlyControlChildObject = 0x40;
            static constexpr std::uintptr_t bUseAccelerationDriveMode = 0x40;
            static constexpr std::uintptr_t bUseCustomControlPoint = 0x40;
            static constexpr std::uintptr_t bUseSkeletalAnimation = 0x40;
            static constexpr std::uintptr_t bEnableAngularDampingRatio = 0x41;
            static constexpr std::uintptr_t bEnableAngularExtraDamping = 0x41;
            static constexpr std::uintptr_t bEnableAngularStrength = 0x41;
            static constexpr std::uintptr_t bEnableAngularTargetVelocityMultiplier = 0x41;
            static constexpr std::uintptr_t bEnableLinearExtraDamping = 0x41;
            static constexpr std::uintptr_t bEnableLinearTargetVelocityMultiplier = 0x41;
            static constexpr std::uintptr_t bEnableMaxForce = 0x41;
            static constexpr std::uintptr_t bEnableMaxTorque = 0x41;
            static constexpr std::uintptr_t bEnableCustomControlPoint = 0x42;
            static constexpr std::uintptr_t bEnablebDisableCollision = 0x42;
            static constexpr std::uintptr_t bEnablebEnabled = 0x42;
            static constexpr std::uintptr_t bEnablebOnlyControlChildObject = 0x42;
            static constexpr std::uintptr_t bEnablebUseAccelerationDriveMode = 0x42;
            static constexpr std::uintptr_t bEnablebUseCustomControlPoint = 0x42;
            static constexpr std::uintptr_t bEnablebUseSkeletalAnimation = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"LinearStrength", 0x0, "FloatProperty"},
            {"LinearDampingRatio", 0x4, "FloatProperty"},
            {"LinearExtraDamping", 0x8, "FloatProperty"},
            {"MaxForce", 0xC, "FloatProperty"},
            {"AngularStrength", 0x10, "FloatProperty"},
            {"AngularDampingRatio", 0x14, "FloatProperty"},
            {"AngularExtraDamping", 0x18, "FloatProperty"},
            {"MaxTorque", 0x1C, "FloatProperty"},
            {"LinearTargetVelocityMultiplier", 0x20, "FloatProperty"},
            {"AngularTargetVelocityMultiplier", 0x24, "FloatProperty"},
            {"CustomControlPoint", 0x28, "StructProperty"},
            {"bDisableCollision", 0x40, "BoolProperty"},
            {"bEnableLinearDampingRatio", 0x40, "BoolProperty"},
            {"bEnableLinearStrength", 0x40, "BoolProperty"},
            {"bEnabled", 0x40, "BoolProperty"},
            {"bOnlyControlChildObject", 0x40, "BoolProperty"},
            {"bUseAccelerationDriveMode", 0x40, "BoolProperty"},
            {"bUseCustomControlPoint", 0x40, "BoolProperty"},
            {"bUseSkeletalAnimation", 0x40, "BoolProperty"},
            {"bEnableAngularDampingRatio", 0x41, "BoolProperty"},
            {"bEnableAngularExtraDamping", 0x41, "BoolProperty"},
            {"bEnableAngularStrength", 0x41, "BoolProperty"},
            {"bEnableAngularTargetVelocityMultiplier", 0x41, "BoolProperty"},
            {"bEnableLinearExtraDamping", 0x41, "BoolProperty"},
            {"bEnableLinearTargetVelocityMultiplier", 0x41, "BoolProperty"},
            {"bEnableMaxForce", 0x41, "BoolProperty"},
            {"bEnableMaxTorque", 0x41, "BoolProperty"},
            {"bEnableCustomControlPoint", 0x42, "BoolProperty"},
            {"bEnablebDisableCollision", 0x42, "BoolProperty"},
            {"bEnablebEnabled", 0x42, "BoolProperty"},
            {"bEnablebOnlyControlChildObject", 0x42, "BoolProperty"},
            {"bEnablebUseAccelerationDriveMode", 0x42, "BoolProperty"},
            {"bEnablebUseCustomControlPoint", 0x42, "BoolProperty"},
            {"bEnablebUseSkeletalAnimation", 0x42, "BoolProperty"},
        }};
    };

    struct PhysicsControlSparseMultiplier
    {
        static constexpr std::string_view Name = "PhysicsControlSparseMultiplier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinearStrengthMultiplier = 0x0;
            static constexpr std::uintptr_t LinearDampingRatioMultiplier = 0x18;
            static constexpr std::uintptr_t LinearExtraDampingMultiplier = 0x30;
            static constexpr std::uintptr_t MaxForceMultiplier = 0x48;
            static constexpr std::uintptr_t AngularStrengthMultiplier = 0x60;
            static constexpr std::uintptr_t AngularDampingRatioMultiplier = 0x64;
            static constexpr std::uintptr_t AngularExtraDampingMultiplier = 0x68;
            static constexpr std::uintptr_t MaxTorqueMultiplier = 0x6C;
            static constexpr std::uintptr_t bEnableAngularDampingRatioMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableAngularExtraDampingMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableAngularStrengthMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableLinearDampingRatioMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableLinearExtraDampingMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableLinearStrengthMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableMaxForceMultiplier = 0x70;
            static constexpr std::uintptr_t bEnableMaxTorqueMultiplier = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"LinearStrengthMultiplier", 0x0, "StructProperty"},
            {"LinearDampingRatioMultiplier", 0x18, "StructProperty"},
            {"LinearExtraDampingMultiplier", 0x30, "StructProperty"},
            {"MaxForceMultiplier", 0x48, "StructProperty"},
            {"AngularStrengthMultiplier", 0x60, "FloatProperty"},
            {"AngularDampingRatioMultiplier", 0x64, "FloatProperty"},
            {"AngularExtraDampingMultiplier", 0x68, "FloatProperty"},
            {"MaxTorqueMultiplier", 0x6C, "FloatProperty"},
            {"bEnableAngularDampingRatioMultiplier", 0x70, "BoolProperty"},
            {"bEnableAngularExtraDampingMultiplier", 0x70, "BoolProperty"},
            {"bEnableAngularStrengthMultiplier", 0x70, "BoolProperty"},
            {"bEnableLinearDampingRatioMultiplier", 0x70, "BoolProperty"},
            {"bEnableLinearExtraDampingMultiplier", 0x70, "BoolProperty"},
            {"bEnableLinearStrengthMultiplier", 0x70, "BoolProperty"},
            {"bEnableMaxForceMultiplier", 0x70, "BoolProperty"},
            {"bEnableMaxTorqueMultiplier", 0x70, "BoolProperty"},
        }};
    };

    struct PhysicsControlTarget
    {
        static constexpr std::string_view Name = "PhysicsControlTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPosition = 0x0;
            static constexpr std::uintptr_t TargetVelocity = 0x18;
            static constexpr std::uintptr_t TargetOrientation = 0x30;
            static constexpr std::uintptr_t TargetAngularVelocity = 0x48;
            static constexpr std::uintptr_t bApplyControlPointToTarget = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetPosition", 0x0, "StructProperty"},
            {"TargetVelocity", 0x18, "StructProperty"},
            {"TargetOrientation", 0x30, "StructProperty"},
            {"TargetAngularVelocity", 0x48, "StructProperty"},
            {"bApplyControlPointToTarget", 0x60, "BoolProperty"},
        }};
    };

    struct RigidBodyControlTarget
    {
        static constexpr std::string_view Name = "RigidBodyControlTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPosition = 0x0;
            static constexpr std::uintptr_t TargetOrientation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetPosition", 0x0, "StructProperty"},
            {"TargetOrientation", 0x18, "StructProperty"},
        }};
    };

    struct RigidBodyControlTargets
    {
        static constexpr std::string_view Name = "RigidBodyControlTargets";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Targets", 0x0, "MapProperty"},
        }};
    };

    struct RigidBodyForcesAndTorques
    {
        static constexpr std::string_view Name = "RigidBodyForcesAndTorques";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcesAndTorques = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ForcesAndTorques", 0x0, "MapProperty"},
        }};
    };

    struct RigidBodyKinematicTarget
    {
        static constexpr std::string_view Name = "RigidBodyKinematicTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetPosition = 0x0;
            static constexpr std::uintptr_t TargetOrientation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetPosition", 0x0, "StructProperty"},
            {"TargetOrientation", 0x18, "StructProperty"},
        }};
    };

    struct RigidBodyKinematicTargets
    {
        static constexpr std::string_view Name = "RigidBodyKinematicTargets";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Targets", 0x0, "MapProperty"},
        }};
    };

    struct RigidBodyWithControlReference
    {
        static constexpr std::string_view Name = "RigidBodyWithControlReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
