#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::XeSSPlugin
{
    struct XeSSSettings
    {
        static constexpr std::string_view Name = "XeSSSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableXeSSInEditorViewports = 0x30;
            static constexpr std::uintptr_t DebugDataDumpPath = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnableXeSSInEditorViewports", 0x30, "BoolProperty"},
            {"DebugDataDumpPath", 0x38, "StrProperty"},
        }};
    };

}
