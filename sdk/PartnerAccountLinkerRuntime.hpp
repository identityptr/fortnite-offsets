#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PartnerAccountLinkerRuntime
{
    struct PartnerAccountLinkComponent
    {
        static constexpr std::string_view Name = "PartnerAccountLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAccountLinkStatus = 0xC0;
            static constexpr std::uintptr_t OnFailed = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnAccountLinkStatus", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

}
