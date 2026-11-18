#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HierarchyTableAnimationRuntime
{
    struct AnimNode_BlendProfileLayeredBlend
    {
        static constexpr std::string_view Name = "AnimNode_BlendProfileLayeredBlend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePose = 0x10;
            static constexpr std::uintptr_t BlendPose = 0x20;
            static constexpr std::uintptr_t BlendProfileAsset = 0x30;
            static constexpr std::uintptr_t RotationBlendSpace = 0x38;
            static constexpr std::uintptr_t bCustomCurveBlending = 0x39;
            static constexpr std::uintptr_t CurveBlendingOption = 0x3A;
            static constexpr std::uintptr_t SkeletonGuid = 0x3C;
            static constexpr std::uintptr_t VirtualBoneGuid = 0x4C;
            static constexpr std::uintptr_t MaskTableGuid = 0x5C;
            static constexpr std::uintptr_t BlendWeight = 0x70;
            static constexpr std::uintptr_t bBlendRootMotionBasedOnRootBone = 0x74;
            static constexpr std::uintptr_t CachedBlendProfile = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"BasePose", 0x10, "StructProperty"},
            {"BlendPose", 0x20, "StructProperty"},
            {"BlendProfileAsset", 0x30, "ObjectProperty"},
            {"RotationBlendSpace", 0x38, "EnumProperty"},
            {"bCustomCurveBlending", 0x39, "BoolProperty"},
            {"CurveBlendingOption", 0x3A, "ByteProperty"},
            {"SkeletonGuid", 0x3C, "StructProperty"},
            {"VirtualBoneGuid", 0x4C, "StructProperty"},
            {"MaskTableGuid", 0x5C, "StructProperty"},
            {"BlendWeight", 0x70, "FloatProperty"},
            {"bBlendRootMotionBasedOnRootBone", 0x74, "BoolProperty"},
            {"CachedBlendProfile", 0x98, "ObjectProperty"},
        }};
    };

    struct BlendProfileStandalone
    {
        static constexpr std::string_view Name = "BlendProfileStandalone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x28;
            static constexpr std::uintptr_t CachedBlendProfileData = 0x30;
            static constexpr std::uintptr_t skeleton = 0x98;
            static constexpr std::uintptr_t SkeletonHierarchyGuid = 0xA0;
            static constexpr std::uintptr_t SkeletonVirtualBonesHierarchyGuid = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Type", 0x28, "EnumProperty"},
            {"CachedBlendProfileData", 0x30, "StructProperty"},
            {"skeleton", 0x98, "ObjectProperty"},
            {"SkeletonHierarchyGuid", 0xA0, "StructProperty"},
            {"SkeletonVirtualBonesHierarchyGuid", 0xB0, "StructProperty"},
        }};
    };

    struct BlendProfileStandaloneCachedData
    {
        static constexpr std::string_view Name = "BlendProfileStandaloneCachedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t skeleton = 0x0;
            static constexpr std::uintptr_t BoneBlendWeights = 0x8;
            static constexpr std::uintptr_t SerializedCurveBlendWeights = 0x18;
            static constexpr std::uintptr_t SerializedAttributeBlendWeights = 0x28;
            static constexpr std::uintptr_t Mode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"skeleton", 0x0, "ObjectProperty"},
            {"BoneBlendWeights", 0x8, "ArrayProperty"},
            {"SerializedCurveBlendWeights", 0x18, "ArrayProperty"},
            {"SerializedAttributeBlendWeights", 0x28, "ArrayProperty"},
            {"Mode", 0x38, "EnumProperty"},
        }};
    };

    struct HierarchyTable_ElementType_Mask
    {
        static constexpr std::string_view Name = "HierarchyTable_ElementType_Mask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "HierarchyTable_ElementType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "FloatProperty"},
        }};
    };

    struct HierarchyTable_TablePayloadType_Skeleton
    {
        static constexpr std::string_view Name = "HierarchyTable_TablePayloadType_Skeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "HierarchyTable_TablePayloadType";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryType = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryType", 0x0, "EnumProperty"},
        }};
    };

    struct HierarchyTable_TableType_Skeleton
    {
        static constexpr std::string_view Name = "HierarchyTable_TableType_Skeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "HierarchyTable_TableType";
        struct Offsets
        {
            static constexpr std::uintptr_t skeleton = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"skeleton", 0x0, "ObjectProperty"},
        }};
    };

    struct MaskedAttributeWeightSerialised
    {
        static constexpr std::string_view Name = "MaskedAttributeWeightSerialised";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNamespace = 0x0;
            static constexpr std::uintptr_t AttributeName = 0x4;
            static constexpr std::uintptr_t AttributeIndex = 0x8;
            static constexpr std::uintptr_t Weight = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttributeNamespace", 0x0, "NameProperty"},
            {"AttributeName", 0x4, "NameProperty"},
            {"AttributeIndex", 0x8, "IntProperty"},
            {"Weight", 0xC, "FloatProperty"},
        }};
    };

    struct MaskedCurveWeightSerialised
    {
        static constexpr std::string_view Name = "MaskedCurveWeightSerialised";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName = 0x0;
            static constexpr std::uintptr_t Weight = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurveName", 0x0, "NameProperty"},
            {"Weight", 0x4, "FloatProperty"},
        }};
    };

}
