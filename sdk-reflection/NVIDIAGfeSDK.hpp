#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NVIDIAGfeSDK
{
    struct GfeSDKCreateInputParams
    {
        static constexpr std::string_view Name = "GfeSDKCreateInputParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AppName = 0x0;
            static constexpr std::uintptr_t RequiredScopes = 0x10;
            static constexpr std::uintptr_t PollForCallbacks = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AppName", 0x0, "StrProperty"},
            {"RequiredScopes", 0x10, "ArrayProperty"},
            {"PollForCallbacks", 0x20, "BoolProperty"},
        }};
    };

    struct GfeSDKCreateResponse
    {
        static constexpr std::string_view Name = "GfeSDKCreateResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionMajor = 0x0;
            static constexpr std::uintptr_t VersionMinor = 0x2;
            static constexpr std::uintptr_t NVIDIAGfeVersion = 0x8;
            static constexpr std::uintptr_t ScopePermissions = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VersionMajor", 0x0, "UInt16Property"},
            {"VersionMinor", 0x2, "UInt16Property"},
            {"NVIDIAGfeVersion", 0x8, "StrProperty"},
            {"ScopePermissions", 0x18, "MapProperty"},
        }};
    };

    struct GfeSDKHighlightCloseGroupParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightCloseGroupParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t DestroyHighlights = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupID", 0x0, "StrProperty"},
            {"DestroyHighlights", 0x10, "BoolProperty"},
        }};
    };

    struct GfeSDKHighlightConfigParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightConfigParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HighlightDefinitions = 0x0;
            static constexpr std::uintptr_t DefaultLocale = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HighlightDefinitions", 0x0, "ArrayProperty"},
            {"DefaultLocale", 0x10, "StrProperty"},
        }};
    };

    struct GfeSDKHighlightDefinition
    {
        static constexpr std::string_view Name = "GfeSDKHighlightDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t UserDefaultInterest = 0x10;
            static constexpr std::uintptr_t HighlightTags = 0x11;
            static constexpr std::uintptr_t Significance = 0x12;
            static constexpr std::uintptr_t NameTranslationTable = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ID", 0x0, "StrProperty"},
            {"UserDefaultInterest", 0x10, "BoolProperty"},
            {"HighlightTags", 0x11, "EnumProperty"},
            {"Significance", 0x12, "EnumProperty"},
            {"NameTranslationTable", 0x18, "MapProperty"},
        }};
    };

    struct GfeSDKHighlightGroupView
    {
        static constexpr std::string_view Name = "GfeSDKHighlightGroupView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t TagsFilter = 0x10;
            static constexpr std::uintptr_t SignificanceFilter = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GroupID", 0x0, "StrProperty"},
            {"TagsFilter", 0x10, "EnumProperty"},
            {"SignificanceFilter", 0x11, "EnumProperty"},
        }};
    };

    struct GfeSDKHighlightOpenGroupParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightOpenGroupParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t GroupDescriptionTranslationTable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupID", 0x0, "StrProperty"},
            {"GroupDescriptionTranslationTable", 0x10, "MapProperty"},
        }};
    };

    struct GfeSDKHighlightScreenshotParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightScreenshotParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t HighlightId = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GroupID", 0x0, "StrProperty"},
            {"HighlightId", 0x10, "StrProperty"},
        }};
    };

    struct GfeSDKHighlightSummaryParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightSummaryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupViews = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupViews", 0x0, "ArrayProperty"},
        }};
    };

    struct GfeSDKHighlightVideoParams
    {
        static constexpr std::string_view Name = "GfeSDKHighlightVideoParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t HighlightId = 0x10;
            static constexpr std::uintptr_t StartDelta = 0x20;
            static constexpr std::uintptr_t EndDelta = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GroupID", 0x0, "StrProperty"},
            {"HighlightId", 0x10, "StrProperty"},
            {"StartDelta", 0x20, "IntProperty"},
            {"EndDelta", 0x24, "IntProperty"},
        }};
    };

    struct GfeSDKPermissionsChangedData
    {
        static constexpr std::string_view Name = "GfeSDKPermissionsChangedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScopePermissions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScopePermissions", 0x0, "MapProperty"},
        }};
    };

    struct GfeSDKRequestPermissionsParams
    {
        static constexpr std::string_view Name = "GfeSDKRequestPermissionsParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Scopes = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scopes", 0x0, "ArrayProperty"},
        }};
    };

}
