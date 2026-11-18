#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMachineLearning
{
    struct EpicMachineLearningSettings
    {
        static constexpr std::string_view Name = "EpicMachineLearningSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ApprovedEndpointDomains = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ApprovedEndpointDomains", 0x30, "ArrayProperty"},
        }};
    };

}
