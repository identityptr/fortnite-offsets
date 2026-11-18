#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataRegistry
{
    struct DataRegistry
    {
        static constexpr std::string_view Name = "DataRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistryType = 0x28;
            static constexpr std::uintptr_t IdFormat = 0x2C;
            static constexpr std::uintptr_t ItemStruct = 0x30;
            static constexpr std::uintptr_t DataSources = 0x38;
            static constexpr std::uintptr_t RuntimeSources = 0x48;
            static constexpr std::uintptr_t TimerUpdateFrequency = 0x58;
            static constexpr std::uintptr_t DefaultCachePolicy = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RegistryType", 0x28, "NameProperty"},
            {"IdFormat", 0x2C, "StructProperty"},
            {"ItemStruct", 0x30, "ObjectProperty"},
            {"DataSources", 0x38, "ArrayProperty"},
            {"RuntimeSources", 0x48, "ArrayProperty"},
            {"TimerUpdateFrequency", 0x58, "FloatProperty"},
            {"DefaultCachePolicy", 0x5C, "StructProperty"},
        }};
    };

    struct DataRegistryCachePolicy
    {
        static constexpr std::string_view Name = "DataRegistryCachePolicy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCacheIsAlwaysVolatile = 0x0;
            static constexpr std::uintptr_t bUseCurveTableCacheVersion = 0x1;
            static constexpr std::uintptr_t MinNumberKept = 0x4;
            static constexpr std::uintptr_t MaxNumberKept = 0x8;
            static constexpr std::uintptr_t ForceKeepSeconds = 0xC;
            static constexpr std::uintptr_t ForceReleaseSeconds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bCacheIsAlwaysVolatile", 0x0, "BoolProperty"},
            {"bUseCurveTableCacheVersion", 0x1, "BoolProperty"},
            {"MinNumberKept", 0x4, "IntProperty"},
            {"MaxNumberKept", 0x8, "IntProperty"},
            {"ForceKeepSeconds", 0xC, "FloatProperty"},
            {"ForceReleaseSeconds", 0x10, "FloatProperty"},
        }};
    };

    struct DataRegistryId
    {
        static constexpr std::string_view Name = "DataRegistryId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistryType = 0x0;
            static constexpr std::uintptr_t ItemName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RegistryType", 0x0, "StructProperty"},
            {"ItemName", 0x4, "NameProperty"},
        }};
    };

    struct DataRegistryIdFormat
    {
        static constexpr std::string_view Name = "DataRegistryIdFormat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseGameplayTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BaseGameplayTag", 0x0, "StructProperty"},
        }};
    };

    struct DataRegistryLookup
    {
        static constexpr std::string_view Name = "DataRegistryLookup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataRegistryOrTableRow
    {
        static constexpr std::string_view Name = "DataRegistryOrTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDataRegistryId = 0x0;
            static constexpr std::uintptr_t DataTableRow = 0x8;
            static constexpr std::uintptr_t DataRegistryId = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseDataRegistryId", 0x0, "BoolProperty"},
            {"DataTableRow", 0x8, "StructProperty"},
            {"DataRegistryId", 0x18, "StructProperty"},
        }};
    };

    struct DataRegistrySettings
    {
        static constexpr std::string_view Name = "DataRegistrySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectoriesToScan = 0x30;
            static constexpr std::uintptr_t bInitializeAllLoadedRegistries = 0x40;
            static constexpr std::uintptr_t bIgnoreMissingCookedAssetRegistryData = 0x41;
            static constexpr std::uintptr_t bDelayLoadingDataRegistriesUntilPIE = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DirectoriesToScan", 0x30, "ArrayProperty"},
            {"bInitializeAllLoadedRegistries", 0x40, "BoolProperty"},
            {"bIgnoreMissingCookedAssetRegistryData", 0x41, "BoolProperty"},
            {"bDelayLoadingDataRegistriesUntilPIE", 0x42, "BoolProperty"},
        }};
    };

    struct DataRegistrySource
    {
        static constexpr std::string_view Name = "DataRegistrySource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentSource = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParentSource", 0x30, "ObjectProperty"},
        }};
    };

    struct DataRegistrySourceItemId
    {
        static constexpr std::string_view Name = "DataRegistrySourceItemId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataRegistrySource_CurveTable
    {
        static constexpr std::string_view Name = "DataRegistrySource_CurveTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceTable = 0x38;
            static constexpr std::uintptr_t TableRules = 0x58;
            static constexpr std::uintptr_t CachedTable = 0x60;
            static constexpr std::uintptr_t PreloadTable = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceTable", 0x38, "SoftObjectProperty"},
            {"TableRules", 0x58, "StructProperty"},
            {"CachedTable", 0x60, "ObjectProperty"},
            {"PreloadTable", 0x68, "ObjectProperty"},
        }};
    };

    struct DataRegistrySource_DataTable
    {
        static constexpr std::string_view Name = "DataRegistrySource_DataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceTable = 0x38;
            static constexpr std::uintptr_t TableRules = 0x58;
            static constexpr std::uintptr_t CachedTable = 0x60;
            static constexpr std::uintptr_t PreloadTable = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceTable", 0x38, "SoftObjectProperty"},
            {"TableRules", 0x58, "StructProperty"},
            {"CachedTable", 0x60, "ObjectProperty"},
            {"PreloadTable", 0x68, "ObjectProperty"},
        }};
    };

    struct DataRegistrySource_DataTableRules
    {
        static constexpr std::string_view Name = "DataRegistrySource_DataTableRules";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bPrecacheTable = 0x0;
            static constexpr std::uintptr_t CachedTableKeepSeconds = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPrecacheTable", 0x0, "BoolProperty"},
            {"CachedTableKeepSeconds", 0x4, "FloatProperty"},
        }};
    };

    struct DataRegistrySubsystem
    {
        static constexpr std::string_view Name = "DataRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "AcquireItemBP",
            "Conv_DataRegistryIdToString",
            "Conv_DataRegistryTypeToString",
            "EqualEqual_DataRegistryId",
            "EqualEqual_DataRegistryType",
            "EvaluateDataRegistryCurve",
            "FindCachedItemBP",
            "FindCachedItemFromLookupBP",
            "GetCachedItemBP",
            "GetCachedItemFromLookupBP",
            "GetPossibleDataRegistryIdList",
            "IsValidDataRegistryId",
            "IsValidDataRegistryType",
            "NotEqual_DataRegistryId",
            "NotEqual_DataRegistryType",
        }};
    };

    struct DataRegistryType
    {
        static constexpr std::string_view Name = "DataRegistryType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct MetaDataRegistrySource
    {
        static constexpr std::string_view Name = "MetaDataRegistrySource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetUsage = 0x38;
            static constexpr std::uintptr_t SearchRules = 0x40;
            static constexpr std::uintptr_t RuntimeChildren = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AssetUsage", 0x38, "EnumProperty"},
            {"SearchRules", 0x40, "StructProperty"},
            {"RuntimeChildren", 0x90, "MapProperty"},
        }};
    };

    struct MetaDataRegistrySource_CurveTable
    {
        static constexpr std::string_view Name = "MetaDataRegistrySource_CurveTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaDataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatedSource = 0xC8;
            static constexpr std::uintptr_t TableRules = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CreatedSource", 0xC8, "ClassProperty"},
            {"TableRules", 0xD0, "StructProperty"},
        }};
    };

    struct MetaDataRegistrySource_DataTable
    {
        static constexpr std::string_view Name = "MetaDataRegistrySource_DataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaDataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatedSource = 0xC8;
            static constexpr std::uintptr_t TableRules = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CreatedSource", 0xC8, "ClassProperty"},
            {"TableRules", 0xD0, "StructProperty"},
        }};
    };

    struct SoftDataRegistryOrTable
    {
        static constexpr std::string_view Name = "SoftDataRegistryOrTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDataRegistry = 0x0;
            static constexpr std::uintptr_t Table = 0x8;
            static constexpr std::uintptr_t RegistryType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseDataRegistry", 0x0, "BoolProperty"},
            {"Table", 0x8, "SoftObjectProperty"},
            {"RegistryType", 0x28, "StructProperty"},
        }};
    };

}
