#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ResonanceChatCompletion
{
    struct ResonanceChatCompleter
    {
        static constexpr std::string_view Name = "ResonanceChatCompleter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChatCompleter";
        struct Offsets
        {
            static constexpr std::uintptr_t ResonanceConfigurationId = 0x88;
            static constexpr std::uintptr_t StartSessionTimeoutSeconds = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ResonanceConfigurationId", 0x88, "StrProperty"},
            {"StartSessionTimeoutSeconds", 0xD4, "FloatProperty"},
        }};
    };

}
