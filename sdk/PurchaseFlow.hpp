#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PurchaseFlow
{
    struct PurchaseFlowItem
    {
        static constexpr std::string_view Name = "PurchaseFlowItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
            static constexpr std::uintptr_t EntitlementId = 0x10;
            static constexpr std::uintptr_t ValidationInfo = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemID", 0x0, "StrProperty"},
            {"EntitlementId", 0x10, "StrProperty"},
            {"ValidationInfo", 0x20, "StrProperty"},
        }};
    };

    struct PurchaseFlowJSBridge
    {
        static constexpr std::string_view Name = "PurchaseFlowJSBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetDefaultExternalBrowserID",
            "GetExternalBrowserName",
            "GetExternalBrowserPath",
            "LaunchExternalBrowserUrl",
            "LaunchValidatedExternalBrowserUrl",
            "Receipt",
            "RequestClose",
        }};
    };

    struct PurchaseFlowOffer
    {
        static constexpr std::string_view Name = "PurchaseFlowOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferNamespace = 0x0;
            static constexpr std::uintptr_t OfferId = 0x10;
            static constexpr std::uintptr_t Quantity = 0x20;
            static constexpr std::uintptr_t Items = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OfferNamespace", 0x0, "StrProperty"},
            {"OfferId", 0x10, "StrProperty"},
            {"Quantity", 0x20, "IntProperty"},
            {"Items", 0x28, "ArrayProperty"},
        }};
    };

    struct PurchaseFlowReceiptParam
    {
        static constexpr std::string_view Name = "PurchaseFlowReceiptParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactionId = 0x0;
            static constexpr std::uintptr_t TransactionState = 0x10;
            static constexpr std::uintptr_t Offers = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TransactionId", 0x0, "StrProperty"},
            {"TransactionState", 0x10, "StrProperty"},
            {"Offers", 0x20, "ArrayProperty"},
        }};
    };

}
