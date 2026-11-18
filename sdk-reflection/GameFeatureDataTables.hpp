#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameFeatureDataTables
{
    struct GameFeatureAction_GameFeatureDataTables
    {
        static constexpr std::string_view Name = "GameFeatureAction_GameFeatureDataTables";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureDataTableID = 0x28;
            static constexpr std::uintptr_t DataTable = 0x30;
            static constexpr std::uintptr_t bIsParentDataTable = 0x48;
            static constexpr std::uintptr_t bAllowOnDedicatedServers = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameFeatureDataTableID", 0x28, "StructProperty"},
            {"DataTable", 0x30, "StructProperty"},
            {"bIsParentDataTable", 0x48, "BoolProperty"},
            {"bAllowOnDedicatedServers", 0x49, "BoolProperty"},
        }};
    };

    struct GameFeatureDataTablesSubsystem
    {
        static constexpr std::string_view Name = "GameFeatureDataTablesSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DataTableEntryMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataTableEntryMap", 0x30, "MapProperty"},
        }};
    };

}
