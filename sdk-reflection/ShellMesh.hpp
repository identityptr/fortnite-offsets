#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ShellMesh
{
    struct OptimusShellMeshWriteDataProvider
    {
        static constexpr std::string_view Name = "OptimusShellMeshWriteDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ShellMesh = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShellMesh", 0x28, "ObjectProperty"},
        }};
    };

    struct ShellMeshAsset
    {
        static constexpr std::string_view Name = "ShellMeshAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseSkeletalMeshAsset = 0x28;
            static constexpr std::uintptr_t TotalShellDepth = 0x30;
            static constexpr std::uintptr_t ShellLods = 0x38;
            static constexpr std::uintptr_t EnabledByPlatform = 0x48;
            static constexpr std::uintptr_t bCastContactShadow = 0x60;
            static constexpr std::uintptr_t bCastShadows = 0x60;
            static constexpr std::uintptr_t bRequiresAntiAliasing = 0x60;
            static constexpr std::uintptr_t RuntimeResources = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"BaseSkeletalMeshAsset", 0x28, "ObjectProperty"},
            {"TotalShellDepth", 0x30, "FloatProperty"},
            {"ShellLods", 0x38, "ArrayProperty"},
            {"EnabledByPlatform", 0x48, "StructProperty"},
            {"bCastContactShadow", 0x60, "BoolProperty"},
            {"bCastShadows", 0x60, "BoolProperty"},
            {"bRequiresAntiAliasing", 0x60, "BoolProperty"},
            {"RuntimeResources", 0x68, "OptionalProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetShellCount",
            "GetShellDepth",
        }};
    };

    struct ShellMeshAssetResources
    {
        static constexpr std::string_view Name = "ShellMeshAssetResources";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshDeformer = 0x0;
            static constexpr std::uintptr_t ShellMaterials = 0x8;
            static constexpr std::uintptr_t BaseLayerMaterialOverrides = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshDeformer", 0x0, "ObjectProperty"},
            {"ShellMaterials", 0x8, "ArrayProperty"},
            {"BaseLayerMaterialOverrides", 0x18, "ArrayProperty"},
        }};
    };

    struct ShellMeshLodProperties
    {
        static constexpr std::string_view Name = "ShellMeshLodProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShellCount = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShellCount", 0x0, "StructProperty"},
        }};
    };

    struct ShellMeshOptimusComponentSource
    {
        static constexpr std::string_view Name = "ShellMeshOptimusComponentSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComponentSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ShellMeshOptimusDataInterfaceWrite
    {
        static constexpr std::string_view Name = "ShellMeshOptimusDataInterfaceWrite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OptimusComputeDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ShellMeshSkeletalMeshComponent
    {
        static constexpr std::string_view Name = "ShellMeshSkeletalMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshComponentBudgeted";
        struct Offsets
        {
            static constexpr std::uintptr_t ShellMeshAsset = 0x1020;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShellMeshAsset", 0x1020, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AreShellsEnabled",
            "GetShellCount",
            "GetShellDepth",
            "SetShellMeshAsset",
        }};
    };

}
