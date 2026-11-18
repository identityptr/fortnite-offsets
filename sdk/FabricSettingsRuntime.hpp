#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricSettingsRuntime
{
    struct FabricClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "FabricClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
