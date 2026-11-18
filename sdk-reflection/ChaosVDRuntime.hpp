#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosVDRuntime
{
    struct ChaosVDAABBTreeDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDAABBTreeDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDAccelerationStructureBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNodeIndex = 0x18;
            static constexpr std::uintptr_t TreeDepth = 0x1C;
            static constexpr std::uintptr_t NodesNum = 0x20;
            static constexpr std::uintptr_t LeavesNum = 0x24;
            static constexpr std::uintptr_t bDynamicTree = 0x28;
            static constexpr std::uintptr_t MaxChildrenInLeaf = 0x2C;
            static constexpr std::uintptr_t MaxTreeDepth = 0x30;
            static constexpr std::uintptr_t MaxPayloadBounds = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RootNodeIndex", 0x18, "IntProperty"},
            {"TreeDepth", 0x1C, "IntProperty"},
            {"NodesNum", 0x20, "IntProperty"},
            {"LeavesNum", 0x24, "IntProperty"},
            {"bDynamicTree", 0x28, "BoolProperty"},
            {"MaxChildrenInLeaf", 0x2C, "IntProperty"},
            {"MaxTreeDepth", 0x30, "IntProperty"},
            {"MaxPayloadBounds", 0x38, "DoubleProperty"},
        }};
    };

    struct ChaosVDAABBTreeLeafDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDAABBTreeLeafDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x10;
            static constexpr std::uintptr_t Bounds = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Elements", 0x10, "ArrayProperty"},
            {"Bounds", 0x20, "StructProperty"},
        }};
    };

    struct ChaosVDAABBTreeNodeDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDAABBTreeNodeDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildrenBounds = 0x10;
            static constexpr std::uintptr_t ChildrenNodes = 0x80;
            static constexpr std::uintptr_t ParentNode = 0x88;
            static constexpr std::uintptr_t bDirtyNode = 0x8C;
            static constexpr std::uintptr_t bLeaf = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChildrenBounds", 0x10, "StructProperty"},
            {"ChildrenNodes", 0x80, "IntProperty"},
            {"ParentNode", 0x88, "IntProperty"},
            {"bDirtyNode", 0x8C, "BoolProperty"},
            {"bLeaf", 0x8C, "BoolProperty"},
        }};
    };

    struct ChaosVDAABBTreePayloadBoundsElement
    {
        static constexpr std::string_view Name = "ChaosVDAABBTreePayloadBoundsElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleIndex = 0x10;
            static constexpr std::uintptr_t Bounds = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticleIndex", 0x10, "IntProperty"},
            {"Bounds", 0x18, "StructProperty"},
        }};
    };

    struct ChaosVDAccelerationStructureBase
    {
        static constexpr std::string_view Name = "ChaosVDAccelerationStructureBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverId = 0x10;
            static constexpr std::uintptr_t Type = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SolverId", 0x10, "IntProperty"},
            {"Type", 0x14, "EnumProperty"},
        }};
    };

    struct ChaosVDAccelerationStructureContainer
    {
        static constexpr std::string_view Name = "ChaosVDAccelerationStructureContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDBVCellElementDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDBVCellElementDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x10;
            static constexpr std::uintptr_t ParticleIndex = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bounds", 0x10, "StructProperty"},
            {"ParticleIndex", 0x48, "IntProperty"},
        }};
    };

    struct ChaosVDBoundingVolumeDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDBoundingVolumeDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDAccelerationStructureBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPayloadBounds = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxPayloadBounds", 0x38, "DoubleProperty"},
        }};
    };

    struct ChaosVDCameraDataContainer
    {
        static constexpr std::string_view Name = "ChaosVDCameraDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDCameraDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDCameraDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Camera = 0x0;
            static constexpr std::uintptr_t Position = 0x18;
            static constexpr std::uintptr_t Rotation = 0x30;
            static constexpr std::uintptr_t FOV = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Camera", 0x0, "StructProperty"},
            {"Position", 0x18, "StructProperty"},
            {"Rotation", 0x30, "StructProperty"},
            {"FOV", 0x50, "FloatProperty"},
        }};
    };

    struct ChaosVDCameraIdentifier
    {
        static constexpr std::string_view Name = "ChaosVDCameraIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraName = 0x0;
            static constexpr std::uintptr_t ActorName = 0x4;
            static constexpr std::uintptr_t ActorAssetPath = 0x8;
            static constexpr std::uintptr_t MapAssetPath = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CameraName", 0x0, "NameProperty"},
            {"ActorName", 0x4, "NameProperty"},
            {"ActorAssetPath", 0x8, "StructProperty"},
            {"MapAssetPath", 0x10, "StructProperty"},
        }};
    };

    struct ChaosVDCharacterGroundConstraint
    {
        static constexpr std::string_view Name = "ChaosVDCharacterGroundConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDConstraintDataWrapperBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintIndex = 0x14;
            static constexpr std::uintptr_t State = 0x20;
            static constexpr std::uintptr_t Settings = 0x78;
            static constexpr std::uintptr_t Data = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConstraintIndex", 0x14, "IntProperty"},
            {"State", 0x20, "StructProperty"},
            {"Settings", 0x78, "StructProperty"},
            {"Data", 0xE0, "StructProperty"},
        }};
    };

    struct ChaosVDCharacterGroundConstraintDataDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDCharacterGroundConstraintDataDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GroundNormal = 0x10;
            static constexpr std::uintptr_t TargetDeltaPosition = 0x28;
            static constexpr std::uintptr_t TargetDeltaFacing = 0x40;
            static constexpr std::uintptr_t GroundDistance = 0x48;
            static constexpr std::uintptr_t CosMaxWalkableSlopeAngle = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GroundNormal", 0x10, "StructProperty"},
            {"TargetDeltaPosition", 0x28, "StructProperty"},
            {"TargetDeltaFacing", 0x40, "DoubleProperty"},
            {"GroundDistance", 0x48, "DoubleProperty"},
            {"CosMaxWalkableSlopeAngle", 0x50, "DoubleProperty"},
        }};
    };

    struct ChaosVDCharacterGroundConstraintSettingsDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDCharacterGroundConstraintSettingsDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerticalAxis = 0x10;
            static constexpr std::uintptr_t TargetHeight = 0x28;
            static constexpr std::uintptr_t RadialForceLimit = 0x30;
            static constexpr std::uintptr_t FrictionForceLimit = 0x38;
            static constexpr std::uintptr_t TwistTorqueLimit = 0x40;
            static constexpr std::uintptr_t SwingTorqueLimit = 0x48;
            static constexpr std::uintptr_t CosMaxWalkableSlopeAngle = 0x50;
            static constexpr std::uintptr_t DampingFactor = 0x58;
            static constexpr std::uintptr_t AssumedOnGroundHeight = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"VerticalAxis", 0x10, "StructProperty"},
            {"TargetHeight", 0x28, "DoubleProperty"},
            {"RadialForceLimit", 0x30, "DoubleProperty"},
            {"FrictionForceLimit", 0x38, "DoubleProperty"},
            {"TwistTorqueLimit", 0x40, "DoubleProperty"},
            {"SwingTorqueLimit", 0x48, "DoubleProperty"},
            {"CosMaxWalkableSlopeAngle", 0x50, "DoubleProperty"},
            {"DampingFactor", 0x58, "DoubleProperty"},
            {"AssumedOnGroundHeight", 0x60, "DoubleProperty"},
        }};
    };

    struct ChaosVDCharacterGroundConstraintStateDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDCharacterGroundConstraintStateDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisabled = 0x20;
            static constexpr std::uintptr_t SolverAppliedForce = 0x28;
            static constexpr std::uintptr_t SolverAppliedTorque = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDisabled", 0x20, "BoolProperty"},
            {"SolverAppliedForce", 0x28, "StructProperty"},
            {"SolverAppliedTorque", 0x40, "StructProperty"},
        }};
    };

    struct ChaosVDCollisionChannelInfo
    {
        static constexpr std::string_view Name = "ChaosVDCollisionChannelInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t CollisionChannel = 0x10;
            static constexpr std::uintptr_t bIsTraceType = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x0, "StrProperty"},
            {"CollisionChannel", 0x10, "IntProperty"},
            {"bIsTraceType", 0x14, "BoolProperty"},
        }};
    };

    struct ChaosVDCollisionChannelsInfoContainer
    {
        static constexpr std::string_view Name = "ChaosVDCollisionChannelsInfoContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDCollisionFilterData
    {
        static constexpr std::string_view Name = "ChaosVDCollisionFilterData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Word0 = 0x0;
            static constexpr std::uintptr_t Word1 = 0x4;
            static constexpr std::uintptr_t Word2 = 0x8;
            static constexpr std::uintptr_t Word3 = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Word0", 0x0, "UInt32Property"},
            {"Word1", 0x4, "UInt32Property"},
            {"Word2", 0x8, "UInt32Property"},
            {"Word3", 0xC, "UInt32Property"},
        }};
    };

    struct ChaosVDCollisionMaterial
    {
        static constexpr std::string_view Name = "ChaosVDCollisionMaterial";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FaceIndex = 0x0;
            static constexpr std::uintptr_t MaterialDynamicFriction = 0x4;
            static constexpr std::uintptr_t MaterialStaticFriction = 0x8;
            static constexpr std::uintptr_t MaterialRestitution = 0xC;
            static constexpr std::uintptr_t DynamicFriction = 0x10;
            static constexpr std::uintptr_t StaticFriction = 0x14;
            static constexpr std::uintptr_t Restitution = 0x18;
            static constexpr std::uintptr_t RestitutionThreshold = 0x1C;
            static constexpr std::uintptr_t InvMassScale0 = 0x20;
            static constexpr std::uintptr_t InvMassScale1 = 0x24;
            static constexpr std::uintptr_t InvInertiaScale0 = 0x28;
            static constexpr std::uintptr_t InvInertiaScale1 = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"FaceIndex", 0x0, "IntProperty"},
            {"MaterialDynamicFriction", 0x4, "FloatProperty"},
            {"MaterialStaticFriction", 0x8, "FloatProperty"},
            {"MaterialRestitution", 0xC, "FloatProperty"},
            {"DynamicFriction", 0x10, "FloatProperty"},
            {"StaticFriction", 0x14, "FloatProperty"},
            {"Restitution", 0x18, "FloatProperty"},
            {"RestitutionThreshold", 0x1C, "FloatProperty"},
            {"InvMassScale0", 0x20, "FloatProperty"},
            {"InvMassScale1", 0x24, "FloatProperty"},
            {"InvInertiaScale0", 0x28, "FloatProperty"},
            {"InvInertiaScale1", 0x2C, "FloatProperty"},
        }};
    };

    struct ChaosVDCollisionObjectQueryParams
    {
        static constexpr std::string_view Name = "ChaosVDCollisionObjectQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IgnoreMask = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IgnoreMask", 0x18, "ByteProperty"},
        }};
    };

    struct ChaosVDCollisionQueryParams
    {
        static constexpr std::string_view Name = "ChaosVDCollisionQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceTag = 0x10;
            static constexpr std::uintptr_t OwnerTag = 0x14;
            static constexpr std::uintptr_t bFindInitialOverlaps = 0x18;
            static constexpr std::uintptr_t bIgnoreBlocks = 0x18;
            static constexpr std::uintptr_t bIgnoreTouches = 0x18;
            static constexpr std::uintptr_t bReturnFaceIndex = 0x18;
            static constexpr std::uintptr_t bReturnPhysicalMaterial = 0x18;
            static constexpr std::uintptr_t bSkipNarrowPhase = 0x18;
            static constexpr std::uintptr_t bTraceComplex = 0x18;
            static constexpr std::uintptr_t bTraceIntoSubComponents = 0x18;
            static constexpr std::uintptr_t bReplaceHitWithSubComponents = 0x19;
            static constexpr std::uintptr_t IgnoreMask = 0x1A;
            static constexpr std::uintptr_t IgnoredActorsNames = 0x40;
            static constexpr std::uintptr_t IgnoredComponentsNames = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"TraceTag", 0x10, "NameProperty"},
            {"OwnerTag", 0x14, "NameProperty"},
            {"bFindInitialOverlaps", 0x18, "BoolProperty"},
            {"bIgnoreBlocks", 0x18, "BoolProperty"},
            {"bIgnoreTouches", 0x18, "BoolProperty"},
            {"bReturnFaceIndex", 0x18, "BoolProperty"},
            {"bReturnPhysicalMaterial", 0x18, "BoolProperty"},
            {"bSkipNarrowPhase", 0x18, "BoolProperty"},
            {"bTraceComplex", 0x18, "BoolProperty"},
            {"bTraceIntoSubComponents", 0x18, "BoolProperty"},
            {"bReplaceHitWithSubComponents", 0x19, "BoolProperty"},
            {"IgnoreMask", 0x1A, "ByteProperty"},
            {"IgnoredActorsNames", 0x40, "ArrayProperty"},
            {"IgnoredComponentsNames", 0x50, "ArrayProperty"},
        }};
    };

    struct ChaosVDCollisionResponseParams
    {
        static constexpr std::string_view Name = "ChaosVDCollisionResponseParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasValidData", 0x8, "BoolProperty"},
        }};
    };

    struct ChaosVDConnectivityEdge
    {
        static constexpr std::string_view Name = "ChaosVDConnectivityEdge";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SiblingParticleID = 0x0;
            static constexpr std::uintptr_t Strain = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SiblingParticleID", 0x0, "IntProperty"},
            {"Strain", 0x4, "FloatProperty"},
        }};
    };

    struct ChaosVDConstraint
    {
        static constexpr std::string_view Name = "ChaosVDConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanRestoreManifold = 0x0;
            static constexpr std::uintptr_t bDisabled = 0x0;
            static constexpr std::uintptr_t bIsCurrent = 0x0;
            static constexpr std::uintptr_t bIsQuadratic0 = 0x0;
            static constexpr std::uintptr_t bIsQuadratic1 = 0x0;
            static constexpr std::uintptr_t bUseIncrementalManifold = 0x0;
            static constexpr std::uintptr_t bUseManifold = 0x0;
            static constexpr std::uintptr_t bWasManifoldRestored = 0x0;
            static constexpr std::uintptr_t bCCDEnabled = 0x1;
            static constexpr std::uintptr_t bCCDSweepEnabled = 0x1;
            static constexpr std::uintptr_t bIsProbe = 0x1;
            static constexpr std::uintptr_t bMaterialSet = 0x1;
            static constexpr std::uintptr_t bModifierApplied = 0x1;
            static constexpr std::uintptr_t Material = 0x4;
            static constexpr std::uintptr_t AccumulatedImpulse = 0x38;
            static constexpr std::uintptr_t ShapesType = 0x50;
            static constexpr std::uintptr_t ShapeWorldTransforms = 0x60;
            static constexpr std::uintptr_t ImplicitTransforms = 0x120;
            static constexpr std::uintptr_t CullDistance = 0x1E0;
            static constexpr std::uintptr_t CollisionMargins = 0x1E8;
            static constexpr std::uintptr_t CollisionTolerance = 0x1F8;
            static constexpr std::uintptr_t ClosestManifoldPointIndex = 0x1FC;
            static constexpr std::uintptr_t ExpectedNumManifoldPoints = 0x200;
            static constexpr std::uintptr_t LastShapeWorldPositionDelta = 0x208;
            static constexpr std::uintptr_t LastShapeWorldRotationDelta = 0x220;
            static constexpr std::uintptr_t Stiffness = 0x240;
            static constexpr std::uintptr_t MinInitialPhi = 0x244;
            static constexpr std::uintptr_t InitialOverlapDepenetrationVelocity = 0x248;
            static constexpr std::uintptr_t CCDTimeOfImpact = 0x24C;
            static constexpr std::uintptr_t CCDEnablePenetration = 0x250;
            static constexpr std::uintptr_t CCDTargetPenetration = 0x254;
            static constexpr std::uintptr_t ManifoldPoints = 0x258;
            static constexpr std::uintptr_t Particle0Index = 0x268;
            static constexpr std::uintptr_t Particle1Index = 0x26C;
            static constexpr std::uintptr_t SolverId = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"bCanRestoreManifold", 0x0, "BoolProperty"},
            {"bDisabled", 0x0, "BoolProperty"},
            {"bIsCurrent", 0x0, "BoolProperty"},
            {"bIsQuadratic0", 0x0, "BoolProperty"},
            {"bIsQuadratic1", 0x0, "BoolProperty"},
            {"bUseIncrementalManifold", 0x0, "BoolProperty"},
            {"bUseManifold", 0x0, "BoolProperty"},
            {"bWasManifoldRestored", 0x0, "BoolProperty"},
            {"bCCDEnabled", 0x1, "BoolProperty"},
            {"bCCDSweepEnabled", 0x1, "BoolProperty"},
            {"bIsProbe", 0x1, "BoolProperty"},
            {"bMaterialSet", 0x1, "BoolProperty"},
            {"bModifierApplied", 0x1, "BoolProperty"},
            {"Material", 0x4, "StructProperty"},
            {"AccumulatedImpulse", 0x38, "StructProperty"},
            {"ShapesType", 0x50, "EnumProperty"},
            {"ShapeWorldTransforms", 0x60, "StructProperty"},
            {"ImplicitTransforms", 0x120, "StructProperty"},
            {"CullDistance", 0x1E0, "FloatProperty"},
            {"CollisionMargins", 0x1E8, "ArrayProperty"},
            {"CollisionTolerance", 0x1F8, "FloatProperty"},
            {"ClosestManifoldPointIndex", 0x1FC, "IntProperty"},
            {"ExpectedNumManifoldPoints", 0x200, "IntProperty"},
            {"LastShapeWorldPositionDelta", 0x208, "StructProperty"},
            {"LastShapeWorldRotationDelta", 0x220, "StructProperty"},
            {"Stiffness", 0x240, "FloatProperty"},
            {"MinInitialPhi", 0x244, "FloatProperty"},
            {"InitialOverlapDepenetrationVelocity", 0x248, "FloatProperty"},
            {"CCDTimeOfImpact", 0x24C, "FloatProperty"},
            {"CCDEnablePenetration", 0x250, "FloatProperty"},
            {"CCDTargetPenetration", 0x254, "FloatProperty"},
            {"ManifoldPoints", 0x258, "ArrayProperty"},
            {"Particle0Index", 0x268, "IntProperty"},
            {"Particle1Index", 0x26C, "IntProperty"},
            {"SolverId", 0x270, "IntProperty"},
        }};
    };

    struct ChaosVDConstraintDataWrapperBase
    {
        static constexpr std::string_view Name = "ChaosVDConstraintDataWrapperBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasValidData", 0x8, "BoolProperty"},
        }};
    };

    struct ChaosVDContactPoint
    {
        static constexpr std::string_view Name = "ChaosVDContactPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeContactPoints = 0x0;
            static constexpr std::uintptr_t ShapeContactNormal = 0x30;
            static constexpr std::uintptr_t Phi = 0x48;
            static constexpr std::uintptr_t FaceIndex = 0x4C;
            static constexpr std::uintptr_t ContactType = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ShapeContactPoints", 0x0, "StructProperty"},
            {"ShapeContactNormal", 0x30, "StructProperty"},
            {"Phi", 0x48, "FloatProperty"},
            {"FaceIndex", 0x4C, "IntProperty"},
            {"ContactType", 0x50, "EnumProperty"},
        }};
    };

    struct ChaosVDDebugDrawBoxDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDDebugDrawBoxDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDDebugDrawShapeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Box = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Box", 0x20, "StructProperty"},
        }};
    };

    struct ChaosVDDebugDrawImplicitObjectDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDDebugDrawImplicitObjectDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDDebugDrawShapeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverId = 0x10;
            static constexpr std::uintptr_t Tag = 0x14;
            static constexpr std::uintptr_t Color = 0x18;
            static constexpr std::uintptr_t ThreadContext = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SolverId", 0x10, "IntProperty"},
            {"Tag", 0x14, "NameProperty"},
            {"Color", 0x18, "StructProperty"},
            {"ThreadContext", 0x1C, "EnumProperty"},
        }};
    };

    struct ChaosVDDebugDrawLineDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDDebugDrawLineDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDDebugDrawShapeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartLocation = 0x20;
            static constexpr std::uintptr_t EndLocation = 0x38;
            static constexpr std::uintptr_t bIsArrow = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartLocation", 0x20, "StructProperty"},
            {"EndLocation", 0x38, "StructProperty"},
            {"bIsArrow", 0x50, "BoolProperty"},
        }};
    };

    struct ChaosVDDebugDrawShapeBase
    {
        static constexpr std::string_view Name = "ChaosVDDebugDrawShapeBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverId = 0x10;
            static constexpr std::uintptr_t Tag = 0x14;
            static constexpr std::uintptr_t Color = 0x18;
            static constexpr std::uintptr_t ThreadContext = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SolverId", 0x10, "IntProperty"},
            {"Tag", 0x14, "NameProperty"},
            {"Color", 0x18, "StructProperty"},
            {"ThreadContext", 0x1C, "EnumProperty"},
        }};
    };

    struct ChaosVDDebugDrawSphereDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDDebugDrawSphereDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDDebugDrawShapeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x20;
            static constexpr std::uintptr_t Radius = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x20, "StructProperty"},
            {"Radius", 0x38, "FloatProperty"},
        }};
    };

    struct ChaosVDDebugShapeDataContainer
    {
        static constexpr std::string_view Name = "ChaosVDDebugShapeDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDFRigidParticleControlFlags
    {
        static constexpr std::string_view Name = "ChaosVDFRigidParticleControlFlags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bGravityEnabled = 0x10;
            static constexpr std::uintptr_t bCCDEnabled = 0x11;
            static constexpr std::uintptr_t bOneWayInteractionEnabled = 0x12;
            static constexpr std::uintptr_t bInertiaConditioningEnabled = 0x13;
            static constexpr std::uintptr_t GravityGroupIndex = 0x14;
            static constexpr std::uintptr_t bMACDEnabled = 0x18;
            static constexpr std::uintptr_t bPartialIslandSleepAllowed = 0x19;
            static constexpr std::uintptr_t bGyroscopicTorqueEnabled = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bGravityEnabled", 0x10, "BoolProperty"},
            {"bCCDEnabled", 0x11, "BoolProperty"},
            {"bOneWayInteractionEnabled", 0x12, "BoolProperty"},
            {"bInertiaConditioningEnabled", 0x13, "BoolProperty"},
            {"GravityGroupIndex", 0x14, "IntProperty"},
            {"bMACDEnabled", 0x18, "BoolProperty"},
            {"bPartialIslandSleepAllowed", 0x19, "BoolProperty"},
            {"bGyroscopicTorqueEnabled", 0x1A, "BoolProperty"},
        }};
    };

    struct ChaosVDGTJointStateDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDGTJointStateDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDriveTargetChanged = 0x10;
            static constexpr std::uintptr_t bIsBreaking = 0x10;
            static constexpr std::uintptr_t bIsBroken = 0x10;
            static constexpr std::uintptr_t bIsViolating = 0x10;
            static constexpr std::uintptr_t Force = 0x18;
            static constexpr std::uintptr_t Torque = 0x30;
            static constexpr std::uintptr_t LinearViolation = 0x48;
            static constexpr std::uintptr_t AngularViolation = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bDriveTargetChanged", 0x10, "BoolProperty"},
            {"bIsBreaking", 0x10, "BoolProperty"},
            {"bIsBroken", 0x10, "BoolProperty"},
            {"bIsViolating", 0x10, "BoolProperty"},
            {"Force", 0x18, "StructProperty"},
            {"Torque", 0x30, "StructProperty"},
            {"LinearViolation", 0x48, "FloatProperty"},
            {"AngularViolation", 0x4C, "FloatProperty"},
        }};
    };

    struct ChaosVDJointConstraint
    {
        static constexpr std::string_view Name = "ChaosVDJointConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDConstraintDataWrapperBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstraintIndex = 0x14;
            static constexpr std::uintptr_t PhysicsThreadJointState = 0x20;
            static constexpr std::uintptr_t GameThreadJointState = 0x80;
            static constexpr std::uintptr_t JointSettings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConstraintIndex", 0x14, "IntProperty"},
            {"PhysicsThreadJointState", 0x20, "StructProperty"},
            {"GameThreadJointState", 0x80, "StructProperty"},
            {"JointSettings", 0xD0, "StructProperty"},
        }};
    };

    struct ChaosVDJointSettingsDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDJointSettingsDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConnectorTransforms = 0x10;
            static constexpr std::uintptr_t Stiffness = 0xD0;
            static constexpr std::uintptr_t LinearProjection = 0xD8;
            static constexpr std::uintptr_t AngularProjection = 0xE0;
            static constexpr std::uintptr_t ShockPropagation = 0xE8;
            static constexpr std::uintptr_t TeleportDistance = 0xF0;
            static constexpr std::uintptr_t TeleportAngle = 0xF8;
            static constexpr std::uintptr_t ParentInvMassScale = 0x100;
            static constexpr std::uintptr_t bAngularSLerpPositionDriveEnabled = 0x108;
            static constexpr std::uintptr_t bAngularSLerpVelocityDriveEnabled = 0x108;
            static constexpr std::uintptr_t bCollisionEnabled = 0x108;
            static constexpr std::uintptr_t bMassConditioningEnabled = 0x108;
            static constexpr std::uintptr_t bSoftLinearLimitsEnabled = 0x108;
            static constexpr std::uintptr_t bSoftSwingLimitsEnabled = 0x108;
            static constexpr std::uintptr_t bSoftTwistLimitsEnabled = 0x108;
            static constexpr std::uintptr_t bUseLinearSolver = 0x108;
            static constexpr std::uintptr_t bAngularSwingPositionDriveEnabled = 0x109;
            static constexpr std::uintptr_t bAngularSwingVelocityDriveEnabled = 0x109;
            static constexpr std::uintptr_t bAngularTwistPositionDriveEnabled = 0x109;
            static constexpr std::uintptr_t bAngularTwistVelocityDriveEnabled = 0x109;
            static constexpr std::uintptr_t LinearMotionTypes = 0x10C;
            static constexpr std::uintptr_t LinearLimit = 0x118;
            static constexpr std::uintptr_t AngularMotionTypes = 0x120;
            static constexpr std::uintptr_t AngularLimits = 0x130;
            static constexpr std::uintptr_t LinearSoftForceMode = 0x148;
            static constexpr std::uintptr_t AngularSoftForceMode = 0x14C;
            static constexpr std::uintptr_t SoftLinearStiffness = 0x150;
            static constexpr std::uintptr_t SoftLinearDamping = 0x158;
            static constexpr std::uintptr_t SoftTwistStiffness = 0x160;
            static constexpr std::uintptr_t SoftTwistDamping = 0x168;
            static constexpr std::uintptr_t SoftSwingStiffness = 0x170;
            static constexpr std::uintptr_t SoftSwingDamping = 0x178;
            static constexpr std::uintptr_t LinearRestitution = 0x180;
            static constexpr std::uintptr_t TwistRestitution = 0x188;
            static constexpr std::uintptr_t SwingRestitution = 0x190;
            static constexpr std::uintptr_t LinearContactDistance = 0x198;
            static constexpr std::uintptr_t TwistContactDistance = 0x1A0;
            static constexpr std::uintptr_t SwingContactDistance = 0x1A8;
            static constexpr std::uintptr_t LinearDrivePositionTarget = 0x1B0;
            static constexpr std::uintptr_t LinearDriveVelocityTarget = 0x1C8;
            static constexpr std::uintptr_t bLinearPositionDriveEnabled0 = 0x1E0;
            static constexpr std::uintptr_t bLinearPositionDriveEnabled1 = 0x1E0;
            static constexpr std::uintptr_t bLinearPositionDriveEnabled2 = 0x1E0;
            static constexpr std::uintptr_t bLinearVelocityDriveEnabled0 = 0x1E0;
            static constexpr std::uintptr_t bLinearVelocityDriveEnabled1 = 0x1E0;
            static constexpr std::uintptr_t bLinearVelocityDriveEnabled2 = 0x1E0;
            static constexpr std::uintptr_t LinearDriveForceMode = 0x1E4;
            static constexpr std::uintptr_t LinearDriveStiffness = 0x1E8;
            static constexpr std::uintptr_t LinearDriveDamping = 0x200;
            static constexpr std::uintptr_t LinearDriveMaxForce = 0x218;
            static constexpr std::uintptr_t AngularDrivePositionTarget = 0x230;
            static constexpr std::uintptr_t AngularDriveVelocityTarget = 0x250;
            static constexpr std::uintptr_t AngularDriveForceMode = 0x268;
            static constexpr std::uintptr_t AngularDriveStiffness = 0x270;
            static constexpr std::uintptr_t AngularDriveDamping = 0x288;
            static constexpr std::uintptr_t AngularDriveMaxTorque = 0x2A0;
            static constexpr std::uintptr_t LinearBreakForce = 0x2B8;
            static constexpr std::uintptr_t LinearPlasticityLimit = 0x2C0;
            static constexpr std::uintptr_t LinearPlasticityType = 0x2C8;
            static constexpr std::uintptr_t LinearPlasticityInitialDistanceSquared = 0x2D0;
            static constexpr std::uintptr_t AngularBreakTorque = 0x2D8;
            static constexpr std::uintptr_t AngularPlasticityLimit = 0x2E0;
            static constexpr std::uintptr_t ContactTransferScale = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 63> Properties{{
            {"ConnectorTransforms", 0x10, "StructProperty"},
            {"Stiffness", 0xD0, "DoubleProperty"},
            {"LinearProjection", 0xD8, "DoubleProperty"},
            {"AngularProjection", 0xE0, "DoubleProperty"},
            {"ShockPropagation", 0xE8, "DoubleProperty"},
            {"TeleportDistance", 0xF0, "DoubleProperty"},
            {"TeleportAngle", 0xF8, "DoubleProperty"},
            {"ParentInvMassScale", 0x100, "DoubleProperty"},
            {"bAngularSLerpPositionDriveEnabled", 0x108, "BoolProperty"},
            {"bAngularSLerpVelocityDriveEnabled", 0x108, "BoolProperty"},
            {"bCollisionEnabled", 0x108, "BoolProperty"},
            {"bMassConditioningEnabled", 0x108, "BoolProperty"},
            {"bSoftLinearLimitsEnabled", 0x108, "BoolProperty"},
            {"bSoftSwingLimitsEnabled", 0x108, "BoolProperty"},
            {"bSoftTwistLimitsEnabled", 0x108, "BoolProperty"},
            {"bUseLinearSolver", 0x108, "BoolProperty"},
            {"bAngularSwingPositionDriveEnabled", 0x109, "BoolProperty"},
            {"bAngularSwingVelocityDriveEnabled", 0x109, "BoolProperty"},
            {"bAngularTwistPositionDriveEnabled", 0x109, "BoolProperty"},
            {"bAngularTwistVelocityDriveEnabled", 0x109, "BoolProperty"},
            {"LinearMotionTypes", 0x10C, "EnumProperty"},
            {"LinearLimit", 0x118, "DoubleProperty"},
            {"AngularMotionTypes", 0x120, "EnumProperty"},
            {"AngularLimits", 0x130, "StructProperty"},
            {"LinearSoftForceMode", 0x148, "EnumProperty"},
            {"AngularSoftForceMode", 0x14C, "EnumProperty"},
            {"SoftLinearStiffness", 0x150, "DoubleProperty"},
            {"SoftLinearDamping", 0x158, "DoubleProperty"},
            {"SoftTwistStiffness", 0x160, "DoubleProperty"},
            {"SoftTwistDamping", 0x168, "DoubleProperty"},
            {"SoftSwingStiffness", 0x170, "DoubleProperty"},
            {"SoftSwingDamping", 0x178, "DoubleProperty"},
            {"LinearRestitution", 0x180, "DoubleProperty"},
            {"TwistRestitution", 0x188, "DoubleProperty"},
            {"SwingRestitution", 0x190, "DoubleProperty"},
            {"LinearContactDistance", 0x198, "DoubleProperty"},
            {"TwistContactDistance", 0x1A0, "DoubleProperty"},
            {"SwingContactDistance", 0x1A8, "DoubleProperty"},
            {"LinearDrivePositionTarget", 0x1B0, "StructProperty"},
            {"LinearDriveVelocityTarget", 0x1C8, "StructProperty"},
            {"bLinearPositionDriveEnabled0", 0x1E0, "BoolProperty"},
            {"bLinearPositionDriveEnabled1", 0x1E0, "BoolProperty"},
            {"bLinearPositionDriveEnabled2", 0x1E0, "BoolProperty"},
            {"bLinearVelocityDriveEnabled0", 0x1E0, "BoolProperty"},
            {"bLinearVelocityDriveEnabled1", 0x1E0, "BoolProperty"},
            {"bLinearVelocityDriveEnabled2", 0x1E0, "BoolProperty"},
            {"LinearDriveForceMode", 0x1E4, "EnumProperty"},
            {"LinearDriveStiffness", 0x1E8, "StructProperty"},
            {"LinearDriveDamping", 0x200, "StructProperty"},
            {"LinearDriveMaxForce", 0x218, "StructProperty"},
            {"AngularDrivePositionTarget", 0x230, "StructProperty"},
            {"AngularDriveVelocityTarget", 0x250, "StructProperty"},
            {"AngularDriveForceMode", 0x268, "EnumProperty"},
            {"AngularDriveStiffness", 0x270, "StructProperty"},
            {"AngularDriveDamping", 0x288, "StructProperty"},
            {"AngularDriveMaxTorque", 0x2A0, "StructProperty"},
            {"LinearBreakForce", 0x2B8, "DoubleProperty"},
            {"LinearPlasticityLimit", 0x2C0, "DoubleProperty"},
            {"LinearPlasticityType", 0x2C8, "EnumProperty"},
            {"LinearPlasticityInitialDistanceSquared", 0x2D0, "DoubleProperty"},
            {"AngularBreakTorque", 0x2D8, "DoubleProperty"},
            {"AngularPlasticityLimit", 0x2E0, "DoubleProperty"},
            {"ContactTransferScale", 0x2E8, "DoubleProperty"},
        }};
    };

    struct ChaosVDJointSolverSettingsDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDJointSolverSettingsDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SwingTwistAngleTolerance = 0x10;
            static constexpr std::uintptr_t PositionTolerance = 0x18;
            static constexpr std::uintptr_t AngleTolerance = 0x20;
            static constexpr std::uintptr_t MinParentMassRatio = 0x28;
            static constexpr std::uintptr_t MaxInertiaRatio = 0x30;
            static constexpr std::uintptr_t MinSolverStiffness = 0x38;
            static constexpr std::uintptr_t MaxSolverStiffness = 0x40;
            static constexpr std::uintptr_t NumIterationsAtMaxSolverStiffness = 0x48;
            static constexpr std::uintptr_t NumShockPropagationIterations = 0x4C;
            static constexpr std::uintptr_t bEnableDrives = 0x50;
            static constexpr std::uintptr_t bEnableSwingLimits = 0x50;
            static constexpr std::uintptr_t bEnableTwistLimits = 0x50;
            static constexpr std::uintptr_t bSolvePositionLast = 0x50;
            static constexpr std::uintptr_t bSortEnabled = 0x50;
            static constexpr std::uintptr_t bUseLinearSolver = 0x50;
            static constexpr std::uintptr_t bUsePositionBasedDrives = 0x50;
            static constexpr std::uintptr_t LinearStiffnessOverride = 0x58;
            static constexpr std::uintptr_t TwistStiffnessOverride = 0x60;
            static constexpr std::uintptr_t SwingStiffnessOverride = 0x68;
            static constexpr std::uintptr_t LinearProjectionOverride = 0x70;
            static constexpr std::uintptr_t AngularProjectionOverride = 0x78;
            static constexpr std::uintptr_t ShockPropagationOverride = 0x80;
            static constexpr std::uintptr_t LinearDriveStiffnessOverride = 0x88;
            static constexpr std::uintptr_t LinearDriveDampingOverride = 0x90;
            static constexpr std::uintptr_t AngularDriveStiffnessOverride = 0x98;
            static constexpr std::uintptr_t AngularDriveDampingOverride = 0xA0;
            static constexpr std::uintptr_t SoftLinearStiffnessOverride = 0xA8;
            static constexpr std::uintptr_t SoftLinearDampingOverride = 0xB0;
            static constexpr std::uintptr_t SoftTwistStiffnessOverride = 0xB8;
            static constexpr std::uintptr_t SoftTwistDampingOverride = 0xC0;
            static constexpr std::uintptr_t SoftSwingStiffnessOverride = 0xC8;
            static constexpr std::uintptr_t SoftSwingDampingOverride = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"SwingTwistAngleTolerance", 0x10, "DoubleProperty"},
            {"PositionTolerance", 0x18, "DoubleProperty"},
            {"AngleTolerance", 0x20, "DoubleProperty"},
            {"MinParentMassRatio", 0x28, "DoubleProperty"},
            {"MaxInertiaRatio", 0x30, "DoubleProperty"},
            {"MinSolverStiffness", 0x38, "DoubleProperty"},
            {"MaxSolverStiffness", 0x40, "DoubleProperty"},
            {"NumIterationsAtMaxSolverStiffness", 0x48, "IntProperty"},
            {"NumShockPropagationIterations", 0x4C, "IntProperty"},
            {"bEnableDrives", 0x50, "BoolProperty"},
            {"bEnableSwingLimits", 0x50, "BoolProperty"},
            {"bEnableTwistLimits", 0x50, "BoolProperty"},
            {"bSolvePositionLast", 0x50, "BoolProperty"},
            {"bSortEnabled", 0x50, "BoolProperty"},
            {"bUseLinearSolver", 0x50, "BoolProperty"},
            {"bUsePositionBasedDrives", 0x50, "BoolProperty"},
            {"LinearStiffnessOverride", 0x58, "DoubleProperty"},
            {"TwistStiffnessOverride", 0x60, "DoubleProperty"},
            {"SwingStiffnessOverride", 0x68, "DoubleProperty"},
            {"LinearProjectionOverride", 0x70, "DoubleProperty"},
            {"AngularProjectionOverride", 0x78, "DoubleProperty"},
            {"ShockPropagationOverride", 0x80, "DoubleProperty"},
            {"LinearDriveStiffnessOverride", 0x88, "DoubleProperty"},
            {"LinearDriveDampingOverride", 0x90, "DoubleProperty"},
            {"AngularDriveStiffnessOverride", 0x98, "DoubleProperty"},
            {"AngularDriveDampingOverride", 0xA0, "DoubleProperty"},
            {"SoftLinearStiffnessOverride", 0xA8, "DoubleProperty"},
            {"SoftLinearDampingOverride", 0xB0, "DoubleProperty"},
            {"SoftTwistStiffnessOverride", 0xB8, "DoubleProperty"},
            {"SoftTwistDampingOverride", 0xC0, "DoubleProperty"},
            {"SoftSwingStiffnessOverride", 0xC8, "DoubleProperty"},
            {"SoftSwingDampingOverride", 0xD0, "DoubleProperty"},
        }};
    };

    struct ChaosVDJointStateDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDJointStateDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bBreaking = 0x20;
            static constexpr std::uintptr_t bBroken = 0x20;
            static constexpr std::uintptr_t bDisabled = 0x20;
            static constexpr std::uintptr_t bDriveTargetChanged = 0x20;
            static constexpr std::uintptr_t bEnabledDuringResim = 0x20;
            static constexpr std::uintptr_t LinearImpulse = 0x28;
            static constexpr std::uintptr_t AngularImpulse = 0x40;
            static constexpr std::uintptr_t ResimType = 0x58;
            static constexpr std::uintptr_t SyncState = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bBreaking", 0x20, "BoolProperty"},
            {"bBroken", 0x20, "BoolProperty"},
            {"bDisabled", 0x20, "BoolProperty"},
            {"bDriveTargetChanged", 0x20, "BoolProperty"},
            {"bEnabledDuringResim", 0x20, "BoolProperty"},
            {"LinearImpulse", 0x28, "StructProperty"},
            {"AngularImpulse", 0x40, "StructProperty"},
            {"ResimType", 0x58, "EnumProperty"},
            {"SyncState", 0x5C, "EnumProperty"},
        }};
    };

    struct ChaosVDKinematicTarget
    {
        static constexpr std::string_view Name = "ChaosVDKinematicTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x10;
            static constexpr std::uintptr_t Position = 0x30;
            static constexpr std::uintptr_t Mode = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Rotation", 0x10, "StructProperty"},
            {"Position", 0x30, "StructProperty"},
            {"Mode", 0x48, "EnumProperty"},
        }};
    };

    struct ChaosVDManifoldPoint
    {
        static constexpr std::string_view Name = "ChaosVDManifoldPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisabled = 0x0;
            static constexpr std::uintptr_t bHasStaticFrictionAnchor = 0x0;
            static constexpr std::uintptr_t bInsideStaticFrictionCone = 0x0;
            static constexpr std::uintptr_t bIsValid = 0x0;
            static constexpr std::uintptr_t bWasReplaced = 0x0;
            static constexpr std::uintptr_t bWasRestored = 0x0;
            static constexpr std::uintptr_t NetPushOut = 0x8;
            static constexpr std::uintptr_t NetImpulse = 0x20;
            static constexpr std::uintptr_t TargetPhi = 0x38;
            static constexpr std::uintptr_t InitialPhi = 0x3C;
            static constexpr std::uintptr_t ShapeAnchorPoints = 0x40;
            static constexpr std::uintptr_t InitialShapeContactPoints = 0x70;
            static constexpr std::uintptr_t ContactPoint = 0xA0;
            static constexpr std::uintptr_t ShapeContactPoints = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bDisabled", 0x0, "BoolProperty"},
            {"bHasStaticFrictionAnchor", 0x0, "BoolProperty"},
            {"bInsideStaticFrictionCone", 0x0, "BoolProperty"},
            {"bIsValid", 0x0, "BoolProperty"},
            {"bWasReplaced", 0x0, "BoolProperty"},
            {"bWasRestored", 0x0, "BoolProperty"},
            {"NetPushOut", 0x8, "StructProperty"},
            {"NetImpulse", 0x20, "StructProperty"},
            {"TargetPhi", 0x38, "FloatProperty"},
            {"InitialPhi", 0x3C, "FloatProperty"},
            {"ShapeAnchorPoints", 0x40, "StructProperty"},
            {"InitialShapeContactPoints", 0x70, "StructProperty"},
            {"ContactPoint", 0xA0, "StructProperty"},
            {"ShapeContactPoints", 0xF8, "StructProperty"},
        }};
    };

    struct ChaosVDMultiSolverDebugShapeDataContainer
    {
        static constexpr std::string_view Name = "ChaosVDMultiSolverDebugShapeDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDParticleBounds
    {
        static constexpr std::string_view Name = "ChaosVDParticleBounds";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MMin = 0x10;
            static constexpr std::uintptr_t MMax = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MMin", 0x10, "StructProperty"},
            {"MMax", 0x28, "StructProperty"},
        }};
    };

    struct ChaosVDParticleCluster
    {
        static constexpr std::string_view Name = "ChaosVDParticleCluster";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentParticleID = 0x10;
            static constexpr std::uintptr_t NumChildren = 0x14;
            static constexpr std::uintptr_t ChildToParent = 0x20;
            static constexpr std::uintptr_t ClusterGroupIndex = 0x80;
            static constexpr std::uintptr_t bInternalCluster = 0x84;
            static constexpr std::uintptr_t CollisionImpulse = 0x88;
            static constexpr std::uintptr_t ExternalStrains = 0x8C;
            static constexpr std::uintptr_t InternalStrains = 0x90;
            static constexpr std::uintptr_t Strain = 0x94;
            static constexpr std::uintptr_t ConnectivityEdges = 0x98;
            static constexpr std::uintptr_t bIsAnchored = 0xA8;
            static constexpr std::uintptr_t bUnbreakable = 0xA9;
            static constexpr std::uintptr_t bIsChildToParentLocked = 0xAA;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ParentParticleID", 0x10, "IntProperty"},
            {"NumChildren", 0x14, "IntProperty"},
            {"ChildToParent", 0x20, "StructProperty"},
            {"ClusterGroupIndex", 0x80, "IntProperty"},
            {"bInternalCluster", 0x84, "BoolProperty"},
            {"CollisionImpulse", 0x88, "FloatProperty"},
            {"ExternalStrains", 0x8C, "FloatProperty"},
            {"InternalStrains", 0x90, "FloatProperty"},
            {"Strain", 0x94, "FloatProperty"},
            {"ConnectivityEdges", 0x98, "ArrayProperty"},
            {"bIsAnchored", 0xA8, "BoolProperty"},
            {"bUnbreakable", 0xA9, "BoolProperty"},
            {"bIsChildToParentLocked", 0xAA, "BoolProperty"},
        }};
    };

    struct ChaosVDParticleDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDParticleDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DirtyFlagsBits = 0x10;
            static constexpr std::uintptr_t ParticleContext = 0x14;
            static constexpr std::uintptr_t GeometryHash = 0x18;
            static constexpr std::uintptr_t MetaDataId = 0x20;
            static constexpr std::uintptr_t ParticleIndex = 0x28;
            static constexpr std::uintptr_t SolverId = 0x2C;
            static constexpr std::uintptr_t Type = 0x30;
            static constexpr std::uintptr_t ParticlePositionRotation = 0x40;
            static constexpr std::uintptr_t ParticleVelocities = 0x90;
            static constexpr std::uintptr_t ParticleInflatedBounds = 0xD0;
            static constexpr std::uintptr_t ParticleKinematicTarget = 0x110;
            static constexpr std::uintptr_t ParticleVWSmooth = 0x160;
            static constexpr std::uintptr_t ParticleDynamics = 0x1A0;
            static constexpr std::uintptr_t ParticleDynamicsMisc = 0x210;
            static constexpr std::uintptr_t ParticleMassProps = 0x280;
            static constexpr std::uintptr_t ParticleCluster = 0x310;
            static constexpr std::uintptr_t CollisionDataPerShape = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"DirtyFlagsBits", 0x10, "IntProperty"},
            {"ParticleContext", 0x14, "EnumProperty"},
            {"GeometryHash", 0x18, "UInt32Property"},
            {"MetaDataId", 0x20, "UInt64Property"},
            {"ParticleIndex", 0x28, "IntProperty"},
            {"SolverId", 0x2C, "IntProperty"},
            {"Type", 0x30, "EnumProperty"},
            {"ParticlePositionRotation", 0x40, "StructProperty"},
            {"ParticleVelocities", 0x90, "StructProperty"},
            {"ParticleInflatedBounds", 0xD0, "StructProperty"},
            {"ParticleKinematicTarget", 0x110, "StructProperty"},
            {"ParticleVWSmooth", 0x160, "StructProperty"},
            {"ParticleDynamics", 0x1A0, "StructProperty"},
            {"ParticleDynamicsMisc", 0x210, "StructProperty"},
            {"ParticleMassProps", 0x280, "StructProperty"},
            {"ParticleCluster", 0x310, "StructProperty"},
            {"CollisionDataPerShape", 0x3C0, "ArrayProperty"},
        }};
    };

    struct ChaosVDParticleDynamicMisc
    {
        static constexpr std::string_view Name = "ChaosVDParticleDynamicMisc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MLinearEtherDrag = 0x10;
            static constexpr std::uintptr_t MAngularEtherDrag = 0x18;
            static constexpr std::uintptr_t MMaxLinearSpeedSq = 0x20;
            static constexpr std::uintptr_t MMaxAngularSpeedSq = 0x28;
            static constexpr std::uintptr_t MInitialOverlapDepenetrationVelocity = 0x30;
            static constexpr std::uintptr_t MSleepThresholdMultiplier = 0x34;
            static constexpr std::uintptr_t MCollisionGroup = 0x38;
            static constexpr std::uintptr_t MObjectState = 0x3C;
            static constexpr std::uintptr_t MSleepType = 0x3D;
            static constexpr std::uintptr_t MCollisionConstraintFlag = 0x40;
            static constexpr std::uintptr_t MControlFlags = 0x48;
            static constexpr std::uintptr_t bDisabled = 0x68;
            static constexpr std::uintptr_t PositionSolverIterationCount = 0x69;
            static constexpr std::uintptr_t VelocitySolverIterationCount = 0x6A;
            static constexpr std::uintptr_t ProjectionSolverIterationCount = 0x6B;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MLinearEtherDrag", 0x10, "DoubleProperty"},
            {"MAngularEtherDrag", 0x18, "DoubleProperty"},
            {"MMaxLinearSpeedSq", 0x20, "DoubleProperty"},
            {"MMaxAngularSpeedSq", 0x28, "DoubleProperty"},
            {"MInitialOverlapDepenetrationVelocity", 0x30, "FloatProperty"},
            {"MSleepThresholdMultiplier", 0x34, "FloatProperty"},
            {"MCollisionGroup", 0x38, "IntProperty"},
            {"MObjectState", 0x3C, "EnumProperty"},
            {"MSleepType", 0x3D, "EnumProperty"},
            {"MCollisionConstraintFlag", 0x40, "UInt32Property"},
            {"MControlFlags", 0x48, "StructProperty"},
            {"bDisabled", 0x68, "BoolProperty"},
            {"PositionSolverIterationCount", 0x69, "Int8Property"},
            {"VelocitySolverIterationCount", 0x6A, "Int8Property"},
            {"ProjectionSolverIterationCount", 0x6B, "Int8Property"},
        }};
    };

    struct ChaosVDParticleDynamics
    {
        static constexpr std::string_view Name = "ChaosVDParticleDynamics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MAcceleration = 0x10;
            static constexpr std::uintptr_t MAngularAcceleration = 0x28;
            static constexpr std::uintptr_t MLinearImpulseVelocity = 0x40;
            static constexpr std::uintptr_t MAngularImpulseVelocity = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MAcceleration", 0x10, "StructProperty"},
            {"MAngularAcceleration", 0x28, "StructProperty"},
            {"MLinearImpulseVelocity", 0x40, "StructProperty"},
            {"MAngularImpulseVelocity", 0x58, "StructProperty"},
        }};
    };

    struct ChaosVDParticleMassProps
    {
        static constexpr std::string_view Name = "ChaosVDParticleMassProps";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MCenterOfMass = 0x10;
            static constexpr std::uintptr_t MRotationOfMass = 0x30;
            static constexpr std::uintptr_t MI = 0x50;
            static constexpr std::uintptr_t MInvI = 0x68;
            static constexpr std::uintptr_t MM = 0x80;
            static constexpr std::uintptr_t MInvM = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MCenterOfMass", 0x10, "StructProperty"},
            {"MRotationOfMass", 0x30, "StructProperty"},
            {"MI", 0x50, "StructProperty"},
            {"MInvI", 0x68, "StructProperty"},
            {"MM", 0x80, "DoubleProperty"},
            {"MInvM", 0x88, "DoubleProperty"},
        }};
    };

    struct ChaosVDParticleMetadata
    {
        static constexpr std::string_view Name = "ChaosVDParticleMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerName = 0x0;
            static constexpr std::uintptr_t ComponentName = 0x4;
            static constexpr std::uintptr_t BoneName = 0x8;
            static constexpr std::uintptr_t Index = 0xC;
            static constexpr std::uintptr_t MapAssetPath = 0x10;
            static constexpr std::uintptr_t OwnerAssetPath = 0x18;
            static constexpr std::uintptr_t MetaDataId = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OwnerName", 0x0, "NameProperty"},
            {"ComponentName", 0x4, "NameProperty"},
            {"BoneName", 0x8, "NameProperty"},
            {"Index", 0xC, "IntProperty"},
            {"MapAssetPath", 0x10, "StructProperty"},
            {"OwnerAssetPath", 0x18, "StructProperty"},
            {"MetaDataId", 0x20, "UInt64Property"},
        }};
    };

    struct ChaosVDParticlePairMidPhase
    {
        static constexpr std::string_view Name = "ChaosVDParticlePairMidPhase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverId = 0x0;
            static constexpr std::uintptr_t MidPhaseType = 0x4;
            static constexpr std::uintptr_t bIsActive = 0x5;
            static constexpr std::uintptr_t bIsCCD = 0x5;
            static constexpr std::uintptr_t bIsCCDActive = 0x5;
            static constexpr std::uintptr_t bIsModified = 0x5;
            static constexpr std::uintptr_t bIsSleeping = 0x5;
            static constexpr std::uintptr_t LastUsedEpoch = 0x8;
            static constexpr std::uintptr_t Particle0Idx = 0xC;
            static constexpr std::uintptr_t Particle1Idx = 0x10;
            static constexpr std::uintptr_t Constraints = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SolverId", 0x0, "IntProperty"},
            {"MidPhaseType", 0x4, "EnumProperty"},
            {"bIsActive", 0x5, "BoolProperty"},
            {"bIsCCD", 0x5, "BoolProperty"},
            {"bIsCCDActive", 0x5, "BoolProperty"},
            {"bIsModified", 0x5, "BoolProperty"},
            {"bIsSleeping", 0x5, "BoolProperty"},
            {"LastUsedEpoch", 0x8, "IntProperty"},
            {"Particle0Idx", 0xC, "IntProperty"},
            {"Particle1Idx", 0x10, "IntProperty"},
            {"Constraints", 0x18, "ArrayProperty"},
        }};
    };

    struct ChaosVDParticlePositionRotation
    {
        static constexpr std::string_view Name = "ChaosVDParticlePositionRotation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MX = 0x10;
            static constexpr std::uintptr_t MR = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MX", 0x10, "StructProperty"},
            {"MR", 0x30, "StructProperty"},
        }};
    };

    struct ChaosVDParticleVelocities
    {
        static constexpr std::string_view Name = "ChaosVDParticleVelocities";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MV = 0x10;
            static constexpr std::uintptr_t MW = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MV", 0x10, "StructProperty"},
            {"MW", 0x28, "StructProperty"},
        }};
    };

    struct ChaosVDQueryDataWrapper
    {
        static constexpr std::string_view Name = "ChaosVDQueryDataWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t ParentQueryID = 0x4;
            static constexpr std::uintptr_t WorldSolverID = 0x8;
            static constexpr std::uintptr_t bIsRetryQuery = 0xC;
            static constexpr std::uintptr_t GeometryOrientation = 0x20;
            static constexpr std::uintptr_t Type = 0x40;
            static constexpr std::uintptr_t Mode = 0x44;
            static constexpr std::uintptr_t StartLocation = 0x48;
            static constexpr std::uintptr_t EndLocation = 0x60;
            static constexpr std::uintptr_t CollisionChannel = 0x78;
            static constexpr std::uintptr_t CollisionQueryParams = 0x80;
            static constexpr std::uintptr_t CollisionResponseParams = 0xE0;
            static constexpr std::uintptr_t CollisionObjectQueryParams = 0x120;
            static constexpr std::uintptr_t Hits = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ID", 0x0, "IntProperty"},
            {"ParentQueryID", 0x4, "IntProperty"},
            {"WorldSolverID", 0x8, "IntProperty"},
            {"bIsRetryQuery", 0xC, "BoolProperty"},
            {"GeometryOrientation", 0x20, "StructProperty"},
            {"Type", 0x40, "EnumProperty"},
            {"Mode", 0x44, "EnumProperty"},
            {"StartLocation", 0x48, "StructProperty"},
            {"EndLocation", 0x60, "StructProperty"},
            {"CollisionChannel", 0x78, "IntProperty"},
            {"CollisionQueryParams", 0x80, "StructProperty"},
            {"CollisionResponseParams", 0xE0, "StructProperty"},
            {"CollisionObjectQueryParams", 0x120, "StructProperty"},
            {"Hits", 0x150, "ArrayProperty"},
        }};
    };

    struct ChaosVDQueryFastData
    {
        static constexpr std::string_view Name = "ChaosVDQueryFastData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Dir = 0x10;
            static constexpr std::uintptr_t InvDir = 0x28;
            static constexpr std::uintptr_t CurrentLength = 0x40;
            static constexpr std::uintptr_t InvCurrentLength = 0x48;
            static constexpr std::uintptr_t bParallel0 = 0x50;
            static constexpr std::uintptr_t bParallel1 = 0x50;
            static constexpr std::uintptr_t bParallel2 = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Dir", 0x10, "StructProperty"},
            {"InvDir", 0x28, "StructProperty"},
            {"CurrentLength", 0x40, "DoubleProperty"},
            {"InvCurrentLength", 0x48, "DoubleProperty"},
            {"bParallel0", 0x50, "BoolProperty"},
            {"bParallel1", 0x50, "BoolProperty"},
            {"bParallel2", 0x50, "BoolProperty"},
        }};
    };

    struct ChaosVDQueryHitData
    {
        static constexpr std::string_view Name = "ChaosVDQueryHitData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Distance = 0x10;
            static constexpr std::uintptr_t FaceIdx = 0x14;
            static constexpr std::uintptr_t Flags = 0x18;
            static constexpr std::uintptr_t WorldPosition = 0x20;
            static constexpr std::uintptr_t WorldNormal = 0x38;
            static constexpr std::uintptr_t FaceNormal = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Distance", 0x10, "FloatProperty"},
            {"FaceIdx", 0x14, "IntProperty"},
            {"Flags", 0x18, "UInt16Property"},
            {"WorldPosition", 0x20, "StructProperty"},
            {"WorldNormal", 0x38, "StructProperty"},
            {"FaceNormal", 0x50, "StructProperty"},
        }};
    };

    struct ChaosVDQueryVisitStep
    {
        static constexpr std::string_view Name = "ChaosVDQueryVisitStep";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x14;
            static constexpr std::uintptr_t ShapeIndex = 0x18;
            static constexpr std::uintptr_t ParticleIndex = 0x1C;
            static constexpr std::uintptr_t ParticleTransform = 0x20;
            static constexpr std::uintptr_t QueryFastData = 0x80;
            static constexpr std::uintptr_t HitType = 0xD8;
            static constexpr std::uintptr_t HitData = 0xE0;
            static constexpr std::uintptr_t RejectReason = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Type", 0x14, "EnumProperty"},
            {"ShapeIndex", 0x18, "UInt32Property"},
            {"ParticleIndex", 0x1C, "IntProperty"},
            {"ParticleTransform", 0x20, "StructProperty"},
            {"QueryFastData", 0x80, "StructProperty"},
            {"HitType", 0xD8, "EnumProperty"},
            {"HitData", 0xE0, "StructProperty"},
            {"RejectReason", 0x148, "EnumProperty"},
        }};
    };

    struct ChaosVDSceneQueriesDataContainer
    {
        static constexpr std::string_view Name = "ChaosVDSceneQueriesDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosVDShapeCollisionData
    {
        static constexpr std::string_view Name = "ChaosVDShapeCollisionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionTraceType = 0x0;
            static constexpr std::uintptr_t bIsProbe = 0x4;
            static constexpr std::uintptr_t bQueryCollision = 0x4;
            static constexpr std::uintptr_t bSimCollision = 0x4;
            static constexpr std::uintptr_t bIsComplex = 0x38;
            static constexpr std::uintptr_t bIsValid = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CollisionTraceType", 0x0, "EnumProperty"},
            {"bIsProbe", 0x4, "BoolProperty"},
            {"bQueryCollision", 0x4, "BoolProperty"},
            {"bSimCollision", 0x4, "BoolProperty"},
            {"bIsComplex", 0x38, "BoolProperty"},
            {"bIsValid", 0x39, "BoolProperty"},
        }};
    };

    struct ChaosVDStartRecordingCommandMessage
    {
        static constexpr std::string_view Name = "ChaosVDStartRecordingCommandMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StartRecordingCommandMessage";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannelsEnabledOverrideList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataChannelsEnabledOverrideList", 0x28, "ArrayProperty"},
        }};
    };

    struct ChaosVDVSmooth
    {
        static constexpr std::string_view Name = "ChaosVDVSmooth";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosVDWrapperDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MV = 0x10;
            static constexpr std::uintptr_t MW = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MV", 0x10, "StructProperty"},
            {"MW", 0x28, "StructProperty"},
        }};
    };

    struct ChaosVDWrapperDataBase
    {
        static constexpr std::string_view Name = "ChaosVDWrapperDataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasValidData", 0x8, "BoolProperty"},
        }};
    };

}
