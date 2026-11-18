#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnalyticsBlueprintLibrary
{
    struct AnalyticsBlueprintLibrary
    {
        static constexpr std::string_view Name = "AnalyticsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 29> FunctionNames{{
            "EndSession",
            "FlushEvents",
            "GetSessionId",
            "GetUserId",
            "MakeEventAttribute",
            "RecordCurrencyGiven",
            "RecordCurrencyGivenWithAttributes",
            "RecordCurrencyPurchase",
            "RecordError",
            "RecordErrorWithAttributes",
            "RecordEvent",
            "RecordEventWithAttribute",
            "RecordEventWithAttributes",
            "RecordItemPurchase",
            "RecordProgress",
            "RecordProgressWithAttributes",
            "RecordProgressWithFullHierarchyAndAttributes",
            "RecordSimpleCurrencyPurchase",
            "RecordSimpleCurrencyPurchaseWithAttributes",
            "RecordSimpleItemPurchase",
            "RecordSimpleItemPurchaseWithAttributes",
            "SetAge",
            "SetBuildInfo",
            "SetGender",
            "SetLocation",
            "SetSessionId",
            "SetUserId",
            "StartSession",
            "StartSessionWithAttributes",
        }};
    };

    struct AnalyticsEventAttr
    {
        static constexpr std::string_view Name = "AnalyticsEventAttr";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

}
