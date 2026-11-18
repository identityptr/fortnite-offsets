#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimationLayering
{
    struct AnimNode_BoneMask
    {
        static constexpr std::string_view Name = "AnimNode_BoneMask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x10;
            static constexpr std::uintptr_t BlendPoses = 0x20;
            static constexpr std::uintptr_t BlendWeights = 0x30;
            static constexpr std::uintptr_t BoneMask = 0x40;
            static constexpr std::uintptr_t BoneMaskDefinitionDataAsset = 0x50;
            static constexpr std::uintptr_t BodyParts = 0x58;
            static constexpr std::uintptr_t CurveBlendOption = 0x68;
            static constexpr std::uintptr_t bProcessMeshSpaceAsRootSpace = 0x69;
            static constexpr std::uintptr_t LODThreshold = 0x6C;
            static constexpr std::uintptr_t bUpdateSkeletonDataOnDemand = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BasePose", 0x10, "StructProperty"},
            {"BlendPoses", 0x20, "ArrayProperty"},
            {"BlendWeights", 0x30, "ArrayProperty"},
            {"BoneMask", 0x40, "StructProperty"},
            {"BoneMaskDefinitionDataAsset", 0x50, "ObjectProperty"},
            {"BodyParts", 0x58, "ArrayProperty"},
            {"CurveBlendOption", 0x68, "ByteProperty"},
            {"bProcessMeshSpaceAsRootSpace", 0x69, "BoolProperty"},
            {"LODThreshold", 0x6C, "IntProperty"},
            {"bUpdateSkeletonDataOnDemand", 0x70, "BoolProperty"},
        }};
    };

    struct AnimNode_CopyBoneAdvanced
    {
        static constexpr std::string_view Name = "AnimNode_CopyBoneAdvanced";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBone = 0xC8;
            static constexpr std::uintptr_t TargetBone = 0xD4;
            static constexpr std::uintptr_t TranslationWeight = 0xE0;
            static constexpr std::uintptr_t RotationWeight = 0xF8;
            static constexpr std::uintptr_t ScaleWeight = 0xFC;
            static constexpr std::uintptr_t ControlSpace = 0x100;
            static constexpr std::uintptr_t TranslationSpaceBone = 0x104;
            static constexpr std::uintptr_t bTranslationInCustomBoneSpace = 0x110;
            static constexpr std::uintptr_t bPropagateToChildren = 0x111;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SourceBone", 0xC8, "StructProperty"},
            {"TargetBone", 0xD4, "StructProperty"},
            {"TranslationWeight", 0xE0, "StructProperty"},
            {"RotationWeight", 0xF8, "FloatProperty"},
            {"ScaleWeight", 0xFC, "FloatProperty"},
            {"ControlSpace", 0x100, "ByteProperty"},
            {"TranslationSpaceBone", 0x104, "StructProperty"},
            {"bTranslationInCustomBoneSpace", 0x110, "BoolProperty"},
            {"bPropagateToChildren", 0x111, "BoolProperty"},
        }};
    };

    struct AnimNode_CopyBoneMotion
    {
        static constexpr std::string_view Name = "AnimNode_CopyBoneMotion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_SkeletalControlBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0xC8;
            static constexpr std::uintptr_t BasePoseReference = 0xD8;
            static constexpr std::uintptr_t bUseBasePose = 0xE8;
            static constexpr std::uintptr_t PoseHistoryTag = 0xEC;
            static constexpr std::uintptr_t Delay = 0xF0;
            static constexpr std::uintptr_t SourceBone = 0xF4;
            static constexpr std::uintptr_t BoneToModify = 0x100;
            static constexpr std::uintptr_t CopySpace = 0x10C;
            static constexpr std::uintptr_t bUseRootSpace = 0x118;
            static constexpr std::uintptr_t ApplySpace = 0x11C;
            static constexpr std::uintptr_t TranslationOffset = 0x128;
            static constexpr std::uintptr_t RotationOffset = 0x140;
            static constexpr std::uintptr_t RotationPivot = 0x158;
            static constexpr std::uintptr_t CurvePrefix = 0x170;
            static constexpr std::uintptr_t TargetCurveName = 0x174;
            static constexpr std::uintptr_t TargetCurveScale = 0x178;
            static constexpr std::uintptr_t TargetCurveComponent = 0x17C;
            static constexpr std::uintptr_t TargetCurveRotationAxis = 0x17D;
            static constexpr std::uintptr_t TranslationX_CurveName = 0x180;
            static constexpr std::uintptr_t TranslationY_CurveName = 0x184;
            static constexpr std::uintptr_t TranslationZ_CurveName = 0x188;
            static constexpr std::uintptr_t RotationRoll_CurveName = 0x18C;
            static constexpr std::uintptr_t RotationPitch_CurveName = 0x190;
            static constexpr std::uintptr_t RotationYaw_CurveName = 0x194;
            static constexpr std::uintptr_t TranslationScale = 0x198;
            static constexpr std::uintptr_t TranslationSmoothingTime = 0x1B0;
            static constexpr std::uintptr_t TranslationRemapCurve = 0x1B8;
            static constexpr std::uintptr_t RotationScale = 0x1C0;
            static constexpr std::uintptr_t RotationSmoothingTime = 0x1C4;
            static constexpr std::uintptr_t RotationRemapCurve = 0x1C8;
            static constexpr std::uintptr_t bDeltaSmoothing = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"BasePose", 0xC8, "StructProperty"},
            {"BasePoseReference", 0xD8, "StructProperty"},
            {"bUseBasePose", 0xE8, "BoolProperty"},
            {"PoseHistoryTag", 0xEC, "NameProperty"},
            {"Delay", 0xF0, "FloatProperty"},
            {"SourceBone", 0xF4, "StructProperty"},
            {"BoneToModify", 0x100, "StructProperty"},
            {"CopySpace", 0x10C, "StructProperty"},
            {"bUseRootSpace", 0x118, "BoolProperty"},
            {"ApplySpace", 0x11C, "StructProperty"},
            {"TranslationOffset", 0x128, "StructProperty"},
            {"RotationOffset", 0x140, "StructProperty"},
            {"RotationPivot", 0x158, "StructProperty"},
            {"CurvePrefix", 0x170, "NameProperty"},
            {"TargetCurveName", 0x174, "NameProperty"},
            {"TargetCurveScale", 0x178, "FloatProperty"},
            {"TargetCurveComponent", 0x17C, "EnumProperty"},
            {"TargetCurveRotationAxis", 0x17D, "ByteProperty"},
            {"TranslationX_CurveName", 0x180, "NameProperty"},
            {"TranslationY_CurveName", 0x184, "NameProperty"},
            {"TranslationZ_CurveName", 0x188, "NameProperty"},
            {"RotationRoll_CurveName", 0x18C, "NameProperty"},
            {"RotationPitch_CurveName", 0x190, "NameProperty"},
            {"RotationYaw_CurveName", 0x194, "NameProperty"},
            {"TranslationScale", 0x198, "StructProperty"},
            {"TranslationSmoothingTime", 0x1B0, "FloatProperty"},
            {"TranslationRemapCurve", 0x1B8, "ObjectProperty"},
            {"RotationScale", 0x1C0, "FloatProperty"},
            {"RotationSmoothingTime", 0x1C4, "FloatProperty"},
            {"RotationRemapCurve", 0x1C8, "ObjectProperty"},
            {"bDeltaSmoothing", 0x1D0, "BoolProperty"},
        }};
    };

    struct BoneMask
    {
        static constexpr std::string_view Name = "BoneMask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneMaskMap = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneMaskMap", 0x0, "MapProperty"},
        }};
    };

    struct BoneMaskBodyPartDefinition
    {
        static constexpr std::string_view Name = "BoneMaskBodyPartDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BranchFilters = 0x8;
            static constexpr std::uintptr_t SkeletonPoseBoneWeights = 0x18;
            static constexpr std::uintptr_t SkeletonPoseChildBoneIndices = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BranchFilters", 0x8, "ArrayProperty"},
            {"SkeletonPoseBoneWeights", 0x18, "ArrayProperty"},
            {"SkeletonPoseChildBoneIndices", 0x28, "ArrayProperty"},
        }};
    };

    struct BoneMaskBodyPartNameContainer
    {
        static constexpr std::string_view Name = "BoneMaskBodyPartNameContainer";
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

    struct BoneMaskDefinition
    {
        static constexpr std::string_view Name = "BoneMaskDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyPartDefinitions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BodyPartDefinitions", 0x0, "ArrayProperty"},
        }};
    };

    struct BoneMaskDefinitionDataAsset
    {
        static constexpr std::string_view Name = "BoneMaskDefinitionDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneMaskDefinition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneMaskDefinition", 0x28, "StructProperty"},
        }};
    };

    struct BoneMaskEntry
    {
        static constexpr std::string_view Name = "BoneMaskEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalSpaceWeight = 0x0;
            static constexpr std::uintptr_t MeshSpaceWeight = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalSpaceWeight", 0x0, "FloatProperty"},
            {"MeshSpaceWeight", 0x4, "FloatProperty"},
        }};
    };

    struct BoneMaskPerBoneData
    {
        static constexpr std::string_view Name = "BoneMaskPerBoneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletonPoseBoneIndex = 0x0;
            static constexpr std::uintptr_t BlendWeight = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SkeletonPoseBoneIndex", 0x0, "IntProperty"},
            {"BlendWeight", 0x4, "FloatProperty"},
        }};
    };

    struct BoneMaskUpdateMultiParam
    {
        static constexpr std::string_view Name = "BoneMaskUpdateMultiParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t LocalSpaceWeight = 0x4;
            static constexpr std::uintptr_t MeshSpaceWeight = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"LocalSpaceWeight", 0x4, "FloatProperty"},
            {"MeshSpaceWeight", 0x8, "FloatProperty"},
        }};
    };

}
