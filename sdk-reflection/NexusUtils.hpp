#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NexusUtils
{
    struct ExecConsoleCommandOnClientActor
    {
        static constexpr std::string_view Name = "ExecConsoleCommandOnClientActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleCommand = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConsoleCommand", 0x278, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_ConsoleCommand",
        }};
    };

    struct ScreenshotActor
    {
        static constexpr std::string_view Name = "ScreenshotActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ScreenshotName = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScreenshotName", 0x278, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_ScreenshotName",
        }};
    };

}
