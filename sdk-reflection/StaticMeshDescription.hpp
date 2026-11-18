#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StaticMeshDescription
{
    struct StaticMeshDescription
    {
        static constexpr std::string_view Name = "StaticMeshDescription";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDescriptionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "CreateCube",
            "GetVertexInstanceUV",
            "SetPolygonGroupMaterialSlotName",
            "SetVertexInstanceUV",
        }};
    };

    struct UVMapSettings
    {
        static constexpr std::string_view Name = "UVMapSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x0;
            static constexpr std::uintptr_t UVTile = 0x18;
            static constexpr std::uintptr_t Position = 0x28;
            static constexpr std::uintptr_t Rotation = 0x40;
            static constexpr std::uintptr_t Scale = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Size", 0x0, "StructProperty"},
            {"UVTile", 0x18, "StructProperty"},
            {"Position", 0x28, "StructProperty"},
            {"Rotation", 0x40, "StructProperty"},
            {"Scale", 0x58, "StructProperty"},
        }};
    };

}
