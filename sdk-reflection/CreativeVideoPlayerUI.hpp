#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeVideoPlayerUI
{
    struct CreativeVideoPlayerFullScreenWidget
    {
        static constexpr std::string_view Name = "CreativeVideoPlayerFullScreenWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBus = 0x4B8;
            static constexpr std::uintptr_t SoundClass = 0x4C0;
            static constexpr std::uintptr_t HoldToSkipAction = 0x4C8;
            static constexpr std::uintptr_t Button_Skip = 0x4D8;
            static constexpr std::uintptr_t Image_VideoTexture = 0x4E0;
            static constexpr std::uintptr_t SkipButtonTimeout = 0x4E8;
            static constexpr std::uintptr_t SoundComponent = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourceBus", 0x4B8, "ObjectProperty"},
            {"SoundClass", 0x4C0, "ObjectProperty"},
            {"HoldToSkipAction", 0x4C8, "StructProperty"},
            {"Button_Skip", 0x4D8, "ObjectProperty"},
            {"Image_VideoTexture", 0x4E0, "ObjectProperty"},
            {"SkipButtonTimeout", 0x4E8, "FloatProperty"},
            {"SoundComponent", 0x508, "ObjectProperty"},
        }};
    };

}
