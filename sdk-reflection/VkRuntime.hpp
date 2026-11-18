#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VkRuntime
{
    struct MetadataPluginContext
    {
        static constexpr std::string_view Name = "MetadataPluginContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefinitionAsset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefinitionAsset", 0x20, "ObjectProperty"},
        }};
    };

    struct ValkyrieBlutilityCookList
    {
        static constexpr std::string_view Name = "ValkyrieBlutilityCookList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Refresh",
        }};
    };

    struct ValkyrieDevelopmentStatus
    {
        static constexpr std::string_view Name = "ValkyrieDevelopmentStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ValkyrieEpicInternalIgnoreList
    {
        static constexpr std::string_view Name = "ValkyrieEpicInternalIgnoreList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EpicInternalIgnoreList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EpicInternalIgnoreList", 0x28, "ArrayProperty"},
        }};
    };

    struct ValkyrieExperimentalDevelopmentStatusIgnoreList
    {
        static constexpr std::string_view Name = "ValkyrieExperimentalDevelopmentStatusIgnoreList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExperimentalDevelopmentStatusIgnoreList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExperimentalDevelopmentStatusIgnoreList", 0x28, "ArrayProperty"},
        }};
    };

    struct ValkyrieGameFeatureAction_RegisterIPProgram
    {
        static constexpr std::string_view Name = "ValkyrieGameFeatureAction_RegisterIPProgram";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Program = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Program", 0x28, "ObjectProperty"},
        }};
    };

    struct ValkyrieGameFeatureAction_RegisterUniverse
    {
        static constexpr std::string_view Name = "ValkyrieGameFeatureAction_RegisterUniverse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Universe = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Universe", 0x28, "ObjectProperty"},
        }};
    };

    struct ValkyrieGameFeatureSetDefinition
    {
        static constexpr std::string_view Name = "ValkyrieGameFeatureSetDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureSet = 0x28;
            static constexpr std::uintptr_t DisplayName = 0x38;
            static constexpr std::uintptr_t Description = 0x48;
            static constexpr std::uintptr_t ContentGuidelinesURL = 0x58;
            static constexpr std::uintptr_t CreationAccessURL = 0x68;
            static constexpr std::uintptr_t BestPracticesURL = 0x78;
            static constexpr std::uintptr_t AllowedTemplates = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GameFeatureSet", 0x28, "StrProperty"},
            {"DisplayName", 0x38, "TextProperty"},
            {"Description", 0x48, "TextProperty"},
            {"ContentGuidelinesURL", 0x58, "StrProperty"},
            {"CreationAccessURL", 0x68, "StrProperty"},
            {"BestPracticesURL", 0x78, "StrProperty"},
            {"AllowedTemplates", 0x88, "SetProperty"},
        }};
    };

    struct ValkyrieGameFeatureSetMetadataSubsystem
    {
        static constexpr std::string_view Name = "ValkyrieGameFeatureSetMetadataSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t MetadataPluginContexts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetadataPluginContexts", 0x48, "MapProperty"},
        }};
    };

    struct ValkyrieProjectUniverseDataSet
    {
        static constexpr std::string_view Name = "ValkyrieProjectUniverseDataSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionNum = 0x0;
            static constexpr std::uintptr_t UniverseName = 0x4;
            static constexpr std::uintptr_t ProgramName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VersionNum", 0x0, "IntProperty"},
            {"UniverseName", 0x4, "NameProperty"},
            {"ProgramName", 0x8, "NameProperty"},
        }};
    };

    struct ValkyrieTemplateCategorization
    {
        static constexpr std::string_view Name = "ValkyrieTemplateCategorization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ValkyrieTemplateCategory
    {
        static constexpr std::string_view Name = "ValkyrieTemplateCategory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryID = 0x0;
            static constexpr std::uintptr_t CategoryName = 0x10;
            static constexpr std::uintptr_t CategoryFilterLabel = 0x20;
            static constexpr std::uintptr_t CategoryImage = 0x30;
            static constexpr std::uintptr_t Priority = 0x50;
            static constexpr std::uintptr_t Sections = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CategoryID", 0x0, "StrProperty"},
            {"CategoryName", 0x10, "TextProperty"},
            {"CategoryFilterLabel", 0x20, "TextProperty"},
            {"CategoryImage", 0x30, "SoftObjectProperty"},
            {"Priority", 0x50, "FloatProperty"},
            {"Sections", 0x58, "ArrayProperty"},
        }};
    };

    struct ValkyrieTemplateCategoryExtension
    {
        static constexpr std::string_view Name = "ValkyrieTemplateCategoryExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalSections = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalSections", 0x0, "ArrayProperty"},
        }};
    };

    struct ValkyrieTemplateSection
    {
        static constexpr std::string_view Name = "ValkyrieTemplateSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionId = 0x0;
            static constexpr std::uintptr_t SectionName = 0x10;
            static constexpr std::uintptr_t Priority = 0x20;
            static constexpr std::uintptr_t InclusionPaths = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SectionId", 0x0, "StrProperty"},
            {"SectionName", 0x10, "TextProperty"},
            {"Priority", 0x20, "FloatProperty"},
            {"InclusionPaths", 0x28, "ArrayProperty"},
        }};
    };

    struct ValkyrieUniverse
    {
        static constexpr std::string_view Name = "ValkyrieUniverse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UniverseName = 0x28;
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t CategoryTags = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UniverseName", 0x28, "NameProperty"},
            {"DisplayName", 0x30, "TextProperty"},
            {"CategoryTags", 0x40, "ArrayProperty"},
        }};
    };

    struct ValkyrieUniverseIPP
    {
        static constexpr std::string_view Name = "ValkyrieUniverseIPP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ProgramName = 0x28;
            static constexpr std::uintptr_t DisplayName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProgramName", 0x28, "NameProperty"},
            {"DisplayName", 0x30, "TextProperty"},
        }};
    };

    struct ValkyrieUniverseMapping
    {
        static constexpr std::string_view Name = "ValkyrieUniverseMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureSet = 0x0;
            static constexpr std::uintptr_t Universe = 0x10;
            static constexpr std::uintptr_t Program = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameFeatureSet", 0x0, "StrProperty"},
            {"Universe", 0x10, "NameProperty"},
            {"Program", 0x14, "NameProperty"},
        }};
    };

    struct ValkyrieUniverseMappingSettings
    {
        static constexpr std::string_view Name = "ValkyrieUniverseMappingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Mappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mappings", 0x28, "ArrayProperty"},
        }};
    };

    struct ValkyrieUniverseSubsystem
    {
        static constexpr std::string_view Name = "ValkyrieUniverseSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Universes = 0x58;
            static constexpr std::uintptr_t Programs = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Universes", 0x58, "MapProperty"},
            {"Programs", 0x68, "MapProperty"},
        }};
    };

}
