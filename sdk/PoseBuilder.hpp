#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PoseBuilder
{
    struct PoseBuilderAsset
    {
        static constexpr std::string_view Name = "PoseBuilderAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyPoses = 0x28;
            static constexpr std::uintptr_t EditorState = 0x38;
            static constexpr std::uintptr_t bMigratedLegacyPCOnLoad = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KeyPoses", 0x28, "ArrayProperty"},
            {"EditorState", 0x38, "StructProperty"},
            {"bMigratedLegacyPCOnLoad", 0x370, "BoolProperty"},
        }};
    };

}
