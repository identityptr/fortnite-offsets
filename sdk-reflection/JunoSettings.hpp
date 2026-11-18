#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoSettings
{
    struct JunoClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "JunoClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicVolume = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicVolume", 0x40, "FloatProperty"},
        }};
    };

}
