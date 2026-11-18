#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineSubsystemMcp
{
    struct IARCLocaleMappingUtil
    {
        static constexpr std::string_view Name = "IARCLocaleMappingUtil";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LocaleMappings = 0x28;
            static constexpr std::uintptr_t DefaultLocale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocaleMappings", 0x28, "ArrayProperty"},
            {"DefaultLocale", 0x38, "StrProperty"},
        }};
    };

    struct JsonToxicityBulkEvaluationRequest
    {
        static constexpr std::string_view Name = "JsonToxicityBulkEvaluationRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Names = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Names", 0x0, "ArrayProperty"},
        }};
    };

    struct JsonToxicityBulkEvaluationRequestLegacy
    {
        static constexpr std::string_view Name = "JsonToxicityBulkEvaluationRequestLegacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t texts = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"texts", 0x0, "ArrayProperty"},
        }};
    };

    struct JsonToxicityBulkEvaluationResponse
    {
        static constexpr std::string_view Name = "JsonToxicityBulkEvaluationResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t isToxic = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"isToxic", 0x0, "ArrayProperty"},
        }};
    };

    struct JsonToxicityEvaluationRequest
    {
        static constexpr std::string_view Name = "JsonToxicityEvaluationRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "StrProperty"},
        }};
    };

    struct JsonToxicityEvaluationRequestLegacy
    {
        static constexpr std::string_view Name = "JsonToxicityEvaluationRequestLegacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x0, "StrProperty"},
        }};
    };

    struct JsonToxicityEvaluationResponse
    {
        static constexpr std::string_view Name = "JsonToxicityEvaluationResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t toxic = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"toxic", 0x0, "BoolProperty"},
        }};
    };

    struct OnlineDiscoveryModeSetDef
    {
        static constexpr std::string_view Name = "OnlineDiscoveryModeSetDef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeSetId = 0x0;
            static constexpr std::uintptr_t SubModeLinkType = 0x18;
            static constexpr std::uintptr_t SubModeLinkIds = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModeSetId", 0x0, "StructProperty"},
            {"SubModeLinkType", 0x18, "StrProperty"},
            {"SubModeLinkIds", 0x28, "ArrayProperty"},
        }};
    };

    struct OnlineDiscoverySurfaceDevelopmentLinkCodes
    {
        static constexpr std::string_view Name = "OnlineDiscoverySurfaceDevelopmentLinkCodes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceName = 0x0;
            static constexpr std::uintptr_t DevelopmentLinkCodes = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurfaceName", 0x0, "NameProperty"},
            {"DevelopmentLinkCodes", 0x8, "ArrayProperty"},
        }};
    };

    struct OnlineDiscoverySurfaceIdentifier
    {
        static constexpr std::string_view Name = "OnlineDiscoverySurfaceIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceName = 0x0;
            static constexpr std::uintptr_t PagePlayerId = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurfaceName", 0x0, "NameProperty"},
            {"PagePlayerId", 0x8, "StrProperty"},
        }};
    };

    struct OnlineIARCLocaleMapping
    {
        static constexpr std::string_view Name = "OnlineIARCLocaleMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LanguageId = 0x0;
            static constexpr std::uintptr_t IARCLocaleId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LanguageId", 0x0, "StrProperty"},
            {"IARCLocaleId", 0x10, "StrProperty"},
        }};
    };

    struct OnlineISOConversionUtil
    {
        static constexpr std::string_view Name = "OnlineISOConversionUtil";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Languages = 0x28;
            static constexpr std::uintptr_t Regions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Languages", 0x28, "ArrayProperty"},
            {"Regions", 0x38, "ArrayProperty"},
        }};
    };

    struct OnlineISOLanguageInfo
    {
        static constexpr std::string_view Name = "OnlineISOLanguageInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t LanguageId = 0x10;
            static constexpr std::uintptr_t BackendId = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"LanguageId", 0x10, "StrProperty"},
            {"BackendId", 0x20, "StrProperty"},
        }};
    };

    struct OnlineISORegionInfo
    {
        static constexpr std::string_view Name = "OnlineISORegionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t RegionId = 0x10;
            static constexpr std::uintptr_t BackendId = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"RegionId", 0x10, "StrProperty"},
            {"BackendId", 0x20, "StrProperty"},
        }};
    };

    struct SurfaceHydrationData
    {
        static constexpr std::string_view Name = "SurfaceHydrationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LastIndexHydrated = 0x0;
            static constexpr std::uintptr_t bUsingLazyLoad = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LastIndexHydrated", 0x0, "IntProperty"},
            {"bUsingLazyLoad", 0x4, "BoolProperty"},
        }};
    };

}
