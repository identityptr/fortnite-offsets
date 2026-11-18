#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IAX
{
    struct IadClassSeed
    {
        static constexpr std::string_view Name = "IadClassSeed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x0;
            static constexpr std::uintptr_t bIncludeSubclasses = 0x20;
            static constexpr std::uintptr_t bIncludeSeedInIad = 0x21;
            static constexpr std::uintptr_t bInstallBulkWithPackage = 0x22;
            static constexpr std::uintptr_t IncludeDependencyClasses = 0x28;
            static constexpr std::uintptr_t bIncludeDependencyClassSubclasses = 0x38;
            static constexpr std::uintptr_t bAllMountPoints = 0x39;
            static constexpr std::uintptr_t MountPoints = 0x40;
            static constexpr std::uintptr_t ExcludeMountPoints = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Class", 0x0, "SoftClassProperty"},
            {"bIncludeSubclasses", 0x20, "BoolProperty"},
            {"bIncludeSeedInIad", 0x21, "BoolProperty"},
            {"bInstallBulkWithPackage", 0x22, "BoolProperty"},
            {"IncludeDependencyClasses", 0x28, "ArrayProperty"},
            {"bIncludeDependencyClassSubclasses", 0x38, "BoolProperty"},
            {"bAllMountPoints", 0x39, "BoolProperty"},
            {"MountPoints", 0x40, "ArrayProperty"},
            {"ExcludeMountPoints", 0x50, "ArrayProperty"},
        }};
    };

    struct IadQuerySeed
    {
        static constexpr std::string_view Name = "IadQuerySeed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetType = 0x0;
            static constexpr std::uintptr_t bIncludeSubclasses = 0x20;
            static constexpr std::uintptr_t bIncludeSeedInIad = 0x21;
            static constexpr std::uintptr_t bInstallBulkWithPackage = 0x22;
            static constexpr std::uintptr_t IncludeDependencyClasses = 0x28;
            static constexpr std::uintptr_t bIncludeDependencyClassSubclasses = 0x38;
            static constexpr std::uintptr_t SearchPath = 0x40;
            static constexpr std::uintptr_t bRecursive = 0x50;
            static constexpr std::uintptr_t ExcludeMountPoints = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AssetType", 0x0, "SoftClassProperty"},
            {"bIncludeSubclasses", 0x20, "BoolProperty"},
            {"bIncludeSeedInIad", 0x21, "BoolProperty"},
            {"bInstallBulkWithPackage", 0x22, "BoolProperty"},
            {"IncludeDependencyClasses", 0x28, "ArrayProperty"},
            {"bIncludeDependencyClassSubclasses", 0x38, "BoolProperty"},
            {"SearchPath", 0x40, "ArrayProperty"},
            {"bRecursive", 0x50, "BoolProperty"},
            {"ExcludeMountPoints", 0x58, "ArrayProperty"},
        }};
    };

    struct IndividualAssetDownloadSettings
    {
        static constexpr std::string_view Name = "IndividualAssetDownloadSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassSeeds = 0x30;
            static constexpr std::uintptr_t QuerySeeds = 0x40;
            static constexpr std::uintptr_t MountPoints = 0x50;
            static constexpr std::uintptr_t ExcludeMountPoints = 0x60;
            static constexpr std::uintptr_t AssetExceptions = 0x70;
            static constexpr std::uintptr_t ExcludeNameRegex = 0x80;
            static constexpr std::uintptr_t bUseIad = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ClassSeeds", 0x30, "ArrayProperty"},
            {"QuerySeeds", 0x40, "ArrayProperty"},
            {"MountPoints", 0x50, "ArrayProperty"},
            {"ExcludeMountPoints", 0x60, "ArrayProperty"},
            {"AssetExceptions", 0x70, "ArrayProperty"},
            {"ExcludeNameRegex", 0x80, "ArrayProperty"},
            {"bUseIad", 0x90, "BoolProperty"},
        }};
    };

}
