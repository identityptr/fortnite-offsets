#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMBaseBoomboxRuntime
{
    struct BoomboxEventsReceiver
    {
        static constexpr std::string_view Name = "BoomboxEventsReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FMBaseBoomboxComponent
    {
        static constexpr std::string_view Name = "FMBaseBoomboxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicEventTag = 0x108;
            static constexpr std::uintptr_t MusicEventTag_3P = 0x10C;
            static constexpr std::uintptr_t PlaylistSettingsOverridesList = 0x110;
            static constexpr std::uintptr_t AttenuationSettings = 0x120;
            static constexpr std::uintptr_t CurrentState = 0x128;
            static constexpr std::uintptr_t MusicPlayer = 0x150;
            static constexpr std::uintptr_t AudioComponent = 0x158;
            static constexpr std::uintptr_t CurrentPlaylist = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MusicEventTag", 0x108, "StructProperty"},
            {"MusicEventTag_3P", 0x10C, "StructProperty"},
            {"PlaylistSettingsOverridesList", 0x110, "ArrayProperty"},
            {"AttenuationSettings", 0x120, "ObjectProperty"},
            {"CurrentState", 0x128, "StructProperty"},
            {"MusicPlayer", 0x150, "ObjectProperty"},
            {"AudioComponent", 0x158, "ObjectProperty"},
            {"CurrentPlaylist", 0x188, "ObjectProperty"},
        }};
    };

}
