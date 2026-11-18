#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_LinkCodeMutatorRuntime
{
    struct LinkCodeMutatorDevice
    {
        static constexpr std::string_view Name = "LinkCodeMutatorDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t MutatorsToApply = 0xB58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MutatorsToApply", 0xB58, "ArrayProperty"},
        }};
    };

}
