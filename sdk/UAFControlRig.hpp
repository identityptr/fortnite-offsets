#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UAFControlRig
{
    struct UAFInputPoseValueBundleDataSource
    {
        static constexpr std::string_view Name = "UAFInputPoseValueBundleDataSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LabelBinding = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LabelBinding", 0x38, "ObjectProperty"},
        }};
    };

}
