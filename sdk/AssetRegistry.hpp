#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AssetRegistry
{
    struct AssetRegistry
    {
        static constexpr std::string_view Name = "AssetRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 28> FunctionNames{{
            "GetAllAssets",
            "GetAllCachedPaths",
            "GetAncestorClassNames",
            "GetAssetByObjectPath",
            "GetAssets",
            "GetAssetsByClass",
            "GetAssetsByPackageName",
            "GetAssetsByPath",
            "GetAssetsByPaths",
            "GetDerivedClassNames",
            "GetInMemoryAssets",
            "GetSubPaths",
            "HasAssets",
            "IsLoadingAssets",
            "IsSearchAllAssets",
            "IsSearchAsync",
            "K2_GetAssetByObjectPath",
            "K2_GetDependencies",
            "K2_GetReferencers",
            "PrioritizeSearchPath",
            "RunAssetsThroughFilter",
            "ScanFilesSynchronous",
            "ScanModifiedAssetFiles",
            "ScanPathsSynchronous",
            "SearchAllAssets",
            "UseFilterToExcludeAssets",
            "WaitForCompletion",
            "WaitForPackage",
        }};
    };

    struct AssetRegistryDependencyOptions
    {
        static constexpr std::string_view Name = "AssetRegistryDependencyOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeSoftPackageReferences = 0x0;
            static constexpr std::uintptr_t bIncludeHardPackageReferences = 0x1;
            static constexpr std::uintptr_t bIncludeGamePackageReferences = 0x2;
            static constexpr std::uintptr_t bIncludeEditorOnlyPackageReferences = 0x3;
            static constexpr std::uintptr_t bIncludeSearchableNames = 0x4;
            static constexpr std::uintptr_t bIncludeSoftManagementReferences = 0x5;
            static constexpr std::uintptr_t bIncludeHardManagementReferences = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIncludeSoftPackageReferences", 0x0, "BoolProperty"},
            {"bIncludeHardPackageReferences", 0x1, "BoolProperty"},
            {"bIncludeGamePackageReferences", 0x2, "BoolProperty"},
            {"bIncludeEditorOnlyPackageReferences", 0x3, "BoolProperty"},
            {"bIncludeSearchableNames", 0x4, "BoolProperty"},
            {"bIncludeSoftManagementReferences", 0x5, "BoolProperty"},
            {"bIncludeHardManagementReferences", 0x6, "BoolProperty"},
        }};
    };

    struct AssetRegistryHelpers
    {
        static constexpr std::string_view Name = "AssetRegistryHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "CreateAssetData",
            "FindAssetNativeClass",
            "GetAsset",
            "GetAssetRegistry",
            "GetBlueprintAssets",
            "GetClass",
            "GetDerivedClassAssetData",
            "GetExportTextName",
            "GetFullName",
            "GetTagValue",
            "IsAssetLoaded",
            "IsRedirector",
            "IsUAsset",
            "IsValid",
            "SetFilterTagsAndValues",
            "SortByAssetName",
            "SortByPredicate",
            "ToSoftObjectPath",
        }};
    };

    struct AssetRegistryImpl
    {
        static constexpr std::string_view Name = "AssetRegistryImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TagAndValue
    {
        static constexpr std::string_view Name = "TagAndValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0x0, "NameProperty"},
            {"Value", 0x8, "StrProperty"},
        }};
    };

}
