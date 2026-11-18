#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSettingsRuntime
{
    struct SparksClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "SparksClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
            static constexpr std::uintptr_t bSynchronizeMyDanceEmotesToJamTracks = 0x40;
            static constexpr std::uintptr_t GameplayMusicVolume = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bSynchronizeMyDanceEmotesToJamTracks", 0x40, "BoolProperty"},
            {"GameplayMusicVolume", 0x44, "FloatProperty"},
        }};
    };

}
