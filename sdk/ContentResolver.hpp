#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ContentResolver
{
    struct ExternalContentLoader
    {
        static constexpr std::string_view Name = "ExternalContentLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PluginBatchLoaderHelper
    {
        static constexpr std::string_view Name = "PluginBatchLoaderHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
