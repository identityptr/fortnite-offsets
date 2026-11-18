#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamInLobbyUI
{
    struct JamInLobbyOpenGlobalControlsSubsystem
    {
        static constexpr std::string_view Name = "JamInLobbyOpenGlobalControlsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InputAction = 0x30;
            static constexpr std::uintptr_t LocalPlayerPlayspace = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputAction", 0x30, "StructProperty"},
            {"LocalPlayerPlayspace", 0x40, "WeakObjectProperty"},
        }};
    };

}
