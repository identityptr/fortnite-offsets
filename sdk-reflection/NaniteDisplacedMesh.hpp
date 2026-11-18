#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NaniteDisplacedMesh
{
    struct NaniteDisplacedMesh
    {
        static constexpr std::string_view Name = "NaniteDisplacedMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NaniteDisplacedMeshComponent
    {
        static constexpr std::string_view Name = "NaniteDisplacedMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplacedMesh = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisplacedMesh", 0x6A0, "ObjectProperty"},
        }};
    };

    struct NaniteDisplacedMeshDisplacementMap
    {
        static constexpr std::string_view Name = "NaniteDisplacedMeshDisplacementMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x0;
            static constexpr std::uintptr_t Magnitude = 0x8;
            static constexpr std::uintptr_t Center = 0xC;
            static constexpr std::uintptr_t UVChannel = 0x10;
            static constexpr std::uintptr_t MaskUVChannel = 0x14;
            static constexpr std::uintptr_t UVScale = 0x18;
            static constexpr std::uintptr_t UVBias = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Texture", 0x0, "ObjectProperty"},
            {"Magnitude", 0x8, "FloatProperty"},
            {"Center", 0xC, "FloatProperty"},
            {"UVChannel", 0x10, "IntProperty"},
            {"MaskUVChannel", 0x14, "IntProperty"},
            {"UVScale", 0x18, "StructProperty"},
            {"UVBias", 0x20, "StructProperty"},
        }};
    };

    struct NaniteDisplacedMeshParams
    {
        static constexpr std::string_view Name = "NaniteDisplacedMeshParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
