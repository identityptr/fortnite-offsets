#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNFeelingsRuntime
{
    struct FNFeelingsComponent
    {
        static constexpr std::string_view Name = "FNFeelingsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0xC8;
            static constexpr std::uintptr_t OnFNFeelingsMainFeelingChangedDelegate = 0x210;
            static constexpr std::uintptr_t RuntimeData = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Configuration", 0xC8, "StructProperty"},
            {"OnFNFeelingsMainFeelingChangedDelegate", 0x210, "MulticastInlineDelegateProperty"},
            {"RuntimeData", 0x238, "StructProperty"},
        }};
    };

}
