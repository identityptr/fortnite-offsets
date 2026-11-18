#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicGameplayStatsRuntime
{
    struct BlueprintGameplayStatsLibrary
    {
        static constexpr std::string_view Name = "BlueprintGameplayStatsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "EqualEqual_GameplayStatTagGameplayStatTag",
            "NotEqual_GameplayStatTagGameplayStatTag",
        }};
    };

    struct GameplayStatMetadataTableRow
    {
        static constexpr std::string_view Name = "GameplayStatMetadataTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackendName = 0x8;
            static constexpr std::uintptr_t DisplayName = 0x18;
            static constexpr std::uintptr_t Windows = 0x28;
            static constexpr std::uintptr_t Metric = 0x38;
            static constexpr std::uintptr_t DataType = 0x39;
            static constexpr std::uintptr_t bPublish = 0x3A;
            static constexpr std::uintptr_t WeeklyRefreshInterval = 0x3C;
            static constexpr std::uintptr_t bExportToBackEnd = 0x40;
            static constexpr std::uintptr_t bShowInFrontEnd = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"BackendName", 0x8, "StrProperty"},
            {"DisplayName", 0x18, "TextProperty"},
            {"Windows", 0x28, "ArrayProperty"},
            {"Metric", 0x38, "EnumProperty"},
            {"DataType", 0x39, "EnumProperty"},
            {"bPublish", 0x3A, "BoolProperty"},
            {"WeeklyRefreshInterval", 0x3C, "IntProperty"},
            {"bExportToBackEnd", 0x40, "BoolProperty"},
            {"bShowInFrontEnd", 0x41, "BoolProperty"},
        }};
    };

    struct GameplayStatTag
    {
        static constexpr std::string_view Name = "GameplayStatTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tag", 0x4, "StructProperty"},
        }};
    };

    struct GameplayTagTableManager
    {
        static constexpr std::string_view Name = "GameplayTagTableManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Tables = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tables", 0x28, "ArrayProperty"},
        }};
    };

    struct ManagedGameplayTagDataTableItem
    {
        static constexpr std::string_view Name = "ManagedGameplayTagDataTableItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootTag = 0x0;
            static constexpr std::uintptr_t DataTable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootTag", 0x0, "StructProperty"},
            {"DataTable", 0x8, "ObjectProperty"},
        }};
    };

    struct TagTableManagerHelper
    {
        static constexpr std::string_view Name = "TagTableManagerHelper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
