#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SceneCaptureToolset
{
    struct SceneCaptureDiagnosticsSkill
    {
        static constexpr std::string_view Name = "SceneCaptureDiagnosticsSkill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AgentSkill";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t Instructions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Description", 0x28, "StrProperty"},
            {"Instructions", 0x38, "StrProperty"},
        }};
    };

    struct SceneCaptureToolset
    {
        static constexpr std::string_view Name = "SceneCaptureToolset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolsetDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
