#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GizmosFrontendUI
{
    struct GizmosFrontendUISettings
    {
        static constexpr std::string_view Name = "GizmosFrontendUISettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmosTooltipProductTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GizmosTooltipProductTags", 0x28, "StructProperty"},
        }};
    };

    struct GizmosMatchmakingSettingsVM
    {
        static constexpr std::string_view Name = "GizmosMatchmakingSettingsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMatchmakingSettingDiscreteEnumVM";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmoViews = 0xB0;
            static constexpr std::uintptr_t TimeLeft = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GizmoViews", 0xB0, "ArrayProperty"},
            {"TimeLeft", 0xC0, "StructProperty"},
        }};
    };

    struct GizmosTooltipFlowStep
    {
        static constexpr std::string_view Name = "GizmosTooltipFlowStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMenuFlowStep";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundFlowProcessor = 0x40;
            static constexpr std::uintptr_t BoundFlowProcessorSubsystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoundFlowProcessor", 0x40, "WeakObjectProperty"},
            {"BoundFlowProcessorSubsystem", 0x48, "WeakObjectProperty"},
        }};
    };

    struct GizmosTooltipUIDirectorComponent
    {
        static constexpr std::string_view Name = "GizmosTooltipUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmosTooltipScene = 0xC0;
            static constexpr std::uintptr_t GizmosFlowStep = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GizmosTooltipScene", 0xC0, "ObjectProperty"},
            {"GizmosFlowStep", 0xC8, "ObjectProperty"},
        }};
    };

}
