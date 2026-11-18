#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseTypeAssetInteropRuntime
{
    struct VerseTypeAssetInteropContainer
    {
        static constexpr std::string_view Name = "VerseTypeAssetInteropContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseAssetReflectionInteropData";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassData = 0x28;
            static constexpr std::uintptr_t FieldData = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClassData", 0x28, "StructProperty"},
            {"FieldData", 0x70, "ArrayProperty"},
        }};
    };

}
