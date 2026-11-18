#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineFrameworkUsabilityExperiment
{
    struct UsabilityExperimentNameHotfix
    {
        static constexpr std::string_view Name = "UsabilityExperimentNameHotfix";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Override = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Override", 0x10, "StrProperty"},
        }};
    };

    struct UsabilityExperimentSubsystem
    {
        static constexpr std::string_view Name = "UsabilityExperimentSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t FeatureGateNameHotfixes = 0x30;
            static constexpr std::uintptr_t DynamicConfigNameHotfixes = 0x40;
            static constexpr std::uintptr_t ExperimentNameHotfixes = 0x50;
            static constexpr std::uintptr_t LayerNameHotfixes = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FeatureGateNameHotfixes", 0x30, "ArrayProperty"},
            {"DynamicConfigNameHotfixes", 0x40, "ArrayProperty"},
            {"ExperimentNameHotfixes", 0x50, "ArrayProperty"},
            {"LayerNameHotfixes", 0x60, "ArrayProperty"},
        }};
    };

}
