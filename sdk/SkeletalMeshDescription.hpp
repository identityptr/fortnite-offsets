#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SkeletalMeshDescription
{
    struct BoneId
    {
        static constexpr std::string_view Name = "BoneId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

    struct SkeletalMeshDescription
    {
        static constexpr std::string_view Name = "SkeletalMeshDescription";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshDescriptionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SourceGeometryPartID
    {
        static constexpr std::string_view Name = "SourceGeometryPartID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ElementID";
        struct Offsets
        {
            static constexpr std::uintptr_t IDValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IDValue", 0x0, "IntProperty"},
        }};
    };

}
