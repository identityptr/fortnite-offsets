#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeMessages
{
    struct InterchangeResultMeshError
    {
        static constexpr std::string_view Name = "InterchangeResultMeshError";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultError";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshName", 0x70, "StrProperty"},
        }};
    };

    struct InterchangeResultMeshError_Generic
    {
        static constexpr std::string_view Name = "InterchangeResultMeshError_Generic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultMeshError";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x80, "TextProperty"},
        }};
    };

    struct InterchangeResultMeshWarning
    {
        static constexpr std::string_view Name = "InterchangeResultMeshWarning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultWarning";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshName", 0x70, "StrProperty"},
        }};
    };

    struct InterchangeResultMeshWarning_Generic
    {
        static constexpr std::string_view Name = "InterchangeResultMeshWarning_Generic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultMeshWarning";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x80, "TextProperty"},
        }};
    };

    struct InterchangeResultMeshWarning_TooManyUVs
    {
        static constexpr std::string_view Name = "InterchangeResultMeshWarning_TooManyUVs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultMeshWarning";
        struct Offsets
        {
            static constexpr std::uintptr_t ExcessUVs = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExcessUVs", 0x80, "IntProperty"},
        }};
    };

    struct InterchangeResultTextureDisplay
    {
        static constexpr std::string_view Name = "InterchangeResultTextureDisplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultDisplay_Generic";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextureName", 0x80, "StrProperty"},
        }};
    };

    struct InterchangeResultTextureDisplay_TextureFileDoNotExist
    {
        static constexpr std::string_view Name = "InterchangeResultTextureDisplay_TextureFileDoNotExist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultTextureDisplay";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialName", 0x90, "StrProperty"},
        }};
    };

    struct InterchangeResultTextureWarning
    {
        static constexpr std::string_view Name = "InterchangeResultTextureWarning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultWarning";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextureName", 0x70, "StrProperty"},
        }};
    };

}
