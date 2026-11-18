#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DatasmithCore
{
    struct DatasmithClothAssetFactory
    {
        static constexpr std::string_view Name = "DatasmithClothAssetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DatasmithClothComponentFactory
    {
        static constexpr std::string_view Name = "DatasmithClothComponentFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DatasmithMesh
    {
        static constexpr std::string_view Name = "DatasmithMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshName = 0x28;
            static constexpr std::uintptr_t bIsCollisionMesh = 0x38;
            static constexpr std::uintptr_t SourceModels = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshName", 0x28, "StrProperty"},
            {"bIsCollisionMesh", 0x38, "BoolProperty"},
            {"SourceModels", 0x40, "ArrayProperty"},
        }};
    };

}
