#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SkeletalMerging
{
    struct SkeletalMergingLibrary
    {
        static constexpr std::string_view Name = "SkeletalMergingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "MergeMeshes",
            "MergeSkeletons",
        }};
    };

    struct SkeletalMeshMergeParams
    {
        static constexpr std::string_view Name = "SkeletalMeshMergeParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshSectionMappings = 0x0;
            static constexpr std::uintptr_t UVTransformsPerMesh = 0x10;
            static constexpr std::uintptr_t MeshesToMerge = 0x20;
            static constexpr std::uintptr_t StripTopLODS = 0x30;
            static constexpr std::uintptr_t bNeedsCpuAccess = 0x34;
            static constexpr std::uintptr_t bSkeletonBefore = 0x34;
            static constexpr std::uintptr_t skeleton = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MeshSectionMappings", 0x0, "ArrayProperty"},
            {"UVTransformsPerMesh", 0x10, "ArrayProperty"},
            {"MeshesToMerge", 0x20, "ArrayProperty"},
            {"StripTopLODS", 0x30, "IntProperty"},
            {"bNeedsCpuAccess", 0x34, "BoolProperty"},
            {"bSkeletonBefore", 0x34, "BoolProperty"},
            {"skeleton", 0x38, "ObjectProperty"},
        }};
    };

    struct SkeletonMergeParams
    {
        static constexpr std::string_view Name = "SkeletonMergeParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletonsToMerge = 0x0;
            static constexpr std::uintptr_t bMergeSockets = 0x10;
            static constexpr std::uintptr_t bMergeVirtualBones = 0x11;
            static constexpr std::uintptr_t bMergeCurveNames = 0x12;
            static constexpr std::uintptr_t bMergeBlendProfiles = 0x13;
            static constexpr std::uintptr_t bMergeAnimSlotGroups = 0x14;
            static constexpr std::uintptr_t bCheckSkeletonsCompatibility = 0x15;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SkeletonsToMerge", 0x0, "ArrayProperty"},
            {"bMergeSockets", 0x10, "BoolProperty"},
            {"bMergeVirtualBones", 0x11, "BoolProperty"},
            {"bMergeCurveNames", 0x12, "BoolProperty"},
            {"bMergeBlendProfiles", 0x13, "BoolProperty"},
            {"bMergeAnimSlotGroups", 0x14, "BoolProperty"},
            {"bCheckSkeletonsCompatibility", 0x15, "BoolProperty"},
        }};
    };

}
