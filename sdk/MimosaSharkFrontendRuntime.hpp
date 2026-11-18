#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MimosaSharkFrontendRuntime
{
    struct MimosaSharkFrontendViewModel
    {
        static constexpr std::string_view Name = "MimosaSharkFrontendViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestTemplateId = 0x78;
            static constexpr std::uintptr_t QuestProgress = 0x88;
            static constexpr std::uintptr_t CurrentProductTag = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestTemplateId", 0x78, "StrProperty"},
            {"QuestProgress", 0x88, "StructProperty"},
            {"CurrentProductTag", 0xA0, "StructProperty"},
        }};
    };

    struct MimosaSharkLobbyDetailsUIDirector
    {
        static constexpr std::string_view Name = "MimosaSharkLobbyDetailsUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidProductIslands = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidProductIslands", 0x2A8, "StructProperty"},
        }};
    };

}
