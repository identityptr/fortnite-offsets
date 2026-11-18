#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineFrameworkAnalytics
{
    struct OnlineAnalyticsGameInstanceSubsystem
    {
        static constexpr std::string_view Name = "OnlineAnalyticsGameInstanceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OperationSettings = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OperationSettings", 0x50, "ArrayProperty"},
        }};
    };

    struct OnlineAnalyticsOperationSetting
    {
        static constexpr std::string_view Name = "OnlineAnalyticsOperationSetting";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Rate = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Rate", 0x10, "FloatProperty"},
        }};
    };

}
