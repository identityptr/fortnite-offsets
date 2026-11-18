#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HazelnutSpreadUI
{
    struct HazelnutSpreadDuelVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadDuelVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrencyDelta = 0x78;
            static constexpr std::uintptr_t LocalPlayerState = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrencyDelta", 0x78, "IntProperty"},
            {"LocalPlayerState", 0xEC, "WeakObjectProperty"},
        }};
    };

    struct HazelnutSpreadLocalPlayerVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadLocalPlayerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadParticipantVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantPlayerState = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipantPlayerState", 0x78, "WeakObjectProperty"},
        }};
    };

    struct HazelnutSpreadParticipantVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadParticipantVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantPlayerState = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipantPlayerState", 0x78, "WeakObjectProperty"},
        }};
    };

    struct HazelnutSpreadPrimaryHunterVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadPrimaryHunterVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadParticipantVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantPlayerState = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipantPlayerState", 0x78, "WeakObjectProperty"},
        }};
    };

    struct HazelnutSpreadTargetVM
    {
        static constexpr std::string_view Name = "HazelnutSpreadTargetVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HazelnutSpreadParticipantVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantPlayerState = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParticipantPlayerState", 0x78, "WeakObjectProperty"},
        }};
    };

}
