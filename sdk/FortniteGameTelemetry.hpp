#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteGameTelemetry
{
    struct PackageReadsTelemetryConfig
    {
        static constexpr std::string_view Name = "PackageReadsTelemetryConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetCollectionEnabled = 0x0;
            static constexpr std::uintptr_t SampleSize = 0x4;
            static constexpr std::uintptr_t MaxExpectedReads = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AssetCollectionEnabled", 0x0, "BoolProperty"},
            {"SampleSize", 0x4, "IntProperty"},
            {"MaxExpectedReads", 0x8, "IntProperty"},
        }};
    };

}
