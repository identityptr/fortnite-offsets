#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HLTv2ToCustomizableUIMigrationDataRuntime
{
    struct GameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistriesToAdd = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegistriesToAdd", 0x30, "SetProperty"},
        }};
    };

    struct HLTv2MigrationDataProvider
    {
        static constexpr std::string_view Name = "HLTv2MigrationDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
