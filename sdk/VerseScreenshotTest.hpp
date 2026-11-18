#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseScreenshotTest
{
    struct VerseScreenshotTestRequestComponent
    {
        static constexpr std::string_view Name = "VerseScreenshotTestRequestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScreenshotTestRequestDetails = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScreenshotTestRequestDetails", 0xC0, "StructProperty"},
        }};
    };

}
