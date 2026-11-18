#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaLocalizedOverlays
{
    struct EpicMediaDownloadLocalizedOverlays
    {
        static constexpr std::string_view Name = "EpicMediaDownloadLocalizedOverlays";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalizedOverlays";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaPlayer = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MediaPlayer", 0x40, "ObjectProperty"},
        }};
    };

}
