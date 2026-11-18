#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNRedwoodUI
{
    struct FNRedwoodFeedbackInjector
    {
        static constexpr std::string_view Name = "FNRedwoodFeedbackInjector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SocialListEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReportId = 0x1640;
            static constexpr std::uintptr_t ReportInjectCategoryName = 0x1644;
            static constexpr std::uintptr_t ReportOption = 0x1648;
            static constexpr std::uintptr_t ReportOptionSummary = 0x1658;
            static constexpr std::uintptr_t ReportOptionDescription = 0x1668;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ReportId", 0x1640, "NameProperty"},
            {"ReportInjectCategoryName", 0x1644, "NameProperty"},
            {"ReportOption", 0x1648, "TextProperty"},
            {"ReportOptionSummary", 0x1658, "TextProperty"},
            {"ReportOptionDescription", 0x1668, "TextProperty"},
        }};
    };

}
