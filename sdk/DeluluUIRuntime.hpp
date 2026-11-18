#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeluluUIRuntime
{
    struct DeluluAnimatedHUDElementWidget
    {
        static constexpr std::string_view Name = "DeluluAnimatedHUDElementWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Anim_Intro = 0x390;
            static constexpr std::uintptr_t Anim_Outro = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Anim_Intro", 0x390, "ObjectProperty"},
            {"Anim_Outro", 0x398, "ObjectProperty"},
        }};
    };

    struct DeluluGiveUpWidget
    {
        static constexpr std::string_view Name = "DeluluGiveUpWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldDuration = 0x370;
            static constexpr std::uintptr_t InvulnerabilityGiveUpDisplayDelay = 0x374;
            static constexpr std::uintptr_t InvulnerabilityGameplayTag = 0x378;
            static constexpr std::uintptr_t KeyBindWidget = 0x380;
            static constexpr std::uintptr_t DeluluGiveUpInputComponent = 0x3B0;
            static constexpr std::uintptr_t OwnerASC = 0x3BC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HoldDuration", 0x370, "FloatProperty"},
            {"InvulnerabilityGiveUpDisplayDelay", 0x374, "FloatProperty"},
            {"InvulnerabilityGameplayTag", 0x378, "StructProperty"},
            {"KeyBindWidget", 0x380, "ObjectProperty"},
            {"DeluluGiveUpInputComponent", 0x3B0, "ObjectProperty"},
            {"OwnerASC", 0x3BC, "WeakObjectProperty"},
        }};
    };

    struct DeluluPostMatchViewModel
    {
        static constexpr std::string_view Name = "DeluluPostMatchViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bMatchWithCurrentPlayers = 0x78;
            static constexpr std::uintptr_t bMatchWithEnabled = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bMatchWithCurrentPlayers", 0x78, "BoolProperty"},
            {"bMatchWithEnabled", 0x79, "BoolProperty"},
        }};
    };

    struct SpectatingGhostViewModel
    {
        static constexpr std::string_view Name = "SpectatingGhostViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
