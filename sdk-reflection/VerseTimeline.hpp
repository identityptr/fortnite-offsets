#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseTimeline
{
    struct VerseTimelineBase
    {
        static constexpr std::string_view Name = "VerseTimelineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x28;
            static constexpr std::uintptr_t NumSpans = 0x48;
            static constexpr std::uintptr_t NumPoints = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Elements", 0x28, "SetProperty"},
            {"NumSpans", 0x48, "IntProperty"},
            {"NumPoints", 0x4C, "IntProperty"},
        }};
    };

    struct VerseTimelineElementBase
    {
        static constexpr std::string_view Name = "VerseTimelineElementBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x28, "ObjectProperty"},
        }};
    };

}
