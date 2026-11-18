#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ShellMeshShaders
{
    struct ShellMeshMaterialExpression
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpression";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionExternalCodeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

    struct ShellMeshMaterialExpressionLocalShellOffset
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpressionLocalShellOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShellMeshMaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

    struct ShellMeshMaterialExpressionLocalShellVector
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpressionLocalShellVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShellMeshMaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

    struct ShellMeshMaterialExpressionNormalizedShellLayer
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpressionNormalizedShellLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShellMeshMaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

    struct ShellMeshMaterialExpressionShellCount
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpressionShellCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShellMeshMaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

    struct ShellMeshMaterialExpressionShellLayerIndex
    {
        static constexpr std::string_view Name = "ShellMeshMaterialExpressionShellLayerIndex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShellMeshMaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalCodeIdentifiers = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalCodeIdentifiers", 0xB0, "ArrayProperty"},
        }};
    };

}
