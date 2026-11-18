#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AutomationControllerRpc
{
    struct AutomationControllerRpcRegistrationComponent
    {
        static constexpr std::string_view Name = "AutomationControllerRpcRegistrationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExternalRpcRegistrationComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
