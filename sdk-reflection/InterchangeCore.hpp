#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeCore
{
    struct InterchangeBaseNode
    {
        static constexpr std::string_view Name = "InterchangeBaseNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeBaseNodeContainer
    {
        static constexpr std::string_view Name = "InterchangeBaseNodeContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Nodes = 0x28;
            static constexpr std::uintptr_t SceneNodeToFactoryNodeRegistry = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Nodes", 0x28, "MapProperty"},
            {"SceneNodeToFactoryNodeRegistry", 0x38, "MapProperty"},
        }};
    };

    struct InterchangeFactoryBase
    {
        static constexpr std::string_view Name = "InterchangeFactoryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeFactoryBaseNode
    {
        static constexpr std::string_view Name = "InterchangeFactoryBaseNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangePipelineBase
    {
        static constexpr std::string_view Name = "InterchangePipelineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DestinationName = 0x28;
            static constexpr std::uintptr_t ContentImportPath = 0x38;
            static constexpr std::uintptr_t bAllowPropertyStatesEdition = 0x48;
            static constexpr std::uintptr_t bIsReimportContext = 0x49;
            static constexpr std::uintptr_t bIsShowEssentials = 0x4A;
            static constexpr std::uintptr_t bFromReimportOrOverride = 0x4B;
            static constexpr std::uintptr_t Results = 0x50;
            static constexpr std::uintptr_t PropertiesStates = 0x58;
            static constexpr std::uintptr_t CachePropertiesStates = 0x68;
            static constexpr std::uintptr_t CacheContextParam = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DestinationName", 0x28, "StrProperty"},
            {"ContentImportPath", 0x38, "StrProperty"},
            {"bAllowPropertyStatesEdition", 0x48, "BoolProperty"},
            {"bIsReimportContext", 0x49, "BoolProperty"},
            {"bIsShowEssentials", 0x4A, "BoolProperty"},
            {"bFromReimportOrOverride", 0x4B, "BoolProperty"},
            {"Results", 0x50, "ObjectProperty"},
            {"PropertiesStates", 0x58, "MapProperty"},
            {"CachePropertiesStates", 0x68, "MapProperty"},
            {"CacheContextParam", 0x78, "StructProperty"},
        }};
    };

    struct InterchangeResult
    {
        static constexpr std::string_view Name = "InterchangeResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAssetName = 0x28;
            static constexpr std::uintptr_t DestinationAssetName = 0x38;
            static constexpr std::uintptr_t AssetFriendlyName = 0x48;
            static constexpr std::uintptr_t AssetType = 0x58;
            static constexpr std::uintptr_t InterchangeKey = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceAssetName", 0x28, "StrProperty"},
            {"DestinationAssetName", 0x38, "StrProperty"},
            {"AssetFriendlyName", 0x48, "StrProperty"},
            {"AssetType", 0x58, "ClassProperty"},
            {"InterchangeKey", 0x60, "StrProperty"},
        }};
    };

    struct InterchangeResultDisplay_Generic
    {
        static constexpr std::string_view Name = "InterchangeResultDisplay_Generic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultSuccess";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x70, "TextProperty"},
        }};
    };

    struct InterchangeResultError
    {
        static constexpr std::string_view Name = "InterchangeResultError";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResult";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAssetName = 0x28;
            static constexpr std::uintptr_t DestinationAssetName = 0x38;
            static constexpr std::uintptr_t AssetFriendlyName = 0x48;
            static constexpr std::uintptr_t AssetType = 0x58;
            static constexpr std::uintptr_t InterchangeKey = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceAssetName", 0x28, "StrProperty"},
            {"DestinationAssetName", 0x38, "StrProperty"},
            {"AssetFriendlyName", 0x48, "StrProperty"},
            {"AssetType", 0x58, "ClassProperty"},
            {"InterchangeKey", 0x60, "StrProperty"},
        }};
    };

    struct InterchangeResultError_Generic
    {
        static constexpr std::string_view Name = "InterchangeResultError_Generic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultError";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x70, "TextProperty"},
        }};
    };

    struct InterchangeResultError_ReimportFail
    {
        static constexpr std::string_view Name = "InterchangeResultError_ReimportFail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultError";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAssetName = 0x28;
            static constexpr std::uintptr_t DestinationAssetName = 0x38;
            static constexpr std::uintptr_t AssetFriendlyName = 0x48;
            static constexpr std::uintptr_t AssetType = 0x58;
            static constexpr std::uintptr_t InterchangeKey = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceAssetName", 0x28, "StrProperty"},
            {"DestinationAssetName", 0x38, "StrProperty"},
            {"AssetFriendlyName", 0x48, "StrProperty"},
            {"AssetType", 0x58, "ClassProperty"},
            {"InterchangeKey", 0x60, "StrProperty"},
        }};
    };

    struct InterchangeResultSuccess
    {
        static constexpr std::string_view Name = "InterchangeResultSuccess";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResult";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAssetName = 0x28;
            static constexpr std::uintptr_t DestinationAssetName = 0x38;
            static constexpr std::uintptr_t AssetFriendlyName = 0x48;
            static constexpr std::uintptr_t AssetType = 0x58;
            static constexpr std::uintptr_t InterchangeKey = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceAssetName", 0x28, "StrProperty"},
            {"DestinationAssetName", 0x38, "StrProperty"},
            {"AssetFriendlyName", 0x48, "StrProperty"},
            {"AssetType", 0x58, "ClassProperty"},
            {"InterchangeKey", 0x60, "StrProperty"},
        }};
    };

    struct InterchangeResultWarning
    {
        static constexpr std::string_view Name = "InterchangeResultWarning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResult";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAssetName = 0x28;
            static constexpr std::uintptr_t DestinationAssetName = 0x38;
            static constexpr std::uintptr_t AssetFriendlyName = 0x48;
            static constexpr std::uintptr_t AssetType = 0x58;
            static constexpr std::uintptr_t InterchangeKey = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceAssetName", 0x28, "StrProperty"},
            {"DestinationAssetName", 0x38, "StrProperty"},
            {"AssetFriendlyName", 0x48, "StrProperty"},
            {"AssetType", 0x58, "ClassProperty"},
            {"InterchangeKey", 0x60, "StrProperty"},
        }};
    };

    struct InterchangeResultWarning_Generic
    {
        static constexpr std::string_view Name = "InterchangeResultWarning_Generic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeResultWarning";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x70, "TextProperty"},
        }};
    };

    struct InterchangeResultsContainer
    {
        static constexpr std::string_view Name = "InterchangeResultsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x50, "ArrayProperty"},
        }};
    };

    struct InterchangeSourceData
    {
        static constexpr std::string_view Name = "InterchangeSourceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Filename = 0x28;
            static constexpr std::uintptr_t ContextObjectsByTag = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Filename", 0x28, "StrProperty"},
            {"ContextObjectsByTag", 0x50, "MapProperty"},
        }};
    };

    struct InterchangeSourceNode
    {
        static constexpr std::string_view Name = "InterchangeSourceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTranslatorBase
    {
        static constexpr std::string_view Name = "InterchangeTranslatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeTranslatorSettings
    {
        static constexpr std::string_view Name = "InterchangeTranslatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeUserDefinedAttributesAPI
    {
        static constexpr std::string_view Name = "InterchangeUserDefinedAttributesAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeValueHashInterface
    {
        static constexpr std::string_view Name = "InterchangeValueHashInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeWriterBase
    {
        static constexpr std::string_view Name = "InterchangeWriterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
