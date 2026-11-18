#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WorldMetricsCore
{
    struct WorldMetricCollection
    {
        static constexpr std::string_view Name = "WorldMetricCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Metrics = 0x0;
            static constexpr std::uintptr_t Subsystem = 0x10;
            static constexpr std::uintptr_t bIsEnabled = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Metrics", 0x0, "ArrayProperty"},
            {"Subsystem", 0x10, "WeakObjectProperty"},
            {"bIsEnabled", 0x18, "BoolProperty"},
        }};
    };

    struct WorldMetricInterface
    {
        static constexpr std::string_view Name = "WorldMetricInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldMetricsActorTracker
    {
        static constexpr std::string_view Name = "WorldMetricsActorTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricsExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldMetricsActorTrackerSubscriber
    {
        static constexpr std::string_view Name = "WorldMetricsActorTrackerSubscriber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldMetricsExtension
    {
        static constexpr std::string_view Name = "WorldMetricsExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldMetricsSubsystem
    {
        static constexpr std::string_view Name = "WorldMetricsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Metrics = 0x48;
            static constexpr std::uintptr_t UpdateRateInSeconds = 0x1920;
            static constexpr std::uintptr_t WarmUpFrames = 0x1924;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Metrics", 0x48, "ArrayProperty"},
            {"UpdateRateInSeconds", 0x1920, "FloatProperty"},
            {"WarmUpFrames", 0x1924, "IntProperty"},
        }};
    };

}
