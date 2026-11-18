#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoInternalTesting
{
    struct JunoInternalTestingAsset
    {
        static constexpr std::string_view Name = "JunoInternalTestingAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TestMaps = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestMaps", 0x28, "ArrayProperty"},
        }};
    };

}
