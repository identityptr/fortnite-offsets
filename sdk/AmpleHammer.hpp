#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AmpleHammer
{
    struct AmpleHammerPINModalHelper
    {
        static constexpr std::string_view Name = "AmpleHammerPINModalHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
            static constexpr std::uintptr_t InfoTitle = 0x38;
            static constexpr std::uintptr_t InfoDescription = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Description", 0x28, "TextProperty"},
            {"InfoTitle", 0x38, "TextProperty"},
            {"InfoDescription", 0x48, "TextProperty"},
        }};
    };

    struct AmpleHammerRequestConsentHelper
    {
        static constexpr std::string_view Name = "AmpleHammerRequestConsentHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
