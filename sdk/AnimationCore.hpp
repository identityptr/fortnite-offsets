#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimationCore
{
    struct AimConstraintDescription
    {
        static constexpr std::string_view Name = "AimConstraintDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ConstraintDescriptionEx";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAt_Axis = 0x10;
            static constexpr std::uintptr_t LookUp_Axis = 0x30;
            static constexpr std::uintptr_t bUseLookUp = 0x50;
            static constexpr std::uintptr_t LookUpTarget = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LookAt_Axis", 0x10, "StructProperty"},
            {"LookUp_Axis", 0x30, "StructProperty"},
            {"bUseLookUp", 0x50, "BoolProperty"},
            {"LookUpTarget", 0x58, "StructProperty"},
        }};
    };

    struct AnimationDataSourceRegistry
    {
        static constexpr std::string_view Name = "AnimationDataSourceRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DataSources = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataSources", 0x28, "MapProperty"},
        }};
    };

    struct Axis
    {
        static constexpr std::string_view Name = "Axis";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Axis = 0x0;
            static constexpr std::uintptr_t bInLocalSpace = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Axis", 0x0, "StructProperty"},
            {"bInLocalSpace", 0x18, "BoolProperty"},
        }};
    };

    struct CCDIKChainLink
    {
        static constexpr std::string_view Name = "CCDIKChainLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConstraintData
    {
        static constexpr std::string_view Name = "ConstraintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Constraint = 0x0;
            static constexpr std::uintptr_t Weight = 0x10;
            static constexpr std::uintptr_t bMaintainOffset = 0x14;
            static constexpr std::uintptr_t Offset = 0x20;
            static constexpr std::uintptr_t CurrentTransform = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Constraint", 0x0, "StructProperty"},
            {"Weight", 0x10, "FloatProperty"},
            {"bMaintainOffset", 0x14, "BoolProperty"},
            {"Offset", 0x20, "StructProperty"},
            {"CurrentTransform", 0x80, "StructProperty"},
        }};
    };

    struct ConstraintDescription
    {
        static constexpr std::string_view Name = "ConstraintDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bTranslation = 0x0;
            static constexpr std::uintptr_t bRotation = 0x1;
            static constexpr std::uintptr_t bScale = 0x2;
            static constexpr std::uintptr_t bParent = 0x3;
            static constexpr std::uintptr_t TranslationAxes = 0x4;
            static constexpr std::uintptr_t RotationAxes = 0x7;
            static constexpr std::uintptr_t ScaleAxes = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bTranslation", 0x0, "BoolProperty"},
            {"bRotation", 0x1, "BoolProperty"},
            {"bScale", 0x2, "BoolProperty"},
            {"bParent", 0x3, "BoolProperty"},
            {"TranslationAxes", 0x4, "StructProperty"},
            {"RotationAxes", 0x7, "StructProperty"},
            {"ScaleAxes", 0xA, "StructProperty"},
        }};
    };

    struct ConstraintDescriptionEx
    {
        static constexpr std::string_view Name = "ConstraintDescriptionEx";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AxesFilterOption = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AxesFilterOption", 0x8, "StructProperty"},
        }};
    };

    struct ConstraintDescriptor
    {
        static constexpr std::string_view Name = "ConstraintDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x0, "EnumProperty"},
        }};
    };

    struct ConstraintOffset
    {
        static constexpr std::string_view Name = "ConstraintOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Translation = 0x0;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t Scale = 0x40;
            static constexpr std::uintptr_t Parent = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Translation", 0x0, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"Scale", 0x40, "StructProperty"},
            {"Parent", 0x60, "StructProperty"},
        }};
    };

    struct EulerTransform
    {
        static constexpr std::string_view Name = "EulerTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x18;
            static constexpr std::uintptr_t Scale = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Rotation", 0x18, "StructProperty"},
            {"Scale", 0x30, "StructProperty"},
        }};
    };

    struct FABRIKChainLink
    {
        static constexpr std::string_view Name = "FABRIKChainLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FilterOptionPerAxis
    {
        static constexpr std::string_view Name = "FilterOptionPerAxis";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bX = 0x0;
            static constexpr std::uintptr_t bY = 0x1;
            static constexpr std::uintptr_t bZ = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bX", 0x0, "BoolProperty"},
            {"bY", 0x1, "BoolProperty"},
            {"bZ", 0x2, "BoolProperty"},
        }};
    };

    struct NodeChain
    {
        static constexpr std::string_view Name = "NodeChain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Nodes", 0x0, "ArrayProperty"},
        }};
    };

    struct NodeHierarchyData
    {
        static constexpr std::string_view Name = "NodeHierarchyData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0x0;
            static constexpr std::uintptr_t Transforms = 0x10;
            static constexpr std::uintptr_t NodeNameToIndexMapping = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Nodes", 0x0, "ArrayProperty"},
            {"Transforms", 0x10, "ArrayProperty"},
            {"NodeNameToIndexMapping", 0x20, "MapProperty"},
        }};
    };

    struct NodeHierarchyWithUserData
    {
        static constexpr std::string_view Name = "NodeHierarchyWithUserData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hierarchy = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Hierarchy", 0x8, "StructProperty"},
        }};
    };

    struct NodeObject
    {
        static constexpr std::string_view Name = "NodeObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ParentName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ParentName", 0x4, "NameProperty"},
        }};
    };

    struct TransformConstraint
    {
        static constexpr std::string_view Name = "TransformConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x0;
            static constexpr std::uintptr_t SourceNode = 0x10;
            static constexpr std::uintptr_t TargetNode = 0x14;
            static constexpr std::uintptr_t Weight = 0x18;
            static constexpr std::uintptr_t bMaintainOffset = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Operator", 0x0, "StructProperty"},
            {"SourceNode", 0x10, "NameProperty"},
            {"TargetNode", 0x14, "NameProperty"},
            {"Weight", 0x18, "FloatProperty"},
            {"bMaintainOffset", 0x1C, "BoolProperty"},
        }};
    };

    struct TransformConstraintDescription
    {
        static constexpr std::string_view Name = "TransformConstraintDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ConstraintDescriptionEx";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformType = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransformType", 0x10, "EnumProperty"},
        }};
    };

    struct TransformFilter
    {
        static constexpr std::string_view Name = "TransformFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationFilter = 0x0;
            static constexpr std::uintptr_t RotationFilter = 0x3;
            static constexpr std::uintptr_t ScaleFilter = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TranslationFilter", 0x0, "StructProperty"},
            {"RotationFilter", 0x3, "StructProperty"},
            {"ScaleFilter", 0x6, "StructProperty"},
        }};
    };

    struct TransformNoScale
    {
        static constexpr std::string_view Name = "TransformNoScale";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
        }};
    };

}
