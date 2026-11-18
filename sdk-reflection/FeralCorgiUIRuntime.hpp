#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FeralCorgiUIRuntime
{
    struct FeralCorgiPurchaseModal
    {
        static constexpr std::string_view Name = "FeralCorgiPurchaseModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IntroModalInputComp = 0x4A8;
            static constexpr std::uintptr_t AcceptActionBinding = 0x4B0;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IntroModalInputComp", 0x4A8, "ObjectProperty"},
            {"AcceptActionBinding", 0x4B0, "StructProperty"},
            {"PrimaryContentSetup", 0x4C0, "StructProperty"},
        }};
    };

}
