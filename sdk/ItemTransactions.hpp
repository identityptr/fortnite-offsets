#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemTransactions
{
    struct ItemTransactionComponent
    {
        static constexpr std::string_view Name = "ItemTransactionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransactionComplete = 0xC0;
            static constexpr std::uintptr_t TransactionData = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTransactionComplete", 0xC0, "MulticastInlineDelegateProperty"},
            {"TransactionData", 0xD0, "StructProperty"},
        }};
    };

    struct TransactionBlueprintLibrary
    {
        static constexpr std::string_view Name = "TransactionBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
